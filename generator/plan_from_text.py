# generator/plan_from_text.py
import argparse
import yaml
import os
import sys
from typing import Dict, List, Optional

# ======================
# 0. 确保项目根目录在 sys.path 里
# ======================

# 当前文件路径：.../crypto-chisel-llm/generator/plan_from_text.py
THIS_DIR = os.path.dirname(os.path.abspath(__file__))
PROJECT_ROOT = os.path.abspath(os.path.join(THIS_DIR, ".."))

if PROJECT_ROOT not in sys.path:
    sys.path.insert(0, PROJECT_ROOT)

# ======================
# 1. IMPORT LLM CLIENT
# ======================
try:
    from tools.llm_client import client   # 真实/HTTP/dummy 都走这个
except Exception as e:
    print(f"[WARN] import tools.llm_client failed: {e}")
    client = None

# 尝试导入 validator 的函数（两种方式都试一下，适配不同运行姿势）
try:
    from generator.plan_validate import validate_plan  # 作为包导入
except Exception:
    try:
        from plan_validate import validate_plan        # 作为同目录模块导入
    except Exception as e2:
        print(f"[WARN] import validate_plan failed: {e2}")
        validate_plan = None


# ======================
# 2. 原始模板（保持不变）
# ======================

TEMPLATE_AES = {
    "top": "Aes128Core",
    "algo": "AES",
    "params": {"BLOCK_W": 128, "KEY_W": 128, "ROUNDS": 10},
    "bundles": {
        "Block": {"width": 128},
        "Key":   {"width": 128},
        "State": {"width": 128},
    },
    "interfaces": {
        "in":  {"dir": "in",  "type": "Decoupled", "payload": "Block"},
        "out": {"dir": "out", "type": "Decoupled", "payload": "Block"},
        "key": {"dir": "in",  "type": "Valid",     "payload": "Key"},
    },
    "dag": [
        {"name": "KeySchedule128", "kind": "KeySchedule", "latency": 11, "out": ["rk0..rk10"]},
        {"name": "InitRound",      "kind": "AddRoundKey", "latency": 0,  "in": ["in", "rk0"],  "out": ["s0"]},
        {"name": "Round1",         "kind": "StdRound",    "latency": 2,  "in": ["s0", "rk1"],  "out": ["s1"]},
        {"name": "FinalRound",     "kind": "FinalRound",  "latency": 1,  "in": ["s1", "rk10"], "out": ["cipher"]},
    ],
    "connections": [
        ["in",                "InitRound.in"],
        ["InitRound.s0",      "Round1.in"],
        ["Round1.s1",         "FinalRound.in"],
        ["FinalRound.cipher", "out"],
    ],
    "verification": {
        "vectors": ["nist_kats_aes_ecb.json"],
        "assertions": ["handshake_no_deadlock", "const_time_no_secret_branch"],
    },
    "security": {"constant_time": True, "forbid_secret_index": True},
}

TEMPLATE_SHA1 = {
    "top": "Sha1Core",
    "algo": "SHA1",

    "params": {
        "BLOCK_W": 512,
        "DIGEST_W": 160,
    },

    "bundles": {
        "Block":  {"width": 512},
        "Digest": {"width": 160},
        "State":  {"width": 160},
    },

    "interfaces": {
        "in": {
            "dir": "in",
            "type": "Decoupled",
            "payload": "Block",
        },
        "out": {
            "dir": "out",
            "type": "Decoupled",
            "payload": "Digest",
        },
    },

    "dag": [
        {
            "name": "ExpandW",
            "kind": "MessageSchedule",
            "latency": 2,
            "in": ["in"],
            "out": ["w"],
        },
        {
            "name": "Round80",
            "kind": "Round",
            "latency": 4,
            "in": ["w"],
            "out": ["h"],
        },
        {
            "name": "FinalDigest",
            "kind": "Final",
            "latency": 1,
            "in": ["h"],
            "out": ["digest"],
        },
    ],

    "connections": [
        ["in",                  "ExpandW.in"],
        ["ExpandW.w",           "Round80.in"],
        ["Round80.h",           "FinalDigest.in"],
        ["FinalDigest.digest",  "out"],
    ],

    "verification": {
        "vectors": ["sha1_kat.json"],
        "assertions": ["handshake_no_deadlock"],
    },

    "security": {
        "constant_time": True,
        "collision_resistance": True,
        "preimage_resistance": True,
    },
}


# ======================
# 3. 原有模板逻辑
# ======================

def naive_detect_algo(txt: str) -> str:
    t = txt.lower()
    if "aes" in t:
        return "AES"
    if "sha-1" in t or "sha1" in t:
        return "SHA1"
    if "sha-3" in t or "sha3" in t:
        return "SHA3"
    return "AES"


def build_plan_from_template(algo: str) -> dict:
    if algo == "AES":
        return TEMPLATE_AES
    elif algo == "SHA1":
        return TEMPLATE_SHA1
    else:
        return TEMPLATE_AES


# ======================
# 4.  LLM 生成 + 自动修 plan
# ======================

