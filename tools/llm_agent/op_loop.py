#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Generic operator-level Generate → Compile → Test → Repair loop
with OPTIONAL data collection for CryptoChisel-LLM.

Usage example (from project root):

  python3 -m tools.llm_agent.op_loop --op SubBytes --max-iters 5

约定：
  - 对应的 YAML spec 放在：spec/operators/<op>.yaml
    例如：SubBytes → spec/operators/subbytes.yaml
  - YAML 结构大致为：
      version: 0.1
      operator:
        name: SubBytes
        module_name: SubBytesLLMAuto
        package: crypto.aes.llm.auto
        ...
      llm:
        extra_imports:
          - crypto.aes.AesSBoxConst
        implementation_hint: | ...
      test:
        test_cmd: "testOnly"
        suite_name: "crypto.aes.llm.auto.SubBytesAutoSpec"

  - LLM 调用统一通过 tools.llm_client.client
"""

import argparse
import os
import sys
import textwrap
import subprocess
import re
import json
from datetime import datetime
from pathlib import Path
from typing import Tuple, Optional

import yaml

from tools.llm_client import client


# ----------------------------------------------------------------------
# 基础工具函数
# ----------------------------------------------------------------------


def project_root() -> Path:
    """
    返回项目根目录：即包含 build.sbt 的目录。
    当前文件路径为：tools/llm_agent/op_loop.py
    所以根目录是 op_loop.py 的上两层。
    """
    return Path(__file__).resolve().parents[2]


def load_operator_spec(op_name: str, spec_dir: Path) -> dict:
    """
    根据算子名加载 YAML spec：
      spec_dir / f"{op_name.lower()}.yaml"
    """
    fname = op_name.lower() + ".yaml"
    path = spec_dir / fname
    if not path.exists():
        print(f"[op_loop] ERROR: Spec file not found: {path}", file=sys.stderr)
        sys.exit(1)

    with open(path, "r", encoding="utf-8") as f:
        spec = yaml.safe_load(f) or {}

    print(f"[op_loop] Loaded spec for operator: {op_name}")
    return spec


def shorten_log(log: str, max_lines: int = 80) -> str:
    """
    为了避免 LLM 上下文过长，把 sbt 日志截断为最后 max_lines 行。
    同时也用于写入数据集时只保存尾部，控制文件大小。
    """
    lines = log.splitlines()
    if len(lines) <= max_lines:
        return log
    tail = "\n".join(lines[-max_lines:])
    return (
        "[truncated sbt log: showing last "
        f"{max_lines} lines]\n...\n" + tail
    )


# ----------------------------------------------------------------------
# 数据集目录 & 追踪记录
# ----------------------------------------------------------------------


def get_dataset_dir(root: Path, op_name: str) -> Path:
    """
    针对每个算子，建立独立的数据目录，例如：

      datasets/op_level/subbytes/

    方便后续做 per-operator 的微调或分析。
    """
    ds_dir = root / "datasets" / "op_level" / op_name.lower()
    ds_dir.mkdir(parents=True, exist_ok=True)
    return ds_dir


def append_trace_record(
    dataset_dir: Path,
    *,
    op_name: str,
    package: str,
    module_name: str,
    iteration: int,
    mode: str,
    system_prompt: str,
    user_prompt: str,
    raw_response: str,
    scala_code: str,
    test_cmd: str,
    suite_name: str,
    test_ok: bool,
    sbt_log: str,
) -> None:
    """
    将本次迭代的全部信息记录到 JSONL 文件中：
      datasets/op_level/<op>/op_trace.jsonl

    一条记录大致结构：

      {
        "meta": {...},
        "operator": {...},
        "llm": {...},
        "prompts": {...},
        "response": {...},
        "compile_test": {...}
      }
    """
    trace_path = dataset_dir / "op_trace.jsonl"

    # 当前 LLM 配置信息（从环境变量获得）
    llm_backend = os.environ.get("CRYPTO_LLM_BACKEND", "http")
    llm_model = os.environ.get("CRYPTO_LLM_MODEL", "UNKNOWN")

    record = {
        "meta": {
            "timestamp_utc": datetime.utcnow().isoformat(timespec="seconds") + "Z",
            "iteration": iteration,
            "mode": mode,  # "initial" or "repair"
        },
        "operator": {
            "name": op_name,
            "package": package,
            "module_name": module_name,
        },
        "llm": {
            "backend": llm_backend,
            "model": llm_model,
        },
        "prompts": {
            "system": system_prompt,
            "user": user_prompt,
        },
        "response": {
            "raw": raw_response,
            "scala_extracted": scala_code,
        },
        "compile_test": {
            "test_cmd": test_cmd,
            "suite_name": suite_name,
            "ok": test_ok,
            # 为了防止文件爆炸，只保存 tail
            "sbt_log_tail": shorten_log(sbt_log or "", max_lines=120),
        },
    }

    with trace_path.open("a", encoding="utf-8") as f:
        f.write(json.dumps(record, ensure_ascii=False) + "\n")


# ----------------------------------------------------------------------
# sbt 调用 + 只关心目标 suite 是否失败
# ----------------------------------------------------------------------


def run_sbt_tests(test_cmd: str, target_suite: str, workdir: Path) -> Tuple[bool, str]:
    """
    运行 sbt 测试，并且只关心 target_suite（例如 "crypto.aes.llm.auto.SubBytesAutoSpec"）
    的结果。

    返回:
      (success_for_target_suite, full_log)

    我们刻意模拟命令行形式：
      sbt "testOnly crypto.aes.llm.auto.SubBytesAutoSpec"
    即把 test_cmd + suite_name 作为一个整体参数传给 sbt：
      cmd = ["sbt", "testOnly crypto.aes.llm.auto.SubBytesAutoSpec"]
    """
    sbt_arg = f"{test_cmd} {target_suite}"
    cmd = ["sbt", sbt_arg]
    print(f'[op_loop] Running: sbt "{sbt_arg}"')

    proc = subprocess.run(
        cmd,
        cwd=str(workdir),
        stdout=subprocess.PIPE,
        stderr=subprocess.PIPE,
        text=True,
    )
    full_log = proc.stdout + "\n" + proc.stderr

    # 打印 sbt 输出的尾部，方便你看到失败原因
    print("[op_loop] ----- sbt output (last 80 lines) -----")
    print(shorten_log(full_log, max_lines=80))
    print("[op_loop] ----- end sbt output -----")

    # sbt 返回码为 0：直接视为成功
    if proc.returncode == 0:
        print("[op_loop] sbt returned 0, treating as SUCCESS for target suite.")
        return True, full_log

    # 没有 "Failed tests:" 很可能是编译错
    if "Failed tests:" not in full_log:
        print("[op_loop] sbt failed without 'Failed tests:' -> probably compile error.")
        return False, full_log

    # 解析 Failed tests 段，只看目标 suite 是否在 failed 列表中
    failed_suites: list[str] = []
    lines = full_log.splitlines()
    in_failed_block = False
    for line in lines:
        stripped = line.strip()
        if stripped.startswith("[error] Failed tests:"):
            in_failed_block = True
            continue

        if in_failed_block:
            if not stripped:
                # 空行 -> 段落结束
                break
            if stripped.startswith("[error]"):
                rest = stripped[len("[error]"):].strip()
                if rest:
                    failed_suites.append(rest.strip().strip(","))

    target_simple = target_suite.split(".")[-1]

    failed_target = False
    for s in failed_suites:
        simple = s.split(".")[-1]
        if s == target_suite or simple == target_simple:
            failed_target = True
            break

    if not failed_target:
        print(
            "[op_loop] sbt failed, but target suite "
            f"{target_suite} is NOT in failed list ({failed_suites})."
        )
        print("[op_loop] Treating this as SUCCESS for the operator, ignoring other failing suites.")
        return True, full_log

    print(f"[op_loop] Target suite {target_suite} FAILED.")
    return False, full_log


# ----------------------------------------------------------------------
# Prompt 构造（模块实现：修剪过，避免超上下文）
# ----------------------------------------------------------------------


def build_system_prompt(spec: dict, for_repair: bool) -> str:
    """
    给 LLM 的 system prompt，分两种模式：
      - 初次生成：稍微详细一点；
      - 修复模式：尽量短，避免输入过长。
    """
    op = spec["operator"]
    module_name = op["module_name"]
    package = op["package"]
    behavior = spec.get("behavior", {}) or {}
    llm_cfg = spec.get("llm", {}) or {}

    desc = behavior.get("description", "")
    pseudo = behavior.get("pseudocode", "")
    llm_hint = llm_cfg.get("implementation_hint", "")

    if not for_repair:
        sp = f"""
        You are an expert Chisel3 hardware engineer.
        Your task is to implement a single Chisel3 module
        according to an AES/operator specification.

        Target module:
          - package: {package}
          - class:   {module_name}

        High-level description:
        {desc}

        Behavioral pseudocode (if any):
        {pseudo}

        Implementation hints (if any):
        {llm_hint}

        Rules:
          - Always generate valid Scala + Chisel3.
          - Do NOT include Markdown fences (no ```scala```).
          - The code must start with:
              package {package}
          - Keep module name and IO interface exactly as specified.
        """
    else:
        sp = f"""
        You are an expert Chisel3 engineer acting as a REPAIR agent.
        You will be given the current Scala module code and a truncated
        compile/test error log. Your job is to minimally fix the code so
        that it compiles and passes the tests.

        Target module:
          - package: {package}
          - class:   {module_name}

        Rules:
          - You MUST read the error log carefully and fix the exact lines
            that cause the errors. Do NOT ignore the log.
          - Do NOT change the package or class name.
          - Keep the IO interface (port names and widths) unchanged.
          - Only output valid Scala code without Markdown fences.
        """

    return textwrap.dedent(sp).strip()


def build_initial_user_prompt(spec: dict) -> str:
    """
    第一次生成代码时的 user prompt。
    """
    op = spec["operator"]
    module_name = op["module_name"]
    package = op["package"]

    llm_cfg = spec.get("llm", {}) or {}
    extra_imports = llm_cfg.get("extra_imports", [])

    io = op.get("io", {}) or {}
    inputs = io.get("inputs", []) or []
    outputs = io.get("outputs", []) or []

    io_desc_lines = []
    for inp in inputs:
        io_desc_lines.append(
            f"- Input  '{inp['name']}' : {inp['width']} bits, signed={inp.get('signed', False)}"
        )
    for outp in outputs:
        io_desc_lines.append(
            f"- Output '{outp['name']}' : {outp['width']} bits, signed={outp.get('signed', False)}"
        )
    io_desc = "\n".join(io_desc_lines)

    imports_block = "\n".join(
        [f"import {imp}" for imp in extra_imports]
    )

    up = f"""
    Please write the FULL Scala source code for the Chisel3 module:

      package {package}
      class {module_name} extends chisel3.Module

    IO interface:
    {io_desc}

    Requirements:
      - Use `import chisel3._` and `import chisel3.util._`.
      - Also include these imports if needed:
        {imports_block}
      - Implement the operator behavior correctly according to the spec.
      - The module must be purely combinational if specified so (no registers),
        and respect the timing/latency requirements.
      - Do NOT include any Markdown fences or explanations.
      - Only output valid Scala code, starting with:
          package {package}
    """
    return textwrap.dedent(up).strip()


def build_repair_user_prompt(spec: dict, previous_code: str, error_log: str) -> str:
    """
    失败后修复时的 user prompt。
    """
    op = spec["operator"]
    module_name = op["module_name"]
    package = op["package"]

    up = f"""
    You previously wrote a Chisel3 module '{module_name}' in package '{package}'.
    The code failed to compile or failed tests. Below is the current code and
    the (truncated) error log.

    Your task:
      - Carefully read the error messages and fix the code.
      - Keep the same package and class name.
      - Preserve the IO interface (ports and widths).
      - Make minimal but correct changes to satisfy the operator specification
        and pass the tests.
      - Return the FULL corrected Scala source code.
      - Do NOT include any Markdown fences or explanations.
      - Do NOT simply repeat the old code; you MUST modify it.

    CURRENT SCALA CODE:
    <<BEGIN_SCALA>>
    {previous_code}
    <<END_SCALA>>

    ERROR LOG (truncated tail):
    <<BEGIN_ERROR_LOG>>
    {error_log}
    <<END_ERROR_LOG>>

    Return ONLY the corrected Scala source code, starting with:
      package {package}
    """
    return textwrap.dedent(up).strip()


# ----------------------------------------------------------------------
# LLM 调用 + Scala 代码抽取
# ----------------------------------------------------------------------


def extract_scala_code_from_response(text: str, package_name: str) -> str:
    """
    从 LLM 的输出中抽取纯 Scala 代码：
      1) 如果包含 ``` ``` 代码块，取最后一个代码块内容。
      2) 否则，直接用全文，并尝试从 'package <pkg>' 开始截断。
    """
    # 尝试解析 ```scala ... ``` 或 ``` ... ``` 代码块
    fenced = re.findall(r"```(?:scala)?\s*(.*?)```", text, re.DOTALL)
    if fenced:
        code = fenced[-1].strip()
    else:
        code = text.strip()

    # 从 package 行开始截取，避免前面有说明文字
    pkg_pattern = rf"package\s+{re.escape(package_name)}"
    m = re.search(pkg_pattern, code)
    if m:
        code = code[m.start():]

    return code.strip()


def call_llm_with_spec(
    spec: dict,
    previous_code: Optional[str],
    error_log: Optional[str],
) -> Tuple[str, str, str]:
    """
    根据是否已有 previous_code 构造初始生成或修复 prompt，
    并调用统一的 LLM client。

    返回:
      (raw_response, system_prompt, user_prompt)
    便于后续写入数据集。
    """
    if previous_code is None:
        system_prompt = build_system_prompt(spec, for_repair=False)
        user_prompt = build_initial_user_prompt(spec)
    else:
        # 修复模式：system_prompt 更短，error_log 截断
        system_prompt = build_system_prompt(spec, for_repair=True)
        truncated_log = shorten_log(error_log or "", max_lines=80)
        user_prompt = build_repair_user_prompt(spec, previous_code, truncated_log)

    resp = client.generate(system_prompt=system_prompt, user_prompt=user_prompt)
    return resp, system_prompt, user_prompt


# ----------------------------------------------------------------------
# 主循环
# ----------------------------------------------------------------------


def main() -> None:
    parser = argparse.ArgumentParser(
        description="Operator-level LLM Generate-Compile-Test-Repair loop"
    )
    parser.add_argument(
        "--op",
        required=True,
        help="Operator name, e.g. 'SubBytes' (will load spec/operators/subbytes.yaml)",
    )
    parser.add_argument(
        "--spec-dir",
        default="spec/operators",
        help="Directory of operator YAML specs (default: spec/operators)",
    )
    parser.add_argument(
        "--max-iters",
        type=int,
        default=5,
        help="Maximum #iterations of generate+repair loop (default: 5)",
    )
    parser.add_argument(
        "--keep-on-success",
        action="store_true",
        help="If set, do not stop after first successful iteration (mainly for debugging).",
    )
    parser.add_argument(
        "--from-scratch",
        action="store_true",
        help=(
            "Ignore any existing Scala module file and start from a fresh "
            "generation (no initial repair). The file will still be overwritten."
        ),
    )

    args = parser.parse_args()

    root = project_root()
    spec_dir = (root / args.spec_dir).resolve()
    spec = load_operator_spec(args.op, spec_dir)

    op = spec["operator"]
    module_name = op["module_name"]
    package = op["package"]

    # 数据集目录（按算子划分）
    dataset_dir = get_dataset_dir(root, args.op)

    # Scala 输出路径：src/main/scala/<package path>/<module_name>.scala
    scala_root = root / "src" / "main" / "scala"
    scala_path = scala_root / Path(package.replace(".", "/")) / f"{module_name}.scala"
    scala_path.parent.mkdir(parents=True, exist_ok=True)

    # 测试相关配置
    test_cfg = spec.get("test", {}) or {}
    test_cmd = test_cfg.get("test_cmd", "testOnly")
    suite_name = test_cfg.get("suite_name")
    if not suite_name:
        print("[op_loop] ERROR: spec['test']['suite_name'] is missing.", file=sys.stderr)
        sys.exit(1)

    print(f"[op_loop] Target module: {package}.{module_name}")
    print(f"[op_loop] Scala output: {scala_path}")
    print(f"[op_loop] sbt test command: sbt \"{test_cmd} {suite_name}\"")

    previous_code: Optional[str] = None
    error_log: Optional[str] = None

    # 如果已经有旧代码，可作为第一次 repair 的起点；
    # 若指定 --from-scratch，则忽略旧代码，但仍会覆盖对应文件。
    if scala_path.exists() and not args.from_scratch:
        previous_code = scala_path.read_text(encoding="utf-8")
        print("[op_loop] Found existing Scala file, will start from REPAIR mode.")
    else:
        if scala_path.exists() and args.from_scratch:
            print("[op_loop] Existing Scala file found, but --from-scratch is set -> "
                  "starting from FRESH generation and will overwrite.")
        else:
            print("[op_loop] No existing Scala file, starting from FRESH generation.")

    for i in range(1, args.max_iters + 1):
        print(f"\n[op_loop] ===== Iteration {i}/{args.max_iters} =====")

        # 调用 LLM 生成/修复代码
        print("[op_loop] Calling LLM to generate/repair module implementation...")
        raw_resp, sys_prompt, user_prompt = call_llm_with_spec(
            spec,
            previous_code=previous_code,
            error_log=error_log,
        )
        print(f"[op_loop] LLM raw response length = {len(raw_resp)}")
        preview = raw_resp[:200].replace("\n", "\\n")
        print(f"[op_loop] LLM raw response preview: {preview}")

        # 抽取 Scala 代码
        package_name = package
        scala_code = extract_scala_code_from_response(raw_resp, package_name=package_name)

        # 写入 Scala 文件（每一轮都会覆盖，确保不会“沿用旧实现”）
        scala_path.write_text(scala_code, encoding="utf-8")
        print(f"[op_loop] Wrote Scala module to: {scala_path}")

        # 运行 sbt testOnly <suite_name>，只关注该 suite
        ok, sbt_log = run_sbt_tests(
            test_cmd=test_cmd,
            target_suite=suite_name,
            workdir=root,
        )

        # 记录本次迭代到数据集
        mode = "initial" if previous_code is None else "repair"
        append_trace_record(
            dataset_dir=dataset_dir,
            op_name=args.op,
            package=package,
            module_name=module_name,
            iteration=i,
            mode=mode,
            system_prompt=sys_prompt,
            user_prompt=user_prompt,
            raw_response=raw_resp,
            scala_code=scala_code,
            test_cmd=test_cmd,
            suite_name=suite_name,
            test_ok=ok,
            sbt_log=sbt_log,
        )

        if ok:
            print("[op_loop] ✅ Target operator tests PASSED for this iteration.")
            if not args.keep_on_success:
                print("[op_loop] ✅ Stopping loop because operator has converged.")
                return
            else:
                # 调试模式下，可以继续迭代
                previous_code = scala_code
                error_log = None
                continue

        # 这一轮失败：保存代码与错误日志，为下一轮 repair 提供上下文
        print("[op_loop] sbt test FAILED.")
        previous_code = scala_code
        error_log = sbt_log

    print("[op_loop] ❌ Reached max iterations "
          f"({args.max_iters}) without passing target operator tests.")


if __name__ == "__main__":
    main()
