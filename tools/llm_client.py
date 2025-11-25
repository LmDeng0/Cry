# tools/llm_client.py
"""
统一的 LLM 调用封装，让其它模块只需要：
    from tools.llm_client import client
    text = client.generate(system_prompt, user_prompt)

支持两种 backend：
  - dummy  : 不实际调用 LLM，直接返回模板 AES plan（方便本地开发/跑通流程）
  - http   : 调用一个 OpenAI-compatible HTTP 接口（比如你自建 vLLM）

环境变量：
  CRYPTO_LLM_BACKEND   = dummy | http        （默认 dummy）
  # http 模式下，二选一：
  #   1）推荐：CRYPTO_LLM_BASE_URL，例如 http://localhost:6006/v1
  #      endpoint 自动拼成 BASE_URL + "/chat/completions"
  #   2）或者：CRYPTO_LLM_ENDPOINT，例如 http://localhost:6006/v1/chat/completions
  CRYPTO_LLM_API_KEY   = http 模式下的 API key（vLLM 随便填，比如 test-token）
  CRYPTO_LLM_MODEL     = http 模式下的模型名  （例如: Qwen/Qwen2.5-7B-Instruct）
"""

import os
import json
from typing import Optional

import yaml

try:
    import requests
except ImportError:
    requests = None


class CryptoLLMClient:
    def generate(self, system_prompt: str, user_prompt: str) -> str:
        raise NotImplementedError


# =============== Dummy backend：不真正调 LLM ===============

class DummyLLMClient(CryptoLLMClient):
    """本地开发用：不调 LLM，直接返回一个固定的 AES plan YAML。"""

    def __init__(self):
        # 尽量读现有 plan 作为“假输出”，保证后续 pipeline 完全兼容
        self.sample_yaml_path = "spec/aes128_auto.yaml"

    def generate(self, system_prompt: str, user_prompt: str) -> str:
        print("[LLM] Dummy backend: return sample AES plan (no real LLM call)")
        if os.path.exists(self.sample_yaml_path):
            with open(self.sample_yaml_path, "r", encoding="utf-8") as f:
                return f.read()

        # 兜底：给一个最小的合法 YAML
        plan = {
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
            "dag": [],
            "connections": [],
        }
        return yaml.safe_dump(plan, sort_keys=False, allow_unicode=True)


# =============== HTTP backend：OpenAI-compatible 接口 ===============

class HttpLLMClient(CryptoLLMClient):
    """
    对接 OpenAI-compatible Chat Completion API（vLLM / OpenAI 等）
    """

    def __init__(self):
        # 这里 CRYPTO_LLM_BASE_URL 只作为 "base"，例如: http://localhost:6006/v1
        base = os.environ.get("CRYPTO_LLM_BASE_URL", "").strip().rstrip("/")
        if not base:
            raise RuntimeError("CRYPTO_LLM_BASE_URL is not set for HttpLLMClient")

        # 真正的 chat completions endpoint
        self.endpoint = base + "/chat/completions"

        self.api_key  = os.environ.get("CRYPTO_LLM_API_KEY", "").strip()
        self.model    = os.environ.get("CRYPTO_LLM_MODEL", "").strip() or "gpt-4.1"

        # 生成 token 上限，可通过环境变量调节
        self.max_tokens = int(os.environ.get("CRYPTO_LLM_MAX_TOKENS", "512"))

        if not self.api_key:
            raise RuntimeError("CRYPTO_LLM_API_KEY is not set for HttpLLMClient")
        if requests is None:
            raise RuntimeError("Python package 'requests' is required for HttpLLMClient")

    def generate(self, system_prompt: str, user_prompt: str) -> str:
        print(f"[LLM] Http backend: POST {self.endpoint} (model={self.model})")

        headers = {
            "Authorization": f"Bearer {self.api_key}",
            "Content-Type": "application/json",
        }
        payload = {
            "model": self.model,
            "messages": [
                {"role": "system", "content": system_prompt},
                {"role": "user",   "content": user_prompt},
            ],
            "temperature": 0.0,
            "max_tokens": self.max_tokens,
        }

        timeout_sec = float(os.environ.get("CRYPTO_LLM_TIMEOUT", "600"))

        resp = requests.post(
            self.endpoint,
            headers=headers,
            data=json.dumps(payload),
            timeout=timeout_sec,
        )
        if resp.status_code != 200:
            raise RuntimeError(f"LLM HTTP error {resp.status_code}: {resp.text}")

        data = resp.json()
        try:
            content = data["choices"][0]["message"]["content"]
        except Exception as e:
            raise RuntimeError(f"Unexpected LLM response format: {data}") from e

        return content



def _build_client_from_env() -> CryptoLLMClient:
    backend = os.environ.get("CRYPTO_LLM_BACKEND", "dummy").strip().lower()
    print(f"[LLM] Backend = {backend}")

    if backend in ("dummy", "", None):
        return DummyLLMClient()
    elif backend == "http":
        return HttpLLMClient()
    else:
        print(f"[LLM] Unknown backend '{backend}', fallback to dummy.")
        return DummyLLMClient()


# 对外暴露的单例
client: CryptoLLMClient = _build_client_from_env()
