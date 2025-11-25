package crypto.aes
import chisel3._
import chisel3.util._
import crypto.common._

/** AesCore: 占位骨架（直通），用于先打通编译/测试链路 */
class AesCore(p: CryptoParams = CryptoParams()) extends Module {
  val io = IO(new CryptoIO(p))
  // 直通：握手与数据直接透传（后续由生成器替换为真正 AES 逻辑）
  io.out.valid := io.in.valid
  io.in.ready  := io.out.ready
  io.out.bits  := io.in.bits
  // 常时/握手性质（最小示意）
  when (io.in.valid && !io.in.ready) { assert(!io.out.valid, "Potential backpressure issue") }
}
