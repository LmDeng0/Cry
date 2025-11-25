package crypto.gen

import chisel3.stage.ChiselStage  // 先用老的 Stage，稳定生成 Verilog
import crypto.common._

object Emit {
  def main(args: Array[String]): Unit = {
    val sel   = if (args.nonEmpty) args(0) else "128"
    val piped = args.contains("piped")
    val (keyW, rounds, outDirBase) = sel match {
      case "128" => (128, 10, "aes128")
      case "192" => (192, 12, "aes192")
      case "256" => (256, 14, "aes256")
      case other => throw new IllegalArgumentException(s"unknown key width: $other")
    }
    val p = CryptoParams(BLOCK_W = 128, KEY_W = keyW, ROUNDS = rounds, PIPE_EVERY_ROUND = piped)
    val outDir = if (piped) s"out/${outDirBase}_piped" else s"out/$outDirBase"

    (new ChiselStage).emitVerilog(
      new Aes128Core(p),
      Array("--target-dir", outDir)
    )
  }
}
