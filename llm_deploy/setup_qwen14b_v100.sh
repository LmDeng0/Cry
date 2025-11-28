#!/bin/bash
set -e

###############################################
# 0. 初始化目录（使用当前目录作为工作目录）
###############################################

WORKDIR=$(pwd)
echo "[INFO] 工作目录: $WORKDIR"

mkdir -p "$WORKDIR/hf_cache"
mkdir -p "$WORKDIR/vllm_cache"
mkdir -p "$WORKDIR/models"
mkdir -p "$WORKDIR/venv"

###############################################
# 1. 安装基础软件
###############################################
echo "[INFO] 安装基础工具..."

sudo apt update
sudo apt install -y git git-lfs wget curl vim htop unzip

git lfs install

###############################################
# 2. 创建 Python 虚拟环境
###############################################
echo "[INFO] 创建 Python 虚拟环境..."

python3 -m venv "$WORKDIR/vllm_env"
source "$WORKDIR/vllm_env/bin/activate"

###############################################
# 3. 设置缓存环境变量
###############################################
echo "[INFO] 写入缓存环境变量..."

echo "export HF_HOME=$WORKDIR/hf_cache" >> ~/.bashrc
echo "export TRANSFORMERS_CACHE=$WORKDIR/hf_cache" >> ~/.bashrc
echo "export HUGGINGFACE_HUB_CACHE=$WORKDIR/hf_cache" >> ~/.bashrc
echo "export VLLM_WORKDIR=$WORKDIR/vllm_cache" >> ~/.bashrc

export HF_HOME="$WORKDIR/hf_cache"
export TRANSFORMERS_CACHE="$WORKDIR/hf_cache"
export HUGGINGFACE_HUB_CACHE="$WORKDIR/hf_cache"
export VLLM_WORKDIR="$WORKDIR/vllm_cache"

###############################################
# 4. 安装 PyTorch + vLLM + 依赖
###############################################
echo "[INFO] 安装 PyTorch 和 vLLM..."

pip install --upgrade pip

# CUDA 12.1 适配 V100
pip install "torch==2.4.0" "torchvision" "torchaudio" \
    --index-url https://download.pytorch.org/whl/cu121

# vLLM + 依赖
pip install "vllm==0.5.4" transformers accelerate sentencepiece

# outlines 的依赖
pip install --no-cache-dir git+https://github.com/NICTA/pyairports.git

###############################################
# 5. 下载 Qwen2.5-Coder-14B-Instruct
###############################################
echo "[INFO] 下载 Qwen2.5-Coder-14B-Instruct..."

cd "$WORKDIR/models"
mkdir -p qwen14b
cd qwen14b

git lfs install
git clone https://huggingface.co/Qwen/Qwen2.5-Coder-14B-Instruct .

###############################################
# 6. 创建启动脚本（2 × V100）
###############################################
echo "[INFO] 创建 vLLM 启动脚本..."

cd "$WORKDIR"

cat > start_qwen14b.sh << EOF
#!/bin/bash

# 激活环境
source "$WORKDIR/vllm_env/bin/activate"

# 缓存目录
export HF_HOME="$WORKDIR/hf_cache"
export TRANSFORMERS_CACHE="$WORKDIR/hf_cache"
export HUGGINGFACE_HUB_CACHE="$WORKDIR/hf_cache"
export VLLM_WORKDIR="$WORKDIR/vllm_cache"

MODEL_PATH="$WORKDIR/models/qwen14b"

# 启动 vLLM（V100 需要 FP16）
vllm serve "\$MODEL_PATH" \
  --host 0.0.0.0 \
  --port 6006 \
  --tensor-parallel-size 2 \
  --dtype=half \
  --max-model-len 8192 \
  --gpu-memory-utilization 0.90 \
  --enforce-eager
EOF

chmod +x start_qwen14b.sh

###############################################
# 7. 完成
###############################################
echo ""
echo "==============================="
echo "  Qwen2.5-Coder-14B 环境部署完成！"
echo "==============================="
echo ""
echo "启动模型请执行："
echo "  bash start_qwen14b.sh"
echo ""
echo "启动后测试接口（第二个 SSH 终端）："
echo "  curl http://127.0.0.1:6006/v1/models"
echo ""
