// package crypto.aes.llm

// import chisel3._
// import chiseltest._
// import org.scalatest.freespec.AnyFreeSpec
// import crypto.common._

// class Aes128CoreLLMSpec extends AnyFreeSpec with ChiselScalatestTester {

//   "Aes128CoreLLM should encrypt the FIPS-197 example block correctly (1-cycle combinational core)" in {
//     // AES-128 参数
//     val p = CryptoParams(
//       BLOCK_W = 128,
//       KEY_W   = 128,
//       ROUNDS  = 10
//     )

//     test(new Aes128CoreLLM(p)) { dut =>
//       // FIPS-197 Appendix B 测试向量
//       val keyHex = "000102030405060708090a0b0c0d0e0f"
//       val ptHex  = "00112233445566778899aabbccddeeff"
//       val ctHex  = "69c4e0d86a7b0430d8cdb78070b4c55a"

//       val key  = BigInt(keyHex, 16)
//       val pt   = BigInt(ptHex, 16)
//       val ct   = BigInt(ctHex, 16)

//       // 默认信号
//       dut.io.in.valid.poke(false.B)
//       dut.io.out.ready.poke(true.B)

//       // 先打一拍，让电路稳定
//       dut.clock.step(1)

//       // 设置密钥（Key 是个 Bundle，里面只有 bits 字段）
//       dut.io.key.bits.poke(key.U)

//       // 送入明文并拉高 valid
//       dut.io.in.valid.poke(true.B)
//       dut.io.in.bits.bits.poke(pt.U)

//       // 组合核：一个周期后采样输出
//       dut.clock.step(1)

//       // out.valid 应该为 1
//       dut.io.out.valid.expect(true.B)

//       // 输出应等于期望密文
//       dut.io.out.bits.bits.expect(ct.U)
//     }
//   }
// }








// src/test/scala/crypto/aes/llm/Aes128CoreLLMSpec.scala
package crypto.aes.llm

import chisel3._
import chiseltest._
import org.scalatest.freespec.AnyFreeSpec
import crypto.common._
import crypto.aes._

/**
  * FIPS-197 AES-128 例子：
  *   Plaintext = 00112233445566778899AABBCCDDEEFF
  *   Key       = 000102030405060708090A0B0C0D0E0F
  *   Cipher    = 69C4E0D86A7B0430D8CDB78070B4C55A
  */
class Aes128CoreLLMSpec extends AnyFreeSpec with ChiselScalatestTester {

  "Aes128CoreLLM should encrypt the FIPS-197 example block correctly (1-cycle combinational core)" in {

    val p = CryptoParams(
      BLOCK_W = 128,
      KEY_W   = 128,
      ROUNDS  = 10
    )

    test(new Aes128CoreLLM(p)) { dut =>
      val pt = BigInt("00112233445566778899AABBCCDDEEFF", 16)
      val key = BigInt("000102030405060708090A0B0C0D0E0F", 16)
      val ctExpected = BigInt("69C4E0D86A7B0430D8CDB78070B4C55A", 16)

      // 驱动输入
      dut.io.key.bits.poke(key.U)
      dut.io.in.valid.poke(true.B)
      dut.io.in.bits.bits.poke(pt.U)

      // combinational core：打一拍
      dut.clock.step(1)

      // 检查 valid & cipher
      dut.io.out.valid.expect(true.B)
      dut.io.out.bits.bits.expect(ctExpected.U)
    }
  }
}