def _build_prompts(
    spec_txt: str,
    few_shot_yaml: str,
    algo: str,
    last_issues: Optional[List[str]],
    attempt: int,
    max_attempts: int,
):
    """根据当前 attempt / 上次 issues 生成 system_prompt & user_prompt。"""

    system_prompt = f"""
你是资深硬件架构工程师，负责为加密算法生成模块化的 YAML 计划 (plan.yaml)。

要求：
1. 输出必须是合法 YAML，不要使用 ``` 代码块，不要加额外说明文字。
2. 顶层字段必须包含：top, algo, params, bundles, interfaces, dag, connections, verification, security。
3. interfaces 至少要包含 in/out/key（对于 AES），并且每个接口都包含 dir / type / payload 字段。
4. dag 中的每个节点必须包含 name / kind / latency 字段，必要时包含 in / out。
5. connections 是一个二维列表，每个元素是 [src, dst]，如 ["InitRound.s0", "Round1.in"]。
6. algo 字段必须设置为 {algo}。
    """.strip()

    issues_text = ""
    if last_issues:
        joined = "\n".join(f"- {m}" for m in last_issues)
        issues_text = f"""
上一次生成的 plan 存在以下结构性问题（已经由自动验证器检查得出）：
{joined}

请在新的输出中修正这些问题，生成一个完整、合法的 YAML。
""".rstrip()

    user_prompt = f"""
自然语言规范如下：
------------------------
{spec_txt}
------------------------

下面是一个参考的 AES-128 计划（只作为结构示例，你可以在此基础上做合理修改）：
------------------------
{few_shot_yaml}
------------------------

你的任务：
- 生成一个新的 YAML plan，用于 {algo} 算法的硬件实现。
- 遵守上面 system prompt 中列出的所有约束。
- 只输出纯 YAML 内容，不要使用 ```yaml 代码块，也不要输出解释性文字。

当前是第 {attempt}/{max_attempts} 次尝试。
{issues_text}
    """.rstrip()

    return system_prompt, user_prompt


def build_plan_with_llm(
    spec_txt: str,
    algo: str,
    max_attempts: int = 3,
) -> Dict:
    """
    用 LLM 根据自然语言规范生成 YAML plan。

    流程：
      1) 调 LLM 生成 YAML 文本
      2) safe_load 成 dict
      3) 若有 validate_plan，则检查：
         - ok=True  : 直接返回
         - ok=False : 把 issues 丢回 prompt，重试
      4) 尝试 max_attempts 次仍失败 -> 回退到模板 plan
    """

    if client is None:
        print("[WARN] LLM client not found. Falling back to template plan.")
        return build_plan_from_template(algo)

    # few-shot 示例：优先用 ref，如果没有就用模板 dump
    # example_path = os.path.join(PROJECT_ROOT, "spec", "aes128_ref.yaml")
    # if os.path.exists(example_path):
    #     with open(example_path, "r", encoding="utf-8") as f:
    #         few_shot = f.read()
        # 载入示例 plan 作为 few-shot
    if algo == "AES":
        example_path = "spec/aes128_ref.yaml"
    elif algo == "SHA1":
        example_path = "spec/sha1_ref.yaml"
    else:
        example_path = "spec/aes128_ref.yaml"

    few_shot = ""
    if os.path.exists(example_path):
        few_shot = open(example_path, "r", encoding="utf-8").read()

    else:
        few_shot = yaml.safe_dump(
            build_plan_from_template(algo),
            sort_keys=False,
            allow_unicode=True,
        )

    last_issues: Optional[List[str]] = None

    for attempt in range(1, max_attempts + 1):
        print(f"[LLM] attempt {attempt}/{max_attempts} ...")

        system_prompt, user_prompt = _build_prompts(
            spec_txt=spec_txt,
            few_shot_yaml=few_shot,
            algo=algo,
            last_issues=last_issues,
            attempt=attempt,
            max_attempts=max_attempts,
        )

        # 调 LLM
        yaml_text = client.generate(system_prompt, user_prompt)

        # 保存原始输出，便于 debug
        debug_out = os.path.join(
            PROJECT_ROOT, "spec", f"aes128_llm_attempt_{attempt}.raw"
        )
        try:
            with open(debug_out, "w", encoding="utf-8") as f:
                f.write(yaml_text)
        except Exception as e:
            print(f"[WARN] failed to write debug raw output: {e}")

        # parse YAML
        try:
            plan = yaml.safe_load(yaml_text) or {}
        except Exception as e:
            print(f"[WARN] YAML parse error on attempt {attempt}: {e}")
            last_issues = [f"YAML parse error: {e}"]
            continue

        # 若没有 validator，就直接返回
        if validate_plan is None:
            print("[WARN] validate_plan not available, skipping structural checks.")
            return plan

        ok, issues = validate_plan(plan)
        if ok:
            print(f"[LLM] plan validated successfully at attempt {attempt}.")
            return plan
        else:
            print(f"[LLM] plan failed validation at attempt {attempt}, issues:")
            for m in issues:
                print("  -", m)
            last_issues = issues
            # 继续下一次 attempt

    print(f"[WARN] LLM failed to produce a valid plan after {max_attempts} attempts.")
    print("[WARN] Fallback to template plan.")
    return build_plan_from_template(algo)


# ======================
# 5. MAIN
# ======================

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--spec_txt", required=True)
    ap.add_argument("--out", required=True)
    ap.add_argument(
        "--use_llm",
        action="store_true",
        help="使用 LLM 生成 plan，而不是使用模板",
    )
    args = ap.parse_args()

    with open(args.spec_txt, "r", encoding="utf-8") as f:
        spec = f.read()
    algo = naive_detect_algo(spec)

    if args.use_llm:
        print("[INFO] Using LLM to_generate plan...")
        plan = build_plan_with_llm(spec, algo)
    else:
        print("[INFO] Using template plan...")
        plan = build_plan_from_template(algo)

    with open(args.out, "w", encoding="utf-8") as f:
        yaml.safe_dump(plan, f, sort_keys=False, allow_unicode=True)

    print(f"[ok] plan written: {args.out} (algo={algo}, use_llm={args.use_llm})")


if __name__ == "__main__":
    main()
