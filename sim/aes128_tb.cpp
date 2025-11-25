#include "verilated.h"
#include "VAes128Core.h"
#include <cstdio>
#include <cstdint>

static inline void step(VAes128Core* top, int n = 1) {
  for (int i = 0; i < n; i++) {
    top->clock = 0; top->eval();
    top->clock = 1; top->eval();
  }
}

static inline void pokeKey(VAes128Core* top, const uint32_t KEY[4]) {
  top->io_key_bits[0] = KEY[0];
  top->io_key_bits[1] = KEY[1];
  top->io_key_bits[2] = KEY[2];
  top->io_key_bits[3] = KEY[3];
}

static inline void pokePT(VAes128Core* top, const uint32_t PT[4]) {
  top->io_in_bits_bits[0] = PT[0];
  top->io_in_bits_bits[1] = PT[1];
  top->io_in_bits_bits[2] = PT[2];
  top->io_in_bits_bits[3] = PT[3];
}

static inline void readCT(VAes128Core* top, uint32_t C[4]) {
  C[0] = top->io_out_bits_bits[0];
  C[1] = top->io_out_bits_bits[1];
  C[2] = top->io_out_bits_bits[2];
  C[3] = top->io_out_bits_bits[3];
}

int main(int argc, char** argv) {
  Verilated::commandArgs(argc, argv);
  auto* top = new VAes128Core;

  // -------- 0) 复位 --------
  top->reset = 1;
  top->io_in_valid  = 0;
  top->io_out_ready = 0;
  step(top, 5);
  top->reset = 0;
  step(top, 2);

  // -------- 1) 固定 KAT 向量 --------
  // key = 000102030405060708090A0B0C0D0E0F
  // pt  = 00112233445566778899AABBCCDDEEFF
  // ct  = 69C4E0D86A7B0430D8CDB78070B4C55A
  const uint32_t KEY[4] = {0x0c0d0e0f, 0x08090a0b, 0x04050607, 0x00010203};
  const uint32_t PT [4] = {0xccddeeff, 0x8899aabb, 0x44556677, 0x00112233};
  const uint32_t EXP[4] = {0x70b4c55a, 0xd8cdb780, 0x6a7b0430, 0x69c4e0d8};

  top->io_out_ready = 1;   // 总是准备好接收输出
  pokeKey(top, KEY);
  pokePT(top, PT);

  // =========================================================
  // A) 单次加密：测量“输入握手 → 首次 out.valid”为止的延迟（cycles）
  // =========================================================
  // 1) 发送一个 block（保持 in_valid=1，直到看到 out.valid=1）
  top->io_in_valid = 1;

  // 等待 in.ready==1（通常立刻为 1）
  int guard = 0;
  while (!top->io_in_ready && guard < 200) { step(top); guard++; }

  // 完成输入握手后，开始计数
  int latency_cycles = 0;
  // 先走一拍，确保握手完成
  step(top, 1);

  // 如果此时已经有 out.valid，则延迟=0；否则继续等待
  if (!top->io_out_valid) {
    for (; latency_cycles < 5000; latency_cycles++) {
      step(top, 1);
      if (top->io_out_valid) break;
    }
  }
  // 注意：上面的计数方式会在 out.valid 出现那一拍退出，此时 latency_cycles=从握手拍后到首次 out.valid 的拍数
  // 对于非流水（组合）实现，通常是 0 或 1；对 10 轮流水的 AES-128，大概 ~11。

  if (!top->io_out_valid) {
    std::printf("[LAT] No output within 5000 cycles\n");
    delete top; return 2;
  }

  uint32_t C[4];
  readCT(top, C);
  std::printf("[LAT] CT = %08x %08x %08x %08x, latency=%d cycles\n",
              C[3], C[2], C[1], C[0], latency_cycles);

  bool match = (C[0]==EXP[0]) && (C[1]==EXP[1]) && (C[2]==EXP[2]) && (C[3]==EXP[3]);
  if (!match) {
    std::printf("[LAT] Mismatch! expected %08x %08x %08x %08x\n",
                EXP[3], EXP[2], EXP[1], EXP[0]);
    delete top; return 3;
  }

  // 拉低 in_valid，收个尾
  top->io_in_valid = 0;
  step(top, 2);

  // =========================================================
  // B) 连续流：测量吞吐（ops/cycle）与相邻输出间隔
  // =========================================================
  const int M = 32;              // 连续发送的块数（可调大一点）
  int sent = 0, got = 0;
  int cycles = 0;

  // 为了简单，这里重复发送同一个 PT；如果需要，也可以每次 PT++ 做区分
  // 进入 steady-state：每拍都 step，一边看 in.ready/in.valid，一边统计 out.valid
  while (got < M && cycles < 20000) {
    // 在本拍开始前布置输入（Decoupled 语义：组合看 in_valid & in_bits）
    if (sent < M && top->io_in_ready) {
      pokePT(top, PT);      // 也可以按 sent 改变明文
      top->io_in_valid = 1; // 放一个新 block
      sent++;
    } else if (sent >= M) {
      top->io_in_valid = 0; // 不再投喂
    }

    // 推进一拍
    step(top, 1);
    cycles++;

    // 统计输出（只看 out.valid，因为 out.ready=1，意味着每出现一次 valid 就完成一次“消费”）
    if (top->io_out_valid) {
      got++;
    }
  }

  if (got < M) {
    std::printf("[THR] Not enough outputs: got=%d within %d cycles (sent=%d)\n", got, cycles, sent);
    delete top; return 4;
  }

  // 理想吞吐：流水实现 steady-state 下 ~1.0 ops/cycle；非流水可能也接近 1（组合路径），但 Fmax 更低
  double tput = (double)got / (double)cycles;
  std::printf("[THR] got=%d in %d cycles, throughput=%.4f ops/cycle\n", got, cycles, tput);

  delete top;
  return 0;
}
