.PHONY: all aes128 aes128_piped test emit_unpiped emit_piped sim_unpiped sim_piped synth_unpiped synth_piped clean

all: aes128

aes128:
	tools/run_pipeline.py --algo aes128 --mode unpiped

aes128_piped:
	tools/run_pipeline.py --algo aes128 --mode piped

test:
	sbt -Dtest.parallel=false test

emit_unpiped:
	sbt "runMain crypto.gen.Emit"

emit_piped:
	sbt "runMain crypto.gen.Emit 128 piped"

sim_unpiped:
	verilator -cc out/aes128/Aes128Core.v --exe sim/aes128_tb.cpp -O3
	$(MAKE) -C obj_dir -f VAes128Core.mk VAes128Core
	./obj_dir/VAes128Core

sim_piped:
	verilator -cc out/aes128_piped/Aes128Core.v --exe sim/aes128_tb.cpp -O3
	$(MAKE) -C obj_dir -f VAes128Core.mk VAes128Core
	./obj_dir/VAes128Core

synth_unpiped:
	vivado -mode batch -source scripts/synth_aes128.tcl || true

synth_piped:
	vivado -mode batch -source scripts/synth_aes128_piped.tcl || true

clean:
	rm -rf obj_dir out io build .bloop .metals target project/target
