package crypto.aes
import chisel3._
import chisel3.util._
import crypto.common._

/** AES MixColumns — 真·列混淆（GF(2^8)，多项式 x^8+x^4+x^3+x+1） */
class MixColumns(p: CryptoParams) extends Module {
  require(p.BLOCK_W == 128)
  val io = IO(new Bundle {
    val in  = Flipped(Decoupled(new Block(p)))
    val out = Decoupled(new Block(p))
  })

  io.out.valid := io.in.valid
  io.in.ready  := io.out.ready

  val x = io.in.bits.bits
  val bytes = Wire(Vec(16, UInt(8.W)))
  for (i <- 0 until 16) { bytes(i) := x(127 - 8*i, 120 - 8*i) }

  def xtime(b: UInt): UInt = {
    val msb = b(7)
    val sh  = (b << 1)(7,0)
    Mux(msb, sh ^ "h1b".U(8.W), sh)
  }
  def mul2(b: UInt): UInt = xtime(b)
  def mul3(b: UInt): UInt = xtime(b) ^ b

  // 每列 4 字节：按 AES 标准矩阵乘
  def mixCol(a0: UInt, a1: UInt, a2: UInt, a3: UInt): (UInt,UInt,UInt,UInt) = {
    val r0 = mul2(a0) ^ mul3(a1) ^ a2       ^ a3
    val r1 = a0       ^ mul2(a1) ^ mul3(a2) ^ a3
    val r2 = a0       ^ a1       ^ mul2(a2) ^ mul3(a3)
    val r3 = mul3(a0) ^ a1       ^ a2       ^ mul2(a3)
    (r0, r1, r2, r3)
  }

  val outBytes = Wire(Vec(16, UInt(8.W)))
  for (c <- 0 until 4) {
    val a0 = bytes(c*4 + 0)
    val a1 = bytes(c*4 + 1)
    val a2 = bytes(c*4 + 2)
    val a3 = bytes(c*4 + 3)
    val (r0,r1,r2,r3) = mixCol(a0,a1,a2,a3)
    outBytes(c*4 + 0) := r0
    outBytes(c*4 + 1) := r1
    outBytes(c*4 + 2) := r2
    outBytes(c*4 + 3) := r3
  }

  io.out.bits.bits := Cat((0 until 16).map(i => outBytes(i)))
}

