package crypto.aes.llm

import chisel3._
import chiseltest._
import org.scalatest.freespec.AnyFreeSpec

class AesAddRoundKeyLLMSpec extends AnyFreeSpec with ChiselScalatestTester {
  "AesAddRoundKeyLLM should do XOR(state, roundKey)" in {
    test(new AesAddRoundKeyLLM) { dut =>
      val state  = BigInt("00112233445566778899aabbccddeeff", 16)
      val round  = BigInt("000102030405060708090a0b0c0d0e0f", 16)
      val expect = state ^ round

      dut.io.in_state.poke(state.U)
      dut.io.in_round.poke(round.U)
      dut.clock.step(1)
      dut.io.out_state.expect(expect.U)
    }
  }
}
