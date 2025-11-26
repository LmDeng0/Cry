package crypto.aes.llm.auto

import chisel3._
import chiseltest._
import org.scalatest.freespec.AnyFreeSpec

/** Auto-generated SubBytes 测试：
  *  只用若干已知正确的 (input, output) 向量验证 SubBytesLLMAuto。
  *  不依赖任何 SubBytesSpecUtil。
  */
class SubBytesAutoSpec extends AnyFreeSpec with ChiselScalatestTester {

  "SubBytesLLMAuto should match known AES S-Box vectors" in {
    test(new SubBytesLLMAuto) { dut =>
      // (输入, 期望输出)，都是 128-bit AES state
      val testVectors = Seq(
        // 来自标准 AES state 示例，按每字节查 S-box 后的结果
        (
          BigInt("00112233445566778899aabbccddeeff", 16),
          BigInt("638293c31bfc33f5c4eeacea4bc12816", 16)
        ),
        // 全 0
        (
          BigInt("00000000000000000000000000000000", 16),
          BigInt("63636363636363636363636363636363", 16)
        ),
        // 全 0xff
        (
          BigInt("ffffffffffffffffffffffffffffffff", 16),
          BigInt("16161616161616161616161616161616", 16)
        )
      )

      for ((in, expected) <- testVectors) {
        dut.io.state_in.poke(in.U)
        dut.clock.step(1)
        dut.io.state_out.expect(expected.U)
      }
    }
  }
}
