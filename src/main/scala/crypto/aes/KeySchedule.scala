package crypto.aes

import chisel3._
import chisel3.util._
import crypto.common._
import crypto.aes.AesSBoxTable

class KeySchedule(val p: CryptoParams) extends Module {
  val Nr = p.ROUNDS
  val Nk = p.KEY_W / 32

  val io = IO(new Bundle {
    val keyIn = Input(new Key(p))
    val rks   = Output(Vec(Nr + 1, new RoundKey(p)))
    val w_dbg = Output(Vec(4*(Nr+1), UInt(32.W)))
  })

  // ---------------------
  // S-box
  // ---------------------
  private def subByte(x: UInt): UInt = AesSBoxTable.sbox(x)

  private def rotWord(w: UInt): UInt = Cat(w(23,0), w(31,24))

  private def subWord(w: UInt): UInt =
    Cat(
      subByte(w(31,24)),
      subByte(w(23,16)),
      subByte(w(15, 8)),
      subByte(w( 7, 0))
    )

  val rcon = VecInit(Array(
    "h01000000".U, "h02000000".U, "h04000000".U, "h08000000".U,
    "h10000000".U, "h20000000".U, "h40000000".U, "h80000000".U,
    "h1b000000".U, "h36000000".U
  ))

  val totalWords = 4*(Nr+1)
  val w = Wire(Vec(totalWords, UInt(32.W)))

  // ---------------------
  // 关键修复：正确拆分初始 key
  // ---------------------
  for(i <- 0 until Nk){
    // i = 0 取最高 32 位
    val hi = p.KEY_W - 1 - i*32
    val lo = hi - 31
    w(i) := io.keyIn.bits(hi, lo)
  }

  // ---------------------
  // 正确的 w(i) 推导
  // ---------------------
  for(i <- Nk until totalWords){
    val temp = w(i-1)
    val t =
      if(i % Nk == 0)
        subWord(rotWord(temp)) ^ rcon((i/Nk)-1)
      else
        temp

    w(i) := w(i-Nk) ^ t
  }
  
  for (i <- 0 until totalWords) {
    io.w_dbg(i) := w(i)
  }

  // ---------------------
  // 轮密钥打包
  // ---------------------
  for(r <- 0 to Nr){
    // 正确拼接顺序：w0 || w1 || w2 || w3
    io.rks(r).bits := Cat(w(4*r), w(4*r+1), w(4*r+2), w(4*r+3))
  }
}
