#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
dataset_builder.py
------------------

从 op_trace.labeled.jsonl 构建：
  - bug → fix 训练对 (training_pairs.jsonl)

用法：
  python3 -m tools.llm_agent.dataset_builder --op SubBytes
  python3 -m tools.llm_agent.dataset_builder --op ShiftRows
  python3 -m tools.llm_agent.dataset_builder --all
"""

import json
import argparse
from pathlib import Path
from typing import List, Dict

# ⚠️ 注意：这里直接用 __file__.resolve().parents[2]，
# 和 op_loop.py 的 project_root() 保持一致：
#   /home/crypto-chisel-llm/tools/llm_agent/dataset_builder.py
#   parents[0] = /home/crypto-chisel-llm/tools/llm_agent
#   parents[1] = /home/crypto-chisel-llm/tools
#   parents[2] = /home/crypto-chisel-llm   ✅ 项目根
ROOT = Path(__file__).resolve().parents[2]


def load_labeled_trace(path: Path) -> List[Dict]:
    if not path.exists():
        raise FileNotFoundError(f"[dataset_builder] labeled trace not found: {path}")
    data: List[Dict] = []
    with path.open("r", encoding="utf-8") as f:
        for line in f:
            line = line.strip()
            if not line:
                continue
            data.append(json.loads(line))
    print(f"[dataset_builder] Loaded {len(data)} labeled records from {path}")
    return data


def build_pairs(records: List[Dict], op_name: str) -> List[Dict]:
    """
    构建 bug → fix pairs：

    要求连续 iteration (n → n+1)：
      - n: error, 有 bug（error.type != success 且非空）
      - n+1: 不同的结果（success 或 error 类型变化）
    """

    pairs: List[Dict] = []
    for i in range(len(records) - 1):
        a = records[i]
        b = records[i + 1]

        # 必须确保是同一 operator
        if a.get("operator", {}).get("name") != op_name:
            continue
        if b.get("operator", {}).get("name") != op_name:
            continue

        errA = a.get("error", {}).get("type")
        errB = b.get("error", {}).get("type")

        # A 必须是错误
        if not errA or errA == "success":
            continue

        buggy = a.get("response", {}).get("scala_extracted", "") or ""
        fixed = b.get("response", {}).get("scala_extracted", "") or ""

        if not buggy.strip() or not fixed.strip():
            continue
        if buggy.strip() == fixed.strip():
            # 没有实质变化，跳过
            continue

        pairs.append(
            {
                "operator": op_name,
                "iteration": a.get("meta", {}).get("iteration"),
                "error_type": errA,
                "system_prompt": a.get("prompts", {}).get("system", ""),
                "user_prompt": a.get("prompts", {}).get("user", ""),
                "buggy_code": buggy,
                "fixed_code": fixed,
                # 修复之后的错误类型（可能是 success，也可能是另外一种 error）
                "fix_error_type_after": errB,
            }
        )

    return pairs


def save_pairs(pairs: List[Dict], out_path: Path) -> None:
    out_path.parent.mkdir(parents=True, exist_ok=True)
    with out_path.open("w", encoding="utf-8") as f:
        for item in pairs:
            f.write(json.dumps(item, ensure_ascii=False) + "\n")
    print(f"[dataset_builder] Saved {len(pairs)} training pairs → {out_path}")


def process_operator(op_name: str) -> None:
    print(f"\n[dataset_builder] Processing operator: {op_name}")

    ds_dir = ROOT / "datasets" / "op_level" / op_name.lower()
    labeled_path = ds_dir / "op_trace.labeled.jsonl"
    out_path = ds_dir / "training_pairs.jsonl"

    print(f"[dataset_builder] Using project root: {ROOT}")
    print(f"[dataset_builder] Labeled trace path: {labeled_path}")

    records = load_labeled_trace(labeled_path)
    pairs = build_pairs(records, op_name)
    save_pairs(pairs, out_path)


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--op", type=str, help="Operator name, e.g., SubBytes")
    parser.add_argument("--all", action="store_true", help="Process all operators under datasets/op_level")
    args = parser.parse_args()

    if args.all:
        base = ROOT / "datasets" / "op_level"
        if not base.exists():
            raise FileNotFoundError(f"[dataset_builder] op_level directory not found: {base}")
        ops = [p.name for p in base.iterdir() if p.is_dir()]
        if not ops:
            raise RuntimeError(f"[dataset_builder] No operator directories found under {base}")
    else:
        if not args.op:
            raise ValueError("Please specify --op <name> or use --all")
        ops = [args.op]

    for op_name in ops:
        process_operator(op_name)


if __name__ == "__main__":
    main()
