create_project aes128p_proj ./build_aes128_piped -part xcvu9p-flga2104-2-e
add_files [glob ./out/aes128_piped/*.v]
set_property top Aes128Core [current_fileset]
update_compile_order -fileset sources_1
launch_runs synth_1 -jobs 8
wait_on_run synth_1
report_utilization -file ./build_aes128_piped/util.rpt -pb
report_timing_summary -file ./build_aes128_piped/timing.rpt -pb
