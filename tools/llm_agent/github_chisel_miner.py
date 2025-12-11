#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
github_chisel_miner.py

从本地 GitHub Chisel 仓库中抽取 Module 定义和 IO 信息，构建
"impl_from_spec" 类型的数据集。

用法示例：

  python3 -m tools.llm_agent.github_chisel_miner \
    --repos external_repos/chisel3 external_repos/rocket-chip \
    --output datasets/external/github_chisel/modules.jsonl
"""

import argparse
import json
import re
from pathlib import Path
from typing import List, Dict, Any, Optional, Tuple


def project_root() -> Path:
    """
    返回项目根目录（包含 build.sbt）。
    """
    return Path(__file__).resolve().parents[2]


# -----------------------------------------------------------------------------
# 简单 Scala / Chisel 解析工具（尽量稳健，但不会覆盖所有奇技淫巧写法）
# -----------------------------------------------------------------------------

PACKAGE_RE = re.compile(r"^\s*package\s+([a-zA-Z0-9_.]+)")
CLASS_MODULE_RE = re.compile(
    r"^\s*class\s+([A-Za-z0-9_]+)\b.*\bextends\s+Module\b"
)
IO_BUNDLE_START_RE = re.compile(r"^\s*val\s+io\s*=\s*IO\s*\(\s*new\s+Bundle\s*\{\s*$")
BUNDLE_END_RE = re.compile(r"^\s*\}\s*\)\s*$")


def read_file(path: Path) -> str:
    try:
        return path.read_text(encoding="utf-8")
    except UnicodeDecodeError:
        return path.read_text(encoding="latin-1", errors="ignore")


def find_package(lines: List[str]) -> Optional[str]:
    for line in lines:
        m = PACKAGE_RE.match(line)
        if m:
            return m.group(1)
    return None


def extract_modules_from_file(path: Path) -> List[Dict[str, Any]]:
    """
    粗略提取本文件中所有 "class Xxx extends Module" 的代码块。
    返回列表，每个元素包含：
      - name: 模块类名
      - package: 包名（可能为 None）
      - code: 整个类代码（含 class 行和花括号）
    """
    text = read_file(path)
    lines = text.splitlines()
    pkg = find_package(lines)

    modules: List[Dict[str, Any]] = []

    # 简单按行扫描，找到 class Xxx extends Module 的起始行
    for i, line in enumerate(lines):
        m = CLASS_MODULE_RE.match(line)
        if not m:
            continue
        class_name = m.group(1)

        # 从这一行开始，用括号计数法找到对应的 class {...} 结束位置
        brace_level = 0
        start_idx = i
        end_idx = i

        # 在 class 行里数一次 '{'
        brace_level += line.count("{") - line.count("}")

        j = i + 1
        while j < len(lines):
            brace_level += lines[j].count("{")
            brace_level -= lines[j].count("}")
            if brace_level <= 0:
                end_idx = j
                break
            j += 1

        class_code = "\n".join(lines[start_idx:end_idx + 1])
        modules.append({
            "name": class_name,
            "package": pkg,
            "code": class_code,
        })

    return modules


def extract_io_from_code(code: str) -> Optional[Dict[str, Any]]:
    """
    从模块代码中粗略解析 IO Bundle：
      val io = IO(new Bundle {
        val a = Input(UInt(8.W))
        val b = Output(UInt(1.W))
      })

    输出结构：
      {
        "inputs": [{"name": "a", "type": "UInt", "width": 8}, ...],
        "outputs": [...]
      }

    仅支持较常见、简单的写法，但已经覆盖我们希望挖的主流模块。
    """
    lines = code.splitlines()
    io_start = None
    io_end = None

    # 找到 IO Bundle 块
    for i, line in enumerate(lines):
        if IO_BUNDLE_START_RE.match(line):
            io_start = i
            break

    if io_start is None:
        return None

    brace = 0
    for j in range(io_start, len(lines)):
        brace += lines[j].count("{")
        brace -= lines[j].count("}")
        if brace == 0 and j > io_start:
            # 找到 Bundle } ) 的结束
            io_end = j
            break

    if io_end is None:
        return None

    bundle_lines = lines[io_start + 1: io_end]

    # 匹配形如：val x = Input(UInt(8.W)) 或 val x = Output(Bool())
    IO_RE = re.compile(
        r"^\s*val\s+([A-Za-z0-9_]+)\s*=\s*(Input|Output)\s*\(\s*([A-Za-z0-9_]+)\s*\((.+)\)\s*\)\s*"
    )
    # 也支持 Bool() 不带宽度
    IO_BOOL_RE = re.compile(
        r"^\s*val\s+([A-Za-z0-9_]+)\s*=\s*(Input|Output)\s*\(\s*Bool\s*\(\s*\)\s*\)\s*"
    )

    inputs: List[Dict[str, Any]] = []
    outputs: List[Dict[str, Any]] = []

    for line in bundle_lines:
        m = IO_RE.match(line)
        if m:
            name, direction, typ, width_expr = m.groups()
            width = None
            # 只处理简单的 N.W 或 log2Ceil() 等表达式，宽度我们保留原始字符串
            width = width_expr.strip()
            entry = {
                "name": name,
                "type": typ,
                "chisel_type": typ,  # 这里 typ 通常是 UInt / SInt 等
                "width": width,
            }
            if direction == "Input":
                inputs.append(entry)
            else:
                outputs.append(entry)
            continue

        m2 = IO_BOOL_RE.match(line)
        if m2:
            name, direction = m2.groups()
            entry = {
                "name": name,
                "type": "Bool",
                "chisel_type": "Bool",
                "width": "1",
            }
            if direction == "Input":
                inputs.append(entry)
            else:
                outputs.append(entry)

    if not inputs and not outputs:
        return None

    return {
        "inputs": inputs,
        "outputs": outputs,
    }


def build_record_from_module(
    module: Dict[str, Any],
    *,
    source_tag: str = "github_chisel",
) -> Optional[Dict[str, Any]]:
    """
    根据提取到的 module 信息，构造统一的数据记录。
    如果无法解析 IO，就返回 None（可以后续再改进）。
    """
    name = module.get("name")
    pkg = module.get("package")
    code = module.get("code", "")

    io_info = extract_io_from_code(code)
    if io_info is None:
        return None

    spec = {
        "package": pkg,
        "module": name,
        "io": io_info,
    }

    record = {
        "source": source_tag,
        "task": "impl_from_spec",
        "operator": name,
        "input": {
            "prompt": "",
            "code_before": "",
            "error_log": "",
            "spec": spec,
        },
        "output": {
            "code_after": code,
        },
    }
    return record


# -----------------------------------------------------------------------------
# 主逻辑
# -----------------------------------------------------------------------------

def main() -> None:
    parser = argparse.ArgumentParser(
        description="Mine Chisel modules from local GitHub repositories."
    )
    parser.add_argument(
        "--repos",
        nargs="+",
        required=True,
        help="List of local repository directories to scan.",
    )
    parser.add_argument(
        "--output",
        default="datasets/external/github_chisel/modules.jsonl",
        help="Output JSONL path relative to project root.",
    )

    args = parser.parse_args()
    root = project_root()

    repo_paths = [ (root / p).resolve() for p in args.repos ]
    out_path = (root / args.output).resolve()
    out_path.parent.mkdir(parents=True, exist_ok=True)

    print("[github_chisel_miner] Project root:", root)
    print("[github_chisel_miner] Repositories:")
    for rp in repo_paths:
        print("  -", rp)

    num_files = 0
    num_modules = 0
    num_records = 0

    with out_path.open("w", encoding="utf-8") as fout:
        for repo in repo_paths:
            if not repo.exists():
                print(f"[github_chisel_miner] WARN: repo not found: {repo}")
                continue

            for path in repo.rglob("*.scala"):
                num_files += 1
                modules = extract_modules_from_file(path)
                if not modules:
                    continue

                for m in modules:
                    num_modules += 1
                    rec = build_record_from_module(m)
                    if rec is None:
                        continue
                    fout.write(json.dumps(rec, ensure_ascii=False) + "\n")
                    num_records += 1

    print(
        f"[github_chisel_miner] Done. files_scanned={num_files}, "
        f"modules_found={num_modules}, records_written={num_records}, "
        f"output={out_path}"
    )


if __name__ == "__main__":
    main()
