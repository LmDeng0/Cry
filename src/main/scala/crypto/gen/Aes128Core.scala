package crypto.gen

import chisel3._
import chisel3.util._
import crypto.common._
import crypto.aes._

/** AES-128 Core（强类型 IO：in/out + key；不使用 Decoupled 的 key/rk） */
class Aes128Core(val p: CryptoParams) extends Module {

  /** 专用 IO：沿用数据 in/out，再额外提供 key */
  class Aes128IO(p: CryptoParams) extends Bundle {
    val in  = Flipped(Decoupled(new Block(p)))
    val out = Decoupled(new Block(p))
    val key = Input(new Key(p))          // 注意：Key 是强类型 Bundle（无 valid/ready）
  }

  val io = IO(new Aes128IO(p))

  // === KeySchedule：你仓库中的签名为 (p: CryptoParams)；keyIn 是强类型输入 ===
  val ks = Module(new KeySchedule(p))
  // 直接把密钥强类型连接过去（无 .valid/.ready）
  ks.io.keyIn := io.key

  // === 初始轮：AddRoundKey-only ===
  val init = Module(new AddRoundKey(p))
  init.io.in <> io.in                     // 握手在 in/out 上进行
  // 你工程中的 ks.io.rks 是 Vec[RoundKey]（或等价强类型），直接强连
  init.io.rk := ks.io.rks(0)

  // === 9 个标准轮（使用你仓库里的 StdRoundGen 类） ===
  val r1 = Module(new StdRoundGen(p))
  val r2 = Module(new StdRoundGen(p))
  val r3 = Module(new StdRoundGen(p))
  val r4 = Module(new StdRoundGen(p))
  val r5 = Module(new StdRoundGen(p))
  val r6 = Module(new StdRoundGen(p))
  val r7 = Module(new StdRoundGen(p))
  val r8 = Module(new StdRoundGen(p))
  val r9 = Module(new StdRoundGen(p))

  r1.io.in <> init.io.out; r1.io.rk := ks.io.rks(1)
  r2.io.in <> r1.io.out ; r2.io.rk := ks.io.rks(2)
  r3.io.in <> r2.io.out ; r3.io.rk := ks.io.rks(3)
  r4.io.in <> r3.io.out ; r4.io.rk := ks.io.rks(4)
  r5.io.in <> r4.io.out ; r5.io.rk := ks.io.rks(5)
  r6.io.in <> r5.io.out ; r6.io.rk := ks.io.rks(6)
  r7.io.in <> r6.io.out ; r7.io.rk := ks.io.rks(7)
  r8.io.in <> r7.io.out ; r8.io.rk := ks.io.rks(8)
  r9.io.in <> r8.io.out ; r9.io.rk := ks.io.rks(9)

  // === 最后一轮（使用你仓库里的 FinalRoundGen 类） ===
  val finalR = Module(new FinalRoundGen(p))
  finalR.io.in <> r9.io.out
  finalR.io.rk := ks.io.rks(10)

  // === 输出 ===
  io.out <> finalR.io.out
}
