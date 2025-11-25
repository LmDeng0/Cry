#!/usr/bin/env python3
import argparse
import os
import shutil
import subprocess
import sys

ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), ".."))


# ----------------- 通用子进程封装：一次性跑完即可 ----------------- #
def sh(cmd, cwd=ROOT, log=None, check=True):
    """简单封装：跑完才返回，用在 sbt / verilator / vivado 等命令上。"""
    print(f"[RUN] {' '.join(cmd)}")
    p = subprocess.run(
        cmd,
        cwd=cwd,
        stdout=subprocess.PIPE,
        stderr=subprocess.STDOUT,
        text=True,
    )

    if log:
        os.makedirs(os.path.dirname(log), exist_ok=True)
        with open(log, "w", encoding="utf-8") as f:
            f.write(p.stdout)
    else:
        print(p.stdout)

    if check and p.returncode != 0:
        print(f"[ERR] command failed, see log: {log or 'stdout'}")
        sys.exit(p.returncode)
    return p


# ----------------- sbt 专用封装：batch 模式、禁用 supershell ----------------- #
def sbt_cmd(command_str: str, log=None, check=True):
    """
    这里一定要把命令拆成一个 list：
      ["sbt", "--batch", <options...>, "test"]
    不能写成 ["sbt --batch ... test"] 否则会被当成一个可执行文件名。
    """
    base = [
        "sbt",
        "--batch",
        "-Dsbt.supershell=false",
        "-Dtest.logBuffered=false",
        "-Dtest.parallel=false",
    ]
    # command_str 例如: "test" 或 "clean test"
    extra = command_str.split()
    cmd = base + extra
    return sh(cmd, log=log, check=check)


# ----------------- 主流程 ----------------- #
def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--algo", default="aes128", choices=["aes128"])
    ap.add_argument("--mode", default="unpiped", choices=["unpiped", "piped"])
    ap.add_argument("--spec", default="spec/aes_spec.txt")
    ap.add_argument("--plan", default="spec/aes128_auto.yaml")
    ap.add_argument("--emit_out", default=None)
    args = ap.parse_args()

    emit_out = (
        args.emit_out
        or (f"out/{args.algo}" if args.mode == "unpiped" else f"out/{args.algo}_piped")
    )
    os.makedirs("io", exist_ok=True)

    # 是否启用 LLM 生成 plan（通过环境变量控制）
    use_llm_env = os.getenv("CRYPTO_LLM_USE_PLAN", "0").lower()
    use_llm = use_llm_env not in ("", "0", "false", "no")
    print(f"[CFG] use_llm_for_plan = {use_llm} (CRYPTO_LLM_USE_PLAN={use_llm_env})")

    # 1) 由自然语言规范生成 plan（可以走模板 / LLM）
    plan_cmd = [
        "python",
        "generator/plan_from_text.py",
        "--spec_txt",
        args.spec,
        "--out",
        args.plan,
    ]
    if use_llm:
        plan_cmd.append("--use_llm")
    sh(plan_cmd, log="io/plan_from_text.log")

    # 2) 校验 plan
    sh(
        ["python", "generator/plan_validate.py", args.plan],
        log="io/plan_validate.log",
    )

    # 3) 代码生成
    if os.path.exists("generator/codegen_from_plan.py"):
        # 这里 out 指向一个临时目录，真正的核心 AES 文件我们是手写/维护的
        auto_out = os.path.abspath(
            os.path.join(ROOT, f"_autogen_{os.urandom(4).hex()}", "scala_out")
        )
        sh(
            [
                "python",
                "generator/codegen_from_plan.py",
                "--plan",
                args.plan,
                "--out",
                auto_out,
            ],
            log="io/codegen.log",
            check=False,  # 没有模板时允许失败，只是 demo
        )

    # 4) Scala 单元测试（包括 KAT / handshake / pass-through）
    sbt_cmd("test", log="io/sbt_test.log")

    # 5) 导出 Verilog
    # 5) 导出 Verilog
    # 注意：sbt 的 command 要放到同一个参数里，等价于：
    #   sbt "runMain crypto.gen.Emit"          (unpiped)
    #   sbt "runMain crypto.gen.Emit 128 piped" (piped)
    if args.mode == "unpiped":
        emit_cmd = [
            "sbt",
            "--batch",
            "-Dsbt.supershell=false",
            "runMain crypto.gen.Emit",
        ]
    else:
        emit_cmd = [
            "sbt",
            "--batch",
            "-Dsbt.supershell=false",
            "runMain crypto.gen.Emit 128 piped",
        ]

    sh(emit_cmd, log="io/emit.log")

    # 6) Verilator 仿真
    vpath = f"{emit_out}/Aes128Core.v"
    if not os.path.exists(vpath):
        print(f"[WARN] {vpath} not found, check Emit log at io/emit.log")
        sys.exit(2)

    sh(
        ["verilator", "-cc", vpath, "--exe", "sim/aes128_tb.cpp", "-O3"],
        log="io/verilator_cc.log",
    )
    sh(
        ["make", "-C", "obj_dir", "-f", "VAes128Core.mk", "VAes128Core"],
        log="io/verilator_make.log",
    )
    sh(["./obj_dir/VAes128Core"], log="io/verilator_run.log")

    # 7) Vivado 快速综合（可选）
    if shutil.which("vivado"):
        tcl = (
            "scripts/synth_aes128.tcl"
            if args.mode == "unpiped"
            else "scripts/synth_aes128_piped.tcl"
        )
        if os.path.exists(tcl):
            sh(
                ["vivado", "-mode", "batch", "-source", tcl],
                log=f"io/vivado_{args.mode}.log",
                check=False,
            )
        else:
            print(f"[INFO] Vivado tcl {tcl} not found, skip synthesis.")

    print(f"[OK] Pipeline finished. Artifacts in {emit_out} ; logs in io/")


if __name__ == "__main__":
    main()
