package crypto.aes.llm

import chisel3._
import chiseltest._
import org.scalatest.freespec.AnyFreeSpec
import crypto.common._
import crypto.aes._

class KeyScheduleWordDebugSpec extends AnyFreeSpec with ChiselScalatestTester {

  "Dump KeySchedule intermediate words w[i]" in {

    val p = CryptoParams(
      BLOCK_W = 128,
      KEY_W   = 128,
      ROUNDS  = 10
    )

    test(new KeySchedule(p)) { dut =>
      val key = BigInt("000102030405060708090A0B0C0D0E0F", 16)
      dut.io.keyIn.bits.poke(key.U)
      dut.clock.step()

      println("===== KeySchedule w[i] dump =====")
      for (i <- 0 until 44) {
        val wi = dut.io.w_dbg(i).peek().litValue
        println(f"w[$i%2d] = 0x$wi%08x")
      }
    }
  }
}
