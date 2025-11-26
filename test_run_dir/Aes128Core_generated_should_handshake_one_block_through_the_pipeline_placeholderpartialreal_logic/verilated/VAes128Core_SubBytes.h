// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VAes128Core.h for the primary calling header

#ifndef _VAES128CORE_SUBBYTES_H_
#define _VAES128CORE_SUBBYTES_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"

//==========

class VAes128Core__Syms;

//----------

VL_MODULE(VAes128Core_SubBytes) {
  public:
    
    // PORTS
    VL_OUT8(io_in_ready,0,0);
    VL_IN8(io_in_valid,0,0);
    VL_IN8(io_out_ready,0,0);
    VL_OUT8(io_out_valid,0,0);
    VL_INW(io_in_bits_bits,127,0,4);
    VL_OUTW(io_out_bits_bits,127,0,4);
    
    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*7:0*/ __PVT___GEN_13;
        CData/*7:0*/ __PVT___GEN_26;
        CData/*7:0*/ __PVT___GEN_39;
        CData/*7:0*/ __PVT___GEN_52;
        CData/*7:0*/ __PVT___GEN_65;
        CData/*7:0*/ __PVT___GEN_78;
        CData/*7:0*/ __PVT___GEN_91;
        CData/*7:0*/ __PVT___GEN_104;
        CData/*7:0*/ __PVT___GEN_117;
        CData/*7:0*/ __PVT___GEN_130;
        CData/*7:0*/ __PVT___GEN_143;
        CData/*7:0*/ __PVT___GEN_156;
        CData/*7:0*/ __PVT___GEN_169;
        CData/*7:0*/ __PVT___GEN_182;
        CData/*7:0*/ __PVT___GEN_195;
        CData/*7:0*/ __PVT___GEN_208;
        CData/*7:0*/ __PVT___GEN_221;
        CData/*7:0*/ __PVT___GEN_234;
        CData/*7:0*/ __PVT___GEN_247;
        CData/*7:0*/ __PVT___GEN_269;
        CData/*7:0*/ __PVT___GEN_282;
        CData/*7:0*/ __PVT___GEN_295;
        CData/*7:0*/ __PVT___GEN_308;
        CData/*7:0*/ __PVT___GEN_321;
        CData/*7:0*/ __PVT___GEN_334;
        CData/*7:0*/ __PVT___GEN_347;
        CData/*7:0*/ __PVT___GEN_360;
        CData/*7:0*/ __PVT___GEN_373;
        CData/*7:0*/ __PVT___GEN_386;
        CData/*7:0*/ __PVT___GEN_399;
        CData/*7:0*/ __PVT___GEN_412;
        CData/*7:0*/ __PVT___GEN_425;
        CData/*7:0*/ __PVT___GEN_438;
        CData/*7:0*/ __PVT___GEN_451;
        CData/*7:0*/ __PVT___GEN_464;
        CData/*7:0*/ __PVT___GEN_477;
        CData/*7:0*/ __PVT___GEN_490;
        CData/*7:0*/ __PVT___GEN_503;
        CData/*7:0*/ __PVT___GEN_525;
        CData/*7:0*/ __PVT___GEN_538;
        CData/*7:0*/ __PVT___GEN_551;
        CData/*7:0*/ __PVT___GEN_564;
        CData/*7:0*/ __PVT___GEN_577;
        CData/*7:0*/ __PVT___GEN_590;
        CData/*7:0*/ __PVT___GEN_603;
        CData/*7:0*/ __PVT___GEN_616;
        CData/*7:0*/ __PVT___GEN_629;
        CData/*7:0*/ __PVT___GEN_642;
        CData/*7:0*/ __PVT___GEN_655;
        CData/*7:0*/ __PVT___GEN_668;
        CData/*7:0*/ __PVT___GEN_681;
        CData/*7:0*/ __PVT___GEN_694;
        CData/*7:0*/ __PVT___GEN_707;
        CData/*7:0*/ __PVT___GEN_720;
        CData/*7:0*/ __PVT___GEN_733;
        CData/*7:0*/ __PVT___GEN_746;
        CData/*7:0*/ __PVT___GEN_759;
        CData/*7:0*/ __PVT___GEN_781;
        CData/*7:0*/ __PVT___GEN_794;
        CData/*7:0*/ __PVT___GEN_807;
        CData/*7:0*/ __PVT___GEN_820;
        CData/*7:0*/ __PVT___GEN_833;
        CData/*7:0*/ __PVT___GEN_846;
        CData/*7:0*/ __PVT___GEN_859;
    };
    struct {
        CData/*7:0*/ __PVT___GEN_872;
        CData/*7:0*/ __PVT___GEN_885;
        CData/*7:0*/ __PVT___GEN_898;
        CData/*7:0*/ __PVT___GEN_911;
        CData/*7:0*/ __PVT___GEN_924;
        CData/*7:0*/ __PVT___GEN_937;
        CData/*7:0*/ __PVT___GEN_950;
        CData/*7:0*/ __PVT___GEN_963;
        CData/*7:0*/ __PVT___GEN_976;
        CData/*7:0*/ __PVT___GEN_989;
        CData/*7:0*/ __PVT___GEN_1002;
        CData/*7:0*/ __PVT___GEN_1015;
        CData/*7:0*/ __PVT___GEN_1037;
        CData/*7:0*/ __PVT___GEN_1050;
        CData/*7:0*/ __PVT___GEN_1063;
        CData/*7:0*/ __PVT___GEN_1076;
        CData/*7:0*/ __PVT___GEN_1089;
        CData/*7:0*/ __PVT___GEN_1102;
        CData/*7:0*/ __PVT___GEN_1115;
        CData/*7:0*/ __PVT___GEN_1128;
        CData/*7:0*/ __PVT___GEN_1141;
        CData/*7:0*/ __PVT___GEN_1154;
        CData/*7:0*/ __PVT___GEN_1167;
        CData/*7:0*/ __PVT___GEN_1180;
        CData/*7:0*/ __PVT___GEN_1193;
        CData/*7:0*/ __PVT___GEN_1206;
        CData/*7:0*/ __PVT___GEN_1219;
        CData/*7:0*/ __PVT___GEN_1232;
        CData/*7:0*/ __PVT___GEN_1245;
        CData/*7:0*/ __PVT___GEN_1258;
        CData/*7:0*/ __PVT___GEN_1271;
        CData/*7:0*/ __PVT___GEN_1293;
        CData/*7:0*/ __PVT___GEN_1306;
        CData/*7:0*/ __PVT___GEN_1319;
        CData/*7:0*/ __PVT___GEN_1332;
        CData/*7:0*/ __PVT___GEN_1345;
        CData/*7:0*/ __PVT___GEN_1358;
        CData/*7:0*/ __PVT___GEN_1371;
        CData/*7:0*/ __PVT___GEN_1384;
        CData/*7:0*/ __PVT___GEN_1397;
        CData/*7:0*/ __PVT___GEN_1410;
        CData/*7:0*/ __PVT___GEN_1423;
        CData/*7:0*/ __PVT___GEN_1436;
        CData/*7:0*/ __PVT___GEN_1449;
        CData/*7:0*/ __PVT___GEN_1462;
        CData/*7:0*/ __PVT___GEN_1475;
        CData/*7:0*/ __PVT___GEN_1488;
        CData/*7:0*/ __PVT___GEN_1501;
        CData/*7:0*/ __PVT___GEN_1514;
        CData/*7:0*/ __PVT___GEN_1527;
        CData/*7:0*/ __PVT___GEN_1549;
        CData/*7:0*/ __PVT___GEN_1562;
        CData/*7:0*/ __PVT___GEN_1575;
        CData/*7:0*/ __PVT___GEN_1588;
        CData/*7:0*/ __PVT___GEN_1601;
        CData/*7:0*/ __PVT___GEN_1614;
        CData/*7:0*/ __PVT___GEN_1627;
        CData/*7:0*/ __PVT___GEN_1640;
        CData/*7:0*/ __PVT___GEN_1653;
        CData/*7:0*/ __PVT___GEN_1666;
        CData/*7:0*/ __PVT___GEN_1679;
        CData/*7:0*/ __PVT___GEN_1692;
        CData/*7:0*/ __PVT___GEN_1705;
        CData/*7:0*/ __PVT___GEN_1718;
    };
    struct {
        CData/*7:0*/ __PVT___GEN_1731;
        CData/*7:0*/ __PVT___GEN_1744;
        CData/*7:0*/ __PVT___GEN_1757;
        CData/*7:0*/ __PVT___GEN_1770;
        CData/*7:0*/ __PVT___GEN_1783;
        CData/*7:0*/ __PVT___GEN_1805;
        CData/*7:0*/ __PVT___GEN_1818;
        CData/*7:0*/ __PVT___GEN_1831;
        CData/*7:0*/ __PVT___GEN_1844;
        CData/*7:0*/ __PVT___GEN_1857;
        CData/*7:0*/ __PVT___GEN_1870;
        CData/*7:0*/ __PVT___GEN_1883;
        CData/*7:0*/ __PVT___GEN_1896;
        CData/*7:0*/ __PVT___GEN_1909;
        CData/*7:0*/ __PVT___GEN_1922;
        CData/*7:0*/ __PVT___GEN_1935;
        CData/*7:0*/ __PVT___GEN_1948;
        CData/*7:0*/ __PVT___GEN_1961;
        CData/*7:0*/ __PVT___GEN_1974;
        CData/*7:0*/ __PVT___GEN_1987;
        CData/*7:0*/ __PVT___GEN_2000;
        CData/*7:0*/ __PVT___GEN_2013;
        CData/*7:0*/ __PVT___GEN_2026;
        CData/*7:0*/ __PVT___GEN_2039;
        CData/*7:0*/ __PVT___GEN_2061;
        CData/*7:0*/ __PVT___GEN_2074;
        CData/*7:0*/ __PVT___GEN_2087;
        CData/*7:0*/ __PVT___GEN_2100;
        CData/*7:0*/ __PVT___GEN_2113;
        CData/*7:0*/ __PVT___GEN_2126;
        CData/*7:0*/ __PVT___GEN_2139;
        CData/*7:0*/ __PVT___GEN_2152;
        CData/*7:0*/ __PVT___GEN_2165;
        CData/*7:0*/ __PVT___GEN_2178;
        CData/*7:0*/ __PVT___GEN_2191;
        CData/*7:0*/ __PVT___GEN_2204;
        CData/*7:0*/ __PVT___GEN_2217;
        CData/*7:0*/ __PVT___GEN_2230;
        CData/*7:0*/ __PVT___GEN_2243;
        CData/*7:0*/ __PVT___GEN_2256;
        CData/*7:0*/ __PVT___GEN_2269;
        CData/*7:0*/ __PVT___GEN_2282;
        CData/*7:0*/ __PVT___GEN_2295;
        CData/*7:0*/ __PVT___GEN_2317;
        CData/*7:0*/ __PVT___GEN_2330;
        CData/*7:0*/ __PVT___GEN_2343;
        CData/*7:0*/ __PVT___GEN_2356;
        CData/*7:0*/ __PVT___GEN_2369;
        CData/*7:0*/ __PVT___GEN_2382;
        CData/*7:0*/ __PVT___GEN_2395;
        CData/*7:0*/ __PVT___GEN_2408;
        CData/*7:0*/ __PVT___GEN_2421;
        CData/*7:0*/ __PVT___GEN_2434;
        CData/*7:0*/ __PVT___GEN_2447;
        CData/*7:0*/ __PVT___GEN_2460;
        CData/*7:0*/ __PVT___GEN_2473;
        CData/*7:0*/ __PVT___GEN_2486;
        CData/*7:0*/ __PVT___GEN_2499;
        CData/*7:0*/ __PVT___GEN_2512;
        CData/*7:0*/ __PVT___GEN_2525;
        CData/*7:0*/ __PVT___GEN_2538;
        CData/*7:0*/ __PVT___GEN_2551;
        CData/*7:0*/ __PVT___GEN_2573;
        CData/*7:0*/ __PVT___GEN_2586;
    };
    struct {
        CData/*7:0*/ __PVT___GEN_2599;
        CData/*7:0*/ __PVT___GEN_2612;
        CData/*7:0*/ __PVT___GEN_2625;
        CData/*7:0*/ __PVT___GEN_2638;
        CData/*7:0*/ __PVT___GEN_2651;
        CData/*7:0*/ __PVT___GEN_2664;
        CData/*7:0*/ __PVT___GEN_2677;
        CData/*7:0*/ __PVT___GEN_2690;
        CData/*7:0*/ __PVT___GEN_2703;
        CData/*7:0*/ __PVT___GEN_2716;
        CData/*7:0*/ __PVT___GEN_2729;
        CData/*7:0*/ __PVT___GEN_2742;
        CData/*7:0*/ __PVT___GEN_2755;
        CData/*7:0*/ __PVT___GEN_2768;
        CData/*7:0*/ __PVT___GEN_2781;
        CData/*7:0*/ __PVT___GEN_2794;
        CData/*7:0*/ __PVT___GEN_2807;
        CData/*7:0*/ __PVT___GEN_2829;
        CData/*7:0*/ __PVT___GEN_2842;
        CData/*7:0*/ __PVT___GEN_2855;
        CData/*7:0*/ __PVT___GEN_2868;
        CData/*7:0*/ __PVT___GEN_2881;
        CData/*7:0*/ __PVT___GEN_2894;
        CData/*7:0*/ __PVT___GEN_2907;
        CData/*7:0*/ __PVT___GEN_2920;
        CData/*7:0*/ __PVT___GEN_2933;
        CData/*7:0*/ __PVT___GEN_2946;
        CData/*7:0*/ __PVT___GEN_2959;
        CData/*7:0*/ __PVT___GEN_2972;
        CData/*7:0*/ __PVT___GEN_2985;
        CData/*7:0*/ __PVT___GEN_2998;
        CData/*7:0*/ __PVT___GEN_3011;
        CData/*7:0*/ __PVT___GEN_3024;
        CData/*7:0*/ __PVT___GEN_3037;
        CData/*7:0*/ __PVT___GEN_3050;
        CData/*7:0*/ __PVT___GEN_3063;
        CData/*7:0*/ __PVT___GEN_3085;
        CData/*7:0*/ __PVT___GEN_3098;
        CData/*7:0*/ __PVT___GEN_3111;
        CData/*7:0*/ __PVT___GEN_3124;
        CData/*7:0*/ __PVT___GEN_3137;
        CData/*7:0*/ __PVT___GEN_3150;
        CData/*7:0*/ __PVT___GEN_3163;
        CData/*7:0*/ __PVT___GEN_3176;
        CData/*7:0*/ __PVT___GEN_3189;
        CData/*7:0*/ __PVT___GEN_3202;
        CData/*7:0*/ __PVT___GEN_3215;
        CData/*7:0*/ __PVT___GEN_3228;
        CData/*7:0*/ __PVT___GEN_3241;
        CData/*7:0*/ __PVT___GEN_3254;
        CData/*7:0*/ __PVT___GEN_3267;
        CData/*7:0*/ __PVT___GEN_3280;
        CData/*7:0*/ __PVT___GEN_3293;
        CData/*7:0*/ __PVT___GEN_3306;
        CData/*7:0*/ __PVT___GEN_3319;
        CData/*7:0*/ __PVT___GEN_3341;
        CData/*7:0*/ __PVT___GEN_3354;
        CData/*7:0*/ __PVT___GEN_3367;
        CData/*7:0*/ __PVT___GEN_3380;
        CData/*7:0*/ __PVT___GEN_3393;
        CData/*7:0*/ __PVT___GEN_3406;
        CData/*7:0*/ __PVT___GEN_3419;
        CData/*7:0*/ __PVT___GEN_3432;
        CData/*7:0*/ __PVT___GEN_3445;
    };
    struct {
        CData/*7:0*/ __PVT___GEN_3458;
        CData/*7:0*/ __PVT___GEN_3471;
        CData/*7:0*/ __PVT___GEN_3484;
        CData/*7:0*/ __PVT___GEN_3497;
        CData/*7:0*/ __PVT___GEN_3510;
        CData/*7:0*/ __PVT___GEN_3523;
        CData/*7:0*/ __PVT___GEN_3536;
        CData/*7:0*/ __PVT___GEN_3549;
        CData/*7:0*/ __PVT___GEN_3562;
        CData/*7:0*/ __PVT___GEN_3575;
        CData/*7:0*/ __PVT___GEN_3597;
        CData/*7:0*/ __PVT___GEN_3610;
        CData/*7:0*/ __PVT___GEN_3623;
        CData/*7:0*/ __PVT___GEN_3636;
        CData/*7:0*/ __PVT___GEN_3649;
        CData/*7:0*/ __PVT___GEN_3662;
        CData/*7:0*/ __PVT___GEN_3675;
        CData/*7:0*/ __PVT___GEN_3688;
        CData/*7:0*/ __PVT___GEN_3701;
        CData/*7:0*/ __PVT___GEN_3714;
        CData/*7:0*/ __PVT___GEN_3727;
        CData/*7:0*/ __PVT___GEN_3740;
        CData/*7:0*/ __PVT___GEN_3753;
        CData/*7:0*/ __PVT___GEN_3766;
        CData/*7:0*/ __PVT___GEN_3779;
        CData/*7:0*/ __PVT___GEN_3792;
        CData/*7:0*/ __PVT___GEN_3805;
        CData/*7:0*/ __PVT___GEN_3818;
        CData/*7:0*/ __PVT___GEN_3831;
        CData/*7:0*/ __PVT___GEN_3853;
        CData/*7:0*/ __PVT___GEN_3866;
        CData/*7:0*/ __PVT___GEN_3879;
        CData/*7:0*/ __PVT___GEN_3892;
        CData/*7:0*/ __PVT___GEN_3905;
        CData/*7:0*/ __PVT___GEN_3918;
        CData/*7:0*/ __PVT___GEN_3931;
        CData/*7:0*/ __PVT___GEN_3944;
        CData/*7:0*/ __PVT___GEN_3957;
        CData/*7:0*/ __PVT___GEN_3970;
        CData/*7:0*/ __PVT___GEN_3983;
        CData/*7:0*/ __PVT___GEN_3996;
        CData/*7:0*/ __PVT___GEN_4009;
        CData/*7:0*/ __PVT___GEN_4022;
        CData/*7:0*/ __PVT___GEN_4035;
        CData/*7:0*/ __PVT___GEN_4048;
        CData/*7:0*/ __PVT___GEN_4061;
        CData/*7:0*/ __PVT___GEN_4074;
        CData/*7:0*/ __PVT___GEN_4087;
        QData/*63:0*/ __PVT__outWord_lo;
        QData/*63:0*/ __PVT__outWord_hi;
    };
    
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
    VL_UNCOPYABLE(VAes128Core_SubBytes);  ///< Copying not allowed
  public:
    VAes128Core_SubBytes(const char* name = "TOP");
    ~VAes128Core_SubBytes();
    
    // INTERNAL METHODS
    void __Vconfigure(VAes128Core__Syms* symsp, bool first);
    void _combo__TOP__Aes128Core__DOT__finalR__DOT__core__DOT__sub__19(VAes128Core__Syms* __restrict vlSymsp);
    void _combo__TOP__Aes128Core__DOT__finalR__DOT__core__DOT__sub__20(VAes128Core__Syms* __restrict vlSymsp);
    void _combo__TOP__Aes128Core__DOT__r1__core__DOT__sub__1(VAes128Core__Syms* __restrict vlSymsp);
    void _combo__TOP__Aes128Core__DOT__r1__core__DOT__sub__2(VAes128Core__Syms* __restrict vlSymsp);
    void _combo__TOP__Aes128Core__DOT__r2__core__DOT__sub__3(VAes128Core__Syms* __restrict vlSymsp);
    void _combo__TOP__Aes128Core__DOT__r2__core__DOT__sub__4(VAes128Core__Syms* __restrict vlSymsp);
    void _combo__TOP__Aes128Core__DOT__r3__core__DOT__sub__5(VAes128Core__Syms* __restrict vlSymsp);
    void _combo__TOP__Aes128Core__DOT__r3__core__DOT__sub__6(VAes128Core__Syms* __restrict vlSymsp);
    void _combo__TOP__Aes128Core__DOT__r4__core__DOT__sub__7(VAes128Core__Syms* __restrict vlSymsp);
    void _combo__TOP__Aes128Core__DOT__r4__core__DOT__sub__8(VAes128Core__Syms* __restrict vlSymsp);
    void _combo__TOP__Aes128Core__DOT__r5__core__DOT__sub__10(VAes128Core__Syms* __restrict vlSymsp);
    void _combo__TOP__Aes128Core__DOT__r5__core__DOT__sub__9(VAes128Core__Syms* __restrict vlSymsp);
    void _combo__TOP__Aes128Core__DOT__r6__core__DOT__sub__11(VAes128Core__Syms* __restrict vlSymsp);
    void _combo__TOP__Aes128Core__DOT__r6__core__DOT__sub__12(VAes128Core__Syms* __restrict vlSymsp);
    void _combo__TOP__Aes128Core__DOT__r7__core__DOT__sub__13(VAes128Core__Syms* __restrict vlSymsp);
    void _combo__TOP__Aes128Core__DOT__r7__core__DOT__sub__14(VAes128Core__Syms* __restrict vlSymsp);
    void _combo__TOP__Aes128Core__DOT__r8__core__DOT__sub__15(VAes128Core__Syms* __restrict vlSymsp);
    void _combo__TOP__Aes128Core__DOT__r8__core__DOT__sub__16(VAes128Core__Syms* __restrict vlSymsp);
    void _combo__TOP__Aes128Core__DOT__r9__core__DOT__sub__17(VAes128Core__Syms* __restrict vlSymsp);
    void _combo__TOP__Aes128Core__DOT__r9__core__DOT__sub__18(VAes128Core__Syms* __restrict vlSymsp);
  private:
    void _configure_coverage(VAes128Core__Syms* __restrict vlSymsp, bool first) VL_ATTR_COLD;
    void _ctor_var_reset() VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
