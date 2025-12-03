top: Aes128Core
algo: AES
params:
  BLOCK_W: 128
  KEY_W: 128
  ROUNDS: 10
bundles:
  Block:
    width: 128
  Key:
    width: 128
  State:
    width: 128
interfaces:
  in:
    dir: in
    type: Decoupled
    payload: Block
  out:
    dir: out
    type: Decoupled
    payload: Block
  key:
    dir: in
    type: Valid
    payload: Key
dag:
- name: KeySchedule128
  kind: KeySchedule
  latency: 11
  in:
  - key
  out:
  - rk0
  - rk1
  - rk2
  - rk3
  - rk4
  - rk5
  - rk6
  - rk7
  - rk8
  - rk9
  - rk10
- name: InitRound
  kind: AddRoundKey
  latency: 0
  in:
  - in
  - rk0
  out:
  - state
- name: Round1
  kind: StdRound
  latency: 2
  in:
  - state
  - rk1
  out:
  - state
- name: Round2
  kind: StdRound
  latency: 2
  in:
  - state
  - rk2
  out:
  - state
- name: Round3
  kind: StdRound
  latency: 2
  in:
  - state
  - rk3
  out:
  - state
- name: Round4
  kind: StdRound
  latency: 2
  in:
  - state
  - rk4
  out:
  - state
- name: Round5
  kind: StdRound
  latency: 2
  in:
  - state
  - rk5
  out:
  - state
- name: Round6
  kind: StdRound
  latency: 2
  in:
  - state
  - rk6
  out:
  - state
- name: Round7
  kind: StdRound
  latency: 2
  in:
  - state
  - rk7
  out:
  - state
- name: Round8
  kind: StdRound
  latency: 2
  in:
  - state
  - rk8
  out:
  - state
- name: Round9
  kind: StdRound
  latency: 2
  in:
  - state
  - rk9
  out:
  - state
- name: FinalRound
  kind: FinalRound
  latency: 1
  in:
  - state
  - rk10
  out:
  - cipher
connections:
- - in
  - InitRound.in
- - InitRound.state
  - Round1.state
- - Round1.state
  - Round2.state
- - Round2.state
  - Round3.state
- - Round3.state
  - Round4.state
- - Round4.state
  - Round5.state
- - Round5.state
  - Round6.state
- - Round6.state
  - Round7.state
- - Round7.state
  - Round8.state
- - Round8.state
  - Round9.state
- - Round9.state
  - FinalRound.state
- - FinalRound.cipher
  - out
verification:
  vectors_file: nist_kats_aes_ecb.json
  properties:
  - handshake_no_deadlock
  - const_time_no_secret_branch
security:
  constant_time: true
  forbid_secret_index: true