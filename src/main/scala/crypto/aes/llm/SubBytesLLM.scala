// package crypto.aes.llm

// import chisel3._
// import chisel3.util._
// import crypto.aes.AesSBoxTable

// /** AES SubBytes - 纯组合逻辑版本，不使用 Vec/Wire，避免奇怪的可见性问题 */
// class SubBytesLLM extends Module {
//   val io = IO(new Bundle {
//     val state_in  = Input(UInt(128.W))
//     val state_out = Output(UInt(128.W))
//   })

//   // 单字节 SBox 查表
//   private def subByte(b: UInt): UInt = AesSBoxTable.sbox(b)

//   // 直接按字节切 state_in，并映射到 sbox
//   // 注意：这里只用局部 Seq[UInt]，不声明 Vec/Wire
//   private val bytesIn:  Seq[UInt] = (0 until 16).map { i =>
//     io.state_in(8 * (i + 1) - 1, 8 * i)
//   }
//   private val bytesOut: Seq[UInt] = bytesIn.map(subByte)

//   // 按之前约定的顺序拼回 128 bit
//   io.state_out := Cat(bytesOut.reverse)
// }


package crypto.aes.llm

import chisel3._
import chisel3.util._
import crypto.aes.AesSBoxTable

/** AES SubBytes - 极简展开版，避免任何 Vec/Seq 带来的前端可见性问题 */
class SubBytesLLM extends Module {
  val io = IO(new Bundle {
    val state_in  = Input(UInt(128.W))
    val state_out = Output(UInt(128.W))
  })

  // 单字节 S-Box 查表
  private def subByte(b: UInt): UInt = AesSBoxTable.sbox(b)

  // 直接展开 16 个字节，不用集合
  val b0  = subByte(io.state_in(  7,  0))
  val b1  = subByte(io.state_in( 15,  8))
  val b2  = subByte(io.state_in( 23, 16))
  val b3  = subByte(io.state_in( 31, 24))
  val b4  = subByte(io.state_in( 39, 32))
  val b5  = subByte(io.state_in( 47, 40))
  val b6  = subByte(io.state_in( 55, 48))
  val b7  = subByte(io.state_in( 63, 56))
  val b8  = subByte(io.state_in( 71, 64))
  val b9  = subByte(io.state_in( 79, 72))
  val b10 = subByte(io.state_in( 87, 80))
  val b11 = subByte(io.state_in( 95, 88))
  val b12 = subByte(io.state_in(103, 96))
  val b13 = subByte(io.state_in(111,104))
  val b14 = subByte(io.state_in(119,112))
  val b15 = subByte(io.state_in(127,120))

  // 和我们之前约定的字节顺序保持一致（注意 reverse 与否要和 Spec 对上）
  io.state_out := Cat(
    b15, b14, b13, b12,
    b11, b10, b9,  b8,
    b7,  b6,  b5,  b4,
    b3,  b2,  b1,  b0
  )
}
