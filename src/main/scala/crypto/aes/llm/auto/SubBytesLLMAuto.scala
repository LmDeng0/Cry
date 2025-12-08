package crypto.aes.llm.auto

import chisel3._
import chisel3.util._
import crypto.aes.AesSBoxConst

class SubBytesLLMAuto extends Module {
  val io = IO(new Bundle {
    val state_in  = Input(UInt(128.W))
    val state_out = Output(UInt(128.W))
  })

  // Convert AesSBoxConst.table (Seq[Int]) into Vec[UInt(8.W)]
  val sbox = VecInit(AesSBoxConst.table.map(_.U(8.W)))

  // Extract 16 bytes using bit slicing
  val bytes = Wire(Vec(16, UInt(8.W)))
  for (i <- 0 until 16) {
    bytes(i) := io.state_in((i + 1) * 8 - 1, i * 8)
  }

  // Apply SBox to each byte
  val outBytes = Wire(Vec(16, UInt(8.W)))
  for (i <- 0 until 16) {
    outBytes(i) := sbox(bytes(i))
  }

  // Concatenate the output bytes in reverse order
  io.state_out := Cat(outBytes.reverse)
}