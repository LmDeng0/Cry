package crypto.aes.llm.auto

import chisel3._
import chisel3.util._
import crypto.aes.AesSBoxConst

class SubBytesLLMAuto extends Module {
  val io = IO(new Bundle {
    val state_in  = Input(UInt(128.W))
    val state_out = Output(UInt(128.W))
  })

  // Convert AesSBoxConst.table to Vec[UInt(8.W)]
  val sbox = VecInit(AesSBoxConst.table.map(_.U(8.W)))

  // Extract input bytes
  val inBytes = Wire(Vec(16, UInt(8.W)))
  for (i <- 0 until 16) {
    inBytes(i) := io.state_in(8*(i+1)-1, 8*i)
  }

  // Perform S-Box lookup
  val outBytes = Wire(Vec(16, UInt(8.W)))
  for (i <- 0 until 16) {
    outBytes(i) := sbox(inBytes(i).asUInt)
  }

  // Assemble output
  io.state_out := Cat(outBytes.reverse)
}