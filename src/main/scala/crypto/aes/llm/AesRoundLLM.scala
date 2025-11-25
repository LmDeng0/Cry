// package crypto.aes.llm

// import chisel3._
// import chisel3.util._

// class AesRoundLLM extends Module {
//   val io = IO(new Bundle {
//     val state_in  = Input(UInt(128.W))
//     val round_key = Input(UInt(128.W))
//     val state_out = Output(UInt(128.W))
//   })

//   // -------------------------
//   // Instantiate LLM-generated operators
//   // -------------------------

//   val sub = Module(new SubBytesLLM)
//   sub.io.state_in := io.state_in

//   val shift = Module(new ShiftRowsLLM)
//   shift.io.state_in := sub.io.state_out

//   val mix = Module(new MixColumnsLLM)
//   mix.io.state_in := shift.io.state_out

//   val add = Module(new AesAddRoundKeyLLM)
//   add.io.in_state := mix.io.state_out
//   add.io.in_round := io.round_key

//   io.state_out := add.io.out_state
// }


// src/main/scala/crypto/aes/llm/AesRoundLLM.scala
package crypto.aes.llm

import chisel3._
import crypto.common._
import crypto.aes.AesSBoxTable

class AesRoundLLM(p: CryptoParams) extends Module {
  val io = IO(new Bundle {
    val state_in  = Input(UInt(128.W))
    val round_key = Input(UInt(128.W))
    val state_out = Output(UInt(128.W))
  })

  // 4 个子算子
  val sub  = Module(new SubBytesLLM)
  val sh   = Module(new ShiftRowsLLM)
  val mix  = Module(new MixColumnsLLM)
  val addk = Module(new AesAddRoundKeyLLM)

  // 连接
  sub.io.state_in      := io.state_in
  sh.io.state_in       := sub.io.state_out
  mix.io.state_in      := sh.io.state_out
  addk.io.in_state     := mix.io.state_out
  addk.io.in_round     := io.round_key
  io.state_out         := addk.io.out_state
}
