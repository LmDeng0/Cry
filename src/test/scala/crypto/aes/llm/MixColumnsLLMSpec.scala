// src/test/scala/crypto/aes/llm/MixColumnsLLMSpec.scala
package crypto.aes.llm

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec

class MixColumnsLLMSpec extends AnyFlatSpec with ChiselScalatestTester {

  behavior of "MixColumnsLLM"

  // ===================== GF(2^8) 乘法 =====================
  private def gmul(a: Int, b: Int): Int = {
    var aa = a & 0xff
    var bb = b & 0xff
    var res = 0
    var i   = 0
    while (i < 8) {
      if ((bb & 1) != 0) res ^= aa
      val hi = (aa & 0x80) != 0
      aa = (aa << 1) & 0xff
      if (hi) aa ^= 0x1b
      bb = bb >>> 1
      i += 1
    }
    res & 0xff
  }

  // ===================== 标准 MixColumns 参考实现 =====================
  /** inBytes: 16 字节，大端顺序（bytes(0) 为最高字节），列主序 4×4 矩阵 */
  private def mixColumnsRaw(inBytes: Array[Int]): Array[Int] = {
    val out = Array.fill(16)(0)
    for (col <- 0 until 4) {
      val base = col * 4
      val s0 = inBytes(base + 0)
      val s1 = inBytes(base + 1)
      val s2 = inBytes(base + 2)
      val s3 = inBytes(base + 3)

      out(base + 0) = (gmul(2, s0) ^ gmul(3, s1) ^ s2 ^ s3) & 0xff
      out(base + 1) = (s0 ^ gmul(2, s1) ^ gmul(3, s2) ^ s3) & 0xff
      out(base + 2) = (s0 ^ s1 ^ gmul(2, s2) ^ gmul(3, s3)) & 0xff
      out(base + 3) = (gmul(3, s0) ^ s1 ^ s2 ^ gmul(2, s3)) & 0xff
    }
    out
  }

  private def hexToBytes(hex: String): Array[Int] =
    hex.grouped(2).map(Integer.parseInt(_, 16)).toArray

  private def bytesToHex(bytes: Array[Int]): String =
    bytes.map(b => f"$b%02x").mkString

  // ===================== 通用测试：对若干输入做 HW vs SW 对比 =====================
  it should "match AES MixColumns for several test vectors (big-endian layout)" in {
    test(new MixColumnsLLM) { dut =>
      val inputs = Seq(
        "000102030405060708090a0b0c0d0e0f",
        "d4bf5d30e0b452aeb84111f11e2798e5", // FIPS 中常见 demo
        "6353e08c0960e104cd70b751bacad0e7"  // FIPS Round1 ShiftRows output
      )

      for (hex <- inputs) {
        val inBytes = hexToBytes(hex)
        val refOut  = mixColumnsRaw(inBytes)
        val expHex  = bytesToHex(refOut)

        dut.io.state_in.poke(BigInt(hex, 16).U)
        dut.clock.step(1)
        dut.io.state_out.expect(BigInt(expHex, 16).U)
      }
    }
  }

  // ===================== FIPS Round1 专用测试 =====================
  it should "match FIPS-197 Round1 MixColumns example" in {
    test(new MixColumnsLLM) { dut =>
      // FIPS-197 Round1 ShiftRows 输出
      val srHex = "6353e08c0960e104cd70b751bacad0e7"
      // FIPS-197 Round1 MixColumns 输出
      val mcHex = "5f72641557f5bc92f7be3b291db9f91a"

      dut.io.state_in.poke(BigInt(srHex, 16).U)
      dut.clock.step(1)
      dut.io.state_out.expect(BigInt(mcHex, 16).U)
    }
  }
}
