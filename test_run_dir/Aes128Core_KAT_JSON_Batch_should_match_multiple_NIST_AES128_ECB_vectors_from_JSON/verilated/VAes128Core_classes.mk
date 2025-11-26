# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VAes128Core.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (from --threads, --trace-threads or use of classes)
VM_C11 = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 1
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Threaded output mode?  0/1/N threads (from --threads)
VM_THREADS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 0
# Tracing threaded output mode?  0/1/N threads (from --trace-thread)
VM_TRACE_THREADS = 0
# Separate FST writer thread? 0/1 (from --trace-fst with --trace-thread > 0)
VM_TRACE_FST_WRITER_THREAD = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	VAes128Core \
	VAes128Core__1 \
	VAes128Core__2 \
	VAes128Core__3 \
	VAes128Core__4 \
	VAes128Core_StdRoundGen \
	VAes128Core_SubBytes \
	VAes128Core_SubBytes__1 \
	VAes128Core_SubBytes__2 \
	VAes128Core_SubBytes__3 \
	VAes128Core_SubBytes__4 \
	VAes128Core_SubBytes__5 \
	VAes128Core_SubBytes__6 \
	VAes128Core_SubBytes__7 \
	VAes128Core_SubBytes__8 \
	VAes128Core_SubBytes__9 \
	VAes128Core_SubBytes__10 \
	VAes128Core_SubBytes__11 \
	VAes128Core_SubBytes__12 \
	VAes128Core_SubBytes__13 \
	VAes128Core_SubBytes__14 \
	VAes128Core_SubBytes__15 \
	VAes128Core_SubBytes__16 \
	VAes128Core_SubBytes__17 \
	VAes128Core_SubBytes__18 \
	VAes128Core_SubBytes__19 \
	VAes128Core_SubBytes__20 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VAes128Core__Slow \
	VAes128Core_StdRoundGen__Slow \
	VAes128Core_SubBytes__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VAes128Core__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_cov \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
