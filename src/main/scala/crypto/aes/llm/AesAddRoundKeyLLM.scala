package crypto.aes.llm

import chisel3._

class AesAddRoundKeyLLM extends Module {
  val io = IO(new Bundle {
    val in_state = Input(UInt(128.W))
    val in_round = Input(UInt(128.W))
    val out_state = Output(UInt(128.W))
  })

  io.out_state := io.in_state ^ io.in_round
}