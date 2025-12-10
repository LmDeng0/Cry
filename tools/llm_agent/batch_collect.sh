#!/usr/bin/env bash
set -e

cd /home/crypto-chisel-llm

# 配置：每个算子目标样本数
TARGET_SUBBYTES=70
TARGET_SHIFTROWS=10

function count_samples() {
  local op="$1"
  local jsonl="datasets/op_level/${op,,}/op_trace.jsonl"
  if [ -f "$jsonl" ]; then
    wc -l < "$jsonl"
  else
    echo 0
  fi
}

# 1) SubBytes
while true; do
  cur=$(count_samples "SubBytes")
  echo "[batch] SubBytes current samples: $cur / $TARGET_SUBBYTES"
  if [ "$cur" -ge "$TARGET_SUBBYTES" ]; then
    echo "[batch] SubBytes done."
    break
  fi

  # 每次 from-scratch 跑一轮，允许最多 5 次 repair
  python3 -m tools.llm_agent.op_loop --op SubBytes --max-iters 5 --from-scratch || true
done

# 2) ShiftRows
while true; do
  cur=$(count_samples "ShiftRows")
  echo "[batch] ShiftRows current samples: $cur / $TARGET_SHIFTROWS"
  if [ "$cur" -ge "$TARGET_SHIFTROWS" ]; then
    echo "[batch] ShiftRows done."
    break
  fi

  python3 -m tools.llm_agent.op_loop --op ShiftRows --max-iters 5 --from-scratch || true
done

echo "[batch] All targets reached."
