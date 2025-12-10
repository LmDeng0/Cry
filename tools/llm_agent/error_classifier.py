#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Error classifier for op_trace.jsonl

Usage:
  python3 -m tools.llm_agent.error_classifier --op SubBytes
"""

import re
import json
from pathlib import Path
import argparse

# -----------------------
# Rule-based patterns
# -----------------------

PATTERNS = {
    "E-IO-MISMATCH": [
        r"value .* is not a member of .*Bundle",
        r"IO .* not found",
        r"not a member of chisel3.Bundle",
    ],
    "E-IO-WIDTH": [
        r"Width mismatch",
        r"bits.*does not match width",
        r"expected .*W but got",
    ],
    "E-TYPE": [
        r"type mismatch",
        r"value update is not a member of Seq",
        r"does not conform to expected type",
    ],
    "E-SYNTAX": [
        r"')' expected but",
        r"illegal start of simple expression",
        r"not found: value",
    ],
    "E-REF-MISSING": [
        r"value .* is not a member of",
        r"object .* is not a member",
        r"not found: object",
    ],
}


def classify_error(log: str) -> str:
    # 如果 log 为 None，则视为没有错误
    if not log:
        return "NONE"

    # success patterns
    if "All tests passed" in log or "sbt returned 0" in log:
        return "NONE"

    # literal pattern matching
    for cat, patterns in PATTERNS.items():
        for pat in patterns:
            safe_pat = re.escape(pat)
            if re.search(safe_pat, log):
                return cat

    # fallback detection
    lower = log.lower()
    if "not found" in lower:
        return "E-REF-MISSING"
    if "error" in lower or "exception" in lower or "failed" in lower:
        return "E-UNKNOWN"

    return "NONE"




def process_op(op_dir: Path):
    trace_path = op_dir / "op_trace.jsonl"
    out_path = op_dir / "op_trace.labeled.jsonl"

    if not trace_path.exists():
        print(f"[error_classifier] No trace found: {trace_path}")
        return

    print(f"[error_classifier] Loading {trace_path}")

    with trace_path.open() as fin, out_path.open("w") as fout:
        for line in fin:
            rec = json.loads(line)
            log_tail = rec.get("compile_test", {}).get("sbt_log_tail", "")

            label = classify_error(log_tail)

            rec["error_label"] = label
            fout.write(json.dumps(rec, ensure_ascii=False) + "\n")

    print(f"[error_classifier] Labeled results saved → {out_path}")


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--op", required=True)

    args = parser.parse_args()
    root = Path("datasets/op_level") / args.op.lower()

    process_op(root)


if __name__ == "__main__":
    main()
