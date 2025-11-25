package crypto.aes
import chisel3._
import chisel3.util._
import crypto.common._

/** AES SubBytes — 真·S-Box 查表（组合） */
class SubBytes(p: CryptoParams) extends Module {
  require(p.BLOCK_W == 128, "SubBytes仅支持128位块")
  val io = IO(new Bundle {
    val in  = Flipped(Decoupled(new Block(p)))
    val out = Decoupled(new Block(p))
  })

  io.out.valid := io.in.valid
  io.in.ready  := io.out.ready

  val inBits = io.in.bits.bits
  val inBytes = Wire(Vec(16, UInt(8.W)))
  for (i <- 0 until 16) { inBytes(i) := inBits(127 - 8*i, 120 - 8*i) }

  // AES S-Box（256 项）
  val sbox = VecInit(Seq(
    "h63".U, "h7c".U, "h77".U, "h7b".U, "hf2".U, "h6b".U, "h6f".U, "hc5".U,
    "h30".U, "h01".U, "h67".U, "h2b".U, "hfe".U, "hd7".U, "hab".U, "h76".U,
    "hca".U, "h82".U, "hc9".U, "h7d".U, "hfa".U, "h59".U, "h47".U, "hf0".U,
    "had".U, "hd4".U, "ha2".U, "haf".U, "h9c".U, "ha4".U, "h72".U, "hc0".U,
    "hb7".U, "hfd".U, "h93".U, "h26".U, "h36".U, "h3f".U, "hf7".U, "hcc".U,
    "h34".U, "ha5".U, "he5".U, "hf1".U, "h71".U, "hd8".U, "h31".U, "h15".U,
    "h04".U, "hc7".U, "h23".U, "hc3".U, "h18".U, "h96".U, "h05".U, "h9a".U,
    "h07".U, "h12".U, "h80".U, "he2".U, "heb".U, "h27".U, "hb2".U, "h75".U,
    "h09".U, "h83".U, "h2c".U, "h1a".U, "h1b".U, "h6e".U, "h5a".U, "ha0".U,
    "h52".U, "h3b".U, "hd6".U, "hb3".U, "h29".U, "he3".U, "h2f".U, "h84".U,
    "h53".U, "hd1".U, "h00".U, "hed".U, "h20".U, "hfc".U, "hb1".U, "h5b".U,
    "h6a".U, "hcb".U, "hbe".U, "h39".U, "h4a".U, "h4c".U, "h58".U, "hcf".U,
    "hd0".U, "hef".U, "haa".U, "hfb".U, "h43".U, "h4d".U, "h33".U, "h85".U,
    "h45".U, "hf9".U, "h02".U, "h7f".U, "h50".U, "h3c".U, "h9f".U, "ha8".U,
    "h51".U, "ha3".U, "h40".U, "h8f".U, "h92".U, "h9d".U, "h38".U, "hf5".U,
    "hbc".U, "hb6".U, "hda".U, "h21".U, "h10".U, "hff".U, "hf3".U, "hd2".U,
    "hcd".U, "h0c".U, "h13".U, "hec".U, "h5f".U, "h97".U, "h44".U, "h17".U,
    "hc4".U, "ha7".U, "h7e".U, "h3d".U, "h64".U, "h5d".U, "h19".U, "h73".U,
    "h60".U, "h81".U, "h4f".U, "hdc".U, "h22".U, "h2a".U, "h90".U, "h88".U,
    "h46".U, "hee".U, "hb8".U, "h14".U, "hde".U, "h5e".U, "h0b".U, "hdb".U,
    "he0".U, "h32".U, "h3a".U, "h0a".U, "h49".U, "h06".U, "h24".U, "h5c".U,
    "hc2".U, "hd3".U, "hac".U, "h62".U, "h91".U, "h95".U, "he4".U, "h79".U,
    "he7".U, "hc8".U, "h37".U, "h6d".U, "h8d".U, "hd5".U, "h4e".U, "ha9".U,
    "h6c".U, "h56".U, "hf4".U, "hea".U, "h65".U, "h7a".U, "hae".U, "h08".U,
    "hba".U, "h78".U, "h25".U, "h2e".U, "h1c".U, "ha6".U, "hb4".U, "hc6".U,
    "he8".U, "hdd".U, "h74".U, "h1f".U, "h4b".U, "hbd".U, "h8b".U, "h8a".U,
    "h70".U, "h3e".U, "hb5".U, "h66".U, "h48".U, "h03".U, "hf6".U, "h0e".U,
    "h61".U, "h35".U, "h57".U, "hb9".U, "h86".U, "hc1".U, "h1d".U, "h9e".U,
    "he1".U, "hf8".U, "h98".U, "h11".U, "h69".U, "hd9".U, "h8e".U, "h94".U,
    "h9b".U, "h1e".U, "h87".U, "he9".U, "hce".U, "h55".U, "h28".U, "hdf".U,
    "h8c".U, "ha1".U, "h89".U, "h0d".U, "hbf".U, "he6".U, "h42".U, "h68".U,
    "h41".U, "h99".U, "h2d".U, "h0f".U, "hb0".U, "h54".U, "hbb".U, "h16".U
  ))

  val outBytes = Wire(Vec(16, UInt(8.W)))
  for (i <- 0 until 16) { outBytes(i) := sbox(inBytes(i)) }

  val outWord = Cat((0 until 16).map(i => outBytes(i)))
  io.out.bits.bits := outWord
}

