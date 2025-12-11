package crypto.aes.llm.auto

import chisel3._
import chisel3.util._
import crypto.aes.AesSBoxConst

class SubBytesLLMAuto extends Module {
  val io = IO(new Bundle {
    val state_in = Input(UInt(128.W))
    val state_out = Output(UInt(128.W))
  })

  // Convert the SBox table into a Vec of UInt(8.W)
  val sbox = VecInit(AesSBoxConst.table.map(_.U(8.W)))

  // Extract 16 bytes from the input state using bit slicing
  val bytes = Seq.tabulate(16) { i =>
    io.state_in((i + 1) * 8 - 1, i * 8) // Extract each byte from the 128-bit input
  }

  // Apply the SBox substitution to each byte
  val outBytes = bytes.map { byte =>
    sbox(byte.asUInt) // Substitute each byte using the SBox
  }

  // Concatenate the output bytes in reverse order
  io.state_out := Cat(outBytes.reverse) // Reverse the order of bytes and concatenate
}