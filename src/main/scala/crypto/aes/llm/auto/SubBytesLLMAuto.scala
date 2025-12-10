package crypto.aes.llm.auto

import chisel3._
import chisel3.util._
import crypto.aes.AesSBoxConst

class SubBytesLLMAuto extends Module {
  val io = IO(new Bundle {
    val state_in  = Input(UInt(128.W))
    val state_out = Output(UInt(128.W))
  })

  // Split the input state into 16 bytes (4 bytes per row, 4 rows)
  val bytes = Seq.fill(16)(Wire(UInt(8.W)))
  for (i <- 0 until 16) {
    bytes(i) := io.state_in((i + 1) * 8 - 1, i * 8)
  }

  // Apply the S-Box substitution to each byte
  val sboxedBytes = bytes.map(byte => AesSBoxConst.sbox(byte))

  // Concatenate the sboxed bytes to form the output state
  io.state_out := Cat(sboxedBytes.reverse)
}