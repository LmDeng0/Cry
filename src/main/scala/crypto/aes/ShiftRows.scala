package crypto.aes
import chisel3._
import chisel3.util._
import crypto.common._

/** ShiftRows: 真正实现（按 AES 128bit block 字节排列） */
class ShiftRows(p: CryptoParams) extends Module {
  require(p.BLOCK_W == 128, "ShiftRows仅支持128位块")
  val io = IO(new Bundle {
    val in  = Flipped(Decoupled(new Block(p)))
    val out = Decoupled(new Block(p))
  })

  // 握手直通
  io.out.valid := io.in.valid
  io.in.ready  := io.out.ready

  val b = io.in.bits.bits
  // 拆成 16 个字节：bytes(0) 对应最高位 [127:120]
  val bytes = Wire(Vec(16, UInt(8.W)))
  for(i <- 0 until 16) { bytes(i) := b(127 - 8*i, 120 - 8*i) }

  // AES ShiftRows 映射（行偏移：0,1,2,3）
  def idx(r:Int,c:Int) = c*4 + r // 行r, 列c
  val outBytes = Wire(Vec(16, UInt(8.W)))
  // row0 shift 0
  outBytes(idx(0,0)) := bytes(idx(0,0))
  outBytes(idx(0,1)) := bytes(idx(0,1))
  outBytes(idx(0,2)) := bytes(idx(0,2))
  outBytes(idx(0,3)) := bytes(idx(0,3))
  // row1 shift 1
  outBytes(idx(1,0)) := bytes(idx(1,1))
  outBytes(idx(1,1)) := bytes(idx(1,2))
  outBytes(idx(1,2)) := bytes(idx(1,3))
  outBytes(idx(1,3)) := bytes(idx(1,0))
  // row2 shift 2
  outBytes(idx(2,0)) := bytes(idx(2,2))
  outBytes(idx(2,1)) := bytes(idx(2,3))
  outBytes(idx(2,2)) := bytes(idx(2,0))
  outBytes(idx(2,3)) := bytes(idx(2,1))
  // row3 shift 3
  outBytes(idx(3,0)) := bytes(idx(3,3))
  outBytes(idx(3,1)) := bytes(idx(3,0))
  outBytes(idx(3,2)) := bytes(idx(3,1))
  outBytes(idx(3,3)) := bytes(idx(3,2))

  // 用 Cat 将 16 字节拼回 128 位（保持 bytes(0) 为最高位）
  val outWord = Cat((0 until 16).map(i => outBytes(i)))
  io.out.bits.bits := outWord
}

