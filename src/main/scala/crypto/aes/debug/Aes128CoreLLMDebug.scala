// src/main/scala/crypto/aes/llm/Aes128CoreLLMDebug.scala
package crypto.aes.llm

import chisel3._
import chisel3.util._
import crypto.common._
import crypto.aes._

/**
  * 调试版 AES-128 核心：
  *  - 功能等价于 Aes128CoreLLM
  *  - 额外导出：
  *      state0_dbg        : Round0 之后的状态（AddRoundKey 之后）
  *      state1_sub_dbg    : Round1 SubBytes 之后
  *      state1_sh_dbg     : Round1 ShiftRows 之后
  *      state1_mix_dbg    : Round1 MixColumns 之后
  *      states_dbg[0..8]  : Round1..Round9 每轮之后的状态
  *      final_dbg         : FinalRound 之后的状态（密文）
  *      rks_dbg[0..10]    : 所有轮密钥
  */
class Aes128CoreLLMDebug(p: CryptoParams) extends Module {
  val io = IO(new Bundle {
    val in  = Flipped(Decoupled(new Block(p)))
    val key = Input(new Key(p))
    val out = Decoupled(new Block(p))

    // Debug ports
    val state0_dbg      = Output(UInt(128.W))
    val state1_sub_dbg  = Output(UInt(128.W))
    val state1_sh_dbg   = Output(UInt(128.W))
    val state1_mix_dbg  = Output(UInt(128.W))
    val states_dbg      = Output(Vec(9, UInt(128.W))) // Round1..Round9
    val final_dbg       = Output(UInt(128.W))
    val rks_dbg         = Output(Vec(11, UInt(128.W)))
  })

  require(p.BLOCK_W == 128, "AES-128 block width must be 128")
  require(p.KEY_W   == 128, "This core is AES-128 only (KEY_W=128)")
  require(p.ROUNDS  == 10,  "This core is AES-128 only (ROUNDS=10)")

  // ---------------- KeySchedule: 生成 rk[0..10] ----------------
  val ks = Module(new KeySchedule(p))
  // 根据你的 KeySchedule 接口，这里是一个 Key(p) 的直连
  ks.io.keyIn := io.key

  // 导出所有轮密钥
  for (i <- 0 to 10) {
    io.rks_dbg(i) := ks.io.rks(i).bits
  }

  // ---------------- Round 0: AddRoundKey ----------------
  val state0 = Wire(UInt(128.W))
  state0 := io.in.bits.bits ^ ks.io.rks(0).bits
  io.state0_dbg := state0

  // ---------------- Round 1: 明确展开 + Debug ----------------
  val sb1  = Module(new SubBytesLLM)
  val sh1  = Module(new ShiftRowsLLM)
  val mc1  = Module(new MixColumnsLLM)
  val ark1 = Module(new AesAddRoundKeyLLM)

  sb1.io.state_in   := state0
  val state1_sub    = sb1.io.state_out
  sh1.io.state_in   := state1_sub
  val state1_sh     = sh1.io.state_out
  mc1.io.state_in   := state1_sh
  val state1_mix    = mc1.io.state_out
  ark1.io.in_state  := state1_mix
  ark1.io.in_round  := ks.io.rks(1).bits
  val state1        = ark1.io.out_state

  io.state1_sub_dbg := state1_sub
  io.state1_sh_dbg  := state1_sh
  io.state1_mix_dbg := state1_mix

  // ---------------- Round2..9: 使用 AesRoundLLM 链接 ----------------
  val roundStates = Wire(Vec(9, UInt(128.W)))
  roundStates(0) := state1 // Round1

  for (i <- 1 until 9) {
    val r = Module(new AesRoundLLM(p))
    r.io.state_in  := roundStates(i - 1)
    r.io.round_key := ks.io.rks(i + 1).bits // rk[2]..rk[9]
    roundStates(i) := r.io.state_out
  }

  for (i <- 0 until 9) {
    io.states_dbg(i) := roundStates(i)
  }

  // ---------------- FinalRound: SubBytes + ShiftRows + AddRoundKey -------------
  val subFinal  = Module(new SubBytesLLM)
  val shFinal   = Module(new ShiftRowsLLM)
  val addkFinal = Module(new AesAddRoundKeyLLM)

  subFinal.io.state_in   := roundStates(8)         // Round9 输出
  shFinal.io.state_in    := subFinal.io.state_out
  addkFinal.io.in_state  := shFinal.io.state_out
  addkFinal.io.in_round  := ks.io.rks(10).bits     // rk[10]

  val finalState = addkFinal.io.out_state
  io.final_dbg   := finalState

  // ---------------- Decoupled 协议：1-cycle combinational --------------
  io.in.ready      := true.B
  io.out.valid     := io.in.valid
  io.out.bits.bits := finalState
}
