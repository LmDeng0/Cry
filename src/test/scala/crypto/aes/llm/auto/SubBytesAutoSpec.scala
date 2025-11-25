package crypto.aes.llm.auto

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec

import scala.util.Random

// 引入软件参考模型（根据你实际路径稍作修改）
import crypto.aes.llm.spec.SubBytesSpecUtil

class SubBytesAutoSpec extends AnyFlatSpec with ChiselScalatestTester {

  behavior of "SubBytesLLMAuto"

  it should "match software SubBytes reference for random states" in {
    test(new SubBytesLLMAuto()) { dut =>
      val rand = new Random(0x1234)
      val numTests = 200

      for (_ <- 0 until numTests) {
        // 随机 128-bit 向量
        val inBig = BigInt(128, rand)
        val refOut = SubBytesSpecUtil.subBytes(inBig)

        // poke / expect
        dut.io.state_in.poke(inBig.U)
        dut.clock.step()
        dut.io.state_out.expect(refOut.U)
      }
    }
  }

  it should "match software reference for a few fixed edge cases" in {
    test(new SubBytesLLMAuto()) { dut =>
      // all-zero
      val in0 = BigInt("00000000000000000000000000000000", 16)
      val out0 = SubBytesSpecUtil.subBytes(in0)
      dut.io.state_in.poke(in0.U)
      dut.clock.step()
      dut.io.state_out.expect(out0.U)

      // FIPS-197 example plaintext 0x00112233445566778899aabbccddeeff
      val in1 = BigInt("00112233445566778899aabbccddeeff", 16)
      val out1 = SubBytesSpecUtil.subBytes(in1)
      dut.io.state_in.poke(in1.U)
      dut.clock.step()
      dut.io.state_out.expect(out1.U)
    }
  }
}
