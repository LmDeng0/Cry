package crypto.aes

import chisel3._
import chisel3.util._
import crypto.common._

/** 强类型 RoundKey（128b，与 Block 等宽） */
class RoundKey(val p: CryptoParams) extends Bundle {
  val bits = UInt(p.BLOCK_W.W)
}

/** 显式命名的 IO，避免匿名 Bundle 导致结构类型推断 */
class AddRoundKeyIO(val p: CryptoParams) extends Bundle {
  val in  = Flipped(Decoupled(new Block(p)))
  val rk  = Input(new RoundKey(p))
  val out = Decoupled(new Block(p))
}

/** AddRoundKey：out = in XOR rk（零 reflectiveCalls） */
class AddRoundKey(val p: CryptoParams) extends Module {
  val io: AddRoundKeyIO = IO(new AddRoundKeyIO(p))

  // 明确连线（逐字段），保持强类型
  io.out.valid := io.in.valid
  io.in.ready  := io.out.ready
  io.out.bits.bits := io.in.bits.bits ^ io.rk.bits
}
