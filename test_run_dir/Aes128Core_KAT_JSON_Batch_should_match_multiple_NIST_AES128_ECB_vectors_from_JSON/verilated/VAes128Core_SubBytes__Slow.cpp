// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAes128Core.h for the primary calling header

#include "VAes128Core_SubBytes.h"
#include "VAes128Core__Syms.h"

//==========

VL_CTOR_IMP(VAes128Core_SubBytes) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void VAes128Core_SubBytes::__Vconfigure(VAes128Core__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    _configure_coverage(vlSymsp, first);
}

VAes128Core_SubBytes::~VAes128Core_SubBytes() {
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


void VAes128Core_SubBytes::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    CHISEL_VL_COVER_INSERT(count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string(name())+hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}

void VAes128Core_SubBytes::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VAes128Core_SubBytes::_ctor_var_reset\n"); );
    // Body
    io_in_ready = VL_RAND_RESET_I(1);
    io_in_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, io_in_bits_bits);
    io_out_ready = VL_RAND_RESET_I(1);
    io_out_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, io_out_bits_bits);
    __PVT___GEN_13 = VL_RAND_RESET_I(8);
    __PVT___GEN_26 = VL_RAND_RESET_I(8);
    __PVT___GEN_39 = VL_RAND_RESET_I(8);
    __PVT___GEN_52 = VL_RAND_RESET_I(8);
    __PVT___GEN_65 = VL_RAND_RESET_I(8);
    __PVT___GEN_78 = VL_RAND_RESET_I(8);
    __PVT___GEN_91 = VL_RAND_RESET_I(8);
    __PVT___GEN_104 = VL_RAND_RESET_I(8);
    __PVT___GEN_117 = VL_RAND_RESET_I(8);
    __PVT___GEN_130 = VL_RAND_RESET_I(8);
    __PVT___GEN_143 = VL_RAND_RESET_I(8);
    __PVT___GEN_156 = VL_RAND_RESET_I(8);
    __PVT___GEN_169 = VL_RAND_RESET_I(8);
    __PVT___GEN_182 = VL_RAND_RESET_I(8);
    __PVT___GEN_195 = VL_RAND_RESET_I(8);
    __PVT___GEN_208 = VL_RAND_RESET_I(8);
    __PVT___GEN_221 = VL_RAND_RESET_I(8);
    __PVT___GEN_234 = VL_RAND_RESET_I(8);
    __PVT___GEN_247 = VL_RAND_RESET_I(8);
    __PVT___GEN_269 = VL_RAND_RESET_I(8);
    __PVT___GEN_282 = VL_RAND_RESET_I(8);
    __PVT___GEN_295 = VL_RAND_RESET_I(8);
    __PVT___GEN_308 = VL_RAND_RESET_I(8);
    __PVT___GEN_321 = VL_RAND_RESET_I(8);
    __PVT___GEN_334 = VL_RAND_RESET_I(8);
    __PVT___GEN_347 = VL_RAND_RESET_I(8);
    __PVT___GEN_360 = VL_RAND_RESET_I(8);
    __PVT___GEN_373 = VL_RAND_RESET_I(8);
    __PVT___GEN_386 = VL_RAND_RESET_I(8);
    __PVT___GEN_399 = VL_RAND_RESET_I(8);
    __PVT___GEN_412 = VL_RAND_RESET_I(8);
    __PVT___GEN_425 = VL_RAND_RESET_I(8);
    __PVT___GEN_438 = VL_RAND_RESET_I(8);
    __PVT___GEN_451 = VL_RAND_RESET_I(8);
    __PVT___GEN_464 = VL_RAND_RESET_I(8);
    __PVT___GEN_477 = VL_RAND_RESET_I(8);
    __PVT___GEN_490 = VL_RAND_RESET_I(8);
    __PVT___GEN_503 = VL_RAND_RESET_I(8);
    __PVT___GEN_525 = VL_RAND_RESET_I(8);
    __PVT___GEN_538 = VL_RAND_RESET_I(8);
    __PVT___GEN_551 = VL_RAND_RESET_I(8);
    __PVT___GEN_564 = VL_RAND_RESET_I(8);
    __PVT___GEN_577 = VL_RAND_RESET_I(8);
    __PVT___GEN_590 = VL_RAND_RESET_I(8);
    __PVT___GEN_603 = VL_RAND_RESET_I(8);
    __PVT___GEN_616 = VL_RAND_RESET_I(8);
    __PVT___GEN_629 = VL_RAND_RESET_I(8);
    __PVT___GEN_642 = VL_RAND_RESET_I(8);
    __PVT___GEN_655 = VL_RAND_RESET_I(8);
    __PVT___GEN_668 = VL_RAND_RESET_I(8);
    __PVT___GEN_681 = VL_RAND_RESET_I(8);
    __PVT___GEN_694 = VL_RAND_RESET_I(8);
    __PVT___GEN_707 = VL_RAND_RESET_I(8);
    __PVT___GEN_720 = VL_RAND_RESET_I(8);
    __PVT___GEN_733 = VL_RAND_RESET_I(8);
    __PVT___GEN_746 = VL_RAND_RESET_I(8);
    __PVT___GEN_759 = VL_RAND_RESET_I(8);
    __PVT___GEN_781 = VL_RAND_RESET_I(8);
    __PVT___GEN_794 = VL_RAND_RESET_I(8);
    __PVT___GEN_807 = VL_RAND_RESET_I(8);
    __PVT___GEN_820 = VL_RAND_RESET_I(8);
    __PVT___GEN_833 = VL_RAND_RESET_I(8);
    __PVT___GEN_846 = VL_RAND_RESET_I(8);
    __PVT___GEN_859 = VL_RAND_RESET_I(8);
    __PVT___GEN_872 = VL_RAND_RESET_I(8);
    __PVT___GEN_885 = VL_RAND_RESET_I(8);
    __PVT___GEN_898 = VL_RAND_RESET_I(8);
    __PVT___GEN_911 = VL_RAND_RESET_I(8);
    __PVT___GEN_924 = VL_RAND_RESET_I(8);
    __PVT___GEN_937 = VL_RAND_RESET_I(8);
    __PVT___GEN_950 = VL_RAND_RESET_I(8);
    __PVT___GEN_963 = VL_RAND_RESET_I(8);
    __PVT___GEN_976 = VL_RAND_RESET_I(8);
    __PVT___GEN_989 = VL_RAND_RESET_I(8);
    __PVT___GEN_1002 = VL_RAND_RESET_I(8);
    __PVT___GEN_1015 = VL_RAND_RESET_I(8);
    __PVT___GEN_1037 = VL_RAND_RESET_I(8);
    __PVT___GEN_1050 = VL_RAND_RESET_I(8);
    __PVT___GEN_1063 = VL_RAND_RESET_I(8);
    __PVT___GEN_1076 = VL_RAND_RESET_I(8);
    __PVT___GEN_1089 = VL_RAND_RESET_I(8);
    __PVT___GEN_1102 = VL_RAND_RESET_I(8);
    __PVT___GEN_1115 = VL_RAND_RESET_I(8);
    __PVT___GEN_1128 = VL_RAND_RESET_I(8);
    __PVT___GEN_1141 = VL_RAND_RESET_I(8);
    __PVT___GEN_1154 = VL_RAND_RESET_I(8);
    __PVT___GEN_1167 = VL_RAND_RESET_I(8);
    __PVT___GEN_1180 = VL_RAND_RESET_I(8);
    __PVT___GEN_1193 = VL_RAND_RESET_I(8);
    __PVT___GEN_1206 = VL_RAND_RESET_I(8);
    __PVT___GEN_1219 = VL_RAND_RESET_I(8);
    __PVT___GEN_1232 = VL_RAND_RESET_I(8);
    __PVT___GEN_1245 = VL_RAND_RESET_I(8);
    __PVT___GEN_1258 = VL_RAND_RESET_I(8);
    __PVT___GEN_1271 = VL_RAND_RESET_I(8);
    __PVT___GEN_1293 = VL_RAND_RESET_I(8);
    __PVT___GEN_1306 = VL_RAND_RESET_I(8);
    __PVT___GEN_1319 = VL_RAND_RESET_I(8);
    __PVT___GEN_1332 = VL_RAND_RESET_I(8);
    __PVT___GEN_1345 = VL_RAND_RESET_I(8);
    __PVT___GEN_1358 = VL_RAND_RESET_I(8);
    __PVT___GEN_1371 = VL_RAND_RESET_I(8);
    __PVT___GEN_1384 = VL_RAND_RESET_I(8);
    __PVT___GEN_1397 = VL_RAND_RESET_I(8);
    __PVT___GEN_1410 = VL_RAND_RESET_I(8);
    __PVT___GEN_1423 = VL_RAND_RESET_I(8);
    __PVT___GEN_1436 = VL_RAND_RESET_I(8);
    __PVT___GEN_1449 = VL_RAND_RESET_I(8);
    __PVT___GEN_1462 = VL_RAND_RESET_I(8);
    __PVT___GEN_1475 = VL_RAND_RESET_I(8);
    __PVT___GEN_1488 = VL_RAND_RESET_I(8);
    __PVT___GEN_1501 = VL_RAND_RESET_I(8);
    __PVT___GEN_1514 = VL_RAND_RESET_I(8);
    __PVT___GEN_1527 = VL_RAND_RESET_I(8);
    __PVT___GEN_1549 = VL_RAND_RESET_I(8);
    __PVT___GEN_1562 = VL_RAND_RESET_I(8);
    __PVT___GEN_1575 = VL_RAND_RESET_I(8);
    __PVT___GEN_1588 = VL_RAND_RESET_I(8);
    __PVT___GEN_1601 = VL_RAND_RESET_I(8);
    __PVT___GEN_1614 = VL_RAND_RESET_I(8);
    __PVT___GEN_1627 = VL_RAND_RESET_I(8);
    __PVT___GEN_1640 = VL_RAND_RESET_I(8);
    __PVT___GEN_1653 = VL_RAND_RESET_I(8);
    __PVT___GEN_1666 = VL_RAND_RESET_I(8);
    __PVT___GEN_1679 = VL_RAND_RESET_I(8);
    __PVT___GEN_1692 = VL_RAND_RESET_I(8);
    __PVT___GEN_1705 = VL_RAND_RESET_I(8);
    __PVT___GEN_1718 = VL_RAND_RESET_I(8);
    __PVT___GEN_1731 = VL_RAND_RESET_I(8);
    __PVT___GEN_1744 = VL_RAND_RESET_I(8);
    __PVT___GEN_1757 = VL_RAND_RESET_I(8);
    __PVT___GEN_1770 = VL_RAND_RESET_I(8);
    __PVT___GEN_1783 = VL_RAND_RESET_I(8);
    __PVT___GEN_1805 = VL_RAND_RESET_I(8);
    __PVT___GEN_1818 = VL_RAND_RESET_I(8);
    __PVT___GEN_1831 = VL_RAND_RESET_I(8);
    __PVT___GEN_1844 = VL_RAND_RESET_I(8);
    __PVT___GEN_1857 = VL_RAND_RESET_I(8);
    __PVT___GEN_1870 = VL_RAND_RESET_I(8);
    __PVT___GEN_1883 = VL_RAND_RESET_I(8);
    __PVT___GEN_1896 = VL_RAND_RESET_I(8);
    __PVT___GEN_1909 = VL_RAND_RESET_I(8);
    __PVT___GEN_1922 = VL_RAND_RESET_I(8);
    __PVT___GEN_1935 = VL_RAND_RESET_I(8);
    __PVT___GEN_1948 = VL_RAND_RESET_I(8);
    __PVT___GEN_1961 = VL_RAND_RESET_I(8);
    __PVT___GEN_1974 = VL_RAND_RESET_I(8);
    __PVT___GEN_1987 = VL_RAND_RESET_I(8);
    __PVT___GEN_2000 = VL_RAND_RESET_I(8);
    __PVT___GEN_2013 = VL_RAND_RESET_I(8);
    __PVT___GEN_2026 = VL_RAND_RESET_I(8);
    __PVT___GEN_2039 = VL_RAND_RESET_I(8);
    __PVT___GEN_2061 = VL_RAND_RESET_I(8);
    __PVT___GEN_2074 = VL_RAND_RESET_I(8);
    __PVT___GEN_2087 = VL_RAND_RESET_I(8);
    __PVT___GEN_2100 = VL_RAND_RESET_I(8);
    __PVT___GEN_2113 = VL_RAND_RESET_I(8);
    __PVT___GEN_2126 = VL_RAND_RESET_I(8);
    __PVT___GEN_2139 = VL_RAND_RESET_I(8);
    __PVT___GEN_2152 = VL_RAND_RESET_I(8);
    __PVT___GEN_2165 = VL_RAND_RESET_I(8);
    __PVT___GEN_2178 = VL_RAND_RESET_I(8);
    __PVT___GEN_2191 = VL_RAND_RESET_I(8);
    __PVT___GEN_2204 = VL_RAND_RESET_I(8);
    __PVT___GEN_2217 = VL_RAND_RESET_I(8);
    __PVT___GEN_2230 = VL_RAND_RESET_I(8);
    __PVT___GEN_2243 = VL_RAND_RESET_I(8);
    __PVT___GEN_2256 = VL_RAND_RESET_I(8);
    __PVT___GEN_2269 = VL_RAND_RESET_I(8);
    __PVT___GEN_2282 = VL_RAND_RESET_I(8);
    __PVT___GEN_2295 = VL_RAND_RESET_I(8);
    __PVT___GEN_2317 = VL_RAND_RESET_I(8);
    __PVT___GEN_2330 = VL_RAND_RESET_I(8);
    __PVT___GEN_2343 = VL_RAND_RESET_I(8);
    __PVT___GEN_2356 = VL_RAND_RESET_I(8);
    __PVT___GEN_2369 = VL_RAND_RESET_I(8);
    __PVT___GEN_2382 = VL_RAND_RESET_I(8);
    __PVT___GEN_2395 = VL_RAND_RESET_I(8);
    __PVT___GEN_2408 = VL_RAND_RESET_I(8);
    __PVT___GEN_2421 = VL_RAND_RESET_I(8);
    __PVT___GEN_2434 = VL_RAND_RESET_I(8);
    __PVT___GEN_2447 = VL_RAND_RESET_I(8);
    __PVT___GEN_2460 = VL_RAND_RESET_I(8);
    __PVT___GEN_2473 = VL_RAND_RESET_I(8);
    __PVT___GEN_2486 = VL_RAND_RESET_I(8);
    __PVT___GEN_2499 = VL_RAND_RESET_I(8);
    __PVT___GEN_2512 = VL_RAND_RESET_I(8);
    __PVT___GEN_2525 = VL_RAND_RESET_I(8);
    __PVT___GEN_2538 = VL_RAND_RESET_I(8);
    __PVT___GEN_2551 = VL_RAND_RESET_I(8);
    __PVT___GEN_2573 = VL_RAND_RESET_I(8);
    __PVT___GEN_2586 = VL_RAND_RESET_I(8);
    __PVT___GEN_2599 = VL_RAND_RESET_I(8);
    __PVT___GEN_2612 = VL_RAND_RESET_I(8);
    __PVT___GEN_2625 = VL_RAND_RESET_I(8);
    __PVT___GEN_2638 = VL_RAND_RESET_I(8);
    __PVT___GEN_2651 = VL_RAND_RESET_I(8);
    __PVT___GEN_2664 = VL_RAND_RESET_I(8);
    __PVT___GEN_2677 = VL_RAND_RESET_I(8);
    __PVT___GEN_2690 = VL_RAND_RESET_I(8);
    __PVT___GEN_2703 = VL_RAND_RESET_I(8);
    __PVT___GEN_2716 = VL_RAND_RESET_I(8);
    __PVT___GEN_2729 = VL_RAND_RESET_I(8);
    __PVT___GEN_2742 = VL_RAND_RESET_I(8);
    __PVT___GEN_2755 = VL_RAND_RESET_I(8);
    __PVT___GEN_2768 = VL_RAND_RESET_I(8);
    __PVT___GEN_2781 = VL_RAND_RESET_I(8);
    __PVT___GEN_2794 = VL_RAND_RESET_I(8);
    __PVT___GEN_2807 = VL_RAND_RESET_I(8);
    __PVT___GEN_2829 = VL_RAND_RESET_I(8);
    __PVT___GEN_2842 = VL_RAND_RESET_I(8);
    __PVT___GEN_2855 = VL_RAND_RESET_I(8);
    __PVT___GEN_2868 = VL_RAND_RESET_I(8);
    __PVT___GEN_2881 = VL_RAND_RESET_I(8);
    __PVT___GEN_2894 = VL_RAND_RESET_I(8);
    __PVT___GEN_2907 = VL_RAND_RESET_I(8);
    __PVT___GEN_2920 = VL_RAND_RESET_I(8);
    __PVT___GEN_2933 = VL_RAND_RESET_I(8);
    __PVT___GEN_2946 = VL_RAND_RESET_I(8);
    __PVT___GEN_2959 = VL_RAND_RESET_I(8);
    __PVT___GEN_2972 = VL_RAND_RESET_I(8);
    __PVT___GEN_2985 = VL_RAND_RESET_I(8);
    __PVT___GEN_2998 = VL_RAND_RESET_I(8);
    __PVT___GEN_3011 = VL_RAND_RESET_I(8);
    __PVT___GEN_3024 = VL_RAND_RESET_I(8);
    __PVT___GEN_3037 = VL_RAND_RESET_I(8);
    __PVT___GEN_3050 = VL_RAND_RESET_I(8);
    __PVT___GEN_3063 = VL_RAND_RESET_I(8);
    __PVT___GEN_3085 = VL_RAND_RESET_I(8);
    __PVT___GEN_3098 = VL_RAND_RESET_I(8);
    __PVT___GEN_3111 = VL_RAND_RESET_I(8);
    __PVT___GEN_3124 = VL_RAND_RESET_I(8);
    __PVT___GEN_3137 = VL_RAND_RESET_I(8);
    __PVT___GEN_3150 = VL_RAND_RESET_I(8);
    __PVT___GEN_3163 = VL_RAND_RESET_I(8);
    __PVT___GEN_3176 = VL_RAND_RESET_I(8);
    __PVT___GEN_3189 = VL_RAND_RESET_I(8);
    __PVT___GEN_3202 = VL_RAND_RESET_I(8);
    __PVT___GEN_3215 = VL_RAND_RESET_I(8);
    __PVT___GEN_3228 = VL_RAND_RESET_I(8);
    __PVT___GEN_3241 = VL_RAND_RESET_I(8);
    __PVT___GEN_3254 = VL_RAND_RESET_I(8);
    __PVT___GEN_3267 = VL_RAND_RESET_I(8);
    __PVT___GEN_3280 = VL_RAND_RESET_I(8);
    __PVT___GEN_3293 = VL_RAND_RESET_I(8);
    __PVT___GEN_3306 = VL_RAND_RESET_I(8);
    __PVT___GEN_3319 = VL_RAND_RESET_I(8);
    __PVT___GEN_3341 = VL_RAND_RESET_I(8);
    __PVT___GEN_3354 = VL_RAND_RESET_I(8);
    __PVT___GEN_3367 = VL_RAND_RESET_I(8);
    __PVT___GEN_3380 = VL_RAND_RESET_I(8);
    __PVT___GEN_3393 = VL_RAND_RESET_I(8);
    __PVT___GEN_3406 = VL_RAND_RESET_I(8);
    __PVT___GEN_3419 = VL_RAND_RESET_I(8);
    __PVT___GEN_3432 = VL_RAND_RESET_I(8);
    __PVT___GEN_3445 = VL_RAND_RESET_I(8);
    __PVT___GEN_3458 = VL_RAND_RESET_I(8);
    __PVT___GEN_3471 = VL_RAND_RESET_I(8);
    __PVT___GEN_3484 = VL_RAND_RESET_I(8);
    __PVT___GEN_3497 = VL_RAND_RESET_I(8);
    __PVT___GEN_3510 = VL_RAND_RESET_I(8);
    __PVT___GEN_3523 = VL_RAND_RESET_I(8);
    __PVT___GEN_3536 = VL_RAND_RESET_I(8);
    __PVT___GEN_3549 = VL_RAND_RESET_I(8);
    __PVT___GEN_3562 = VL_RAND_RESET_I(8);
    __PVT___GEN_3575 = VL_RAND_RESET_I(8);
    __PVT___GEN_3597 = VL_RAND_RESET_I(8);
    __PVT___GEN_3610 = VL_RAND_RESET_I(8);
    __PVT___GEN_3623 = VL_RAND_RESET_I(8);
    __PVT___GEN_3636 = VL_RAND_RESET_I(8);
    __PVT___GEN_3649 = VL_RAND_RESET_I(8);
    __PVT___GEN_3662 = VL_RAND_RESET_I(8);
    __PVT___GEN_3675 = VL_RAND_RESET_I(8);
    __PVT___GEN_3688 = VL_RAND_RESET_I(8);
    __PVT___GEN_3701 = VL_RAND_RESET_I(8);
    __PVT___GEN_3714 = VL_RAND_RESET_I(8);
    __PVT___GEN_3727 = VL_RAND_RESET_I(8);
    __PVT___GEN_3740 = VL_RAND_RESET_I(8);
    __PVT___GEN_3753 = VL_RAND_RESET_I(8);
    __PVT___GEN_3766 = VL_RAND_RESET_I(8);
    __PVT___GEN_3779 = VL_RAND_RESET_I(8);
    __PVT___GEN_3792 = VL_RAND_RESET_I(8);
    __PVT___GEN_3805 = VL_RAND_RESET_I(8);
    __PVT___GEN_3818 = VL_RAND_RESET_I(8);
    __PVT___GEN_3831 = VL_RAND_RESET_I(8);
    __PVT___GEN_3853 = VL_RAND_RESET_I(8);
    __PVT___GEN_3866 = VL_RAND_RESET_I(8);
    __PVT___GEN_3879 = VL_RAND_RESET_I(8);
    __PVT___GEN_3892 = VL_RAND_RESET_I(8);
    __PVT___GEN_3905 = VL_RAND_RESET_I(8);
    __PVT___GEN_3918 = VL_RAND_RESET_I(8);
    __PVT___GEN_3931 = VL_RAND_RESET_I(8);
    __PVT___GEN_3944 = VL_RAND_RESET_I(8);
    __PVT___GEN_3957 = VL_RAND_RESET_I(8);
    __PVT___GEN_3970 = VL_RAND_RESET_I(8);
    __PVT___GEN_3983 = VL_RAND_RESET_I(8);
    __PVT___GEN_3996 = VL_RAND_RESET_I(8);
    __PVT___GEN_4009 = VL_RAND_RESET_I(8);
    __PVT___GEN_4022 = VL_RAND_RESET_I(8);
    __PVT___GEN_4035 = VL_RAND_RESET_I(8);
    __PVT___GEN_4048 = VL_RAND_RESET_I(8);
    __PVT___GEN_4061 = VL_RAND_RESET_I(8);
    __PVT___GEN_4074 = VL_RAND_RESET_I(8);
    __PVT___GEN_4087 = VL_RAND_RESET_I(8);
    __PVT__outWord_lo = VL_RAND_RESET_Q(64);
    __PVT__outWord_hi = VL_RAND_RESET_Q(64);
}

void VAes128Core_SubBytes::_configure_coverage(VAes128Core__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VAes128Core_SubBytes::_configure_coverage\n"); );
    // Body
    if (false && vlSymsp && first) {}  // Prevent unused
}