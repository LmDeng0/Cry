// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VAes128Core.h for the primary calling header

#ifndef _VAES128CORE_STDROUNDGEN_H_
#define _VAES128CORE_STDROUNDGEN_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"

//==========

class VAes128Core__Syms;
class VAes128Core_SubBytes;


//----------

VL_MODULE(VAes128Core_StdRoundGen) {
  public:
    // CELLS
    VAes128Core_SubBytes* __PVT__core__DOT__sub;
    
    // PORTS
    VL_OUT8(io_in_ready,0,0);
    VL_IN8(io_in_valid,0,0);
    VL_IN8(io_out_ready,0,0);
    VL_OUT8(io_out_valid,0,0);
    VL_INW(io_in_bits_bits,127,0,4);
    VL_INW(io_rk_bits,127,0,4);
    VL_OUTW(io_out_bits_bits,127,0,4);
    
    // LOCAL SIGNALS
    CData/*7:0*/ __PVT__core__DOT__mix__DOT___r0_T_1;
    CData/*7:0*/ __PVT__core__DOT__mix__DOT___r0_T_3;
    CData/*7:0*/ __PVT__core__DOT__mix__DOT___r1_T_4;
    CData/*7:0*/ __PVT__core__DOT__mix__DOT___r2_T_5;
    CData/*7:0*/ __PVT__core__DOT__mix__DOT___r0_T_8;
    CData/*7:0*/ __PVT__core__DOT__mix__DOT___r0_T_10;
    CData/*7:0*/ __PVT__core__DOT__mix__DOT___r1_T_11;
    CData/*7:0*/ __PVT__core__DOT__mix__DOT___r2_T_12;
    CData/*7:0*/ __PVT__core__DOT__mix__DOT___r0_T_15;
    CData/*7:0*/ __PVT__core__DOT__mix__DOT___r0_T_17;
    CData/*7:0*/ __PVT__core__DOT__mix__DOT___r1_T_18;
    CData/*7:0*/ __PVT__core__DOT__mix__DOT___r2_T_19;
    CData/*7:0*/ __PVT__core__DOT__mix__DOT___r0_T_22;
    CData/*7:0*/ __PVT__core__DOT__mix__DOT___r0_T_24;
    CData/*7:0*/ __PVT__core__DOT__mix__DOT___r1_T_25;
    CData/*7:0*/ __PVT__core__DOT__mix__DOT___r2_T_26;
    WData/*127:0*/ __PVT__core__DOT__sh_io_out_bits_bits[4];
    WData/*127:0*/ __PVT__core__DOT__addk_io_out_bits_bits[4];
    QData/*63:0*/ __PVT__core__DOT__mix__DOT__io_out_bits_bits_lo;
    QData/*63:0*/ __PVT__core__DOT__mix__DOT__io_out_bits_bits_hi;
    
    // INTERNAL VARIABLES
  private:
    VAes128Core__Syms* __VlSymsp;  // Symbol table
  public:
  private:
    // Coverage
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VAes128Core_StdRoundGen);  ///< Copying not allowed
  public:
    VAes128Core_StdRoundGen(const char* name = "TOP");
    ~VAes128Core_StdRoundGen();
    
    // INTERNAL METHODS
    void __Vconfigure(VAes128Core__Syms* symsp, bool first);
    void _combo__TOP__Aes128Core__DOT__r1__1(VAes128Core__Syms* __restrict vlSymsp);
    void _combo__TOP__Aes128Core__DOT__r2__2(VAes128Core__Syms* __restrict vlSymsp);
    void _combo__TOP__Aes128Core__DOT__r3__3(VAes128Core__Syms* __restrict vlSymsp);
    void _combo__TOP__Aes128Core__DOT__r4__4(VAes128Core__Syms* __restrict vlSymsp);
    void _combo__TOP__Aes128Core__DOT__r5__5(VAes128Core__Syms* __restrict vlSymsp);
    void _combo__TOP__Aes128Core__DOT__r6__6(VAes128Core__Syms* __restrict vlSymsp);
    void _combo__TOP__Aes128Core__DOT__r7__7(VAes128Core__Syms* __restrict vlSymsp);
    void _combo__TOP__Aes128Core__DOT__r8__8(VAes128Core__Syms* __restrict vlSymsp);
    void _combo__TOP__Aes128Core__DOT__r9__9(VAes128Core__Syms* __restrict vlSymsp);
  private:
    void _configure_coverage(VAes128Core__Syms* __restrict vlSymsp, bool first) VL_ATTR_COLD;
    void _ctor_var_reset() VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
