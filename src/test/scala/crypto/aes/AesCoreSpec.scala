package crypto.aes

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec

import crypto.common._
import crypto.gen.Aes128Core

/** 用新顶层 Aes128Core 做冒烟测试：握手能走通即可 */
class AesCoreSpec extends AnyFlatSpec with ChiselScalatestTester {
  behavior of "AesCore"

  it should "pass-through one block" in {
    test(new Aes128Core(CryptoParams())).apply { dut =>
      // 初始
      dut.io.in.valid.poke(false.B)
      dut.io.out.ready.poke(false.B)
      dut.clock.step()

      // 典型 KAT 数据（只做打通，不校验密文）
      val key = "h000102030405060708090a0b0c0d0e0f".U(128.W)
      val pt  = "h00112233445566778899aabbccddeeff".U(128.W)

      dut.io.key.bits.poke(key)
      dut.io.in.bits.bits.poke(pt)

      dut.io.out.ready.poke(true.B)
      dut.io.in.valid.poke(true.B)

      var i = 0
      while (i < 50 && !dut.io.out.valid.peek().litToBoolean) {
        dut.clock.step()
        i += 1
      }
      assert(dut.io.out.valid.peek().litToBoolean, "io.out.valid never asserted within 50 cycles")

      // 消费一个拍
      dut.clock.step()
    }
  }
}
