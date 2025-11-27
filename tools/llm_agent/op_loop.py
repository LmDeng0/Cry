#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Generic operator-level Generate → Compile → Test → Repair loop.
Now extended with automatic dataset collection for training.
"""

import argparse
import os
import sys
import textwrap
import subprocess
import re
from pathlib import Path
from typing import Tuple, Optional
from datetime import datetime
import json

import yaml
from tools.llm_client import client


# ----------------------------------------------------------------------
# Project root
# ----------------------------------------------------------------------

def project_root() -> Path:
    return Path(__file__).resolve().parents[2]


# ----------------------------------------------------------------------
# Dataset saving (NEW)
# ----------------------------------------------------------------------

### [DATASET] 自动保存样本
def save_op_level_sample(
    operator: str,
    spec_yaml: str,
    system_prompt: str,
    user_prompt: str,
    llm_raw_output: str,
    incorrect_code: str,
    error_log: str,
    repaired_code: str,
    status: str,
):
    dataset_dir = Path("datasets/op_level/raw")
    dataset_dir.mkdir(parents=True, exist_ok=True)

    fname = dataset_dir / f"{operator.lower()}.jsonl"
    sample = {
        "id": f"{operator.lower()}_{datetime.now().strftime('%Y%m%d_%H%M%S')}",
        "timestamp": datetime.now().isoformat(),

        "operator": operator,
        "spec_yaml": spec_yaml,

        "system_prompt": system_prompt,
        "user_prompt": user_prompt,
        "llm_raw_output": llm_raw_output,

        "incorrect_code": incorrect_code,
        "error_log": error_log,
        "repaired_code": repaired_code,

        "status": status  # "success" / "fail"
    }

    with open(fname, "a", encoding="utf-8") as f:
        f.write(json.dumps(sample, ensure_ascii=False))
        f.write("\n")


# ----------------------------------------------------------------------
# Load YAML
# ----------------------------------------------------------------------

def load_operator_spec(op_name: str, spec_dir: Path) -> dict:
    fname = op_name.lower() + ".yaml"
    path = spec_dir / fname
    if not path.exists():
        print(f"[op_loop] ERROR: Spec file not found: {path}", file=sys.stderr)
        sys.exit(1)

    with open(path, "r", encoding="utf-8") as f:
        spec = yaml.safe_load(f)

    print(f"[op_loop] Loaded spec for operator: {op_name}")
    return spec


def shorten_log(log: str, max_lines: int = 80) -> str:
    lines = log.splitlines()
    if len(lines) <= max_lines:
        return log
    return "[truncated sbt log]\n" + "\n".join(lines[-max_lines:])


# ----------------------------------------------------------------------
# sbt runner
# ----------------------------------------------------------------------

def run_sbt_tests(test_cmd: str, target_suite: str, workdir: Path) -> Tuple[bool, str]:
    sbt_arg = f'{test_cmd} {target_suite}'
    cmd = ["sbt", sbt_arg]

    print(f'[op_loop] Running: sbt "{sbt_arg}"')
    proc = subprocess.run(cmd, cwd=str(workdir),
                          stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True)

    full_log = proc.stdout + "\n" + proc.stderr

    print("[op_loop] ----- sbt output (last 80 lines) -----")
    print(shorten_log(full_log))
    print("[op_loop] ----- end sbt output -----")

    if proc.returncode == 0:
        return True, full_log

    if "Failed tests:" not in full_log:
        return False, full_log

    failed = []
    in_block = False
    for line in full_log.splitlines():
        s = line.strip()
        if s.startswith("[error] Failed tests:"):
            in_block = True
            continue
        if in_block:
            if not s:
                break
            if s.startswith("[error]"):
                failed.append(s[len("[error]"):].strip())

    target_simple = target_suite.split(".")[-1]
    for f in failed:
        if f == target_suite or f.split(".")[-1] == target_simple:
            return False, full_log

    return True, full_log


# ----------------------------------------------------------------------
# Prompt builders
# ----------------------------------------------------------------------

def build_system_prompt(spec: dict, for_repair: bool) -> str:
    op = spec["operator"]
    module = op["module_name"]
    pkg = op["package"]
    behavior = spec.get("behavior", {})
    llm_hint = spec.get("llm", {}).get("implementation_hint", "")

    desc = behavior.get("description", "")
    pseudo = behavior.get("pseudocode", "")

    if not for_repair:
        text = f"""
        You are an expert Chisel3 engineer.
        Implement module {module} in package {pkg}.

        Description:
        {desc}

        Pseudocode:
        {pseudo}

        Implementation hints:
        {llm_hint}

        Rules:
          - Output ONLY Scala source, beginning with:
              package {pkg}
          - No Markdown fences.
        """
    else:
        text = f"""
        You are an expert Chisel3 REPAIR agent.
        Fix the existing module {module}.

        Rules:
          - Keep same package {pkg}
          - Keep IO unchanged
          - No Markdown fences
          - Output FULL corrected Scala code
        """
    return textwrap.dedent(text).strip()


def build_initial_user_prompt(spec: dict) -> str:
    op = spec["operator"]
    module = op["module_name"]
    pkg = op["package"]
    io = op.get("io", {})

    inputs = io.get("inputs", [])
    outputs = io.get("outputs", [])
    extra_imports = spec.get("llm", {}).get("extra_imports", [])

    io_text = "\n".join([
        f"- Input {i['name']} : {i['width']} bits"
        for i in inputs
    ] + [
        f"- Output {o['name']} : {o['width']} bits"
        for o in outputs
    ])

    imports = "\n".join(f"import {i}" for i in extra_imports)

    text = f"""
    Write FULL Scala for:

      package {pkg}
      class {module} extends chisel3.Module

    IO:
    {io_text}

    Extra imports:
    {imports}

    Only output Scala code. No Markdown.
    """
    return textwrap.dedent(text).strip()


def build_repair_user_prompt(spec: dict, prev_code: str, log: str) -> str:
    op = spec["operator"]
    module = op["module_name"]
    pkg = op["package"]

    return textwrap.dedent(f"""
    Fix the following {module} in package {pkg}.

    CURRENT CODE:
    <<SCALA>>
    {prev_code}
    <<END>>

    ERROR:
    <<ERR>>
    {log}
    <<END>>

    Output ONLY corrected Scala code starting with:
      package {pkg}
    """).strip()


# ----------------------------------------------------------------------
# LLM Call
# ----------------------------------------------------------------------

def extract_scala_code_from_response(text: str, package_name: str) -> str:
    blocks = re.findall(r"```(?:scala)?\s*(.*?)```", text, re.DOTALL)
    if blocks:
        code = blocks[-1].strip()
    else:
        code = text.strip()

    pattern = rf"package\s+{re.escape(package_name)}"
    m = re.search(pattern, code)
    if m:
        code = code[m.start():]

    return code.strip()


def call_llm_with_spec(spec, prev_code, error_log):
    if prev_code is None:
        system_prompt = build_system_prompt(spec, False)
        user_prompt = build_initial_user_prompt(spec)
    else:
        system_prompt = build_system_prompt(spec, True)
        user_prompt = build_repair_user_prompt(spec, prev_code, shorten_log(error_log or ""))

    resp = client.generate(system_prompt=system_prompt, user_prompt=user_prompt)
    return resp, system_prompt, user_prompt


# ----------------------------------------------------------------------
# Main loop
# ----------------------------------------------------------------------

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--op", required=True)
    parser.add_argument("--spec-dir", default="spec/operators")
    parser.add_argument("--max-iters", type=int, default=5)
    parser.add_argument("--keep-on-success", action="store_true")
    args = parser.parse_args()

    root = project_root()
    spec_dir = root / args.spec_dir
    spec = load_operator_spec(args.op, spec_dir)

    op = spec["operator"]
    module = op["module_name"]
    pkg = op["package"]

    scala_path = (
        root / "src" / "main" / "scala" / pkg.replace(".", "/") / f"{module}.scala"
    )
    scala_path.parent.mkdir(parents=True, exist_ok=True)

    test_cfg = spec.get("test", {})
    test_cmd = test_cfg.get("test_cmd", "testOnly")
    suite_name = test_cfg["suite_name"]

    print(f"[op_loop] Target module: {pkg}.{module}")
    print(f"[op_loop] Scala output: {scala_path}")
    print(f'[op_loop] sbt test command: sbt "{test_cmd} {suite_name}"')

    prev_code = scala_path.read_text() if scala_path.exists() else None
    error_log = None

    spec_yaml = yaml.dump(spec)

    for i in range(1, args.max_iters + 1):
        print(f"\n[op_loop] ===== Iteration {i}/{args.max_iters} =====")

        raw_resp, sys_prompt, user_prompt = call_llm_with_spec(spec, prev_code, error_log)

        scala_code = extract_scala_code_from_response(raw_resp, pkg)
        scala_path.write_text(scala_code)

        ok, log = run_sbt_tests(test_cmd, suite_name, root)

        ### [DATASET] 保存样本
        save_op_level_sample(
            operator=args.op,
            spec_yaml=spec_yaml,
            system_prompt=sys_prompt,
            user_prompt=user_prompt,
            llm_raw_output=raw_resp,
            incorrect_code=scala_code,
            error_log=log,
            repaired_code=scala_code if ok else "",
            status="success" if ok else "fail",
        )

        if ok:
            print("[op_loop] SUCCESS!")
            if not args.keep_on_success:
                return
            prev_code = scala_code
            error_log = None
            continue

        prev_code = scala_code
        error_log = log

    print("[op_loop] MAX ITERATIONS REACHED - FAILED")


if __name__ == "__main__":
    main()
