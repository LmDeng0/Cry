#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
external_dataset_importer.py

把外部 JSONL 数据集（例如 HF Verilog 错误修复数据）
规范化为 LLM4Cry 统一的数据格式，输出到 datasets/external/ 目录。

用法示例：

  python3 -m tools.llm_agent.external_dataset_importer \
    --source verilog_eval \
    --input external_raw/verilog_eval.jsonl \
    --output-dir datasets/external/verilog_eval \
    --code-before-key buggy \
    --code-after-key fixed \
    --error-log-key error \
    --prompt-key prompt
"""

import argparse
import json
from pathlib import Path
from typing import Optional


def project_root() -> Path:
    """
    返回项目根目录（包含 build.sbt 的目录）。
    当前文件在 tools/llm_agent/external_dataset_importer.py
    所以根目录是 parents[2]。
    """
    return Path(__file__).resolve().parents[2]


def normalize_record(
    raw: dict,
    *,
    source: str,
    task: str,
    code_before_key: str,
    code_after_key: str,
    error_log_key: Optional[str],
    prompt_key: Optional[str],
    spec_key: Optional[str],
) -> Optional[dict]:
    """
    将一条原始记录转换为统一格式。
    如果缺少必要字段（如 code_before 或 code_after），返回 None。
    """

    if code_before_key not in raw or code_after_key not in raw:
        # 跳过不完整的数据
        return None

    code_before = raw.get(code_before_key, "")
    code_after = raw.get(code_after_key, "")
    error_log = raw.get(error_log_key, "") if error_log_key else ""
    prompt = raw.get(prompt_key, "") if prompt_key else ""
    spec = raw.get(spec_key, "") if spec_key else ""

    normalized = {
        "source": f"external:{source}",
        "task": task,
        "operator": raw.get("operator", None),  # 大多数外部数据不会有算子名，可留空
        "input": {
            "prompt": prompt,
            "code_before": code_before,
            "error_log": error_log,
            "spec": spec,
        },
        "output": {
            "code_after": code_after,
        },
    }
    return normalized


def main() -> None:
    parser = argparse.ArgumentParser(
        description="Import external JSONL dataset and normalize to LLM4Cry format."
    )
    parser.add_argument(
        "--source",
        required=True,
        help="Source name, e.g. 'verilog_eval', 'rtlfixer', etc.",
    )
    parser.add_argument(
        "--input",
        required=True,
        help="Path to raw JSONL file (relative to project root or absolute).",
    )
    parser.add_argument(
        "--output-dir",
        default="datasets/external",
        help="Output directory relative to project root (default: datasets/external).",
    )
    parser.add_argument(
        "--task",
        default="bug_fix",
        help="Task type label to use in normalized records (default: bug_fix).",
    )
    parser.add_argument(
        "--code-before-key",
        required=True,
        help="Key name in raw JSON for buggy/original code.",
    )
    parser.add_argument(
        "--code-after-key",
        required=True,
        help="Key name in raw JSON for fixed/correct code.",
    )
    parser.add_argument(
        "--error-log-key",
        default=None,
        help="Optional key name for error log in raw JSON.",
    )
    parser.add_argument(
        "--prompt-key",
        default=None,
        help="Optional key name for prompt/description in raw JSON.",
    )
    parser.add_argument(
        "--spec-key",
        default=None,
        help="Optional key name for spec/description in raw JSON.",
    )

    args = parser.parse_args()

    root = project_root()

    input_path = (root / args.input).resolve()
    if not input_path.exists():
        raise FileNotFoundError(f"[external_dataset_importer] input file not found: {input_path}")

    # 输出目录：<root>/<output-dir>/<source>/
    out_dir = (root / args.output_dir / args.source).resolve()
    out_dir.mkdir(parents=True, exist_ok=True)

    out_path = out_dir / "normalized.jsonl"

    print(f"[external_dataset_importer] Project root: {root}")
    print(f"[external_dataset_importer] Reading raw JSONL from: {input_path}")
    print(f"[external_dataset_importer] Writing normalized dataset to: {out_path}")

    num_raw = 0
    num_ok = 0

    with input_path.open("r", encoding="utf-8") as fin, \
            out_path.open("w", encoding="utf-8") as fout:
        for line in fin:
            line = line.strip()
            if not line:
                continue
            num_raw += 1
            try:
                raw = json.loads(line)
            except json.JSONDecodeError:
                print(f"[external_dataset_importer] WARN: skip invalid JSON line #{num_raw}")
                continue

            norm = normalize_record(
                raw,
                source=args.source,
                task=args.task,
                code_before_key=args.code_before_key,
                code_after_key=args.code_after_key,
                error_log_key=args.error_log_key,
                prompt_key=args.prompt_key,
                spec_key=args.spec_key,
            )
            if norm is None:
                continue

            fout.write(json.dumps(norm, ensure_ascii=False) + "\n")
            num_ok += 1

    print(
        f"[external_dataset_importer] Done. raw={num_raw}, normalized={num_ok}, "
        f"output={out_path}"
    )


if __name__ == "__main__":
    main()
