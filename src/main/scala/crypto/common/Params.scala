package crypto.common

import chisel3._
import chisel3.util._

/** 通用加密核配置参数 */
case class CryptoParams(
  BLOCK_W: Int = 128,        // 明文/密文宽度（AES 固定 128）
  KEY_W:   Int = 128,        // 密钥宽度（128/192/256）
  ROUNDS:  Int = 10,         // 轮数（AES-128=10, AES-192=12, AES-256=14）
  LANES:   Int = 1,          // 预留并行通道数（暂未使用）
  PIPE_EVERY_ROUND: Boolean = false  // 每轮打一拍（性能开关）
)

/** 加密数据块 */
class Block(p: CryptoParams) extends Bundle {
  val bits = UInt(p.BLOCK_W.W)
  // 兼容别名：如后续想把字段名迁移到 data，可短期双持
  def data: UInt = bits
}

/** 密钥 */
class Key(p: CryptoParams) extends Bundle {
  val bits = UInt(p.KEY_W.W)
  def data: UInt = bits
}

/** 统一 IO 模板（便于子模块快速接入） */
class CryptoIO(p: CryptoParams) extends Bundle {
  val in  = Flipped(Decoupled(new Block(p)))
  val out = Decoupled(new Block(p))
}
