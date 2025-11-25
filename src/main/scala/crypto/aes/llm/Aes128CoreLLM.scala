// // package crypto.aes.llm_rounds

// // import chisel3._
// // import chisel3.util._
// // import crypto.common._
// // import crypto.aes._
// // import crypto.aes.llm._

// // /** LLM 版 AES-128 Core：
// //   * 使用我们已经通过测试的 4 个算子：
// //   *   - SubBytesLLM
// //   *   - ShiftRowsLLM
// //   *   - MixColumnsLLM
// //   *   - AesAddRoundKeyLLM
// //   *
// //   * 并复用现有的 KeySchedule.scala 生成轮密钥，做“初始轮 + 第1轮”组合逻辑。
// //   */
// // class Aes128CoreLLM extends Module {
// //   // 固定 AES-128 配置
// //   val p = CryptoParams(
// //     BLOCK_W = 128,
// //     KEY_W   = 128,
// //     ROUNDS  = 10
// //   )

// //   // 通用 IO：in/out 都是 Block(p)
// //   val io = IO(new CryptoIO(p))

// //   // ------------ KeySchedule（使用你现有的 KeySchedule.scala） ------------
// //   val ks = Module(new KeySchedule(p))

// //   // 输入块：这里简单地把 in.bits 同时当作 state 和 key
// //   // （如果你后面有独立的 key 接口，再改成 io.key.bits 即可）
// //   val state0 = io.in.bits.bits      // 128-bit 明文
// //   val key0   = io.in.bits.bits      // 暂时把同一个 128b 当 key 使用

// //   // 将 key0 送入 KeySchedule，生成 rk[0..10]
// //   ks.io.keyIn.bits := key0

// //   val rk0 = ks.io.rks(0).bits
// //   val rk1 = ks.io.rks(1).bits
// //   // 后续可以继续使用 rk2..rk10 组成完整 10 轮

// //   // ------------ 实例化 4 个 LLM 算子 ------------
// //   val sb   = Module(new SubBytesLLM)
// //   val sr   = Module(new ShiftRowsLLM)
// //   val mc   = Module(new MixColumnsLLM)
// //   val ark0 = Module(new AesAddRoundKeyLLM) // 初始 AddRoundKey
// //   val ark1 = Module(new AesAddRoundKeyLLM) // 第 1 轮 AddRoundKey

// //   // ------------ Initial AddRoundKey (Round 0) ------------
// //   ark0.io.in_state := state0
// //   ark0.io.in_round := rk0
// //   val s0 = ark0.io.out_state

// //   // ------------ Round 1: SubBytes ------------
// //   sb.io.state_in := s0
// //   val s1 = sb.io.state_out

// //   // ------------ ShiftRows ------------
// //   sr.io.state_in := s1
// //   val s2 = sr.io.state_out

// //   // ------------ MixColumns ------------
// //   mc.io.state_in := s2
// //   val s3 = mc.io.state_out

// //   // ------------ AddRoundKey (Round 1) ------------
// //   ark1.io.in_state := s3
// //   ark1.io.in_round := rk1
// //   val outState = ark1.io.out_state

// //   // ------------ 连接 IO（简单的直通握手） ------------
// //   io.out.bits.bits := outState
// //   io.out.valid     := io.in.valid
// //   io.in.ready      := io.out.ready
// // }



// // src/main/scala/crypto/aes/llm/Aes128CoreLLM.scala
// package crypto.aes.llm

// import chisel3._
// import chisel3.util._
// import crypto.common._
// import crypto.aes._

// class Aes128CoreLLM(p: CryptoParams) extends Module {
//   val io = IO(new Bundle {
//     val in  = Flipped(Decoupled(new Block(p)))
//     val key = Input(new Key(p))
//     val out = Decoupled(new Block(p))
//   })

//   require(p.BLOCK_W == 128, "AES-128 block width must be 128")
//   require(p.KEY_W   == 128, "This core is AES-128 only (KEY_W=128)")
//   require(p.ROUNDS  == 10,  "This core is AES-128 only (ROUNDS=10)")

//   // -------- KeySchedule：生成 rk[0..10] --------
//   val ks = Module(new KeySchedule(p))
//   ks.io.keyIn := io.key             // keyIn.bits 已经在 KeySchedule 里定义好

//   // -------- 初始 AddRoundKey (Round 0) --------
//   val state0 = Wire(UInt(128.W))
//   state0 := io.in.bits.bits ^ ks.io.rks(0).bits

//   // -------- 9 个标准轮 (Round 1 ~ 9) --------
//   val roundStates = Wire(Vec(9, UInt(128.W)))

//   // Round 1
//   val r1 = Module(new AesRoundLLM(p))
//   r1.io.state_in  := state0
//   r1.io.round_key := ks.io.rks(1).bits
//   roundStates(0)  := r1.io.state_out

