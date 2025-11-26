// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAes128Core.h for the primary calling header

#include "VAes128Core_StdRoundGen.h"
#include "VAes128Core__Syms.h"

//==========

VL_CTOR_IMP(VAes128Core_StdRoundGen) {
    VL_CELL(__PVT__core__DOT__sub, VAes128Core_SubBytes);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void VAes128Core_StdRoundGen::__Vconfigure(VAes128Core__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    _configure_coverage(vlSymsp, first);
}

VAes128Core_StdRoundGen::~VAes128Core_StdRoundGen() {
}

// Coverage
#ifndef CHISEL_VL_COVER_INSERT
#define CHISEL_VL_COVER_INSERT(countp, ...) \
    VL_IF_COVER(VerilatedCov::_inserti(countp); VerilatedCov::_insertf(__FILE__, __LINE__); \
                chisel_insertp("hier", name(), __VA_ARGS__))

#ifdef VM_COVERAGE
static void chisel_insertp(
  const char* key0, const char* valp0, const char* key1, const char* valp1,
  const char* key2, int lineno, const char* key3, int column,
  const char* key4, const std::string& hier_str,
  const char* key5, const char* valp5, const char* key6, const char* valp6,
  const char* key7 = nullptr, const char* valp7 = nullptr) {

    std::string val2str = vlCovCvtToStr(lineno);
    std::string val3str = vlCovCvtToStr(column);
    VerilatedCov::_insertp(
        key0, valp0, key1, valp1, key2, val2str.c_str(),
        key3, val3str.c_str(), key4, hier_str.c_str(),
        key5, valp5, key6, valp6, key7, valp7,
        // turn on per instance cover points
        "per_instance", "1");
}
#endif // VM_COVERAGE
#endif // CHISEL_VL_COVER_INSERT


void VAes128Core_StdRoundGen::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    CHISEL_VL_COVER_INSERT(count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string(name())+hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}

void VAes128Core_StdRoundGen::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VAes128Core_StdRoundGen::_ctor_var_reset\n"); );
    // Body
    io_in_ready = VL_RAND_RESET_I(1);
    io_in_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, io_in_bits_bits);
    VL_RAND_RESET_W(128, io_rk_bits);
    io_out_ready = VL_RAND_RESET_I(1);
    io_out_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, io_out_bits_bits);
    VL_RAND_RESET_W(128, __PVT__core__DOT__sh_io_out_bits_bits);
    VL_RAND_RESET_W(128, __PVT__core__DOT__addk_io_out_bits_bits);
    __PVT__core__DOT__mix__DOT___r0_T_1 = VL_RAND_RESET_I(8);
    __PVT__core__DOT__mix__DOT___r0_T_3 = VL_RAND_RESET_I(8);
    __PVT__core__DOT__mix__DOT___r1_T_4 = VL_RAND_RESET_I(8);
    __PVT__core__DOT__mix__DOT___r2_T_5 = VL_RAND_RESET_I(8);
    __PVT__core__DOT__mix__DOT___r0_T_8 = VL_RAND_RESET_I(8);
    __PVT__core__DOT__mix__DOT___r0_T_10 = VL_RAND_RESET_I(8);
    __PVT__core__DOT__mix__DOT___r1_T_11 = VL_RAND_RESET_I(8);
    __PVT__core__DOT__mix__DOT___r2_T_12 = VL_RAND_RESET_I(8);
    __PVT__core__DOT__mix__DOT___r0_T_15 = VL_RAND_RESET_I(8);
    __PVT__core__DOT__mix__DOT___r0_T_17 = VL_RAND_RESET_I(8);
    __PVT__core__DOT__mix__DOT___r1_T_18 = VL_RAND_RESET_I(8);
    __PVT__core__DOT__mix__DOT___r2_T_19 = VL_RAND_RESET_I(8);
    __PVT__core__DOT__mix__DOT___r0_T_22 = VL_RAND_RESET_I(8);
    __PVT__core__DOT__mix__DOT___r0_T_24 = VL_RAND_RESET_I(8);
    __PVT__core__DOT__mix__DOT___r1_T_25 = VL_RAND_RESET_I(8);
    __PVT__core__DOT__mix__DOT___r2_T_26 = VL_RAND_RESET_I(8);
    __PVT__core__DOT__mix__DOT__io_out_bits_bits_lo = VL_RAND_RESET_Q(64);
    __PVT__core__DOT__mix__DOT__io_out_bits_bits_hi = VL_RAND_RESET_Q(64);
}

void VAes128Core_StdRoundGen::_configure_coverage(VAes128Core__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VAes128Core_StdRoundGen::_configure_coverage\n"); );
    // Body
    if (false && vlSymsp && first) {}  // Prevent unused
}