package crypto.aes
import chisel3._
import chisel3.util._
import crypto.common._

/** Std AES Round（占位：SubBytes/ShiftRows/MixColumns + AddRoundKey，内部全部 Decoupled） */
class AesStdRound(p: CryptoParams) extends Module {
  val io = IO(new Bundle {
    val in  = Flipped(Decoupled(new Block(p)))
    val rk  = Input(new Key(p))
    val out = Decoupled(new Block(p))
  })

  val sub  = Module(new SubBytes(p))
  val sh   = Module(new ShiftRows(p))
  val mix  = Module(new MixColumns(p))
  val addk = Module(new AddRoundKey(p))

  sub.io.in <> io.in
  sh.io.in  <> sub.io.out
  mix.io.in <> sh.io.out
  addk.io.in <> mix.io.out
  addk.io.rk := io.rk

  io.out <> addk.io.out
}

/** Final Round（无 MixColumns），占位实现：仍然直通，但结构上不实例化 MixColumns */
class AesFinalRound(p: CryptoParams) extends Module {
  val io = IO(new Bundle {
    val in  = Flipped(Decoupled(new Block(p)))
    val rk  = Input(new Key(p))
    val out = Decoupled(new Block(p))
  })
  val sub  = Module(new SubBytes(p))
  val sh   = Module(new ShiftRows(p))
  val addk = Module(new AddRoundKey(p))
  sub.io.in <> io.in
  sh.io.in  <> sub.io.out
  addk.io.in <> sh.io.out
  addk.io.rk := io.rk
  io.out <> addk.io.out
}

