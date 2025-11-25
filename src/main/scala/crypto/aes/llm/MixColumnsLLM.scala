// src/main/scala/crypto/aes/llm/MixColumnsLLM.scala
package crypto.aes.llm

import chisel3._
import chisel3.util._

/** AES MixColumns, 128-bit state in / out (4×4 bytes).
  *
  * 这里和 ShiftRowsLLM 保持一致：
  *   - 按 **大端** 拆成 16 字节：byte(0) 是最高字节，byte(15) 是最低字节
  *   - 按 AES 规范把它当作 4×4 列主序矩阵：
  *       state[row][col] = bytes(4*col + row)
  *   - 对每一列做 GF(2^8) 乘法：
  *       [2 3 1 1; 1 2 3 1; 1 1 2 3; 3 1 1 2] * [s0 s1 s2 s3]^T
  *   - 再按同样顺序拼回 128bit（大端）
  */
class MixColumnsLLM extends Module {
  val io = IO(new Bundle {
    val state_in  = Input(UInt(128.W))
    val state_out = Output(UInt(128.W))
  })

  // GF(2^8) xtime: multiply by 2 with reduction by x^8 + x^4 + x^3 + x + 1
  private def xtime(x: UInt): UInt = {
    val shifted  = (x << 1)(7, 0)
    val overflow = x(7)
    Mux(overflow === 1.U, shifted ^ "h1b".U(8.W), shifted)
  }

  private def mul2(x: UInt): UInt = xtime(x)
  private def mul3(x: UInt): UInt = xtime(x) ^ x

  // 1) 按“大端顺序”拆成 16 个字节：bytes(0) 是最高字节、bytes(15) 是最低字节
  val inBytes = Wire(Vec(16, UInt(8.W)))
  for (i <- 0 until 16) {
    val hi = 127 - 8 * i
    val lo = 120 - 8 * i
    inBytes(i) := io.state_in(hi, lo)
  }

  // 2) 组 4×4 矩阵 m(row)(col)，列主序：
  //    m(0)(0) = inBytes(0), m(1)(0) = inBytes(1), ...
  val m = Wire(Vec(4, Vec(4, UInt(8.W))))
  for (col <- 0 until 4; row <- 0 until 4) {
    m(row)(col) := inBytes(4 * col + row)
  }

  // 3) 对每一列做 MixColumns
  val o = Wire(Vec(4, Vec(4, UInt(8.W))))
  for (c <- 0 until 4) {
    val s0 = m(0)(c)
    val s1 = m(1)(c)
    val s2 = m(2)(c)
    val s3 = m(3)(c)

    o(0)(c) := mul2(s0) ^ mul3(s1) ^ s2       ^ s3
    o(1)(c) := s0       ^ mul2(s1) ^ mul3(s2) ^ s3
    o(2)(c) := s0       ^ s1       ^ mul2(s2) ^ mul3(s3)
    o(3)(c) := mul3(s0) ^ s1       ^ s2       ^ mul2(s3)
  }

  // 4) 再按列主序打平成 16 字节数组
  val outBytes = Wire(Vec(16, UInt(8.W)))
  for (col <- 0 until 4; row <- 0 until 4) {
    outBytes(4 * col + row) := o(row)(col)
  }

  // 5) 按大端顺序拼回 128bit：outBytes(0) 是最高字节
  io.state_out := outBytes.reduceLeft(Cat(_, _))
}
