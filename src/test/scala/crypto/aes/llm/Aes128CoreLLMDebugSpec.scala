// src/test/scala/crypto/aes/llm/Aes128CoreLLMDebugSpec.scala
package crypto.aes.llm

import chisel3._
import chiseltest._
import org.scalatest.freespec.AnyFreeSpec
import crypto.common._
import crypto.aes._

/**
  * 调试用：打印 Round0 ~ Round10 的中间状态和轮密钥
  * 使用 FIPS-197 AES-128 示例：
  *   Plaintext = 00112233445566778899AABBCCDDEEFF
  *   Key       = 000102030405060708090A0B0C0D0E0F
  */
class Aes128CoreLLMDebugSpec extends AnyFreeSpec with ChiselScalatestTester {

  "Aes128CoreLLMDebug should expose per-round states and round keys for FIPS-197 example" in {

    val p = CryptoParams(
      BLOCK_W = 128,
      KEY_W   = 128,
      ROUNDS  = 10
    )

    test(new Aes128CoreLLMDebug(p)) { dut =>
      val pt  = BigInt("00112233445566778899AABBCCDDEEFF", 16)
      val key = BigInt("000102030405060708090A0B0C0D0E0F", 16)

      // FIPS-197 中间状态（列主序），仅用于打印对照
      val f_state0   = BigInt("00102030405060708090a0b0c0d0e0f0", 16)
      val f_r1_sub   = BigInt("63cab7040953d051cd60e0e7ba70e18c", 16)
      val f_r1_sh    = BigInt("6353e08c0960e104cd70b751bacad0e7", 16)
      val f_r1_mix   = BigInt("5f72641557f5bc92f7be3b291db9f91a", 16)
      val f_r1_out   = BigInt("89d810e8855ace682d1843d8cb128fe4", 16)
      val ctExpected = BigInt("69c4e0d86a7b0430d8cdb78070b4c55a", 16)

      // 输入明文和密钥
      dut.io.key.bits.poke(key.U)
      dut.io.in.valid.poke(true.B)
      dut.io.in.bits.bits.poke(pt.U)

      // combinational：打一拍
      dut.clock.step(1)

      // 打印轮密钥
      println("===== Round Keys from hardware (rks_dbg) =====")
      for (i <- 0 to 10) {
        val rk = dut.io.rks_dbg(i).peek().litValue
        println(f"rk[$i] = 0x$rk%032x")
      }

      // 打印 Round0
      val s0 = dut.io.state0_dbg.peek().litValue
      println()
      println(f"state[0] (after AddRoundKey rk[0]) = 0x$s0%032x")
      println(f"  FIPS state[0]                    = 0x$f_state0%032x")

      // 打印 Round1 内部 4 步
      val s1sub = dut.io.state1_sub_dbg.peek().litValue
      val s1sh  = dut.io.state1_sh_dbg.peek().litValue
      val s1mix = dut.io.state1_mix_dbg.peek().litValue
      val s1    = dut.io.states_dbg(0).peek().litValue

      println()
      println(f"Round1 SubBytes   output          = 0x$s1sub%032x")
      println(f"  FIPS Round1 SubBytes            = 0x$f_r1_sub%032x")
      println(f"Round1 ShiftRows  output          = 0x$s1sh%032x")
      println(f"  FIPS Round1 ShiftRows           = 0x$f_r1_sh%032x")
      println(f"Round1 MixColumns output          = 0x$s1mix%032x")
      println(f"  FIPS Round1 MixColumns          = 0x$f_r1_mix%032x")
      println(f"Round1 final (after AddRoundKey)  = 0x$s1%032x")
      println(f"  FIPS Round1 state[1]            = 0x$f_r1_out%032x")

      // 打印 Round2..9 状态
      println()
      for (i <- 1 until 9) {
        val si = dut.io.states_dbg(i).peek().litValue
        println(f"state[${i+1}] (after Round ${i+1})       = 0x$si%032x")
      }

      // 打印最终密文
      val sf  = dut.io.final_dbg.peek().litValue
      val got = dut.io.out.bits.bits.peek().litValue

      println()
      println(f"state[10] (final ciphertext)      = 0x$sf%032x")
      println(f"expected CT                       = 0x$ctExpected%032x")
      println(f"got      CT                       = 0x$got%032x")

      // 这里仍然先不 assert，主要用于观察中间状态；你可以随时打开下面这行
      // assert(got == ctExpected, f"ciphertext mismatch: got=0x$got%032x expected=0x$ctExpected%032x")
    }
  }
}
