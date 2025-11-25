package crypto.aes

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec
import crypto.aes.llm.AesAddRoundKeyLLM

class AesAddRoundKeyLLMSpec extends AnyFlatSpec with ChiselScalatestTester {

  "AesAddRoundKeyLLM" should "xor state and round key correctly" in {
    test(new AesAddRoundKeyLLM) { dut =>
      // 随便挑一个例子：state = 0x0123..., round = 0xfedc...
      val state = BigInt("00112233445566778899aabbccddeeff", 16)
      val round = BigInt("000102030405060708090a0b0c0d0e0f", 16)
      val expectOut = state ^ round

      dut.io.in_state.poke(state.U)
      dut.io.in_round.poke(round.U)
      dut.clock.step(1)
      dut.io.out_state.expect(expectOut.U)
    }
  }
}
