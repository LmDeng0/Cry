#!/usr/bin/env bash
set -e
# source venv-crypto/bin/activate
export CRYPTO_LLM_BACKEND=http
export CRYPTO_LLM_BASE_URL="http://localhost:6006/v1"
export CRYPTO_LLM_API_KEY="test-token"
export CRYPTO_LLM_MODEL="Qwen/Qwen2.5-7B-Instruct"

for i in {1..20}; do
  echo "=== round $i ==="
  python generator/plan_from_text.py \
    --spec_txt spec/aes_spec.txt \
    --out spec/aes128_llm_$i.yaml \
    --use_llm
  python generator/plan_validate.py spec/aes128_llm_$i.yaml || {
    echo "plan $i 验证失败"; exit 1;
  }
done
