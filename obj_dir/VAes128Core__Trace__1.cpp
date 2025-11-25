// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAes128Core__Syms.h"


void VAes128Core::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VAes128Core__Syms* __restrict vlSymsp = static_cast<VAes128Core__Syms*>(userp);
    VAes128Core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
