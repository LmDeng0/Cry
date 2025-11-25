// src/main/scala/crypto/aes/llm/ShiftRowsLLM.scala
package crypto.aes.llm

import chisel3._
import chisel3.util._
/** AES ShiftRows, 128-bit state (4×4 bytes).
  *
  * 这里我们采取最“直观”的实现：
  *   - 把 state_in 按 **大端** 拆成 16 个字节：b(0) 是最高字节，b(15) 是最低字节
  *   - 在这些字节上做行移位（row-major 可视化）
  *   - 再按同样顺序拼回 128bit
  *
  * 对于 FIPS-197 Round1 的 SubBytes 输出：
  *   in  = 63 ca b7 04 09 53 d0 51 cd 60 e0 e7 ba 70 e1 8c
  *   out = 63 53 e0 8c 09 60 e1 04 cd 70 b7 51 ba ca d0 e7
  */
class ShiftRowsLLM extends Module {
  val io = IO(new Bundle {
    val state_in  = Input(UInt(128.W))
    val state_out = Output(UInt(128.W))
  })

  // 1) 按“肉眼看到的 hex 顺序”拆成 16 个字节：b(0) 是 MSB，b(15) 是 LSB
  val inBytes = Wire(Vec(16, UInt(8.W)))
  for (i <- 0 until 16) {
    val hi = 127 - 8 * i
    val lo = 120 - 8 * i
    inBytes(i) := io.state_in(hi, lo)
  }

  // 2) 对 4×4 矩阵做 ShiftRows：
  //    行 0: indices [ 0,  4,  8, 12] 不动
  //    行 1: indices [ 1,  5,  9, 13] 左移 1
  //    行 2: indices [ 2,  6, 10, 14] 左移 2
  //    行 3: indices [ 3,  7, 11, 15] 左移 3
  val outBytes = Wire(Vec(16, UInt(8.W)))

  // row 0
  outBytes(0)  := inBytes(0)
  outBytes(4)  := inBytes(4)
  outBytes(8)  := inBytes(8)
  outBytes(12) := inBytes(12)

  // row 1: [1,5,9,13] -> 左移 1: {1,5,9,13} <- {5,9,13,1}
  outBytes(1)  := inBytes(5)
  outBytes(5)  := inBytes(9)
  outBytes(9)  := inBytes(13)
  outBytes(13) := inBytes(1)

  // row 2: [2,6,10,14] -> 左移 2: {2,6,10,14} <- {10,14,2,6}
  outBytes(2)  := inBytes(10)
  outBytes(6)  := inBytes(14)
  outBytes(10) := inBytes(2)
  outBytes(14) := inBytes(6)

  // row 3: [3,7,11,15] -> 左移 3: {3,7,11,15} <- {15,3,7,11}
  outBytes(3)  := inBytes(15)
  outBytes(7)  := inBytes(3)
  outBytes(11) := inBytes(7)
  outBytes(15) := inBytes(11)

  // 3) 按同样的大端顺序拼回 128bit：outBytes(0) 是最高字节
  io.state_out := outBytes.reduceLeft(Cat(_, _))
}
