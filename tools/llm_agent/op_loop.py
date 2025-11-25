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

    timing_text = (
        f"combinational={timing.get('combinational', True)}, "
        f"latency_cycles={timing.get('latency_cycles', 0)}"
    )

    behavior_desc = behavior.get("description", "")
    pseudocode = behavior.get("pseudocode", "")

    user_prompt = f"""
    Write a single Scala source file that defines a Chisel3 Module implementing
    the following AES operator.

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

    Implementation notes:
    - The AES state is 4x4 bytes in column-major order, packed in the 128-bit input/output.
    - Make the implementation clear and explicit.
    - Avoid unnecessary complexity.
    - Do not include any test code in this file.

    Return ONLY the Scala source code, starting with:
    package {package}
    """
    return textwrap.dedent(user_prompt).strip()


def build_repair_user_prompt(spec: dict, previous_code: str, error_log: str) -> str:
    """
    失败后修复时的 user prompt。
    """
    op = spec["operator"]
    module_name = op["module_name"]
    package = op["package"]

    user_prompt = f"""
    You previously wrote a Chisel3 module '{module_name}' in package '{package}'.
    The code failed to compile or failed tests. Below is the current code and the error log.

    Your task:
    - Carefully read the error messages and fix the code.
    - Keep the same package and class name.
    - Preserve the I/O interface (ports and widths).
    - Make minimal but correct changes to satisfy the AES operator specification
      and pass the tests.
    - Return the FULL corrected Scala source code.

    Operator description (for reference):
    Name: {op['name']}
    Description: {op.get('description', '')}

    Current Scala code:
    ```scala
    {previous_code}
    ```

    Error log:
    ```
    {error_log}
    ```

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


def extract_scala_code_from_response(resp: str, package_name: str) -> str:
    """
    清洗 LLM 返回文本，提取 Scala 源码。
    规则：
    - 如果有 ``` 块，尝试取包含 scala 的那块
    - 否则直接返回原文本
    - 确保以 'package xxx' 开头（必要时裁剪前面的说明文字）
    """
    text = resp.strip()

    # 先处理 ``` 包裹的情况
    if "```" in text:
        parts = text.split("```")
        # 优先找 'scala' 标记
        for i in range(len(parts)):
            if parts[i].strip().lower().startswith("scala"):
                if i + 1 < len(parts):
                    text = parts[i + 1].strip()
                    break
        else:
            # 没有 scala 标记，就取中间块
            if len(parts) >= 3:
                text = parts[1].strip()

    # 确保从 package 开始
    pkg_token = f"package {package_name}"
    idx = text.find(pkg_token)
    if idx != -1:
        text = text[idx:]

    return text.strip()


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

def run_sbt_test_for_subbytes() -> (bool, str):
    """
    针对 SubBytesAutoSpec 运行 sbt testOnly。
    """
    cmd = ["sbt", "testOnly", "crypto.aes.llm.auto.SubBytesAutoSpec"]
    print(f"[op_loop] Running: {' '.join(cmd)}")
    proc = subprocess.run(
        cmd,
        cwd=PROJECT_ROOT,
        stdout=subprocess.PIPE,
        stderr=subprocess.STDOUT,
        text=True,
    )
    log = proc.stdout
    success = proc.returncode == 0
    if success:
        print("[op_loop] sbt test succeeded.")
    else:
        print("[op_loop] sbt test FAILED.")
    return success, log


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
        package_name = spec["operator"]["package"]
        scala_code = extract_scala_code_from_response(raw_resp, package_name=package_name)
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
