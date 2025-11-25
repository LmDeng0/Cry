package crypto.gen

import chisel3._
import chisel3.util._
import chiseltest._
import chiseltest.simulator.VerilatorBackendAnnotation
import org.scalatest.flatspec.AnyFlatSpec

import crypto.common._
import crypto.aes._

/** 顶层握手冒烟测试（零 reflectiveCalls） */
class AesTopSpec extends AnyFlatSpec with ChiselScalatestTester {
  behavior of "Aes128Core (generated)"

  it should "handshake one block through the pipeline (placeholder/partial-real logic)" in {
    // 去掉 WriteVcdAnnotation.off，避免编译期找不到 off 成员
    test(new Aes128Core(CryptoParams())).withAnnotations(Seq(
      VerilatorBackendAnnotation
    )) { dut =>
      // 初始拉低
      dut.io.in.valid.poke(false.B)
      dut.io.out.ready.poke(false.B)
      dut.clock.step()

      // 一组示例 key / pt
      val key = BigInt("000102030405060708090A0B0C0D0E0F", 16)
      val pt  = BigInt("00112233445566778899AABBCCDDEEFF", 16)

      dut.io.key.bits.poke(key.U)
      dut.io.in.bits.bits.poke(pt.U)

      // 准备消费并发起
      dut.io.out.ready.poke(true.B)
      dut.io.in.valid.poke(true.B)

      // 最多等 50 拍
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
