package crypto.aes.llm.auto

import chisel3._
import chisel3.util._

class ShiftRowsLLMAuto extends Module {
  val io = IO(new Bundle {
    val state_in  = Input(UInt(128.W))
    val state_out = Output(UInt(128.W))
  })

  // Split the input state into 4 rows of 4 bytes each (column-major order)
  val bytes = Seq.fill(4)(Seq.fill(4)(0.U(8.W)))
  for (i <- 0 until 4) {
    for (j <- 0 until 4) {
      bytes(i)(j) := io.state_in((i + j * 4) * 8 + 7, (i + j * 4) * 8)
    }
  }

  // Apply the ShiftRows transformation
  val shiftedBytes = Seq.fill(4)(Seq.fill(4)(0.U(8.W)))
  shiftedBytes(0) = bytes(0).toSeq // Row 0: no rotation
  shiftedBytes(1) = Seq(bytes(1)(1), bytes(1)(2), bytes(1)(3), bytes(1)(0)) // Row 1: 1-byte left rotation
  shiftedBytes(2) = Seq(bytes(2)(2), bytes(2)(3), bytes(2)(0), bytes(2)(1)) // Row 2: 2-byte left rotation
  shiftedBytes(3) = Seq(bytes(3)(3), bytes(3)(0), bytes(3)(1), bytes(3)(2)) // Row 3: 3-byte left rotation

  // Assemble the shifted bytes back into a 128-bit output state
  val state_out = Cat(
    shiftedBytes(0)(0), shiftedBytes(1)(0), shiftedBytes(2)(0), shiftedBytes(3)(0),
    shiftedBytes(0)(1), shiftedBytes(1)(1), shiftedBytes(2)(1), shiftedBytes(3)(1),
    shiftedBytes(0)(2), shiftedBytes(1)(2), shiftedBytes(2)(2), shiftedBytes(3)(2),
    shiftedBytes(0)(3), shiftedBytes(1)(3), shiftedBytes(2)(3), shiftedBytes(3)(3)
  )

  io.state_out := state_out
}