//   // Round 2 ~ 9
//   for (i <- 1 until 9) {
//     val r = Module(new AesRoundLLM(p))
//     r.io.state_in  := roundStates(i - 1)
//     r.io.round_key := ks.io.rks(i + 1).bits // rk[2]..rk[9]
//     roundStates(i) := r.io.state_out
//   }

//   // -------- FinalRound (SubBytes + ShiftRows + AddRoundKey) --------
//   val subFinal  = Module(new SubBytesLLM)
//   val shFinal   = Module(new ShiftRowsLLM)
//   val addkFinal = Module(new AesAddRoundKeyLLM)

//   subFinal.io.state_in    := roundStates(8)        // Round 9 输出
//   shFinal.io.state_in     := subFinal.io.state_out
//   addkFinal.io.in_state   := shFinal.io.state_out
//   addkFinal.io.in_round   := ks.io.rks(10).bits    // rk[10]
//   val finalState          = addkFinal.io.out_state

//   // -------- 简单 Decoupled 协议（1-cycle 组合核） --------
//   io.in.ready        := true.B
//   io.out.valid       := io.in.valid
//   io.out.bits.bits   := finalState
// }




// src/main/scala/crypto/aes/llm/Aes128CoreLLM.scala
package crypto.aes.llm

import chisel3._
import chisel3.util._
import crypto.common._
import crypto.aes._

/**
  * AES-128 combinational core built from LLM-generated operators:
  *   - KeySchedule (reference, not from LLM)
  *   - 9 × AesRoundLLM (SubBytes+ShiftRows+MixColumns+AddRoundKey)
  *   - Final round = SubBytesLLM + ShiftRowsLLM + AesAddRoundKeyLLM
  *
  * Protocol: single-cycle combinational core
  *   - io.in.valid  = 1 时，输入明文 + 密钥 -> 1 个周期后 io.out.valid = 1 且给出密文
  */
class Aes128CoreLLM(p: CryptoParams) extends Module {
  val io = IO(new Bundle {
    val in  = Flipped(Decoupled(new Block(p)))
    val key = Input(new Key(p))
    val out = Decoupled(new Block(p))
  })

  // 参数限制：AES-128
  require(p.BLOCK_W == 128, "AES-128 block width must be 128")
  require(p.KEY_W   == 128, "This core is AES-128 only (KEY_W=128)")
  require(p.ROUNDS  == 10,  "This core is AES-128 only (ROUNDS=10)")

  // --------------------------------------------------------------------------
  // KeySchedule: 生成轮密钥 rk[0..10] (每个 128 bit)
  // --------------------------------------------------------------------------
  val ks = Module(new KeySchedule(p))
  ks.io.keyIn := io.key            // Key(p) -> KeySchedule

  // --------------------------------------------------------------------------
  // Round 0: AddRoundKey(state, rk[0])
  // --------------------------------------------------------------------------
  val state0 = Wire(UInt(128.W))
  state0 := io.in.bits.bits ^ ks.io.rks(0).bits

  // --------------------------------------------------------------------------
  // Round 1 ~ 9: 9 个标准轮 (每轮使用 AesRoundLLM)
  //   state[r] = Round(state[r-1], rk[r]) , r = 1..9
  // --------------------------------------------------------------------------
  val roundStates = Wire(Vec(9, UInt(128.W)))

  // Round 1
  val r1 = Module(new AesRoundLLM(p))
  r1.io.state_in  := state0
  r1.io.round_key := ks.io.rks(1).bits
  roundStates(0)  := r1.io.state_out

  // Round 2 ~ 9
  for (i <- 1 until 9) {
    val r = Module(new AesRoundLLM(p))
    r.io.state_in  := roundStates(i - 1)
    r.io.round_key := ks.io.rks(i + 1).bits   // rk[2]..rk[9]
    roundStates(i) := r.io.state_out
  }

  // --------------------------------------------------------------------------
  // Final Round 10: SubBytes + ShiftRows + AddRoundKey (no MixColumns)
  //   state10 = AddRoundKey(ShiftRows(SubBytes(state9)), rk[10])
  // --------------------------------------------------------------------------
  val subFinal  = Module(new SubBytesLLM)
  val shFinal   = Module(new ShiftRowsLLM)
  val addkFinal = Module(new AesAddRoundKeyLLM)

  subFinal.io.state_in   := roundStates(8)       // state after Round 9
  shFinal.io.state_in    := subFinal.io.state_out
  addkFinal.io.in_state  := shFinal.io.state_out
  addkFinal.io.in_round  := ks.io.rks(10).bits   // rk[10]
  val finalState         = addkFinal.io.out_state

  // --------------------------------------------------------------------------
  // 简单 Decoupled 协议：1-cycle combinational
  // --------------------------------------------------------------------------
  io.in.ready      := true.B
  io.out.valid     := io.in.valid
  io.out.bits.bits := finalState
}
