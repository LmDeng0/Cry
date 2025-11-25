// src/test/scala/crypto/aes/llm/ShiftRowsLLMSpec.scala
package crypto.aes.llm

import chisel3._
import chiseltest._
import org.scalatest.freespec.AnyFreeSpec

class ShiftRowsLLMSpec extends AnyFreeSpec with ChiselScalatestTester {

  "ShiftRowsLLM should match FIPS-197 Round1 ShiftRows example" in {
    test(new ShiftRowsLLM) { dut =>
      // FIPS-197 Round1 SubBytes 输出
      val sbHex = "63cab7040953d051cd60e0e7ba70e18c"
      // FIPS-197 Round1 ShiftRows 输出
      val srHex = "6353e08c0960e104cd70b751bacad0e7"

      val sbState = BigInt(sbHex, 16)
      val srState = BigInt(srHex, 16)

      dut.io.state_in.poke(sbState.U)
      dut.clock.step(1)
      dut.io.state_out.expect(srState.U)
    }
  }
}
