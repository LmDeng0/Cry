package crypto.gen

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec
import scala.io.Source
import play.api.libs.json._
import crypto.common._

/** JSON 映射 */
case class Kat(name: String, key: String, pt: String, ct: String)
object Kat { implicit val fmt: Format[Kat] = Json.format[Kat] }

class AesEcbKATJsonSpec extends AnyFlatSpec with ChiselScalatestTester {
  behavior of "Aes128Core KAT JSON Batch"

  it should "match multiple NIST AES-128 ECB vectors from JSON" in {
    // 读取测试向量
    val txt  = Source.fromFile("testvectors/nist_aes128_ecb.json").mkString
    val vecs = Json.parse(txt).as[Seq[Kat]]

    // 仅指定 Verilator 后端，避免 treadle 在大组合上变慢
    test(new Aes128Core(CryptoParams()))
      .withAnnotations(Seq(chiseltest.simulator.VerilatorBackendAnnotation)) { dut =>
        dut.clock.setTimeout(500)
        dut.io.out.ready.poke(true.B)

        // 简单的 128 位 hex -> UInt 工具
        def hexU(s: String) = BigInt(s, 16).U(128.W)

        vecs.zipWithIndex.foreach { case (k, i) =>
          // 配 key，打一拍输入，下一拍检查（组合管线时序）
          dut.io.key.bits.poke(hexU(k.key))
          dut.io.in.valid.poke(true.B)
          dut.io.in.bits.bits.poke(hexU(k.pt))
          dut.clock.step(1)

          dut.io.out.valid.expect(true.B, s"vector[${i}]: ${k.name}")
          dut.io.out.bits.bits.expect(hexU(k.ct), s"vector[${i}]: ${k.name}")

          dut.io.in.valid.poke(false.B)
          dut.clock.step(1)
        }
      }
  }
}
