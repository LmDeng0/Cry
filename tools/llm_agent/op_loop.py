#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Operator Auto Loop: Generate -> Compile/Test -> Repair

Usage:
  # 环境变量（示例）：
  # export CRYPTO_LLM_BACKEND=http
  # export CRYPTO_LLM_BASE_URL="http://localhost:6006/v1"
  # export CRYPTO_LLM_API_KEY="test-token"
  # export CRYPTO_LLM_MODEL="Qwen/Qwen2.5-7B-Instruct"
  #
  # 运行：
  # python3 tools/llm_agent/op_loop.py --op SubBytes --max-iters 5
"""

import argparse
import subprocess
import textwrap
from pathlib import Path
from typing import Optional

import yaml
import re

# 复用你已有的统一 LLM 封装
from tools.llm_client import client


# ===== 项目路径配置 =====

# 当前文件在 tools/llm_agent/op_loop.py
# parents[0] = .../tools/llm_agent
# parents[1] = .../tools
# parents[2] = .../PROJECT_ROOT
PROJECT_ROOT = Path(__file__).resolve().parents[2]

SPEC_DIR = PROJECT_ROOT / "spec" / "operators"
SCALA_MAIN_DIR = PROJECT_ROOT / "src" / "main" / "scala"
SCALA_TEST_DIR = PROJECT_ROOT / "src" / "test" / "scala"


# ===== YAML 加载 =====

def load_operator_spec(op_name: str) -> dict:
    """
    Load YAML spec for given operator, e.g. SubBytes -> subbytes.yaml
    """
    filename = op_name.lower() + ".yaml"
    path = SPEC_DIR / filename
    if not path.exists():
        raise FileNotFoundError(f"Spec file not found: {path}")
    with open(path, "r", encoding="utf-8") as f:
        data = yaml.safe_load(f)
    return data


# ===== Prompt 构造 =====

def build_system_prompt() -> str:
    """
    系统提示：固定角色设定，强调 Chisel 专家、AES 背景等。
    """
    return textwrap.dedent(
        """
        You are an expert hardware designer specialized in Chisel3 and AES cryptography.
        Your job is to write correct, synthesizable Chisel3 modules that pass unit tests.
        Always:
        - Use package and class names exactly as requested.
        - Use Chisel3 (import chisel3._ and chisel3.util._).
        - Make sure the IO Bundle matches the specification (ports and widths).
        - Follow the described AES state layout (4x4 bytes, column-major).
        - Return only Scala source code; do not include any explanations.
        """
    ).strip()

def build_initial_user_prompt(spec: dict) -> str:
    """
    首次生成代码时使用的 user prompt。
    现在是通用版本，会读取 operator.llm.extra_imports / implementation_hint。
    """
    op = spec["operator"]
    module_name = op["module_name"]
    package = op["package"]
    description = op.get("description", "")
    io = op["io"]
    inputs = io["inputs"]
    outputs = io["outputs"]
    timing = op.get("timing", {})
    behavior = op.get("behavior", {})

    # ===== I/O 文本 =====
    io_text = []
    for inp in inputs:
        io_text.append(
            f"- Input {inp['name']}: {inp['width']}-bit, signed={inp.get('signed', False)}"
        )
    for outp in outputs:
        io_text.append(
            f"- Output {outp['name']}: {outp['width']}-bit, signed={outp.get('signed', False)}"
        )
    io_block = "\n".join(io_text)

    # ===== timing 文本 =====
    timing_text = (
        f"combinational={timing.get('combinational', True)}, "
        f"latency_cycles={timing.get('latency_cycles', 0)}"
    )

    # ===== 行为描述 =====
    behavior_desc = behavior.get("description", "")
    pseudocode = behavior.get("pseudocode", "")

    # ===== 读取 llm 区块（如果有）=====
    llm_cfg = op.get("llm", {}) if isinstance(op.get("llm", {}), dict) else {}
    extra_imports = llm_cfg.get("extra_imports", []) or []
    impl_hint = llm_cfg.get("implementation_hint", "").strip()

    imports_text = ""
    if extra_imports:
        imports_lines = [f"- import {imp}" for imp in extra_imports]
        imports_text = "Additional imports that MUST be used:\n" + "\n".join(imports_lines)
    else:
        imports_text = "No additional imports beyond standard Chisel3 are required."

    if impl_hint:
        impl_hint_text = f"Additional implementation hints:\n{impl_hint}"
    else:
        impl_hint_text = "No additional implementation hints."

    # ===== 整体 user prompt 拼接 =====
    user_prompt = f"""
    Write a single Scala source file that defines a Chisel3 Module implementing
    the following operator.

    Module requirements:
    - Package: {package}
    - Scala class name: {module_name}
    - Use Chisel3 (import chisel3._ and chisel3.util._).
    - Use an IO Bundle with the ports described below.
    - Do NOT include any sbt or main() code, only the Module definition.
    - Code must compile under Scala 2.13 and Chisel3.

    Operator description:
    - Name: {op['name']}
    - Category: {op['category']}
    - High-level description: {description}

    I/O ports:
    {io_block}

    Timing:
    - {timing_text}

    Behavior description:
    {behavior_desc}

    Pseudocode:
    {pseudocode}

    {imports_text}

    {impl_hint_text}

    Implementation notes:
    - The AES state, if used, is 4x4 bytes in column-major order, packed in the 128-bit input/output.
    - Make the implementation clear and explicit.
    - Avoid unnecessary complexity.
    - Do not include any test code in this file.

    Return ONLY the Scala source code, starting with:
    package {package}
    """
    return textwrap.dedent(user_prompt).strip()


def trim_error_log(error_log: str, max_lines: int = 120) -> str:
    """
    把 sbt 日志截断，只保留最后 max_lines 行，避免 LLM 上下文溢出。
    """
    lines = error_log.splitlines()
    if len(lines) <= max_lines:
        return error_log
    trimmed = ["[log truncated: showing last %d lines]" % max_lines] + lines[-max_lines:]
    return "\n".join(trimmed)

def build_repair_user_prompt(spec: dict, previous_code: str, error_log: str) -> str:
    """
    失败后修复时的 user prompt。
    会把：
      - 之前版本的 Scala 源码 previous_code
      - sbt 的完整错误日志 error_log
    一起发给 LLM，让它在此基础上做最小修改以通过编译和测试。
    """
    op = spec["operator"]
    module_name = op["module_name"]
    package = op["package"]

    # 可选：从 behavior / llm 区块拿一些额外提示，给 repair 用
    behavior = op.get("behavior", {}) or {}
    behavior_desc = behavior.get("description", "").strip()
    pseudocode = behavior.get("pseudocode", "").strip()

    llm_cfg = op.get("llm", {}) or {}
    impl_hint = llm_cfg.get("implementation_hint", "").strip()

    user_prompt = f"""
    You previously wrote a Chisel3 module '{module_name}' in package '{package}'.
    The code failed to compile or failed tests. Below is the current code and the error log.

    Your repair task:
    - Carefully read the error messages and fix the code.
    - Keep the SAME package and class name: package {package}, class {module_name}.
    - Preserve the I/O interface: do NOT change port names, directions, or bit widths.
    - Make minimal but correct changes to satisfy the operator specification
      and pass sbt compile + tests.
    - Return the FULL corrected Scala source code.

    Operator description (for reference):
    - Name: {op['name']}
    - High-level description: {op.get('description', '').strip()}

    Behavior description (for reference):
    {behavior_desc}

    Pseudocode (for reference):
    {pseudocode}

    Additional implementation hints (for reference):
    {impl_hint}

    Current Scala code:
    ```scala
    {previous_code}
    ```

    sbt compile/test error log:
    ```
    {error_log}
    ```

    Important:
    - Do NOT change the package name or class name.
    - Do NOT remove required imports (chisel3._, chisel3.util._, and any extra imports mentioned above).
    - The final code must compile under Scala 2.13 and Chisel3, and pass the existing unit tests.

    Return ONLY the corrected Scala source code, starting with:
    package {package}
    """
    return textwrap.dedent(user_prompt).strip()


# ===== LLM 调用封装 =====

def call_llm_with_spec(spec: dict, previous_code: Optional[str], error_log: Optional[str]) -> str:
    """
    使用统一的 llm_client 调用模型。
    - 第一轮：用 initial prompt
    - 后续：用 repair prompt
    """
    system_prompt = build_system_prompt()

    if previous_code is None:
        user_prompt = build_initial_user_prompt(spec)
    else:
        user_prompt = build_repair_user_prompt(spec, previous_code=previous_code, error_log=error_log or "")

    # 真正的 LLM 调用（dummy/http 由环境变量控制）
    resp = client.generate(system_prompt=system_prompt, user_prompt=user_prompt)
    return resp


def extract_scala_code_from_response(raw: str, package_name: str) -> str:
    if raw is None:
        return ""

    text = raw.strip()

    # 1) 去掉 ```scala 或 ``` 代码块
    fenced = re.findall(r"```(?:scala)?\s*(.*?)```", text, re.DOTALL)
    if fenced:
        # 若里面有多个 fenced block，取最长的那个
        code = max(fenced, key=len).strip()
    else:
        code = text

    # 2) 去掉可能出现的前缀 “scala\n”
    if code.startswith("scala\n"):
        code = code[6:].lstrip()

    # 3) 只保留从 package 开头到文件结束的内容
    pkg_idx = code.find(f"package {package_name}")
    if pkg_idx >= 0:
        code = code[pkg_idx:].strip()  # 强行从 package 开始截断

    return code.strip()



# ===== Scala 文件写入 =====

def write_scala_module_file(spec: dict, scala_code: str) -> Path:
    """
    将生成的 Scala 代码写入 src/main/scala/... 目录。
    这里按 package 路径映射到子目录，例如 crypto.aes.llm.auto -> crypto/aes/llm/auto
    """
    op = spec["operator"]
    package = op["package"]
    module_name = op["module_name"]

    rel_dir = Path(*package.split("."))
    target_dir = SCALA_MAIN_DIR / rel_dir
    target_dir.mkdir(parents=True, exist_ok=True)

    target_path = target_dir / f"{module_name}.scala"
    with open(target_path, "w", encoding="utf-8") as f:
        f.write(scala_code)

    print(f"[op_loop] Wrote Scala module to: {target_path}")
    return target_path


# ===== sbt 调用（当前只连 SubBytesAutoSpec） =====

def run_sbt_tests(test_cmd: str, target_suite: str, workdir: str) -> tuple[bool, str]:
    """
    运行 sbt 测试，并且只关心 target_suite（例如 SubBytesAutoSpec）
    是不是挂了。

    返回: (success_for_target_suite, full_log)
    """
    cmd = ["sbt", test_cmd, target_suite]
    print(f"[op_loop] Running: {' '.join(cmd)}")

    proc = subprocess.run(
        cmd,
        cwd=workdir,
        stdout=subprocess.PIPE,
        stderr=subprocess.PIPE,
        text=True,
    )
    full_log = proc.stdout + "\n" + proc.stderr

    # 1) sbt 成功退出，直接认为目标 suite 成功
    if proc.returncode == 0:
        print("[op_loop] sbt returned 0, treating as SUCCESS for target suite.")
        return True, full_log

    # 2) 退出码非 0：可能是别的 suite 挂了，也可能是编译错
    #    先看有没有 Failed tests 段
    failed_line = None
    for line in full_log.splitlines():
        if "Failed tests:" in line:
            failed_line = line
            break

    # 2.a) 如果根本没有 "Failed tests:"，通常说明是编译错误，保守按失败处理
    if failed_line is None:
        print("[op_loop] sbt failed without 'Failed tests:' -> probably compile error.")
        return False, full_log

    # 2.b) 解析 Failed tests: 后面的 suite 名称
    #      例子: "[error] Failed tests:\n[error] \tcrypto.aes.llm.AesRoundLLMSpec"
    failed_suites: list[str] = []
    for line in full_log.splitlines():
        if line.strip().startswith("[error] Failed tests:"):
            # 这一行只是标题，继续看后面的几行
            continue
        if line.strip().startswith("[error]"):
            rest = line.strip()[len("[error]"):].strip()
            # 可能是 "crypto.aes.llm.AesRoundLLMSpec" 或带逗号等
            if rest:
                failed_suites.append(rest.strip().strip(","))
        # 碰到空行就可以停止了（Failed tests 段结束）
        if line.strip() == "":
            break

    # 目标 suite 可能是 "crypto.aes.llm.auto.SubBytesAutoSpec"，
    # 也可能在 spec 里只写了 "SubBytesAutoSpec"。
    target_simple = target_suite.split(".")[-1]

    # 如果 failed_suites 里没有包含目标 suite，就认为【对当前算子来说】是成功的
    failed_target = False
    for s in failed_suites:
        if target_suite == s or target_simple == s.split(".")[-1]:
            failed_target = True
            break

    if not failed_target:
        print(
            "[op_loop] sbt failed, but target suite "
            f"{target_suite} is NOT in failed list ({failed_suites})."
        )
        print("[op_loop] Treating this as SUCCESS for the operator, ignoring other failing suites.")
        return True, full_log

    # 否则，目标 suite 确实失败了 -> 返回失败，让上层去走 repair
    print(f"[op_loop] Target suite {target_suite} FAILED.")
    return False, full_log


# ===== 主循环 =====

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument(
        "--op",
        type=str,
        default="SubBytes",
        help="Operator name, e.g., SubBytes (currently only SubBytes is wired).",
    )
    parser.add_argument(
        "--max-iters",
        type=int,
        default=5,
        help="Maximum LLM iterations.",
    )
    args = parser.parse_args()

    op_name = args.op
    max_iters = args.max_iters

    spec = load_operator_spec(op_name)
    print(f"[op_loop] Loaded spec for operator: {op_name}")

    if op_name != "SubBytes":
        print("[op_loop] WARNING: only SubBytes is fully wired right now. "
              "You can extend run_sbt_test_* for other operators later.")

    previous_code: Optional[str] = None
    error_log: Optional[str] = None

    for iter_idx in range(1, max_iters + 1):
        print(f"\n[op_loop] ===== Iteration {iter_idx}/{max_iters} =====")

        print("[op_loop] Calling LLM to generate/repair code...")
        raw_resp = call_llm_with_spec(spec, previous_code=previous_code, error_log=error_log)

        # 调试：看看 LLM 真实返回了什么
        print(f"[op_loop] LLM raw response length = {len(raw_resp)}")
        preview = raw_resp[:400].replace("\n", "\\n")
        print(f"[op_loop] LLM raw response preview: {preview}")

        package_name = spec["operator"]["package"]
        scala_code = extract_scala_code_from_response(raw_resp, package_name=package_name)

        # 防御：如果提取出来是空的，就直接用原始响应
        if not scala_code.strip():
            print("[op_loop] WARNING: extracted Scala code is empty — keep previous code for repair!")
        else:
            previous_code = scala_code
        module_path = write_scala_module_file(spec, scala_code)


        # 目前只实现 SubBytes 测试
        success, log = run_sbt_test_for_subbytes()
        if success:
            print(f"[op_loop] ✅ Operator {op_name} passed tests after {iter_idx} iterations.")
            break
        else:
            error_log = log
            print("[op_loop] Iteration failed, will try to repair with next LLM call.")

    else:
        print(f"[op_loop] ❌ Reached max iterations ({max_iters}) without passing tests.")


if __name__ == "__main__":
    main()
