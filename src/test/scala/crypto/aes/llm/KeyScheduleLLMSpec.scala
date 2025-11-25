// src/test/scala/crypto/aes/llm/KeyScheduleLLMSpec.scala
package crypto.aes.llm

import chisel3._
import chiseltest._
import org.scalatest.freespec.AnyFreeSpec
import crypto.common._
import crypto.aes._

class KeyScheduleLLMSpec extends AnyFreeSpec with ChiselScalatestTester {

  "KeySchedule for AES-128 should match FIPS-197 round keys" in {

    val p = CryptoParams(
      BLOCK_W = 128,
      KEY_W   = 128,
      ROUNDS  = 10
    )

    test(new KeySchedule(p)) { dut =>

      val key = BigInt("000102030405060708090A0B0C0D0E0F", 16)
      dut.io.keyIn.bits.poke(key.U)

      // 组合逻辑，打一拍让值稳定
      dut.clock.step()

      // 正确的 FIPS-197 AES-128 round keys (rk[0..10])
      val expected = Array(
        "000102030405060708090A0B0C0D0E0F", // rk0
        "D6AA74FDD2AF72FADAA678F1D6AB76FE", // rk1
        "B692CF0B643DBDF1BE9BC5006830B3FE", // rk2
        "B6FF744ED2C2C9BF6C590CBF0469BF41", // rk3
        "47F7F7BC95353E03F96C32BCFD058DFD", // rk4
        "3CAAA3E8A99F9DEB50F3AF57ADF622AA", // rk5 ← 修正这里
        "5E390F7DF7A69296A7553DC10AA31F6B", // rk6
        "14F9701AE35FE28C440ADF4D4EA9C026", // rk7
        "47438735A41C65B9E016BAF4AEBF7AD2", // rk8
        "549932D1F08557681093ED9CBE2C974E", // rk9
        "13111D7FE3944A17F307A78B4D2B30C5"  // rk10
      ).map(BigInt(_, 16))

      for (i <- 0 to 10) {
        val got = dut.io.rks(i).bits.peek().litValue
        assert(
          got == expected(i),
          f"rk[$i] mismatch: got=0x$got%032x expected=0x${expected(i)}%032x"
        )
      }
    }
  }
}
