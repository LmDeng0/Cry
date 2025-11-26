FIRRTL version 1.2.0
circuit AesAddRoundKeyLLM :
  module AesAddRoundKeyLLM :
    input clock : Clock
    input reset : UInt<1>
    input io_in_state : UInt<128> @[src/main/scala/crypto/aes/llm/AesAddRoundKeyLLM.scala 6:14]
    input io_in_round : UInt<128> @[src/main/scala/crypto/aes/llm/AesAddRoundKeyLLM.scala 6:14]
    output io_out_state : UInt<128> @[src/main/scala/crypto/aes/llm/AesAddRoundKeyLLM.scala 6:14]

    node _io_out_state_T = xor(io_in_state, io_in_round) @[src/main/scala/crypto/aes/llm/AesAddRoundKeyLLM.scala 12:31]
    io_out_state <= _io_out_state_T @[src/main/scala/crypto/aes/llm/AesAddRoundKeyLLM.scala 12:16]
