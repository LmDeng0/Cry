#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Plan validator for CryptoChisel-LLM.

Usage:
    python generator/plan_validate.py spec/aes128_auto.yaml

Output:
    JSON to stdout, e.g.:
      {"ok": true, "issues": []}
      {"ok": false, "issues": ["interface in missing type", ...]}

并在 ok == true 时额外打印一行:
      [ok] plan structure validated successfully
"""

import sys
import json
from typing import Dict, List, Tuple, Set

import yaml


def load_plan(path: str) -> Dict:
    try:
        with open(path, "r", encoding="utf-8") as f:
            return yaml.safe_load(f) or {}
    except Exception as e:
        return {"__load_error__": str(e)}


def basic_structure_checks(plan: Dict, issues: List[str]) -> None:
    """检查顶层 key 是否存在，以及类型大致合理。"""

    required_top_keys = ["top", "algo", "params", "bundles", "interfaces", "dag", "connections"]
    for k in required_top_keys:
        if k not in plan:
            issues.append(f"missing top-level key '{k}'")

    # 如果连基本结构都不全，后面的检查也没太大意义，可以快速返回
    if issues:
        return

    # params
    if not isinstance(plan.get("params"), dict):
        issues.append("params should be a mapping (dict)")

    # bundles
    if not isinstance(plan.get("bundles"), dict):
        issues.append("bundles should be a mapping (dict)")

    # interfaces
    interfaces = plan.get("interfaces")
    if not isinstance(interfaces, dict) or not interfaces:
        issues.append("interfaces should be a non-empty mapping")
    else:
        for iface_name, iface in interfaces.items():
            if not isinstance(iface, dict):
                issues.append(f"interface {iface_name} should be a mapping")
                continue
            if "dir" not in iface:
                issues.append(f"interface {iface_name} missing dir")
            if "type" not in iface:
                issues.append(f"interface {iface_name} missing type")
            if "payload" not in iface:
                issues.append(f"interface {iface_name} missing payload")

    # dag
    dag = plan.get("dag")
    if not isinstance(dag, list) or not dag:
        issues.append("dag must be a non-empty list")

    # connections
    conns = plan.get("connections")
    if not isinstance(conns, list) or not conns:
        issues.append("connections must be a non-empty list")


def build_index(plan: Dict) -> Tuple[Dict[str, Dict], Set[str]]:
    """
    构建两个索引：
      - modules: name -> dag 节点
      - iface_names: 顶层接口名字集合 (in / out / key / 未来其他)
    """
    modules = {}
    for node in plan.get("dag", []) or []:
        name = node.get("name")
        if isinstance(name, str):
            modules[name] = node

    interfaces = plan.get("interfaces") or {}
    iface_names = set(interfaces.keys())

    return modules, iface_names


def parse_endpoint(ep: str) -> Tuple[str, str]:
    """
    解析 connection endpoint:
      - "InitRound.s0" -> ("InitRound", "s0")
      - "in"           -> ("in", None)   (顶层接口)
    """
    if "." in ep:
        mod, port = ep.split(".", 1)
        return mod.strip(), port.strip()
    else:
        return ep.strip(), None


def connection_checks(plan: Dict, issues: List[str]) -> None:
    """检查 connections 中涉及的接口/模块/端口是否存在。"""

    modules, iface_names = build_index(plan)
    conns = plan.get("connections") or []

    # 预先把每个模块的 in/out 端口整理出来（这里的 in/out 是“流标签”，不是主端口名）
    module_ports = {}
    for name, node in modules.items():
        ins = node.get("in") or []
        outs = node.get("out") or []
        if not isinstance(ins, list):
            ins = []
        if not isinstance(outs, list):
            outs = []
        module_ports[name] = {
            "in": set(str(x) for x in ins),
            "out": set(str(x) for x in outs),
        }

    for idx, conn in enumerate(conns):
        if not isinstance(conn, list) or len(conn) != 2:
            issues.append(f"connection[{idx}] must be a 2-element list, got {conn}")
            continue

        src, dst = conn
        for role, ep in [("src", src), ("dst", dst)]:
            if not isinstance(ep, str):
                issues.append(f"connection[{idx}] {role} endpoint must be string, got {ep!r}")
                continue

            name, port = parse_endpoint(ep)

            # 顶层接口：直接检查 interfaces 里有没有
            if port is None:
                if name not in iface_names:
                    issues.append(
                        f"connection[{idx}] {role} endpoint '{ep}' refers to unknown top-level interface '{name}'"
                    )
                continue

            # 模块端口
            if name not in modules:
                issues.append(
                    f"connection[{idx}] {role} endpoint '{ep}' refers to unknown module '{name}'"
                )
                continue

            # 特例：所有模块都隐含有 in/out 这两个“主端口”，不强制写在 dag.in/out 里
            if port in ("in", "out"):
                continue

            ports = module_ports.get(name, {"in": set(), "out": set()})
            if port not in ports["in"] and port not in ports["out"]:
                issues.append(
                    f"connection[{idx}] {role} endpoint '{ep}' refers to unknown port '{port}' of module '{name}'"
                )


def dag_cycle_checks(plan: Dict, issues: List[str]) -> None:
    """
    检查 dag 中是否存在循环。
    我们根据 connections 推导模块之间的有向边：
      - src_module -> dst_module
    顶层接口（如 'in', 'out', 'key'）忽略。
    """
    modules, iface_names = build_index(plan)
    conns = plan.get("connections") or []

    # 构建有向图
    graph = {name: set() for name in modules.keys()}

    for conn in conns:
        if not isinstance(conn, list) or len(conn) != 2:
            continue
        src, dst = conn
        src_name, src_port = parse_endpoint(src)
        dst_name, dst_port = parse_endpoint(dst)

        # 只在模块之间连边
        if src_name in modules and dst_name in modules:
            graph[src_name].add(dst_name)

    # DFS 检测环
    visited = set()
    stack = set()

    def dfs(u: str) -> bool:
        visited.add(u)
        stack.add(u)
        for v in graph.get(u, []):
            if v not in visited:
                if dfs(v):
                    return True
            elif v in stack:
                # 发现回路
                return True
        stack.remove(u)
        return False

    cycle_nodes = []
    for node in graph.keys():
        if node not in visited:
            if dfs(node):
                cycle_nodes.append(node)

    if cycle_nodes:
        issues.append(f"dag has cycle(s) involving module(s): {', '.join(sorted(set(cycle_nodes)))}")


def aes_specific_checks(plan: Dict, issues: List[str]) -> None:
    """
    对 AES 类算法做一些轻量的语义检查：
      - 至少 1 个 KeySchedule
      - 至少 1 个 FinalRound
      - 至少 1 个 StdRound
    """
    algo = str(plan.get("algo", "")).upper()
    if "AES" not in algo:
        return  # 非 AES，暂不检查

    dag = plan.get("dag") or []
    kinds = [str(node.get("kind", "")).strip() for node in dag]

    if "KEYSCHEDULE" not in [k.upper() for k in kinds]:
        issues.append("AES plan missing any node with kind 'KeySchedule'")

    if "FINALROUND" not in [k.upper() for k in kinds]:
        issues.append("AES plan missing any node with kind 'FinalRound'")

    std_round_cnt = sum(1 for k in kinds if k.upper() == "STDROUND")
    if std_round_cnt == 0:
        issues.append("AES plan should contain at least one 'StdRound' node")

def sha1_specific_checks(plan: Dict, issues: List[str]) -> None:
    """
    对 SHA-1 做一些语义检查：
      - 不应该有 'key' 这种顶层接口（SHA-1 是无密钥哈希）
      - 不应该有任何节点把 'key' 写在 in 列表里
    """
    algo = str(plan.get("algo", "")).upper()
    if "SHA1" not in algo:
        return  # 不是 SHA1 就直接返回

    interfaces = plan.get("interfaces") or {}
    if "key" in interfaces:
        issues.append("SHA1 plan should not define a 'key' interface (SHA-1 is unkeyed hash).")

    dag = plan.get("dag") or []
    for node in dag:
        name = node.get("name", "?")
        ins = node.get("in") or []
        ins = [str(x) for x in ins]
        if "key" in ins:
            issues.append(f"SHA1 node '{name}' should not consume 'key' as input.")



# ================= 新增：可复用的验证函数 =================

def validate_plan(plan: Dict) -> Tuple[bool, List[str]]:
    """
    给其它 Python 模块调用的验证接口。

    输入:
        plan: 已经 parse 成 dict 的 plan（来自 yaml.safe_load）

    输出:
        (ok, issues)
    """
    issues: List[str] = []

    if "__load_error__" in plan:
        issues.append(f"YAML load error: {plan['__load_error__']}")
        return False, issues

    # 基本结构
    basic_structure_checks(plan, issues)

    # 只有在有基本结构时才做更深入的检查
    if not issues:
        connection_checks(plan, issues)
        dag_cycle_checks(plan, issues)
        aes_specific_checks(plan, issues)
        sha1_specific_checks(plan, issues)

    ok = len(issues) == 0
    return ok, issues


# ================= CLI main =================

def main(argv: List[str]) -> None:
    if len(argv) != 2:
        print("Usage: python generator/plan_validate.py <plan.yaml>", file=sys.stderr)
        sys.exit(1)

    path = argv[1]
    plan = load_plan(path)
    ok, issues = validate_plan(plan)

    result = {"ok": ok, "issues": issues}
    print(json.dumps(result, ensure_ascii=False, indent=2))

    if ok:
        print("[ok] plan structure validated successfully")


if __name__ == "__main__":
    main(sys.argv)
