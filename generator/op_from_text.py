#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
从自然语言规格生成 Chisel 运算单元（operator）的 Scala 源码。

用法示例：
  python generator/op_from_text.py \
    --spec_txt spec/aes_addroundkey_spec.txt \
    --out_scala src/main/scala/crypto/aes/llm/AesAddRoundKeyLLM.scala
"""

import argparse
import os
import sys

# ========= 强制把项目根目录加入 sys.path，保证能 import tools =========
ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), ".."))
if ROOT not in sys.path:
    sys.path.insert(0, ROOT)

from tools.llm_client import client  # 现在无论从哪执行都能找到


# ===================== LLM 提示模板 =====================

SYSTEM_PROMPT = """
你是一个资深硬件工程师和 Chisel/Scala 专家。
你的任务是根据给定的运算单元规格，生成**可综合的 Chisel 代码**。

要求：
  - 代码必须是合法的 Scala/Chisel 3。
  - 不要使用匿名结构类型（例如 new { val x = ... }），所有 IO 都在 Bundle 中显式声明。
  - 不要生成任何 markdown 语法（例如 ```scala ```），只输出纯代码。
"""

# 不再用 { } 做占位符，避免 .format 乱解析，统一用 <<SPEC_TXT>> 这个标记
USER_TEMPLATE = """
下面是一个运算单元（operator）的自然语言规格，请根据它生成一个完整的 Scala/Chisel 源文件。

---------------- SPEC BEGIN ----------------
<<SPEC_TXT>>
---------------- SPEC END ------------------

生成要求：
  - 只输出 **Scala 源码**，不要任何解释性文字。
  - 必须包含 package 声明，例如：package crypto.aes.llm
  - 必须 import chisel3._ （如有需要可再 import chisel3.util._）
  - 定义一个 class，类名与规格含义一致，例如 AesAddRoundKeyLLM，继承 Module。
  - IO 端口使用显式 Bundle 定义，例如：
      val inState  = Input(UInt(128.W))
      val roundKey = Input(UInt(128.W))
      val outState = Output(UInt(128.W))
  - 不要使用结构类型（structural type），例如 new { val x = ... } 之类全部禁止。
  - 代码必须是**自洽、可编译**的 Chisel 模块实现。
"""


# ===================== 工具函数 =====================

def strip_markdown_fences(text: str) -> str:
    """
    一些 LLM 喜欢自动加 ```scala ```，这里统一剥掉所有 ``` 开头的行。
    """
    if "```" not in text:
        return text.strip()
    lines = []
    for line in text.splitlines():
        if line.strip().startswith("```"):
            continue
        lines.append(line)
    return "\n".join(lines).strip()


def call_llm_for_op(spec_text: str) -> str:
    """
    调 LLM 生成运算单元的 Scala 源码。
    """
    # 用简单的字符串替换，完全绕开 str.format 的大括号问题
    user_prompt = USER_TEMPLATE.replace("<<SPEC_TXT>>", spec_text)
    print("[OP-LLM] Using backend to generate operator Scala...")
    scala_code = client.generate(SYSTEM_PROMPT, user_prompt)
    scala_code = strip_markdown_fences(scala_code)
    return scala_code


# ===================== main =====================

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument(
        "--spec_txt",
        required=True,
        help="运算单元的自然语言规格文件（例如 spec/aes_addroundkey_spec.txt）",
    )
    ap.add_argument(
        "--out_scala",
        required=True,
        help="生成的 Scala 源码输出路径",
    )
    args = ap.parse_args()

    if not os.path.exists(args.spec_txt):
        raise SystemExit(f"[ERR] spec_txt not found: {args.spec_txt}")

    with open(args.spec_txt, "r", encoding="utf-8") as f:
        spec_text = f.read()

    scala_code = call_llm_for_op(spec_text)

    # 简单兜底：如果第一行不是 package 声明，就给个默认 package
    first_line = scala_code.splitlines()[0].strip() if scala_code.splitlines() else ""
    if not first_line.startswith("package "):
        scala_code = "package crypto.aes.llm\n\n" + scala_code

    out_dir = os.path.dirname(args.out_scala)
    if out_dir:
        os.makedirs(out_dir, exist_ok=True)

    with open(args.out_scala, "w", encoding="utf-8") as f:
        f.write(scala_code)

    print(f"[ok] operator code written to: {args.out_scala}")


if __name__ == "__main__":
    main()
