// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAes128Core.h for the primary calling header

#include "VAes128Core_StdRoundGen.h"
#include "VAes128Core__Syms.h"

//==========

VL_INLINE_OPT void VAes128Core_StdRoundGen::_combo__TOP__Aes128Core__DOT__r1__1(VAes128Core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VAes128Core_StdRoundGen::_combo__TOP__Aes128Core__DOT__r1__1\n"); );
    VAes128Core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
        = ((0xff000000U & __PVT__core__DOT__sub->io_out_bits_bits[0U]) 
           | ((0xff0000U & __PVT__core__DOT__sub->io_out_bits_bits[3U]) 
              | ((0xff00U & __PVT__core__DOT__sub->io_out_bits_bits[2U]) 
                 | (0xffU & __PVT__core__DOT__sub->io_out_bits_bits[1U]))));
    this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
        = ((0xff000000U & __PVT__core__DOT__sub->io_out_bits_bits[1U]) 
           | ((0xff0000U & __PVT__core__DOT__sub->io_out_bits_bits[0U]) 
              | ((0xff00U & __PVT__core__DOT__sub->io_out_bits_bits[3U]) 
                 | (0xffU & __PVT__core__DOT__sub->io_out_bits_bits[2U]))));
    this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
        = (IData)((((QData)((IData)(((0xff000000U & 
                                      __PVT__core__DOT__sub->io_out_bits_bits[3U]) 
                                     | ((0xff0000U 
                                         & __PVT__core__DOT__sub->io_out_bits_bits[2U]) 
                                        | ((0xff00U 
                                            & __PVT__core__DOT__sub->io_out_bits_bits[1U]) 
                                           | (0xffU 
                                              & __PVT__core__DOT__sub->io_out_bits_bits[0U])))))) 
                    << 0x20U) | (QData)((IData)(((0xff000000U 
                                                  & __PVT__core__DOT__sub->io_out_bits_bits[2U]) 
                                                 | ((0xff0000U 
                                                     & __PVT__core__DOT__sub->io_out_bits_bits[1U]) 
                                                    | ((0xff00U 
                                                        & __PVT__core__DOT__sub->io_out_bits_bits[0U]) 
                                                       | (0xffU 
                                                          & __PVT__core__DOT__sub->io_out_bits_bits[3U]))))))));
    this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
        = (IData)(((((QData)((IData)(((0xff000000U 
                                       & __PVT__core__DOT__sub->io_out_bits_bits[3U]) 
                                      | ((0xff0000U 
                                          & __PVT__core__DOT__sub->io_out_bits_bits[2U]) 
                                         | ((0xff00U 
                                             & __PVT__core__DOT__sub->io_out_bits_bits[1U]) 
                                            | (0xffU 
                                               & __PVT__core__DOT__sub->io_out_bits_bits[0U])))))) 
                     << 0x20U) | (QData)((IData)(((0xff000000U 
                                                   & __PVT__core__DOT__sub->io_out_bits_bits[2U]) 
                                                  | ((0xff0000U 
                                                      & __PVT__core__DOT__sub->io_out_bits_bits[1U]) 
                                                     | ((0xff00U 
                                                         & __PVT__core__DOT__sub->io_out_bits_bits[0U]) 
                                                        | (0xffU 
                                                           & __PVT__core__DOT__sub->io_out_bits_bits[3U]))))))) 
                   >> 0x20U));
    this->__PVT__core__DOT__mix__DOT___r0_T_1 = ((0x80000000U 
                                                  & this->__PVT__core__DOT__sh_io_out_bits_bits[3U])
                                                  ? 
                                                 (0x1bU 
                                                  ^ 
                                                  (0xfeU 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                      >> 0x17U)))
                                                  : 
                                                 (0xfeU 
                                                  & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                     >> 0x17U)));
    this->__PVT__core__DOT__mix__DOT___r0_T_3 = ((0x800000U 
                                                  & this->__PVT__core__DOT__sh_io_out_bits_bits[3U])
                                                  ? 
                                                 (0x1bU 
                                                  ^ 
                                                  (0xfeU 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                      >> 0xfU)))
                                                  : 
                                                 (0xfeU 
                                                  & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                     >> 0xfU)));
    this->__PVT__core__DOT__mix__DOT___r1_T_4 = ((0x8000U 
                                                  & this->__PVT__core__DOT__sh_io_out_bits_bits[3U])
                                                  ? 
                                                 (0x1bU 
                                                  ^ 
                                                  (0xfeU 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                      >> 7U)))
                                                  : 
                                                 (0xfeU 
                                                  & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                     >> 7U)));
    this->__PVT__core__DOT__mix__DOT___r2_T_5 = ((0x80U 
                                                  & this->__PVT__core__DOT__sh_io_out_bits_bits[3U])
                                                  ? 
                                                 (0x1bU 
                                                  ^ 
                                                  (0xfeU 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                      << 1U)))
                                                  : 
                                                 (0xfeU 
                                                  & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                     << 1U)));
    this->__PVT__core__DOT__mix__DOT___r0_T_8 = ((0x80000000U 
                                                  & this->__PVT__core__DOT__sh_io_out_bits_bits[2U])
                                                  ? 
                                                 (0x1bU 
                                                  ^ 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                       << 9U) 
                                                      | (0x1feU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                            >> 0x17U)))))
                                                  : 
                                                 (0xfeU 
                                                  & ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                      << 9U) 
                                                     | (0x1feU 
                                                        & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                           >> 0x17U)))));
    this->__PVT__core__DOT__mix__DOT___r0_T_10 = ((0x800000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[2U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                        << 0x11U) 
                                                       | (0x1fffeU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                             >> 0xfU)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                       << 0x11U) 
                                                      | (0x1fffeU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                            >> 0xfU)))));
    this->__PVT__core__DOT__mix__DOT___r1_T_11 = ((0x8000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[2U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                        << 0x19U) 
                                                       | (0x1fffffeU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                             >> 7U)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                       << 0x19U) 
                                                      | (0x1fffffeU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                            >> 7U)))));
    this->__PVT__core__DOT__mix__DOT___r2_T_12 = ((0x80U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[2U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                       << 1U)))
                                                   : 
                                                  (0xfeU 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                      << 1U)));
    this->__PVT__core__DOT__mix__DOT___r0_T_15 = ((0x80000000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[1U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                        << 9U) 
                                                       | (0x1feU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                             >> 0x17U)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                       << 9U) 
                                                      | (0x1feU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                            >> 0x17U)))));
    this->__PVT__core__DOT__mix__DOT___r0_T_17 = ((0x800000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[1U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                        << 0x11U) 
                                                       | (0x1fffeU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                             >> 0xfU)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                       << 0x11U) 
                                                      | (0x1fffeU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                            >> 0xfU)))));
    this->__PVT__core__DOT__mix__DOT___r1_T_18 = ((0x8000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[1U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                        << 0x19U) 
                                                       | (0x1fffffeU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                             >> 7U)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                       << 0x19U) 
                                                      | (0x1fffffeU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                            >> 7U)))));
    this->__PVT__core__DOT__mix__DOT___r2_T_19 = ((0x80U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[1U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                       << 1U)))
                                                   : 
                                                  (0xfeU 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                      << 1U)));
    this->__PVT__core__DOT__mix__DOT___r0_T_22 = ((0x80000000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[0U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                        << 9U) 
                                                       | (0x1feU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                             >> 0x17U)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                       << 9U) 
                                                      | (0x1feU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                            >> 0x17U)))));
    this->__PVT__core__DOT__mix__DOT___r0_T_24 = ((0x800000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[0U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                        << 0x11U) 
                                                       | (0x1fffeU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                             >> 0xfU)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                       << 0x11U) 
                                                      | (0x1fffeU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                            >> 0xfU)))));
    this->__PVT__core__DOT__mix__DOT___r1_T_25 = ((0x8000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[0U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                        << 0x19U) 
                                                       | (0x1fffffeU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                             >> 7U)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                       << 0x19U) 
                                                      | (0x1fffffeU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                            >> 7U)))));
    this->__PVT__core__DOT__mix__DOT___r2_T_26 = ((0x80U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[0U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                       << 1U)))
                                                   : 
                                                  (0xfeU 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                      << 1U)));
    this->__PVT__core__DOT__mix__DOT__io_out_bits_bits_hi 
        = (((QData)((IData)(((0xff000000U & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_1) 
                                                << 0x18U) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_3) 
                                                   << 0x18U) 
                                                  ^ 
                                                  (0xff000000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                      << 8U)))) 
                                              ^ (0xff000000U 
                                                 & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                    << 0x10U))) 
                                             ^ (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                << 0x18U))) 
                             | ((0xff0000U & ((((0xff0000U 
                                                 & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                    >> 8U)) 
                                                ^ ((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_3) 
                                                   << 0x10U)) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_4) 
                                                   << 0x10U) 
                                                  ^ 
                                                  (0xffff0000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                      << 8U)))) 
                                              ^ (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                 << 0x10U))) 
                                | ((0xff00U & ((((0xff00U 
                                                  & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                     >> 0x10U)) 
                                                 ^ 
                                                 (0xffff00U 
                                                  & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                     >> 8U))) 
                                                ^ ((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_4) 
                                                   << 8U)) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r2_T_5) 
                                                   ^ 
                                                   this->__PVT__core__DOT__sh_io_out_bits_bits[3U]) 
                                                  << 8U))) 
                                   | (0xffU & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_1) 
                                                  ^ 
                                                  (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                   >> 0x18U)) 
                                                 ^ 
                                                 (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                  >> 0x10U)) 
                                                ^ (
                                                   this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                   >> 8U)) 
                                               ^ (IData)(this->__PVT__core__DOT__mix__DOT___r2_T_5)))))))) 
            << 0x20U) | (QData)((IData)(((0xff000000U 
                                          & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_8) 
                                                << 0x18U) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_10) 
                                                   << 0x18U) 
                                                  ^ 
                                                  (0xff000000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                      << 8U)))) 
                                              ^ (0xff000000U 
                                                 & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                    << 0x10U))) 
                                             ^ (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                << 0x18U))) 
                                         | ((0xff0000U 
                                             & (((((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                    << 0x18U) 
                                                   | (0xff0000U 
                                                      & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                         >> 8U))) 
                                                  ^ 
                                                  ((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_10) 
                                                   << 0x10U)) 
                                                 ^ 
                                                 (((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_11) 
                                                   << 0x10U) 
                                                  ^ 
                                                  (0xffff0000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                      << 8U)))) 
                                                ^ (
                                                   this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                   << 0x10U))) 
                                            | ((0xff00U 
                                                & (((((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                       << 0x10U) 
                                                      | (0xff00U 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                            >> 0x10U))) 
                                                     ^ 
                                                     ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                       << 0x18U) 
                                                      | (0xffff00U 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                            >> 8U)))) 
                                                    ^ 
                                                    ((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_11) 
                                                     << 8U)) 
                                                   ^ 
                                                   (((IData)(this->__PVT__core__DOT__mix__DOT___r2_T_12) 
                                                     ^ 
                                                     this->__PVT__core__DOT__sh_io_out_bits_bits[2U]) 
                                                    << 8U))) 
                                               | (0xffU 
                                                  & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_8) 
                                                        ^ 
                                                        ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                          << 8U) 
                                                         | (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                            >> 0x18U))) 
                                                       ^ 
                                                       ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                         << 0x10U) 
                                                        | (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                           >> 0x10U))) 
                                                      ^ 
                                                      ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                        << 0x18U) 
                                                       | (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                          >> 8U))) 
                                                     ^ (IData)(this->__PVT__core__DOT__mix__DOT___r2_T_12)))))))));
    this->__PVT__core__DOT__mix__DOT__io_out_bits_bits_lo 
        = (((QData)((IData)(((0xff000000U & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_15) 
                                                << 0x18U) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_17) 
                                                   << 0x18U) 
                                                  ^ 
                                                  (0xff000000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                      << 8U)))) 
                                              ^ (0xff000000U 
                                                 & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                    << 0x10U))) 
                                             ^ (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                << 0x18U))) 
                             | ((0xff0000U & (((((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                  << 0x18U) 
                                                 | (0xff0000U 
                                                    & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                       >> 8U))) 
                                                ^ ((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_17) 
                                                   << 0x10U)) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_18) 
                                                   << 0x10U) 
                                                  ^ 
                                                  (0xffff0000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                      << 8U)))) 
                                              ^ (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                 << 0x10U))) 
                                | ((0xff00U & (((((
                                                   this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                   << 0x10U) 
                                                  | (0xff00U 
                                                     & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                        >> 0x10U))) 
                                                 ^ 
                                                 ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                   << 0x18U) 
                                                  | (0xffff00U 
                                                     & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                        >> 8U)))) 
                                                ^ ((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_18) 
                                                   << 8U)) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r2_T_19) 
                                                   ^ 
                                                   this->__PVT__core__DOT__sh_io_out_bits_bits[1U]) 
                                                  << 8U))) 
                                   | (0xffU & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_15) 
                                                  ^ 
                                                  ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                    << 8U) 
                                                   | (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                      >> 0x18U))) 
                                                 ^ 
                                                 ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                   << 0x10U) 
                                                  | (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                     >> 0x10U))) 
                                                ^ (
                                                   (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                    << 0x18U) 
                                                   | (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                      >> 8U))) 
                                               ^ (IData)(this->__PVT__core__DOT__mix__DOT___r2_T_19)))))))) 
            << 0x20U) | (QData)((IData)(((0xff000000U 
                                          & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_22) 
                                                << 0x18U) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_24) 
                                                   << 0x18U) 
                                                  ^ 
                                                  (0xff000000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                      << 8U)))) 
                                              ^ (0xff000000U 
                                                 & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                    << 0x10U))) 
                                             ^ (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                << 0x18U))) 
                                         | ((0xff0000U 
                                             & (((((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                    << 0x18U) 
                                                   | (0xff0000U 
                                                      & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                         >> 8U))) 
                                                  ^ 
                                                  ((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_24) 
                                                   << 0x10U)) 
                                                 ^ 
                                                 (((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_25) 
                                                   << 0x10U) 
                                                  ^ 
                                                  (0xffff0000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                      << 8U)))) 
                                                ^ (
                                                   this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                   << 0x10U))) 
                                            | ((0xff00U 
                                                & (((((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                       << 0x10U) 
                                                      | (0xff00U 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                            >> 0x10U))) 
                                                     ^ 
                                                     ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                       << 0x18U) 
                                                      | (0xffff00U 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                            >> 8U)))) 
                                                    ^ 
                                                    ((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_25) 
                                                     << 8U)) 
                                                   ^ 
                                                   (((IData)(this->__PVT__core__DOT__mix__DOT___r2_T_26) 
                                                     ^ 
                                                     this->__PVT__core__DOT__sh_io_out_bits_bits[0U]) 
                                                    << 8U))) 
                                               | (0xffU 
                                                  & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_22) 
                                                        ^ 
                                                        ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                          << 8U) 
                                                         | (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                            >> 0x18U))) 
                                                       ^ 
                                                       ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                         << 0x10U) 
                                                        | (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                           >> 0x10U))) 
                                                      ^ 
                                                      ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                        << 0x18U) 
                                                       | (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                          >> 8U))) 
                                                     ^ (IData)(this->__PVT__core__DOT__mix__DOT___r2_T_26)))))))));
    this->__PVT__core__DOT__addk_io_out_bits_bits[0U] 
        = ((IData)(this->__PVT__core__DOT__mix__DOT__io_out_bits_bits_lo) 
           ^ vlTOPp->Aes128Core__DOT__ks__DOT__w_7);
    this->__PVT__core__DOT__addk_io_out_bits_bits[1U] 
        = ((IData)((this->__PVT__core__DOT__mix__DOT__io_out_bits_bits_lo 
                    >> 0x20U)) ^ vlTOPp->Aes128Core__DOT__ks__DOT__w_6);
    this->__PVT__core__DOT__addk_io_out_bits_bits[2U] 
        = ((IData)(this->__PVT__core__DOT__mix__DOT__io_out_bits_bits_hi) 
           ^ (IData)((((QData)((IData)(vlTOPp->Aes128Core__DOT__ks__DOT__w_4)) 
                       << 0x20U) | (QData)((IData)(vlTOPp->Aes128Core__DOT__ks__DOT__w_5)))));
    this->__PVT__core__DOT__addk_io_out_bits_bits[3U] 
        = ((IData)((this->__PVT__core__DOT__mix__DOT__io_out_bits_bits_hi 
                    >> 0x20U)) ^ (IData)(((((QData)((IData)(vlTOPp->Aes128Core__DOT__ks__DOT__w_4)) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlTOPp->Aes128Core__DOT__ks__DOT__w_5))) 
                                          >> 0x20U)));
}

VL_INLINE_OPT void VAes128Core_StdRoundGen::_combo__TOP__Aes128Core__DOT__r2__2(VAes128Core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VAes128Core_StdRoundGen::_combo__TOP__Aes128Core__DOT__r2__2\n"); );
    VAes128Core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
        = ((0xff000000U & __PVT__core__DOT__sub->io_out_bits_bits[0U]) 
           | ((0xff0000U & __PVT__core__DOT__sub->io_out_bits_bits[3U]) 
              | ((0xff00U & __PVT__core__DOT__sub->io_out_bits_bits[2U]) 
                 | (0xffU & __PVT__core__DOT__sub->io_out_bits_bits[1U]))));
    this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
        = ((0xff000000U & __PVT__core__DOT__sub->io_out_bits_bits[1U]) 
           | ((0xff0000U & __PVT__core__DOT__sub->io_out_bits_bits[0U]) 
              | ((0xff00U & __PVT__core__DOT__sub->io_out_bits_bits[3U]) 
                 | (0xffU & __PVT__core__DOT__sub->io_out_bits_bits[2U]))));
    this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
        = (IData)((((QData)((IData)(((0xff000000U & 
                                      __PVT__core__DOT__sub->io_out_bits_bits[3U]) 
                                     | ((0xff0000U 
                                         & __PVT__core__DOT__sub->io_out_bits_bits[2U]) 
                                        | ((0xff00U 
                                            & __PVT__core__DOT__sub->io_out_bits_bits[1U]) 
                                           | (0xffU 
                                              & __PVT__core__DOT__sub->io_out_bits_bits[0U])))))) 
                    << 0x20U) | (QData)((IData)(((0xff000000U 
                                                  & __PVT__core__DOT__sub->io_out_bits_bits[2U]) 
                                                 | ((0xff0000U 
                                                     & __PVT__core__DOT__sub->io_out_bits_bits[1U]) 
                                                    | ((0xff00U 
                                                        & __PVT__core__DOT__sub->io_out_bits_bits[0U]) 
                                                       | (0xffU 
                                                          & __PVT__core__DOT__sub->io_out_bits_bits[3U]))))))));
    this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
        = (IData)(((((QData)((IData)(((0xff000000U 
                                       & __PVT__core__DOT__sub->io_out_bits_bits[3U]) 
                                      | ((0xff0000U 
                                          & __PVT__core__DOT__sub->io_out_bits_bits[2U]) 
                                         | ((0xff00U 
                                             & __PVT__core__DOT__sub->io_out_bits_bits[1U]) 
                                            | (0xffU 
                                               & __PVT__core__DOT__sub->io_out_bits_bits[0U])))))) 
                     << 0x20U) | (QData)((IData)(((0xff000000U 
                                                   & __PVT__core__DOT__sub->io_out_bits_bits[2U]) 
                                                  | ((0xff0000U 
                                                      & __PVT__core__DOT__sub->io_out_bits_bits[1U]) 
                                                     | ((0xff00U 
                                                         & __PVT__core__DOT__sub->io_out_bits_bits[0U]) 
                                                        | (0xffU 
                                                           & __PVT__core__DOT__sub->io_out_bits_bits[3U]))))))) 
                   >> 0x20U));
    this->__PVT__core__DOT__mix__DOT___r0_T_1 = ((0x80000000U 
                                                  & this->__PVT__core__DOT__sh_io_out_bits_bits[3U])
                                                  ? 
                                                 (0x1bU 
                                                  ^ 
                                                  (0xfeU 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                      >> 0x17U)))
                                                  : 
                                                 (0xfeU 
                                                  & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                     >> 0x17U)));
    this->__PVT__core__DOT__mix__DOT___r0_T_3 = ((0x800000U 
                                                  & this->__PVT__core__DOT__sh_io_out_bits_bits[3U])
                                                  ? 
                                                 (0x1bU 
                                                  ^ 
                                                  (0xfeU 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                      >> 0xfU)))
                                                  : 
                                                 (0xfeU 
                                                  & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                     >> 0xfU)));
    this->__PVT__core__DOT__mix__DOT___r1_T_4 = ((0x8000U 
                                                  & this->__PVT__core__DOT__sh_io_out_bits_bits[3U])
                                                  ? 
                                                 (0x1bU 
                                                  ^ 
                                                  (0xfeU 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                      >> 7U)))
                                                  : 
                                                 (0xfeU 
                                                  & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                     >> 7U)));
    this->__PVT__core__DOT__mix__DOT___r2_T_5 = ((0x80U 
                                                  & this->__PVT__core__DOT__sh_io_out_bits_bits[3U])
                                                  ? 
                                                 (0x1bU 
                                                  ^ 
                                                  (0xfeU 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                      << 1U)))
                                                  : 
                                                 (0xfeU 
                                                  & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                     << 1U)));
    this->__PVT__core__DOT__mix__DOT___r0_T_8 = ((0x80000000U 
                                                  & this->__PVT__core__DOT__sh_io_out_bits_bits[2U])
                                                  ? 
                                                 (0x1bU 
                                                  ^ 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                       << 9U) 
                                                      | (0x1feU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                            >> 0x17U)))))
                                                  : 
                                                 (0xfeU 
                                                  & ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                      << 9U) 
                                                     | (0x1feU 
                                                        & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                           >> 0x17U)))));
    this->__PVT__core__DOT__mix__DOT___r0_T_10 = ((0x800000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[2U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                        << 0x11U) 
                                                       | (0x1fffeU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                             >> 0xfU)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                       << 0x11U) 
                                                      | (0x1fffeU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                            >> 0xfU)))));
    this->__PVT__core__DOT__mix__DOT___r1_T_11 = ((0x8000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[2U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                        << 0x19U) 
                                                       | (0x1fffffeU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                             >> 7U)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                       << 0x19U) 
                                                      | (0x1fffffeU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                            >> 7U)))));
    this->__PVT__core__DOT__mix__DOT___r2_T_12 = ((0x80U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[2U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                       << 1U)))
                                                   : 
                                                  (0xfeU 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                      << 1U)));
    this->__PVT__core__DOT__mix__DOT___r0_T_15 = ((0x80000000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[1U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                        << 9U) 
                                                       | (0x1feU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                             >> 0x17U)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                       << 9U) 
                                                      | (0x1feU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                            >> 0x17U)))));
    this->__PVT__core__DOT__mix__DOT___r0_T_17 = ((0x800000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[1U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                        << 0x11U) 
                                                       | (0x1fffeU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                             >> 0xfU)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                       << 0x11U) 
                                                      | (0x1fffeU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                            >> 0xfU)))));
    this->__PVT__core__DOT__mix__DOT___r1_T_18 = ((0x8000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[1U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                        << 0x19U) 
                                                       | (0x1fffffeU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                             >> 7U)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                       << 0x19U) 
                                                      | (0x1fffffeU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                            >> 7U)))));
    this->__PVT__core__DOT__mix__DOT___r2_T_19 = ((0x80U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[1U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                       << 1U)))
                                                   : 
                                                  (0xfeU 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                      << 1U)));
    this->__PVT__core__DOT__mix__DOT___r0_T_22 = ((0x80000000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[0U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                        << 9U) 
                                                       | (0x1feU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                             >> 0x17U)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                       << 9U) 
                                                      | (0x1feU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                            >> 0x17U)))));
    this->__PVT__core__DOT__mix__DOT___r0_T_24 = ((0x800000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[0U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                        << 0x11U) 
                                                       | (0x1fffeU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                             >> 0xfU)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                       << 0x11U) 
                                                      | (0x1fffeU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                            >> 0xfU)))));
    this->__PVT__core__DOT__mix__DOT___r1_T_25 = ((0x8000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[0U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                        << 0x19U) 
                                                       | (0x1fffffeU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                             >> 7U)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                       << 0x19U) 
                                                      | (0x1fffffeU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                            >> 7U)))));
    this->__PVT__core__DOT__mix__DOT___r2_T_26 = ((0x80U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[0U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                       << 1U)))
                                                   : 
                                                  (0xfeU 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                      << 1U)));
    this->__PVT__core__DOT__mix__DOT__io_out_bits_bits_hi 
        = (((QData)((IData)(((0xff000000U & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_1) 
                                                << 0x18U) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_3) 
                                                   << 0x18U) 
                                                  ^ 
                                                  (0xff000000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                      << 8U)))) 
                                              ^ (0xff000000U 
                                                 & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                    << 0x10U))) 
                                             ^ (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                << 0x18U))) 
                             | ((0xff0000U & ((((0xff0000U 
                                                 & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                    >> 8U)) 
                                                ^ ((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_3) 
                                                   << 0x10U)) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_4) 
                                                   << 0x10U) 
                                                  ^ 
                                                  (0xffff0000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                      << 8U)))) 
                                              ^ (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                 << 0x10U))) 
                                | ((0xff00U & ((((0xff00U 
                                                  & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                     >> 0x10U)) 
                                                 ^ 
                                                 (0xffff00U 
                                                  & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                     >> 8U))) 
                                                ^ ((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_4) 
                                                   << 8U)) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r2_T_5) 
                                                   ^ 
                                                   this->__PVT__core__DOT__sh_io_out_bits_bits[3U]) 
                                                  << 8U))) 
                                   | (0xffU & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_1) 
                                                  ^ 
                                                  (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                   >> 0x18U)) 
                                                 ^ 
                                                 (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                  >> 0x10U)) 
                                                ^ (
                                                   this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                   >> 8U)) 
                                               ^ (IData)(this->__PVT__core__DOT__mix__DOT___r2_T_5)))))))) 
            << 0x20U) | (QData)((IData)(((0xff000000U 
                                          & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_8) 
                                                << 0x18U) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_10) 
                                                   << 0x18U) 
                                                  ^ 
                                                  (0xff000000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                      << 8U)))) 
                                              ^ (0xff000000U 
                                                 & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                    << 0x10U))) 
                                             ^ (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                << 0x18U))) 
                                         | ((0xff0000U 
                                             & (((((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                    << 0x18U) 
                                                   | (0xff0000U 
                                                      & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                         >> 8U))) 
                                                  ^ 
                                                  ((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_10) 
                                                   << 0x10U)) 
                                                 ^ 
                                                 (((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_11) 
                                                   << 0x10U) 
                                                  ^ 
                                                  (0xffff0000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                      << 8U)))) 
                                                ^ (
                                                   this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                   << 0x10U))) 
                                            | ((0xff00U 
                                                & (((((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                       << 0x10U) 
                                                      | (0xff00U 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                            >> 0x10U))) 
                                                     ^ 
                                                     ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                       << 0x18U) 
                                                      | (0xffff00U 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                            >> 8U)))) 
                                                    ^ 
                                                    ((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_11) 
                                                     << 8U)) 
                                                   ^ 
                                                   (((IData)(this->__PVT__core__DOT__mix__DOT___r2_T_12) 
                                                     ^ 
                                                     this->__PVT__core__DOT__sh_io_out_bits_bits[2U]) 
                                                    << 8U))) 
                                               | (0xffU 
                                                  & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_8) 
                                                        ^ 
                                                        ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                          << 8U) 
                                                         | (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                            >> 0x18U))) 
                                                       ^ 
                                                       ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                         << 0x10U) 
                                                        | (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                           >> 0x10U))) 
                                                      ^ 
                                                      ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                        << 0x18U) 
                                                       | (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                          >> 8U))) 
                                                     ^ (IData)(this->__PVT__core__DOT__mix__DOT___r2_T_12)))))))));
    this->__PVT__core__DOT__mix__DOT__io_out_bits_bits_lo 
        = (((QData)((IData)(((0xff000000U & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_15) 
                                                << 0x18U) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_17) 
                                                   << 0x18U) 
                                                  ^ 
                                                  (0xff000000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                      << 8U)))) 
                                              ^ (0xff000000U 
                                                 & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                    << 0x10U))) 
                                             ^ (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                << 0x18U))) 
                             | ((0xff0000U & (((((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                  << 0x18U) 
                                                 | (0xff0000U 
                                                    & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                       >> 8U))) 
                                                ^ ((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_17) 
                                                   << 0x10U)) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_18) 
                                                   << 0x10U) 
                                                  ^ 
                                                  (0xffff0000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                      << 8U)))) 
                                              ^ (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                 << 0x10U))) 
                                | ((0xff00U & (((((
                                                   this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                   << 0x10U) 
                                                  | (0xff00U 
                                                     & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                        >> 0x10U))) 
                                                 ^ 
                                                 ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                   << 0x18U) 
                                                  | (0xffff00U 
                                                     & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                        >> 8U)))) 
                                                ^ ((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_18) 
                                                   << 8U)) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r2_T_19) 
                                                   ^ 
                                                   this->__PVT__core__DOT__sh_io_out_bits_bits[1U]) 
                                                  << 8U))) 
                                   | (0xffU & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_15) 
                                                  ^ 
                                                  ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                    << 8U) 
                                                   | (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                      >> 0x18U))) 
                                                 ^ 
                                                 ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                   << 0x10U) 
                                                  | (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                     >> 0x10U))) 
                                                ^ (
                                                   (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                    << 0x18U) 
                                                   | (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                      >> 8U))) 
                                               ^ (IData)(this->__PVT__core__DOT__mix__DOT___r2_T_19)))))))) 
            << 0x20U) | (QData)((IData)(((0xff000000U 
                                          & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_22) 
                                                << 0x18U) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_24) 
                                                   << 0x18U) 
                                                  ^ 
                                                  (0xff000000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                      << 8U)))) 
                                              ^ (0xff000000U 
                                                 & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                    << 0x10U))) 
                                             ^ (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                << 0x18U))) 
                                         | ((0xff0000U 
                                             & (((((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                    << 0x18U) 
                                                   | (0xff0000U 
                                                      & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                         >> 8U))) 
                                                  ^ 
                                                  ((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_24) 
                                                   << 0x10U)) 
                                                 ^ 
                                                 (((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_25) 
                                                   << 0x10U) 
                                                  ^ 
                                                  (0xffff0000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                      << 8U)))) 
                                                ^ (
                                                   this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                   << 0x10U))) 
                                            | ((0xff00U 
                                                & (((((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                       << 0x10U) 
                                                      | (0xff00U 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                            >> 0x10U))) 
                                                     ^ 
                                                     ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                       << 0x18U) 
                                                      | (0xffff00U 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                            >> 8U)))) 
                                                    ^ 
                                                    ((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_25) 
                                                     << 8U)) 
                                                   ^ 
                                                   (((IData)(this->__PVT__core__DOT__mix__DOT___r2_T_26) 
                                                     ^ 
                                                     this->__PVT__core__DOT__sh_io_out_bits_bits[0U]) 
                                                    << 8U))) 
                                               | (0xffU 
                                                  & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_22) 
                                                        ^ 
                                                        ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                          << 8U) 
                                                         | (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                            >> 0x18U))) 
                                                       ^ 
                                                       ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                         << 0x10U) 
                                                        | (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                           >> 0x10U))) 
                                                      ^ 
                                                      ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                        << 0x18U) 
                                                       | (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                          >> 8U))) 
                                                     ^ (IData)(this->__PVT__core__DOT__mix__DOT___r2_T_26)))))))));
    this->__PVT__core__DOT__addk_io_out_bits_bits[0U] 
        = ((IData)(this->__PVT__core__DOT__mix__DOT__io_out_bits_bits_lo) 
           ^ vlTOPp->Aes128Core__DOT__ks__DOT__w_11);
    this->__PVT__core__DOT__addk_io_out_bits_bits[1U] 
        = ((IData)((this->__PVT__core__DOT__mix__DOT__io_out_bits_bits_lo 
                    >> 0x20U)) ^ vlTOPp->Aes128Core__DOT__ks__DOT__w_10);
    this->__PVT__core__DOT__addk_io_out_bits_bits[2U] 
        = ((IData)(this->__PVT__core__DOT__mix__DOT__io_out_bits_bits_hi) 
           ^ (IData)((((QData)((IData)(vlTOPp->Aes128Core__DOT__ks__DOT__w_8)) 
                       << 0x20U) | (QData)((IData)(vlTOPp->Aes128Core__DOT__ks__DOT__w_9)))));
    this->__PVT__core__DOT__addk_io_out_bits_bits[3U] 
        = ((IData)((this->__PVT__core__DOT__mix__DOT__io_out_bits_bits_hi 
                    >> 0x20U)) ^ (IData)(((((QData)((IData)(vlTOPp->Aes128Core__DOT__ks__DOT__w_8)) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlTOPp->Aes128Core__DOT__ks__DOT__w_9))) 
                                          >> 0x20U)));
}

VL_INLINE_OPT void VAes128Core_StdRoundGen::_combo__TOP__Aes128Core__DOT__r3__3(VAes128Core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VAes128Core_StdRoundGen::_combo__TOP__Aes128Core__DOT__r3__3\n"); );
    VAes128Core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
        = ((0xff000000U & __PVT__core__DOT__sub->io_out_bits_bits[0U]) 
           | ((0xff0000U & __PVT__core__DOT__sub->io_out_bits_bits[3U]) 
              | ((0xff00U & __PVT__core__DOT__sub->io_out_bits_bits[2U]) 
                 | (0xffU & __PVT__core__DOT__sub->io_out_bits_bits[1U]))));
    this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
        = ((0xff000000U & __PVT__core__DOT__sub->io_out_bits_bits[1U]) 
           | ((0xff0000U & __PVT__core__DOT__sub->io_out_bits_bits[0U]) 
              | ((0xff00U & __PVT__core__DOT__sub->io_out_bits_bits[3U]) 
                 | (0xffU & __PVT__core__DOT__sub->io_out_bits_bits[2U]))));
    this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
        = (IData)((((QData)((IData)(((0xff000000U & 
                                      __PVT__core__DOT__sub->io_out_bits_bits[3U]) 
                                     | ((0xff0000U 
                                         & __PVT__core__DOT__sub->io_out_bits_bits[2U]) 
                                        | ((0xff00U 
                                            & __PVT__core__DOT__sub->io_out_bits_bits[1U]) 
                                           | (0xffU 
                                              & __PVT__core__DOT__sub->io_out_bits_bits[0U])))))) 
                    << 0x20U) | (QData)((IData)(((0xff000000U 
                                                  & __PVT__core__DOT__sub->io_out_bits_bits[2U]) 
                                                 | ((0xff0000U 
                                                     & __PVT__core__DOT__sub->io_out_bits_bits[1U]) 
                                                    | ((0xff00U 
                                                        & __PVT__core__DOT__sub->io_out_bits_bits[0U]) 
                                                       | (0xffU 
                                                          & __PVT__core__DOT__sub->io_out_bits_bits[3U]))))))));
    this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
        = (IData)(((((QData)((IData)(((0xff000000U 
                                       & __PVT__core__DOT__sub->io_out_bits_bits[3U]) 
                                      | ((0xff0000U 
                                          & __PVT__core__DOT__sub->io_out_bits_bits[2U]) 
                                         | ((0xff00U 
                                             & __PVT__core__DOT__sub->io_out_bits_bits[1U]) 
                                            | (0xffU 
                                               & __PVT__core__DOT__sub->io_out_bits_bits[0U])))))) 
                     << 0x20U) | (QData)((IData)(((0xff000000U 
                                                   & __PVT__core__DOT__sub->io_out_bits_bits[2U]) 
                                                  | ((0xff0000U 
                                                      & __PVT__core__DOT__sub->io_out_bits_bits[1U]) 
                                                     | ((0xff00U 
                                                         & __PVT__core__DOT__sub->io_out_bits_bits[0U]) 
                                                        | (0xffU 
                                                           & __PVT__core__DOT__sub->io_out_bits_bits[3U]))))))) 
                   >> 0x20U));
    this->__PVT__core__DOT__mix__DOT___r0_T_1 = ((0x80000000U 
                                                  & this->__PVT__core__DOT__sh_io_out_bits_bits[3U])
                                                  ? 
                                                 (0x1bU 
                                                  ^ 
                                                  (0xfeU 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                      >> 0x17U)))
                                                  : 
                                                 (0xfeU 
                                                  & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                     >> 0x17U)));
    this->__PVT__core__DOT__mix__DOT___r0_T_3 = ((0x800000U 
                                                  & this->__PVT__core__DOT__sh_io_out_bits_bits[3U])
                                                  ? 
                                                 (0x1bU 
                                                  ^ 
                                                  (0xfeU 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                      >> 0xfU)))
                                                  : 
                                                 (0xfeU 
                                                  & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                     >> 0xfU)));
    this->__PVT__core__DOT__mix__DOT___r1_T_4 = ((0x8000U 
                                                  & this->__PVT__core__DOT__sh_io_out_bits_bits[3U])
                                                  ? 
                                                 (0x1bU 
                                                  ^ 
                                                  (0xfeU 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                      >> 7U)))
                                                  : 
                                                 (0xfeU 
                                                  & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                     >> 7U)));
    this->__PVT__core__DOT__mix__DOT___r2_T_5 = ((0x80U 
                                                  & this->__PVT__core__DOT__sh_io_out_bits_bits[3U])
                                                  ? 
                                                 (0x1bU 
                                                  ^ 
                                                  (0xfeU 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                      << 1U)))
                                                  : 
                                                 (0xfeU 
                                                  & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                     << 1U)));
    this->__PVT__core__DOT__mix__DOT___r0_T_8 = ((0x80000000U 
                                                  & this->__PVT__core__DOT__sh_io_out_bits_bits[2U])
                                                  ? 
                                                 (0x1bU 
                                                  ^ 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                       << 9U) 
                                                      | (0x1feU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                            >> 0x17U)))))
                                                  : 
                                                 (0xfeU 
                                                  & ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                      << 9U) 
                                                     | (0x1feU 
                                                        & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                           >> 0x17U)))));
    this->__PVT__core__DOT__mix__DOT___r0_T_10 = ((0x800000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[2U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                        << 0x11U) 
                                                       | (0x1fffeU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                             >> 0xfU)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                       << 0x11U) 
                                                      | (0x1fffeU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                            >> 0xfU)))));
    this->__PVT__core__DOT__mix__DOT___r1_T_11 = ((0x8000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[2U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                        << 0x19U) 
                                                       | (0x1fffffeU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                             >> 7U)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                       << 0x19U) 
                                                      | (0x1fffffeU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                            >> 7U)))));
    this->__PVT__core__DOT__mix__DOT___r2_T_12 = ((0x80U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[2U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                       << 1U)))
                                                   : 
                                                  (0xfeU 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                      << 1U)));
    this->__PVT__core__DOT__mix__DOT___r0_T_15 = ((0x80000000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[1U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                        << 9U) 
                                                       | (0x1feU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                             >> 0x17U)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                       << 9U) 
                                                      | (0x1feU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                            >> 0x17U)))));
    this->__PVT__core__DOT__mix__DOT___r0_T_17 = ((0x800000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[1U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                        << 0x11U) 
                                                       | (0x1fffeU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                             >> 0xfU)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                       << 0x11U) 
                                                      | (0x1fffeU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                            >> 0xfU)))));
    this->__PVT__core__DOT__mix__DOT___r1_T_18 = ((0x8000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[1U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                        << 0x19U) 
                                                       | (0x1fffffeU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                             >> 7U)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                       << 0x19U) 
                                                      | (0x1fffffeU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                            >> 7U)))));
    this->__PVT__core__DOT__mix__DOT___r2_T_19 = ((0x80U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[1U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                       << 1U)))
                                                   : 
                                                  (0xfeU 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                      << 1U)));
    this->__PVT__core__DOT__mix__DOT___r0_T_22 = ((0x80000000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[0U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                        << 9U) 
                                                       | (0x1feU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                             >> 0x17U)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                       << 9U) 
                                                      | (0x1feU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                            >> 0x17U)))));
    this->__PVT__core__DOT__mix__DOT___r0_T_24 = ((0x800000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[0U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                        << 0x11U) 
                                                       | (0x1fffeU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                             >> 0xfU)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                       << 0x11U) 
                                                      | (0x1fffeU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                            >> 0xfU)))));
    this->__PVT__core__DOT__mix__DOT___r1_T_25 = ((0x8000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[0U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                        << 0x19U) 
                                                       | (0x1fffffeU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                             >> 7U)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                       << 0x19U) 
                                                      | (0x1fffffeU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                            >> 7U)))));
    this->__PVT__core__DOT__mix__DOT___r2_T_26 = ((0x80U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[0U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                       << 1U)))
                                                   : 
                                                  (0xfeU 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                      << 1U)));
    this->__PVT__core__DOT__mix__DOT__io_out_bits_bits_hi 
        = (((QData)((IData)(((0xff000000U & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_1) 
                                                << 0x18U) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_3) 
                                                   << 0x18U) 
                                                  ^ 
                                                  (0xff000000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                      << 8U)))) 
                                              ^ (0xff000000U 
                                                 & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                    << 0x10U))) 
                                             ^ (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                << 0x18U))) 
                             | ((0xff0000U & ((((0xff0000U 
                                                 & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                    >> 8U)) 
                                                ^ ((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_3) 
                                                   << 0x10U)) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_4) 
                                                   << 0x10U) 
                                                  ^ 
                                                  (0xffff0000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                      << 8U)))) 
                                              ^ (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                 << 0x10U))) 
                                | ((0xff00U & ((((0xff00U 
                                                  & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                     >> 0x10U)) 
                                                 ^ 
                                                 (0xffff00U 
                                                  & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                     >> 8U))) 
                                                ^ ((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_4) 
                                                   << 8U)) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r2_T_5) 
                                                   ^ 
                                                   this->__PVT__core__DOT__sh_io_out_bits_bits[3U]) 
                                                  << 8U))) 
                                   | (0xffU & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_1) 
                                                  ^ 
                                                  (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                   >> 0x18U)) 
                                                 ^ 
                                                 (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                  >> 0x10U)) 
                                                ^ (
                                                   this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                   >> 8U)) 
                                               ^ (IData)(this->__PVT__core__DOT__mix__DOT___r2_T_5)))))))) 
            << 0x20U) | (QData)((IData)(((0xff000000U 
                                          & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_8) 
                                                << 0x18U) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_10) 
                                                   << 0x18U) 
                                                  ^ 
                                                  (0xff000000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                      << 8U)))) 
                                              ^ (0xff000000U 
                                                 & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                    << 0x10U))) 
                                             ^ (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                << 0x18U))) 
                                         | ((0xff0000U 
                                             & (((((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                    << 0x18U) 
                                                   | (0xff0000U 
                                                      & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                         >> 8U))) 
                                                  ^ 
                                                  ((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_10) 
                                                   << 0x10U)) 
                                                 ^ 
                                                 (((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_11) 
                                                   << 0x10U) 
                                                  ^ 
                                                  (0xffff0000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                      << 8U)))) 
                                                ^ (
                                                   this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                   << 0x10U))) 
                                            | ((0xff00U 
                                                & (((((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                       << 0x10U) 
                                                      | (0xff00U 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                            >> 0x10U))) 
                                                     ^ 
                                                     ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                       << 0x18U) 
                                                      | (0xffff00U 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                            >> 8U)))) 
                                                    ^ 
                                                    ((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_11) 
                                                     << 8U)) 
                                                   ^ 
                                                   (((IData)(this->__PVT__core__DOT__mix__DOT___r2_T_12) 
                                                     ^ 
                                                     this->__PVT__core__DOT__sh_io_out_bits_bits[2U]) 
                                                    << 8U))) 
                                               | (0xffU 
                                                  & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_8) 
                                                        ^ 
                                                        ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                          << 8U) 
                                                         | (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                            >> 0x18U))) 
                                                       ^ 
                                                       ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                         << 0x10U) 
                                                        | (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                           >> 0x10U))) 
                                                      ^ 
                                                      ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                        << 0x18U) 
                                                       | (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                          >> 8U))) 
                                                     ^ (IData)(this->__PVT__core__DOT__mix__DOT___r2_T_12)))))))));
    this->__PVT__core__DOT__mix__DOT__io_out_bits_bits_lo 
        = (((QData)((IData)(((0xff000000U & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_15) 
                                                << 0x18U) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_17) 
                                                   << 0x18U) 
                                                  ^ 
                                                  (0xff000000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                      << 8U)))) 
                                              ^ (0xff000000U 
                                                 & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                    << 0x10U))) 
                                             ^ (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                << 0x18U))) 
                             | ((0xff0000U & (((((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                  << 0x18U) 
                                                 | (0xff0000U 
                                                    & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                       >> 8U))) 
                                                ^ ((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_17) 
                                                   << 0x10U)) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_18) 
                                                   << 0x10U) 
                                                  ^ 
                                                  (0xffff0000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                      << 8U)))) 
                                              ^ (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                 << 0x10U))) 
                                | ((0xff00U & (((((
                                                   this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                   << 0x10U) 
                                                  | (0xff00U 
                                                     & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                        >> 0x10U))) 
                                                 ^ 
                                                 ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                   << 0x18U) 
                                                  | (0xffff00U 
                                                     & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                        >> 8U)))) 
                                                ^ ((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_18) 
                                                   << 8U)) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r2_T_19) 
                                                   ^ 
                                                   this->__PVT__core__DOT__sh_io_out_bits_bits[1U]) 
                                                  << 8U))) 
                                   | (0xffU & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_15) 
                                                  ^ 
                                                  ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                    << 8U) 
                                                   | (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                      >> 0x18U))) 
                                                 ^ 
                                                 ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                   << 0x10U) 
                                                  | (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                     >> 0x10U))) 
                                                ^ (
                                                   (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                    << 0x18U) 
                                                   | (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                      >> 8U))) 
                                               ^ (IData)(this->__PVT__core__DOT__mix__DOT___r2_T_19)))))))) 
            << 0x20U) | (QData)((IData)(((0xff000000U 
                                          & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_22) 
                                                << 0x18U) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_24) 
                                                   << 0x18U) 
                                                  ^ 
                                                  (0xff000000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                      << 8U)))) 
                                              ^ (0xff000000U 
                                                 & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                    << 0x10U))) 
                                             ^ (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                << 0x18U))) 
                                         | ((0xff0000U 
                                             & (((((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                    << 0x18U) 
                                                   | (0xff0000U 
                                                      & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                         >> 8U))) 
                                                  ^ 
                                                  ((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_24) 
                                                   << 0x10U)) 
                                                 ^ 
                                                 (((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_25) 
                                                   << 0x10U) 
                                                  ^ 
                                                  (0xffff0000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                      << 8U)))) 
                                                ^ (
                                                   this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                   << 0x10U))) 
                                            | ((0xff00U 
                                                & (((((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                       << 0x10U) 
                                                      | (0xff00U 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                            >> 0x10U))) 
                                                     ^ 
                                                     ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                       << 0x18U) 
                                                      | (0xffff00U 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                            >> 8U)))) 
                                                    ^ 
                                                    ((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_25) 
                                                     << 8U)) 
                                                   ^ 
                                                   (((IData)(this->__PVT__core__DOT__mix__DOT___r2_T_26) 
                                                     ^ 
                                                     this->__PVT__core__DOT__sh_io_out_bits_bits[0U]) 
                                                    << 8U))) 
                                               | (0xffU 
                                                  & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_22) 
                                                        ^ 
                                                        ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                          << 8U) 
                                                         | (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                            >> 0x18U))) 
                                                       ^ 
                                                       ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                         << 0x10U) 
                                                        | (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                           >> 0x10U))) 
                                                      ^ 
                                                      ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                        << 0x18U) 
                                                       | (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                          >> 8U))) 
                                                     ^ (IData)(this->__PVT__core__DOT__mix__DOT___r2_T_26)))))))));
    this->__PVT__core__DOT__addk_io_out_bits_bits[0U] 
        = ((IData)(this->__PVT__core__DOT__mix__DOT__io_out_bits_bits_lo) 
           ^ vlTOPp->Aes128Core__DOT__ks__DOT__w_15);
    this->__PVT__core__DOT__addk_io_out_bits_bits[1U] 
        = ((IData)((this->__PVT__core__DOT__mix__DOT__io_out_bits_bits_lo 
                    >> 0x20U)) ^ vlTOPp->Aes128Core__DOT__ks__DOT__w_14);
    this->__PVT__core__DOT__addk_io_out_bits_bits[2U] 
        = ((IData)(this->__PVT__core__DOT__mix__DOT__io_out_bits_bits_hi) 
           ^ (IData)((((QData)((IData)(vlTOPp->Aes128Core__DOT__ks__DOT__w_12)) 
                       << 0x20U) | (QData)((IData)(vlTOPp->Aes128Core__DOT__ks__DOT__w_13)))));
    this->__PVT__core__DOT__addk_io_out_bits_bits[3U] 
        = ((IData)((this->__PVT__core__DOT__mix__DOT__io_out_bits_bits_hi 
                    >> 0x20U)) ^ (IData)(((((QData)((IData)(vlTOPp->Aes128Core__DOT__ks__DOT__w_12)) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlTOPp->Aes128Core__DOT__ks__DOT__w_13))) 
                                          >> 0x20U)));
}

VL_INLINE_OPT void VAes128Core_StdRoundGen::_combo__TOP__Aes128Core__DOT__r4__4(VAes128Core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VAes128Core_StdRoundGen::_combo__TOP__Aes128Core__DOT__r4__4\n"); );
    VAes128Core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
        = ((0xff000000U & __PVT__core__DOT__sub->io_out_bits_bits[0U]) 
           | ((0xff0000U & __PVT__core__DOT__sub->io_out_bits_bits[3U]) 
              | ((0xff00U & __PVT__core__DOT__sub->io_out_bits_bits[2U]) 
                 | (0xffU & __PVT__core__DOT__sub->io_out_bits_bits[1U]))));
    this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
        = ((0xff000000U & __PVT__core__DOT__sub->io_out_bits_bits[1U]) 
           | ((0xff0000U & __PVT__core__DOT__sub->io_out_bits_bits[0U]) 
              | ((0xff00U & __PVT__core__DOT__sub->io_out_bits_bits[3U]) 
                 | (0xffU & __PVT__core__DOT__sub->io_out_bits_bits[2U]))));
    this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
        = (IData)((((QData)((IData)(((0xff000000U & 
                                      __PVT__core__DOT__sub->io_out_bits_bits[3U]) 
                                     | ((0xff0000U 
                                         & __PVT__core__DOT__sub->io_out_bits_bits[2U]) 
                                        | ((0xff00U 
                                            & __PVT__core__DOT__sub->io_out_bits_bits[1U]) 
                                           | (0xffU 
                                              & __PVT__core__DOT__sub->io_out_bits_bits[0U])))))) 
                    << 0x20U) | (QData)((IData)(((0xff000000U 
                                                  & __PVT__core__DOT__sub->io_out_bits_bits[2U]) 
                                                 | ((0xff0000U 
                                                     & __PVT__core__DOT__sub->io_out_bits_bits[1U]) 
                                                    | ((0xff00U 
                                                        & __PVT__core__DOT__sub->io_out_bits_bits[0U]) 
                                                       | (0xffU 
                                                          & __PVT__core__DOT__sub->io_out_bits_bits[3U]))))))));
    this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
        = (IData)(((((QData)((IData)(((0xff000000U 
                                       & __PVT__core__DOT__sub->io_out_bits_bits[3U]) 
                                      | ((0xff0000U 
                                          & __PVT__core__DOT__sub->io_out_bits_bits[2U]) 
                                         | ((0xff00U 
                                             & __PVT__core__DOT__sub->io_out_bits_bits[1U]) 
                                            | (0xffU 
                                               & __PVT__core__DOT__sub->io_out_bits_bits[0U])))))) 
                     << 0x20U) | (QData)((IData)(((0xff000000U 
                                                   & __PVT__core__DOT__sub->io_out_bits_bits[2U]) 
                                                  | ((0xff0000U 
                                                      & __PVT__core__DOT__sub->io_out_bits_bits[1U]) 
                                                     | ((0xff00U 
                                                         & __PVT__core__DOT__sub->io_out_bits_bits[0U]) 
                                                        | (0xffU 
                                                           & __PVT__core__DOT__sub->io_out_bits_bits[3U]))))))) 
                   >> 0x20U));
    this->__PVT__core__DOT__mix__DOT___r0_T_1 = ((0x80000000U 
                                                  & this->__PVT__core__DOT__sh_io_out_bits_bits[3U])
                                                  ? 
                                                 (0x1bU 
                                                  ^ 
                                                  (0xfeU 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                      >> 0x17U)))
                                                  : 
                                                 (0xfeU 
                                                  & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                     >> 0x17U)));
    this->__PVT__core__DOT__mix__DOT___r0_T_3 = ((0x800000U 
                                                  & this->__PVT__core__DOT__sh_io_out_bits_bits[3U])
                                                  ? 
                                                 (0x1bU 
                                                  ^ 
                                                  (0xfeU 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                      >> 0xfU)))
                                                  : 
                                                 (0xfeU 
                                                  & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                     >> 0xfU)));
    this->__PVT__core__DOT__mix__DOT___r1_T_4 = ((0x8000U 
                                                  & this->__PVT__core__DOT__sh_io_out_bits_bits[3U])
                                                  ? 
                                                 (0x1bU 
                                                  ^ 
                                                  (0xfeU 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                      >> 7U)))
                                                  : 
                                                 (0xfeU 
                                                  & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                     >> 7U)));
    this->__PVT__core__DOT__mix__DOT___r2_T_5 = ((0x80U 
                                                  & this->__PVT__core__DOT__sh_io_out_bits_bits[3U])
                                                  ? 
                                                 (0x1bU 
                                                  ^ 
                                                  (0xfeU 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                      << 1U)))
                                                  : 
                                                 (0xfeU 
                                                  & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                     << 1U)));
    this->__PVT__core__DOT__mix__DOT___r0_T_8 = ((0x80000000U 
                                                  & this->__PVT__core__DOT__sh_io_out_bits_bits[2U])
                                                  ? 
                                                 (0x1bU 
                                                  ^ 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                       << 9U) 
                                                      | (0x1feU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                            >> 0x17U)))))
                                                  : 
                                                 (0xfeU 
                                                  & ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                      << 9U) 
                                                     | (0x1feU 
                                                        & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                           >> 0x17U)))));
    this->__PVT__core__DOT__mix__DOT___r0_T_10 = ((0x800000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[2U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                        << 0x11U) 
                                                       | (0x1fffeU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                             >> 0xfU)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                       << 0x11U) 
                                                      | (0x1fffeU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                            >> 0xfU)))));
    this->__PVT__core__DOT__mix__DOT___r1_T_11 = ((0x8000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[2U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                        << 0x19U) 
                                                       | (0x1fffffeU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                             >> 7U)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                       << 0x19U) 
                                                      | (0x1fffffeU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                            >> 7U)))));
    this->__PVT__core__DOT__mix__DOT___r2_T_12 = ((0x80U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[2U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                       << 1U)))
                                                   : 
                                                  (0xfeU 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                      << 1U)));
    this->__PVT__core__DOT__mix__DOT___r0_T_15 = ((0x80000000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[1U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                        << 9U) 
                                                       | (0x1feU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                             >> 0x17U)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                       << 9U) 
                                                      | (0x1feU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                            >> 0x17U)))));
    this->__PVT__core__DOT__mix__DOT___r0_T_17 = ((0x800000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[1U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                        << 0x11U) 
                                                       | (0x1fffeU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                             >> 0xfU)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                       << 0x11U) 
                                                      | (0x1fffeU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                            >> 0xfU)))));
    this->__PVT__core__DOT__mix__DOT___r1_T_18 = ((0x8000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[1U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                        << 0x19U) 
                                                       | (0x1fffffeU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                             >> 7U)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                       << 0x19U) 
                                                      | (0x1fffffeU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                            >> 7U)))));
    this->__PVT__core__DOT__mix__DOT___r2_T_19 = ((0x80U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[1U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                       << 1U)))
                                                   : 
                                                  (0xfeU 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                      << 1U)));
    this->__PVT__core__DOT__mix__DOT___r0_T_22 = ((0x80000000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[0U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                        << 9U) 
                                                       | (0x1feU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                             >> 0x17U)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                       << 9U) 
                                                      | (0x1feU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                            >> 0x17U)))));
    this->__PVT__core__DOT__mix__DOT___r0_T_24 = ((0x800000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[0U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                        << 0x11U) 
                                                       | (0x1fffeU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                             >> 0xfU)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                       << 0x11U) 
                                                      | (0x1fffeU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                            >> 0xfU)))));
    this->__PVT__core__DOT__mix__DOT___r1_T_25 = ((0x8000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[0U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                        << 0x19U) 
                                                       | (0x1fffffeU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                             >> 7U)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                       << 0x19U) 
                                                      | (0x1fffffeU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                            >> 7U)))));
    this->__PVT__core__DOT__mix__DOT___r2_T_26 = ((0x80U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[0U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                       << 1U)))
                                                   : 
                                                  (0xfeU 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                      << 1U)));
    this->__PVT__core__DOT__mix__DOT__io_out_bits_bits_hi 
        = (((QData)((IData)(((0xff000000U & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_1) 
                                                << 0x18U) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_3) 
                                                   << 0x18U) 
                                                  ^ 
                                                  (0xff000000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                      << 8U)))) 
                                              ^ (0xff000000U 
                                                 & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                    << 0x10U))) 
                                             ^ (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                << 0x18U))) 
                             | ((0xff0000U & ((((0xff0000U 
                                                 & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                    >> 8U)) 
                                                ^ ((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_3) 
                                                   << 0x10U)) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_4) 
                                                   << 0x10U) 
                                                  ^ 
                                                  (0xffff0000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                      << 8U)))) 
                                              ^ (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                 << 0x10U))) 
                                | ((0xff00U & ((((0xff00U 
                                                  & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                     >> 0x10U)) 
                                                 ^ 
                                                 (0xffff00U 
                                                  & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                     >> 8U))) 
                                                ^ ((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_4) 
                                                   << 8U)) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r2_T_5) 
                                                   ^ 
                                                   this->__PVT__core__DOT__sh_io_out_bits_bits[3U]) 
                                                  << 8U))) 
                                   | (0xffU & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_1) 
                                                  ^ 
                                                  (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                   >> 0x18U)) 
                                                 ^ 
                                                 (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                  >> 0x10U)) 
                                                ^ (
                                                   this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                   >> 8U)) 
                                               ^ (IData)(this->__PVT__core__DOT__mix__DOT___r2_T_5)))))))) 
            << 0x20U) | (QData)((IData)(((0xff000000U 
                                          & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_8) 
                                                << 0x18U) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_10) 
                                                   << 0x18U) 
                                                  ^ 
                                                  (0xff000000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                      << 8U)))) 
                                              ^ (0xff000000U 
                                                 & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                    << 0x10U))) 
                                             ^ (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                << 0x18U))) 
                                         | ((0xff0000U 
                                             & (((((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                    << 0x18U) 
                                                   | (0xff0000U 
                                                      & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                         >> 8U))) 
                                                  ^ 
                                                  ((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_10) 
                                                   << 0x10U)) 
                                                 ^ 
                                                 (((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_11) 
                                                   << 0x10U) 
                                                  ^ 
                                                  (0xffff0000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                      << 8U)))) 
                                                ^ (
                                                   this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                   << 0x10U))) 
                                            | ((0xff00U 
                                                & (((((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                       << 0x10U) 
                                                      | (0xff00U 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                            >> 0x10U))) 
                                                     ^ 
                                                     ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                       << 0x18U) 
                                                      | (0xffff00U 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                            >> 8U)))) 
                                                    ^ 
                                                    ((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_11) 
                                                     << 8U)) 
                                                   ^ 
                                                   (((IData)(this->__PVT__core__DOT__mix__DOT___r2_T_12) 
                                                     ^ 
                                                     this->__PVT__core__DOT__sh_io_out_bits_bits[2U]) 
                                                    << 8U))) 
                                               | (0xffU 
                                                  & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_8) 
                                                        ^ 
                                                        ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                          << 8U) 
                                                         | (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                            >> 0x18U))) 
                                                       ^ 
                                                       ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                         << 0x10U) 
                                                        | (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                           >> 0x10U))) 
                                                      ^ 
                                                      ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                        << 0x18U) 
                                                       | (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                          >> 8U))) 
                                                     ^ (IData)(this->__PVT__core__DOT__mix__DOT___r2_T_12)))))))));
    this->__PVT__core__DOT__mix__DOT__io_out_bits_bits_lo 
        = (((QData)((IData)(((0xff000000U & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_15) 
                                                << 0x18U) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_17) 
                                                   << 0x18U) 
                                                  ^ 
                                                  (0xff000000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                      << 8U)))) 
                                              ^ (0xff000000U 
                                                 & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                    << 0x10U))) 
                                             ^ (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                << 0x18U))) 
                             | ((0xff0000U & (((((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                  << 0x18U) 
                                                 | (0xff0000U 
                                                    & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                       >> 8U))) 
                                                ^ ((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_17) 
                                                   << 0x10U)) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_18) 
                                                   << 0x10U) 
                                                  ^ 
                                                  (0xffff0000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                      << 8U)))) 
                                              ^ (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                 << 0x10U))) 
                                | ((0xff00U & (((((
                                                   this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                   << 0x10U) 
                                                  | (0xff00U 
                                                     & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                        >> 0x10U))) 
                                                 ^ 
                                                 ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                   << 0x18U) 
                                                  | (0xffff00U 
                                                     & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                        >> 8U)))) 
                                                ^ ((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_18) 
                                                   << 8U)) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r2_T_19) 
                                                   ^ 
                                                   this->__PVT__core__DOT__sh_io_out_bits_bits[1U]) 
                                                  << 8U))) 
                                   | (0xffU & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_15) 
                                                  ^ 
                                                  ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                    << 8U) 
                                                   | (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                      >> 0x18U))) 
                                                 ^ 
                                                 ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                   << 0x10U) 
                                                  | (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                     >> 0x10U))) 
                                                ^ (
                                                   (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                    << 0x18U) 
                                                   | (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                      >> 8U))) 
                                               ^ (IData)(this->__PVT__core__DOT__mix__DOT___r2_T_19)))))))) 
            << 0x20U) | (QData)((IData)(((0xff000000U 
                                          & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_22) 
                                                << 0x18U) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_24) 
                                                   << 0x18U) 
                                                  ^ 
                                                  (0xff000000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                      << 8U)))) 
                                              ^ (0xff000000U 
                                                 & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                    << 0x10U))) 
                                             ^ (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                << 0x18U))) 
                                         | ((0xff0000U 
                                             & (((((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                    << 0x18U) 
                                                   | (0xff0000U 
                                                      & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                         >> 8U))) 
                                                  ^ 
                                                  ((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_24) 
                                                   << 0x10U)) 
                                                 ^ 
                                                 (((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_25) 
                                                   << 0x10U) 
                                                  ^ 
                                                  (0xffff0000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                      << 8U)))) 
                                                ^ (
                                                   this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                   << 0x10U))) 
                                            | ((0xff00U 
                                                & (((((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                       << 0x10U) 
                                                      | (0xff00U 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                            >> 0x10U))) 
                                                     ^ 
                                                     ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                       << 0x18U) 
                                                      | (0xffff00U 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                            >> 8U)))) 
                                                    ^ 
                                                    ((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_25) 
                                                     << 8U)) 
                                                   ^ 
                                                   (((IData)(this->__PVT__core__DOT__mix__DOT___r2_T_26) 
                                                     ^ 
                                                     this->__PVT__core__DOT__sh_io_out_bits_bits[0U]) 
                                                    << 8U))) 
                                               | (0xffU 
                                                  & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_22) 
                                                        ^ 
                                                        ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                          << 8U) 
                                                         | (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                            >> 0x18U))) 
                                                       ^ 
                                                       ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                         << 0x10U) 
                                                        | (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                           >> 0x10U))) 
                                                      ^ 
                                                      ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                        << 0x18U) 
                                                       | (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                          >> 8U))) 
                                                     ^ (IData)(this->__PVT__core__DOT__mix__DOT___r2_T_26)))))))));
    this->__PVT__core__DOT__addk_io_out_bits_bits[0U] 
        = ((IData)(this->__PVT__core__DOT__mix__DOT__io_out_bits_bits_lo) 
           ^ vlTOPp->Aes128Core__DOT__ks__DOT__w_19);
    this->__PVT__core__DOT__addk_io_out_bits_bits[1U] 
        = ((IData)((this->__PVT__core__DOT__mix__DOT__io_out_bits_bits_lo 
                    >> 0x20U)) ^ vlTOPp->Aes128Core__DOT__ks__DOT__w_18);
    this->__PVT__core__DOT__addk_io_out_bits_bits[2U] 
        = ((IData)(this->__PVT__core__DOT__mix__DOT__io_out_bits_bits_hi) 
           ^ (IData)((((QData)((IData)(vlTOPp->Aes128Core__DOT__ks__DOT__w_16)) 
                       << 0x20U) | (QData)((IData)(vlTOPp->Aes128Core__DOT__ks__DOT__w_17)))));
    this->__PVT__core__DOT__addk_io_out_bits_bits[3U] 
        = ((IData)((this->__PVT__core__DOT__mix__DOT__io_out_bits_bits_hi 
                    >> 0x20U)) ^ (IData)(((((QData)((IData)(vlTOPp->Aes128Core__DOT__ks__DOT__w_16)) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlTOPp->Aes128Core__DOT__ks__DOT__w_17))) 
                                          >> 0x20U)));
}

VL_INLINE_OPT void VAes128Core_StdRoundGen::_combo__TOP__Aes128Core__DOT__r5__5(VAes128Core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VAes128Core_StdRoundGen::_combo__TOP__Aes128Core__DOT__r5__5\n"); );
    VAes128Core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
        = ((0xff000000U & __PVT__core__DOT__sub->io_out_bits_bits[0U]) 
           | ((0xff0000U & __PVT__core__DOT__sub->io_out_bits_bits[3U]) 
              | ((0xff00U & __PVT__core__DOT__sub->io_out_bits_bits[2U]) 
                 | (0xffU & __PVT__core__DOT__sub->io_out_bits_bits[1U]))));
    this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
        = ((0xff000000U & __PVT__core__DOT__sub->io_out_bits_bits[1U]) 
           | ((0xff0000U & __PVT__core__DOT__sub->io_out_bits_bits[0U]) 
              | ((0xff00U & __PVT__core__DOT__sub->io_out_bits_bits[3U]) 
                 | (0xffU & __PVT__core__DOT__sub->io_out_bits_bits[2U]))));
    this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
        = (IData)((((QData)((IData)(((0xff000000U & 
                                      __PVT__core__DOT__sub->io_out_bits_bits[3U]) 
                                     | ((0xff0000U 
                                         & __PVT__core__DOT__sub->io_out_bits_bits[2U]) 
                                        | ((0xff00U 
                                            & __PVT__core__DOT__sub->io_out_bits_bits[1U]) 
                                           | (0xffU 
                                              & __PVT__core__DOT__sub->io_out_bits_bits[0U])))))) 
                    << 0x20U) | (QData)((IData)(((0xff000000U 
                                                  & __PVT__core__DOT__sub->io_out_bits_bits[2U]) 
                                                 | ((0xff0000U 
                                                     & __PVT__core__DOT__sub->io_out_bits_bits[1U]) 
                                                    | ((0xff00U 
                                                        & __PVT__core__DOT__sub->io_out_bits_bits[0U]) 
                                                       | (0xffU 
                                                          & __PVT__core__DOT__sub->io_out_bits_bits[3U]))))))));
    this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
        = (IData)(((((QData)((IData)(((0xff000000U 
                                       & __PVT__core__DOT__sub->io_out_bits_bits[3U]) 
                                      | ((0xff0000U 
                                          & __PVT__core__DOT__sub->io_out_bits_bits[2U]) 
                                         | ((0xff00U 
                                             & __PVT__core__DOT__sub->io_out_bits_bits[1U]) 
                                            | (0xffU 
                                               & __PVT__core__DOT__sub->io_out_bits_bits[0U])))))) 
                     << 0x20U) | (QData)((IData)(((0xff000000U 
                                                   & __PVT__core__DOT__sub->io_out_bits_bits[2U]) 
                                                  | ((0xff0000U 
                                                      & __PVT__core__DOT__sub->io_out_bits_bits[1U]) 
                                                     | ((0xff00U 
                                                         & __PVT__core__DOT__sub->io_out_bits_bits[0U]) 
                                                        | (0xffU 
                                                           & __PVT__core__DOT__sub->io_out_bits_bits[3U]))))))) 
                   >> 0x20U));
    this->__PVT__core__DOT__mix__DOT___r0_T_1 = ((0x80000000U 
                                                  & this->__PVT__core__DOT__sh_io_out_bits_bits[3U])
                                                  ? 
                                                 (0x1bU 
                                                  ^ 
                                                  (0xfeU 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                      >> 0x17U)))
                                                  : 
                                                 (0xfeU 
                                                  & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                     >> 0x17U)));
    this->__PVT__core__DOT__mix__DOT___r0_T_3 = ((0x800000U 
                                                  & this->__PVT__core__DOT__sh_io_out_bits_bits[3U])
                                                  ? 
                                                 (0x1bU 
                                                  ^ 
                                                  (0xfeU 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                      >> 0xfU)))
                                                  : 
                                                 (0xfeU 
                                                  & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                     >> 0xfU)));
    this->__PVT__core__DOT__mix__DOT___r1_T_4 = ((0x8000U 
                                                  & this->__PVT__core__DOT__sh_io_out_bits_bits[3U])
                                                  ? 
                                                 (0x1bU 
                                                  ^ 
                                                  (0xfeU 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                      >> 7U)))
                                                  : 
                                                 (0xfeU 
                                                  & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                     >> 7U)));
    this->__PVT__core__DOT__mix__DOT___r2_T_5 = ((0x80U 
                                                  & this->__PVT__core__DOT__sh_io_out_bits_bits[3U])
                                                  ? 
                                                 (0x1bU 
                                                  ^ 
                                                  (0xfeU 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                      << 1U)))
                                                  : 
                                                 (0xfeU 
                                                  & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                     << 1U)));
    this->__PVT__core__DOT__mix__DOT___r0_T_8 = ((0x80000000U 
                                                  & this->__PVT__core__DOT__sh_io_out_bits_bits[2U])
                                                  ? 
                                                 (0x1bU 
                                                  ^ 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                       << 9U) 
                                                      | (0x1feU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                            >> 0x17U)))))
                                                  : 
                                                 (0xfeU 
                                                  & ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                      << 9U) 
                                                     | (0x1feU 
                                                        & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                           >> 0x17U)))));
    this->__PVT__core__DOT__mix__DOT___r0_T_10 = ((0x800000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[2U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                        << 0x11U) 
                                                       | (0x1fffeU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                             >> 0xfU)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                       << 0x11U) 
                                                      | (0x1fffeU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                            >> 0xfU)))));
    this->__PVT__core__DOT__mix__DOT___r1_T_11 = ((0x8000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[2U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                        << 0x19U) 
                                                       | (0x1fffffeU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                             >> 7U)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                       << 0x19U) 
                                                      | (0x1fffffeU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                            >> 7U)))));
    this->__PVT__core__DOT__mix__DOT___r2_T_12 = ((0x80U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[2U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                       << 1U)))
                                                   : 
                                                  (0xfeU 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                      << 1U)));
    this->__PVT__core__DOT__mix__DOT___r0_T_15 = ((0x80000000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[1U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                        << 9U) 
                                                       | (0x1feU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                             >> 0x17U)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                       << 9U) 
                                                      | (0x1feU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                            >> 0x17U)))));
    this->__PVT__core__DOT__mix__DOT___r0_T_17 = ((0x800000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[1U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                        << 0x11U) 
                                                       | (0x1fffeU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                             >> 0xfU)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                       << 0x11U) 
                                                      | (0x1fffeU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                            >> 0xfU)))));
    this->__PVT__core__DOT__mix__DOT___r1_T_18 = ((0x8000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[1U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                        << 0x19U) 
                                                       | (0x1fffffeU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                             >> 7U)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                       << 0x19U) 
                                                      | (0x1fffffeU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                            >> 7U)))));
    this->__PVT__core__DOT__mix__DOT___r2_T_19 = ((0x80U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[1U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                       << 1U)))
                                                   : 
                                                  (0xfeU 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                      << 1U)));
    this->__PVT__core__DOT__mix__DOT___r0_T_22 = ((0x80000000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[0U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                        << 9U) 
                                                       | (0x1feU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                             >> 0x17U)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                       << 9U) 
                                                      | (0x1feU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                            >> 0x17U)))));
    this->__PVT__core__DOT__mix__DOT___r0_T_24 = ((0x800000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[0U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                        << 0x11U) 
                                                       | (0x1fffeU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                             >> 0xfU)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                       << 0x11U) 
                                                      | (0x1fffeU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                            >> 0xfU)))));
    this->__PVT__core__DOT__mix__DOT___r1_T_25 = ((0x8000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[0U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                        << 0x19U) 
                                                       | (0x1fffffeU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                             >> 7U)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                       << 0x19U) 
                                                      | (0x1fffffeU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                            >> 7U)))));
    this->__PVT__core__DOT__mix__DOT___r2_T_26 = ((0x80U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[0U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                       << 1U)))
                                                   : 
                                                  (0xfeU 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                      << 1U)));
    this->__PVT__core__DOT__mix__DOT__io_out_bits_bits_hi 
        = (((QData)((IData)(((0xff000000U & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_1) 
                                                << 0x18U) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_3) 
                                                   << 0x18U) 
                                                  ^ 
                                                  (0xff000000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                      << 8U)))) 
                                              ^ (0xff000000U 
                                                 & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                    << 0x10U))) 
                                             ^ (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                << 0x18U))) 
                             | ((0xff0000U & ((((0xff0000U 
                                                 & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                    >> 8U)) 
                                                ^ ((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_3) 
                                                   << 0x10U)) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_4) 
                                                   << 0x10U) 
                                                  ^ 
                                                  (0xffff0000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                      << 8U)))) 
                                              ^ (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                 << 0x10U))) 
                                | ((0xff00U & ((((0xff00U 
                                                  & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                     >> 0x10U)) 
                                                 ^ 
                                                 (0xffff00U 
                                                  & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                     >> 8U))) 
                                                ^ ((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_4) 
                                                   << 8U)) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r2_T_5) 
                                                   ^ 
                                                   this->__PVT__core__DOT__sh_io_out_bits_bits[3U]) 
                                                  << 8U))) 
                                   | (0xffU & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_1) 
                                                  ^ 
                                                  (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                   >> 0x18U)) 
                                                 ^ 
                                                 (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                  >> 0x10U)) 
                                                ^ (
                                                   this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                   >> 8U)) 
                                               ^ (IData)(this->__PVT__core__DOT__mix__DOT___r2_T_5)))))))) 
            << 0x20U) | (QData)((IData)(((0xff000000U 
                                          & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_8) 
                                                << 0x18U) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_10) 
                                                   << 0x18U) 
                                                  ^ 
                                                  (0xff000000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                      << 8U)))) 
                                              ^ (0xff000000U 
                                                 & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                    << 0x10U))) 
                                             ^ (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                << 0x18U))) 
                                         | ((0xff0000U 
                                             & (((((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                    << 0x18U) 
                                                   | (0xff0000U 
                                                      & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                         >> 8U))) 
                                                  ^ 
                                                  ((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_10) 
                                                   << 0x10U)) 
                                                 ^ 
                                                 (((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_11) 
                                                   << 0x10U) 
                                                  ^ 
                                                  (0xffff0000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                      << 8U)))) 
                                                ^ (
                                                   this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                   << 0x10U))) 
                                            | ((0xff00U 
                                                & (((((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                       << 0x10U) 
                                                      | (0xff00U 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                            >> 0x10U))) 
                                                     ^ 
                                                     ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                       << 0x18U) 
                                                      | (0xffff00U 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                            >> 8U)))) 
                                                    ^ 
                                                    ((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_11) 
                                                     << 8U)) 
                                                   ^ 
                                                   (((IData)(this->__PVT__core__DOT__mix__DOT___r2_T_12) 
                                                     ^ 
                                                     this->__PVT__core__DOT__sh_io_out_bits_bits[2U]) 
                                                    << 8U))) 
                                               | (0xffU 
                                                  & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_8) 
                                                        ^ 
                                                        ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                          << 8U) 
                                                         | (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                            >> 0x18U))) 
                                                       ^ 
                                                       ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                         << 0x10U) 
                                                        | (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                           >> 0x10U))) 
                                                      ^ 
                                                      ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                        << 0x18U) 
                                                       | (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                          >> 8U))) 
                                                     ^ (IData)(this->__PVT__core__DOT__mix__DOT___r2_T_12)))))))));
    this->__PVT__core__DOT__mix__DOT__io_out_bits_bits_lo 
        = (((QData)((IData)(((0xff000000U & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_15) 
                                                << 0x18U) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_17) 
                                                   << 0x18U) 
                                                  ^ 
                                                  (0xff000000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                      << 8U)))) 
                                              ^ (0xff000000U 
                                                 & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                    << 0x10U))) 
                                             ^ (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                << 0x18U))) 
                             | ((0xff0000U & (((((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                  << 0x18U) 
                                                 | (0xff0000U 
                                                    & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                       >> 8U))) 
                                                ^ ((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_17) 
                                                   << 0x10U)) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_18) 
                                                   << 0x10U) 
                                                  ^ 
                                                  (0xffff0000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                      << 8U)))) 
                                              ^ (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                 << 0x10U))) 
                                | ((0xff00U & (((((
                                                   this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                   << 0x10U) 
                                                  | (0xff00U 
                                                     & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                        >> 0x10U))) 
                                                 ^ 
                                                 ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                   << 0x18U) 
                                                  | (0xffff00U 
                                                     & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                        >> 8U)))) 
                                                ^ ((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_18) 
                                                   << 8U)) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r2_T_19) 
                                                   ^ 
                                                   this->__PVT__core__DOT__sh_io_out_bits_bits[1U]) 
                                                  << 8U))) 
                                   | (0xffU & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_15) 
                                                  ^ 
                                                  ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                    << 8U) 
                                                   | (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                      >> 0x18U))) 
                                                 ^ 
                                                 ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                   << 0x10U) 
                                                  | (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                     >> 0x10U))) 
                                                ^ (
                                                   (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                    << 0x18U) 
                                                   | (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                      >> 8U))) 
                                               ^ (IData)(this->__PVT__core__DOT__mix__DOT___r2_T_19)))))))) 
            << 0x20U) | (QData)((IData)(((0xff000000U 
                                          & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_22) 
                                                << 0x18U) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_24) 
                                                   << 0x18U) 
                                                  ^ 
                                                  (0xff000000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                      << 8U)))) 
                                              ^ (0xff000000U 
                                                 & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                    << 0x10U))) 
                                             ^ (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                << 0x18U))) 
                                         | ((0xff0000U 
                                             & (((((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                    << 0x18U) 
                                                   | (0xff0000U 
                                                      & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                         >> 8U))) 
                                                  ^ 
                                                  ((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_24) 
                                                   << 0x10U)) 
                                                 ^ 
                                                 (((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_25) 
                                                   << 0x10U) 
                                                  ^ 
                                                  (0xffff0000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                      << 8U)))) 
                                                ^ (
                                                   this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                   << 0x10U))) 
                                            | ((0xff00U 
                                                & (((((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                       << 0x10U) 
                                                      | (0xff00U 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                            >> 0x10U))) 
                                                     ^ 
                                                     ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                       << 0x18U) 
                                                      | (0xffff00U 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                            >> 8U)))) 
                                                    ^ 
                                                    ((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_25) 
                                                     << 8U)) 
                                                   ^ 
                                                   (((IData)(this->__PVT__core__DOT__mix__DOT___r2_T_26) 
                                                     ^ 
                                                     this->__PVT__core__DOT__sh_io_out_bits_bits[0U]) 
                                                    << 8U))) 
                                               | (0xffU 
                                                  & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_22) 
                                                        ^ 
                                                        ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                          << 8U) 
                                                         | (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                            >> 0x18U))) 
                                                       ^ 
                                                       ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                         << 0x10U) 
                                                        | (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                           >> 0x10U))) 
                                                      ^ 
                                                      ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                        << 0x18U) 
                                                       | (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                          >> 8U))) 
                                                     ^ (IData)(this->__PVT__core__DOT__mix__DOT___r2_T_26)))))))));
    this->__PVT__core__DOT__addk_io_out_bits_bits[0U] 
        = ((IData)(this->__PVT__core__DOT__mix__DOT__io_out_bits_bits_lo) 
           ^ vlTOPp->Aes128Core__DOT__ks__DOT__w_23);
    this->__PVT__core__DOT__addk_io_out_bits_bits[1U] 
        = ((IData)((this->__PVT__core__DOT__mix__DOT__io_out_bits_bits_lo 
                    >> 0x20U)) ^ vlTOPp->Aes128Core__DOT__ks__DOT__w_22);
    this->__PVT__core__DOT__addk_io_out_bits_bits[2U] 
        = ((IData)(this->__PVT__core__DOT__mix__DOT__io_out_bits_bits_hi) 
           ^ (IData)((((QData)((IData)(vlTOPp->Aes128Core__DOT__ks__DOT__w_20)) 
                       << 0x20U) | (QData)((IData)(vlTOPp->Aes128Core__DOT__ks__DOT__w_21)))));
    this->__PVT__core__DOT__addk_io_out_bits_bits[3U] 
        = ((IData)((this->__PVT__core__DOT__mix__DOT__io_out_bits_bits_hi 
                    >> 0x20U)) ^ (IData)(((((QData)((IData)(vlTOPp->Aes128Core__DOT__ks__DOT__w_20)) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlTOPp->Aes128Core__DOT__ks__DOT__w_21))) 
                                          >> 0x20U)));
}

VL_INLINE_OPT void VAes128Core_StdRoundGen::_combo__TOP__Aes128Core__DOT__r6__6(VAes128Core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VAes128Core_StdRoundGen::_combo__TOP__Aes128Core__DOT__r6__6\n"); );
    VAes128Core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
        = ((0xff000000U & __PVT__core__DOT__sub->io_out_bits_bits[0U]) 
           | ((0xff0000U & __PVT__core__DOT__sub->io_out_bits_bits[3U]) 
              | ((0xff00U & __PVT__core__DOT__sub->io_out_bits_bits[2U]) 
                 | (0xffU & __PVT__core__DOT__sub->io_out_bits_bits[1U]))));
    this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
        = ((0xff000000U & __PVT__core__DOT__sub->io_out_bits_bits[1U]) 
           | ((0xff0000U & __PVT__core__DOT__sub->io_out_bits_bits[0U]) 
              | ((0xff00U & __PVT__core__DOT__sub->io_out_bits_bits[3U]) 
                 | (0xffU & __PVT__core__DOT__sub->io_out_bits_bits[2U]))));
    this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
        = (IData)((((QData)((IData)(((0xff000000U & 
                                      __PVT__core__DOT__sub->io_out_bits_bits[3U]) 
                                     | ((0xff0000U 
                                         & __PVT__core__DOT__sub->io_out_bits_bits[2U]) 
                                        | ((0xff00U 
                                            & __PVT__core__DOT__sub->io_out_bits_bits[1U]) 
                                           | (0xffU 
                                              & __PVT__core__DOT__sub->io_out_bits_bits[0U])))))) 
                    << 0x20U) | (QData)((IData)(((0xff000000U 
                                                  & __PVT__core__DOT__sub->io_out_bits_bits[2U]) 
                                                 | ((0xff0000U 
                                                     & __PVT__core__DOT__sub->io_out_bits_bits[1U]) 
                                                    | ((0xff00U 
                                                        & __PVT__core__DOT__sub->io_out_bits_bits[0U]) 
                                                       | (0xffU 
                                                          & __PVT__core__DOT__sub->io_out_bits_bits[3U]))))))));
    this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
        = (IData)(((((QData)((IData)(((0xff000000U 
                                       & __PVT__core__DOT__sub->io_out_bits_bits[3U]) 
                                      | ((0xff0000U 
                                          & __PVT__core__DOT__sub->io_out_bits_bits[2U]) 
                                         | ((0xff00U 
                                             & __PVT__core__DOT__sub->io_out_bits_bits[1U]) 
                                            | (0xffU 
                                               & __PVT__core__DOT__sub->io_out_bits_bits[0U])))))) 
                     << 0x20U) | (QData)((IData)(((0xff000000U 
                                                   & __PVT__core__DOT__sub->io_out_bits_bits[2U]) 
                                                  | ((0xff0000U 
                                                      & __PVT__core__DOT__sub->io_out_bits_bits[1U]) 
                                                     | ((0xff00U 
                                                         & __PVT__core__DOT__sub->io_out_bits_bits[0U]) 
                                                        | (0xffU 
                                                           & __PVT__core__DOT__sub->io_out_bits_bits[3U]))))))) 
                   >> 0x20U));
    this->__PVT__core__DOT__mix__DOT___r0_T_1 = ((0x80000000U 
                                                  & this->__PVT__core__DOT__sh_io_out_bits_bits[3U])
                                                  ? 
                                                 (0x1bU 
                                                  ^ 
                                                  (0xfeU 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                      >> 0x17U)))
                                                  : 
                                                 (0xfeU 
                                                  & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                     >> 0x17U)));
    this->__PVT__core__DOT__mix__DOT___r0_T_3 = ((0x800000U 
                                                  & this->__PVT__core__DOT__sh_io_out_bits_bits[3U])
                                                  ? 
                                                 (0x1bU 
                                                  ^ 
                                                  (0xfeU 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                      >> 0xfU)))
                                                  : 
                                                 (0xfeU 
                                                  & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                     >> 0xfU)));
    this->__PVT__core__DOT__mix__DOT___r1_T_4 = ((0x8000U 
                                                  & this->__PVT__core__DOT__sh_io_out_bits_bits[3U])
                                                  ? 
                                                 (0x1bU 
                                                  ^ 
                                                  (0xfeU 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                      >> 7U)))
                                                  : 
                                                 (0xfeU 
                                                  & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                     >> 7U)));
    this->__PVT__core__DOT__mix__DOT___r2_T_5 = ((0x80U 
                                                  & this->__PVT__core__DOT__sh_io_out_bits_bits[3U])
                                                  ? 
                                                 (0x1bU 
                                                  ^ 
                                                  (0xfeU 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                      << 1U)))
                                                  : 
                                                 (0xfeU 
                                                  & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                     << 1U)));
    this->__PVT__core__DOT__mix__DOT___r0_T_8 = ((0x80000000U 
                                                  & this->__PVT__core__DOT__sh_io_out_bits_bits[2U])
                                                  ? 
                                                 (0x1bU 
                                                  ^ 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                       << 9U) 
                                                      | (0x1feU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                            >> 0x17U)))))
                                                  : 
                                                 (0xfeU 
                                                  & ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                      << 9U) 
                                                     | (0x1feU 
                                                        & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                           >> 0x17U)))));
    this->__PVT__core__DOT__mix__DOT___r0_T_10 = ((0x800000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[2U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                        << 0x11U) 
                                                       | (0x1fffeU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                             >> 0xfU)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                       << 0x11U) 
                                                      | (0x1fffeU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                            >> 0xfU)))));
    this->__PVT__core__DOT__mix__DOT___r1_T_11 = ((0x8000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[2U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                        << 0x19U) 
                                                       | (0x1fffffeU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                             >> 7U)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                       << 0x19U) 
                                                      | (0x1fffffeU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                            >> 7U)))));
    this->__PVT__core__DOT__mix__DOT___r2_T_12 = ((0x80U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[2U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                       << 1U)))
                                                   : 
                                                  (0xfeU 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                      << 1U)));
    this->__PVT__core__DOT__mix__DOT___r0_T_15 = ((0x80000000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[1U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                        << 9U) 
                                                       | (0x1feU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                             >> 0x17U)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                       << 9U) 
                                                      | (0x1feU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                            >> 0x17U)))));
    this->__PVT__core__DOT__mix__DOT___r0_T_17 = ((0x800000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[1U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                        << 0x11U) 
                                                       | (0x1fffeU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                             >> 0xfU)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                       << 0x11U) 
                                                      | (0x1fffeU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                            >> 0xfU)))));
    this->__PVT__core__DOT__mix__DOT___r1_T_18 = ((0x8000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[1U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                        << 0x19U) 
                                                       | (0x1fffffeU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                             >> 7U)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                       << 0x19U) 
                                                      | (0x1fffffeU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                            >> 7U)))));
    this->__PVT__core__DOT__mix__DOT___r2_T_19 = ((0x80U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[1U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                       << 1U)))
                                                   : 
                                                  (0xfeU 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                      << 1U)));
    this->__PVT__core__DOT__mix__DOT___r0_T_22 = ((0x80000000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[0U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                        << 9U) 
                                                       | (0x1feU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                             >> 0x17U)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                       << 9U) 
                                                      | (0x1feU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                            >> 0x17U)))));
    this->__PVT__core__DOT__mix__DOT___r0_T_24 = ((0x800000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[0U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                        << 0x11U) 
                                                       | (0x1fffeU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                             >> 0xfU)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                       << 0x11U) 
                                                      | (0x1fffeU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                            >> 0xfU)))));
    this->__PVT__core__DOT__mix__DOT___r1_T_25 = ((0x8000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[0U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                        << 0x19U) 
                                                       | (0x1fffffeU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                             >> 7U)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                       << 0x19U) 
                                                      | (0x1fffffeU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                            >> 7U)))));
    this->__PVT__core__DOT__mix__DOT___r2_T_26 = ((0x80U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[0U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                       << 1U)))
                                                   : 
                                                  (0xfeU 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                      << 1U)));
    this->__PVT__core__DOT__mix__DOT__io_out_bits_bits_hi 
        = (((QData)((IData)(((0xff000000U & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_1) 
                                                << 0x18U) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_3) 
                                                   << 0x18U) 
                                                  ^ 
                                                  (0xff000000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                      << 8U)))) 
                                              ^ (0xff000000U 
                                                 & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                    << 0x10U))) 
                                             ^ (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                << 0x18U))) 
                             | ((0xff0000U & ((((0xff0000U 
                                                 & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                    >> 8U)) 
                                                ^ ((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_3) 
                                                   << 0x10U)) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_4) 
                                                   << 0x10U) 
                                                  ^ 
                                                  (0xffff0000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                      << 8U)))) 
                                              ^ (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                 << 0x10U))) 
                                | ((0xff00U & ((((0xff00U 
                                                  & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                     >> 0x10U)) 
                                                 ^ 
                                                 (0xffff00U 
                                                  & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                     >> 8U))) 
                                                ^ ((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_4) 
                                                   << 8U)) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r2_T_5) 
                                                   ^ 
                                                   this->__PVT__core__DOT__sh_io_out_bits_bits[3U]) 
                                                  << 8U))) 
                                   | (0xffU & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_1) 
                                                  ^ 
                                                  (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                   >> 0x18U)) 
                                                 ^ 
                                                 (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                  >> 0x10U)) 
                                                ^ (
                                                   this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                   >> 8U)) 
                                               ^ (IData)(this->__PVT__core__DOT__mix__DOT___r2_T_5)))))))) 
            << 0x20U) | (QData)((IData)(((0xff000000U 
                                          & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_8) 
                                                << 0x18U) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_10) 
                                                   << 0x18U) 
                                                  ^ 
                                                  (0xff000000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                      << 8U)))) 
                                              ^ (0xff000000U 
                                                 & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                    << 0x10U))) 
                                             ^ (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                << 0x18U))) 
                                         | ((0xff0000U 
                                             & (((((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                    << 0x18U) 
                                                   | (0xff0000U 
                                                      & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                         >> 8U))) 
                                                  ^ 
                                                  ((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_10) 
                                                   << 0x10U)) 
                                                 ^ 
                                                 (((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_11) 
                                                   << 0x10U) 
                                                  ^ 
                                                  (0xffff0000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                      << 8U)))) 
                                                ^ (
                                                   this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                   << 0x10U))) 
                                            | ((0xff00U 
                                                & (((((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                       << 0x10U) 
                                                      | (0xff00U 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                            >> 0x10U))) 
                                                     ^ 
                                                     ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                       << 0x18U) 
                                                      | (0xffff00U 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                            >> 8U)))) 
                                                    ^ 
                                                    ((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_11) 
                                                     << 8U)) 
                                                   ^ 
                                                   (((IData)(this->__PVT__core__DOT__mix__DOT___r2_T_12) 
                                                     ^ 
                                                     this->__PVT__core__DOT__sh_io_out_bits_bits[2U]) 
                                                    << 8U))) 
                                               | (0xffU 
                                                  & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_8) 
                                                        ^ 
                                                        ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                          << 8U) 
                                                         | (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                            >> 0x18U))) 
                                                       ^ 
                                                       ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                         << 0x10U) 
                                                        | (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                           >> 0x10U))) 
                                                      ^ 
                                                      ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                        << 0x18U) 
                                                       | (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                          >> 8U))) 
                                                     ^ (IData)(this->__PVT__core__DOT__mix__DOT___r2_T_12)))))))));
    this->__PVT__core__DOT__mix__DOT__io_out_bits_bits_lo 
        = (((QData)((IData)(((0xff000000U & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_15) 
                                                << 0x18U) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_17) 
                                                   << 0x18U) 
                                                  ^ 
                                                  (0xff000000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                      << 8U)))) 
                                              ^ (0xff000000U 
                                                 & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                    << 0x10U))) 
                                             ^ (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                << 0x18U))) 
                             | ((0xff0000U & (((((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                  << 0x18U) 
                                                 | (0xff0000U 
                                                    & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                       >> 8U))) 
                                                ^ ((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_17) 
                                                   << 0x10U)) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_18) 
                                                   << 0x10U) 
                                                  ^ 
                                                  (0xffff0000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                      << 8U)))) 
                                              ^ (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                 << 0x10U))) 
                                | ((0xff00U & (((((
                                                   this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                   << 0x10U) 
                                                  | (0xff00U 
                                                     & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                        >> 0x10U))) 
                                                 ^ 
                                                 ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                   << 0x18U) 
                                                  | (0xffff00U 
                                                     & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                        >> 8U)))) 
                                                ^ ((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_18) 
                                                   << 8U)) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r2_T_19) 
                                                   ^ 
                                                   this->__PVT__core__DOT__sh_io_out_bits_bits[1U]) 
                                                  << 8U))) 
                                   | (0xffU & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_15) 
                                                  ^ 
                                                  ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                    << 8U) 
                                                   | (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                      >> 0x18U))) 
                                                 ^ 
                                                 ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                   << 0x10U) 
                                                  | (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                     >> 0x10U))) 
                                                ^ (
                                                   (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                    << 0x18U) 
                                                   | (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                      >> 8U))) 
                                               ^ (IData)(this->__PVT__core__DOT__mix__DOT___r2_T_19)))))))) 
            << 0x20U) | (QData)((IData)(((0xff000000U 
                                          & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_22) 
                                                << 0x18U) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_24) 
                                                   << 0x18U) 
                                                  ^ 
                                                  (0xff000000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                      << 8U)))) 
                                              ^ (0xff000000U 
                                                 & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                    << 0x10U))) 
                                             ^ (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                << 0x18U))) 
                                         | ((0xff0000U 
                                             & (((((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                    << 0x18U) 
                                                   | (0xff0000U 
                                                      & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                         >> 8U))) 
                                                  ^ 
                                                  ((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_24) 
                                                   << 0x10U)) 
                                                 ^ 
                                                 (((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_25) 
                                                   << 0x10U) 
                                                  ^ 
                                                  (0xffff0000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                      << 8U)))) 
                                                ^ (
                                                   this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                   << 0x10U))) 
                                            | ((0xff00U 
                                                & (((((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                       << 0x10U) 
                                                      | (0xff00U 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                            >> 0x10U))) 
                                                     ^ 
                                                     ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                       << 0x18U) 
                                                      | (0xffff00U 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                            >> 8U)))) 
                                                    ^ 
                                                    ((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_25) 
                                                     << 8U)) 
                                                   ^ 
                                                   (((IData)(this->__PVT__core__DOT__mix__DOT___r2_T_26) 
                                                     ^ 
                                                     this->__PVT__core__DOT__sh_io_out_bits_bits[0U]) 
                                                    << 8U))) 
                                               | (0xffU 
                                                  & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_22) 
                                                        ^ 
                                                        ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                          << 8U) 
                                                         | (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                            >> 0x18U))) 
                                                       ^ 
                                                       ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                         << 0x10U) 
                                                        | (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                           >> 0x10U))) 
                                                      ^ 
                                                      ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                        << 0x18U) 
                                                       | (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                          >> 8U))) 
                                                     ^ (IData)(this->__PVT__core__DOT__mix__DOT___r2_T_26)))))))));
    this->__PVT__core__DOT__addk_io_out_bits_bits[0U] 
        = ((IData)(this->__PVT__core__DOT__mix__DOT__io_out_bits_bits_lo) 
           ^ vlTOPp->Aes128Core__DOT__ks__DOT__w_27);
    this->__PVT__core__DOT__addk_io_out_bits_bits[1U] 
        = ((IData)((this->__PVT__core__DOT__mix__DOT__io_out_bits_bits_lo 
                    >> 0x20U)) ^ vlTOPp->Aes128Core__DOT__ks__DOT__w_26);
    this->__PVT__core__DOT__addk_io_out_bits_bits[2U] 
        = ((IData)(this->__PVT__core__DOT__mix__DOT__io_out_bits_bits_hi) 
           ^ (IData)((((QData)((IData)(vlTOPp->Aes128Core__DOT__ks__DOT__w_24)) 
                       << 0x20U) | (QData)((IData)(vlTOPp->Aes128Core__DOT__ks__DOT__w_25)))));
    this->__PVT__core__DOT__addk_io_out_bits_bits[3U] 
        = ((IData)((this->__PVT__core__DOT__mix__DOT__io_out_bits_bits_hi 
                    >> 0x20U)) ^ (IData)(((((QData)((IData)(vlTOPp->Aes128Core__DOT__ks__DOT__w_24)) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlTOPp->Aes128Core__DOT__ks__DOT__w_25))) 
                                          >> 0x20U)));
}

VL_INLINE_OPT void VAes128Core_StdRoundGen::_combo__TOP__Aes128Core__DOT__r7__7(VAes128Core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VAes128Core_StdRoundGen::_combo__TOP__Aes128Core__DOT__r7__7\n"); );
    VAes128Core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
        = ((0xff000000U & __PVT__core__DOT__sub->io_out_bits_bits[0U]) 
           | ((0xff0000U & __PVT__core__DOT__sub->io_out_bits_bits[3U]) 
              | ((0xff00U & __PVT__core__DOT__sub->io_out_bits_bits[2U]) 
                 | (0xffU & __PVT__core__DOT__sub->io_out_bits_bits[1U]))));
    this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
        = ((0xff000000U & __PVT__core__DOT__sub->io_out_bits_bits[1U]) 
           | ((0xff0000U & __PVT__core__DOT__sub->io_out_bits_bits[0U]) 
              | ((0xff00U & __PVT__core__DOT__sub->io_out_bits_bits[3U]) 
                 | (0xffU & __PVT__core__DOT__sub->io_out_bits_bits[2U]))));
    this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
        = (IData)((((QData)((IData)(((0xff000000U & 
                                      __PVT__core__DOT__sub->io_out_bits_bits[3U]) 
                                     | ((0xff0000U 
                                         & __PVT__core__DOT__sub->io_out_bits_bits[2U]) 
                                        | ((0xff00U 
                                            & __PVT__core__DOT__sub->io_out_bits_bits[1U]) 
                                           | (0xffU 
                                              & __PVT__core__DOT__sub->io_out_bits_bits[0U])))))) 
                    << 0x20U) | (QData)((IData)(((0xff000000U 
                                                  & __PVT__core__DOT__sub->io_out_bits_bits[2U]) 
                                                 | ((0xff0000U 
                                                     & __PVT__core__DOT__sub->io_out_bits_bits[1U]) 
                                                    | ((0xff00U 
                                                        & __PVT__core__DOT__sub->io_out_bits_bits[0U]) 
                                                       | (0xffU 
                                                          & __PVT__core__DOT__sub->io_out_bits_bits[3U]))))))));
    this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
        = (IData)(((((QData)((IData)(((0xff000000U 
                                       & __PVT__core__DOT__sub->io_out_bits_bits[3U]) 
                                      | ((0xff0000U 
                                          & __PVT__core__DOT__sub->io_out_bits_bits[2U]) 
                                         | ((0xff00U 
                                             & __PVT__core__DOT__sub->io_out_bits_bits[1U]) 
                                            | (0xffU 
                                               & __PVT__core__DOT__sub->io_out_bits_bits[0U])))))) 
                     << 0x20U) | (QData)((IData)(((0xff000000U 
                                                   & __PVT__core__DOT__sub->io_out_bits_bits[2U]) 
                                                  | ((0xff0000U 
                                                      & __PVT__core__DOT__sub->io_out_bits_bits[1U]) 
                                                     | ((0xff00U 
                                                         & __PVT__core__DOT__sub->io_out_bits_bits[0U]) 
                                                        | (0xffU 
                                                           & __PVT__core__DOT__sub->io_out_bits_bits[3U]))))))) 
                   >> 0x20U));
    this->__PVT__core__DOT__mix__DOT___r0_T_1 = ((0x80000000U 
                                                  & this->__PVT__core__DOT__sh_io_out_bits_bits[3U])
                                                  ? 
                                                 (0x1bU 
                                                  ^ 
                                                  (0xfeU 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                      >> 0x17U)))
                                                  : 
                                                 (0xfeU 
                                                  & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                     >> 0x17U)));
    this->__PVT__core__DOT__mix__DOT___r0_T_3 = ((0x800000U 
                                                  & this->__PVT__core__DOT__sh_io_out_bits_bits[3U])
                                                  ? 
                                                 (0x1bU 
                                                  ^ 
                                                  (0xfeU 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                      >> 0xfU)))
                                                  : 
                                                 (0xfeU 
                                                  & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                     >> 0xfU)));
    this->__PVT__core__DOT__mix__DOT___r1_T_4 = ((0x8000U 
                                                  & this->__PVT__core__DOT__sh_io_out_bits_bits[3U])
                                                  ? 
                                                 (0x1bU 
                                                  ^ 
                                                  (0xfeU 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                      >> 7U)))
                                                  : 
                                                 (0xfeU 
                                                  & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                     >> 7U)));
    this->__PVT__core__DOT__mix__DOT___r2_T_5 = ((0x80U 
                                                  & this->__PVT__core__DOT__sh_io_out_bits_bits[3U])
                                                  ? 
                                                 (0x1bU 
                                                  ^ 
                                                  (0xfeU 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                      << 1U)))
                                                  : 
                                                 (0xfeU 
                                                  & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                     << 1U)));
    this->__PVT__core__DOT__mix__DOT___r0_T_8 = ((0x80000000U 
                                                  & this->__PVT__core__DOT__sh_io_out_bits_bits[2U])
                                                  ? 
                                                 (0x1bU 
                                                  ^ 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                       << 9U) 
                                                      | (0x1feU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                            >> 0x17U)))))
                                                  : 
                                                 (0xfeU 
                                                  & ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                      << 9U) 
                                                     | (0x1feU 
                                                        & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                           >> 0x17U)))));
    this->__PVT__core__DOT__mix__DOT___r0_T_10 = ((0x800000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[2U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                        << 0x11U) 
                                                       | (0x1fffeU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                             >> 0xfU)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                       << 0x11U) 
                                                      | (0x1fffeU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                            >> 0xfU)))));
    this->__PVT__core__DOT__mix__DOT___r1_T_11 = ((0x8000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[2U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                        << 0x19U) 
                                                       | (0x1fffffeU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                             >> 7U)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                       << 0x19U) 
                                                      | (0x1fffffeU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                            >> 7U)))));
    this->__PVT__core__DOT__mix__DOT___r2_T_12 = ((0x80U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[2U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                       << 1U)))
                                                   : 
                                                  (0xfeU 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                      << 1U)));
    this->__PVT__core__DOT__mix__DOT___r0_T_15 = ((0x80000000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[1U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                        << 9U) 
                                                       | (0x1feU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                             >> 0x17U)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                       << 9U) 
                                                      | (0x1feU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                            >> 0x17U)))));
    this->__PVT__core__DOT__mix__DOT___r0_T_17 = ((0x800000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[1U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                        << 0x11U) 
                                                       | (0x1fffeU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                             >> 0xfU)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                       << 0x11U) 
                                                      | (0x1fffeU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                            >> 0xfU)))));
    this->__PVT__core__DOT__mix__DOT___r1_T_18 = ((0x8000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[1U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                        << 0x19U) 
                                                       | (0x1fffffeU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                             >> 7U)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                       << 0x19U) 
                                                      | (0x1fffffeU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                            >> 7U)))));
    this->__PVT__core__DOT__mix__DOT___r2_T_19 = ((0x80U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[1U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                       << 1U)))
                                                   : 
                                                  (0xfeU 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                      << 1U)));
    this->__PVT__core__DOT__mix__DOT___r0_T_22 = ((0x80000000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[0U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                        << 9U) 
                                                       | (0x1feU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                             >> 0x17U)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                       << 9U) 
                                                      | (0x1feU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                            >> 0x17U)))));
    this->__PVT__core__DOT__mix__DOT___r0_T_24 = ((0x800000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[0U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                        << 0x11U) 
                                                       | (0x1fffeU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                             >> 0xfU)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                       << 0x11U) 
                                                      | (0x1fffeU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                            >> 0xfU)))));
    this->__PVT__core__DOT__mix__DOT___r1_T_25 = ((0x8000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[0U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                        << 0x19U) 
                                                       | (0x1fffffeU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                             >> 7U)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                       << 0x19U) 
                                                      | (0x1fffffeU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                            >> 7U)))));
    this->__PVT__core__DOT__mix__DOT___r2_T_26 = ((0x80U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[0U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                       << 1U)))
                                                   : 
                                                  (0xfeU 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                      << 1U)));
    this->__PVT__core__DOT__mix__DOT__io_out_bits_bits_hi 
        = (((QData)((IData)(((0xff000000U & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_1) 
                                                << 0x18U) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_3) 
                                                   << 0x18U) 
                                                  ^ 
                                                  (0xff000000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                      << 8U)))) 
                                              ^ (0xff000000U 
                                                 & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                    << 0x10U))) 
                                             ^ (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                << 0x18U))) 
                             | ((0xff0000U & ((((0xff0000U 
                                                 & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                    >> 8U)) 
                                                ^ ((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_3) 
                                                   << 0x10U)) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_4) 
                                                   << 0x10U) 
                                                  ^ 
                                                  (0xffff0000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                      << 8U)))) 
                                              ^ (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                 << 0x10U))) 
                                | ((0xff00U & ((((0xff00U 
                                                  & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                     >> 0x10U)) 
                                                 ^ 
                                                 (0xffff00U 
                                                  & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                     >> 8U))) 
                                                ^ ((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_4) 
                                                   << 8U)) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r2_T_5) 
                                                   ^ 
                                                   this->__PVT__core__DOT__sh_io_out_bits_bits[3U]) 
                                                  << 8U))) 
                                   | (0xffU & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_1) 
                                                  ^ 
                                                  (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                   >> 0x18U)) 
                                                 ^ 
                                                 (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                  >> 0x10U)) 
                                                ^ (
                                                   this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                   >> 8U)) 
                                               ^ (IData)(this->__PVT__core__DOT__mix__DOT___r2_T_5)))))))) 
            << 0x20U) | (QData)((IData)(((0xff000000U 
                                          & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_8) 
                                                << 0x18U) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_10) 
                                                   << 0x18U) 
                                                  ^ 
                                                  (0xff000000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                      << 8U)))) 
                                              ^ (0xff000000U 
                                                 & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                    << 0x10U))) 
                                             ^ (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                << 0x18U))) 
                                         | ((0xff0000U 
                                             & (((((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                    << 0x18U) 
                                                   | (0xff0000U 
                                                      & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                         >> 8U))) 
                                                  ^ 
                                                  ((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_10) 
                                                   << 0x10U)) 
                                                 ^ 
                                                 (((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_11) 
                                                   << 0x10U) 
                                                  ^ 
                                                  (0xffff0000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                      << 8U)))) 
                                                ^ (
                                                   this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                   << 0x10U))) 
                                            | ((0xff00U 
                                                & (((((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                       << 0x10U) 
                                                      | (0xff00U 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                            >> 0x10U))) 
                                                     ^ 
                                                     ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                       << 0x18U) 
                                                      | (0xffff00U 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                            >> 8U)))) 
                                                    ^ 
                                                    ((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_11) 
                                                     << 8U)) 
                                                   ^ 
                                                   (((IData)(this->__PVT__core__DOT__mix__DOT___r2_T_12) 
                                                     ^ 
                                                     this->__PVT__core__DOT__sh_io_out_bits_bits[2U]) 
                                                    << 8U))) 
                                               | (0xffU 
                                                  & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_8) 
                                                        ^ 
                                                        ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                          << 8U) 
                                                         | (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                            >> 0x18U))) 
                                                       ^ 
                                                       ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                         << 0x10U) 
                                                        | (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                           >> 0x10U))) 
                                                      ^ 
                                                      ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                        << 0x18U) 
                                                       | (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                          >> 8U))) 
                                                     ^ (IData)(this->__PVT__core__DOT__mix__DOT___r2_T_12)))))))));
    this->__PVT__core__DOT__mix__DOT__io_out_bits_bits_lo 
        = (((QData)((IData)(((0xff000000U & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_15) 
                                                << 0x18U) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_17) 
                                                   << 0x18U) 
                                                  ^ 
                                                  (0xff000000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                      << 8U)))) 
                                              ^ (0xff000000U 
                                                 & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                    << 0x10U))) 
                                             ^ (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                << 0x18U))) 
                             | ((0xff0000U & (((((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                  << 0x18U) 
                                                 | (0xff0000U 
                                                    & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                       >> 8U))) 
                                                ^ ((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_17) 
                                                   << 0x10U)) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_18) 
                                                   << 0x10U) 
                                                  ^ 
                                                  (0xffff0000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                      << 8U)))) 
                                              ^ (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                 << 0x10U))) 
                                | ((0xff00U & (((((
                                                   this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                   << 0x10U) 
                                                  | (0xff00U 
                                                     & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                        >> 0x10U))) 
                                                 ^ 
                                                 ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                   << 0x18U) 
                                                  | (0xffff00U 
                                                     & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                        >> 8U)))) 
                                                ^ ((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_18) 
                                                   << 8U)) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r2_T_19) 
                                                   ^ 
                                                   this->__PVT__core__DOT__sh_io_out_bits_bits[1U]) 
                                                  << 8U))) 
                                   | (0xffU & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_15) 
                                                  ^ 
                                                  ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                    << 8U) 
                                                   | (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                      >> 0x18U))) 
                                                 ^ 
                                                 ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                   << 0x10U) 
                                                  | (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                     >> 0x10U))) 
                                                ^ (
                                                   (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                    << 0x18U) 
                                                   | (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                      >> 8U))) 
                                               ^ (IData)(this->__PVT__core__DOT__mix__DOT___r2_T_19)))))))) 
            << 0x20U) | (QData)((IData)(((0xff000000U 
                                          & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_22) 
                                                << 0x18U) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_24) 
                                                   << 0x18U) 
                                                  ^ 
                                                  (0xff000000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                      << 8U)))) 
                                              ^ (0xff000000U 
                                                 & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                    << 0x10U))) 
                                             ^ (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                << 0x18U))) 
                                         | ((0xff0000U 
                                             & (((((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                    << 0x18U) 
                                                   | (0xff0000U 
                                                      & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                         >> 8U))) 
                                                  ^ 
                                                  ((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_24) 
                                                   << 0x10U)) 
                                                 ^ 
                                                 (((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_25) 
                                                   << 0x10U) 
                                                  ^ 
                                                  (0xffff0000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                      << 8U)))) 
                                                ^ (
                                                   this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                   << 0x10U))) 
                                            | ((0xff00U 
                                                & (((((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                       << 0x10U) 
                                                      | (0xff00U 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                            >> 0x10U))) 
                                                     ^ 
                                                     ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                       << 0x18U) 
                                                      | (0xffff00U 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                            >> 8U)))) 
                                                    ^ 
                                                    ((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_25) 
                                                     << 8U)) 
                                                   ^ 
                                                   (((IData)(this->__PVT__core__DOT__mix__DOT___r2_T_26) 
                                                     ^ 
                                                     this->__PVT__core__DOT__sh_io_out_bits_bits[0U]) 
                                                    << 8U))) 
                                               | (0xffU 
                                                  & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_22) 
                                                        ^ 
                                                        ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                          << 8U) 
                                                         | (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                            >> 0x18U))) 
                                                       ^ 
                                                       ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                         << 0x10U) 
                                                        | (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                           >> 0x10U))) 
                                                      ^ 
                                                      ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                        << 0x18U) 
                                                       | (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                          >> 8U))) 
                                                     ^ (IData)(this->__PVT__core__DOT__mix__DOT___r2_T_26)))))))));
    this->__PVT__core__DOT__addk_io_out_bits_bits[0U] 
        = ((IData)(this->__PVT__core__DOT__mix__DOT__io_out_bits_bits_lo) 
           ^ vlTOPp->Aes128Core__DOT__ks__DOT__w_31);
    this->__PVT__core__DOT__addk_io_out_bits_bits[1U] 
        = ((IData)((this->__PVT__core__DOT__mix__DOT__io_out_bits_bits_lo 
                    >> 0x20U)) ^ vlTOPp->Aes128Core__DOT__ks__DOT__w_30);
    this->__PVT__core__DOT__addk_io_out_bits_bits[2U] 
        = ((IData)(this->__PVT__core__DOT__mix__DOT__io_out_bits_bits_hi) 
           ^ (IData)((((QData)((IData)(vlTOPp->Aes128Core__DOT__ks__DOT__w_28)) 
                       << 0x20U) | (QData)((IData)(vlTOPp->Aes128Core__DOT__ks__DOT__w_29)))));
    this->__PVT__core__DOT__addk_io_out_bits_bits[3U] 
        = ((IData)((this->__PVT__core__DOT__mix__DOT__io_out_bits_bits_hi 
                    >> 0x20U)) ^ (IData)(((((QData)((IData)(vlTOPp->Aes128Core__DOT__ks__DOT__w_28)) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlTOPp->Aes128Core__DOT__ks__DOT__w_29))) 
                                          >> 0x20U)));
}

VL_INLINE_OPT void VAes128Core_StdRoundGen::_combo__TOP__Aes128Core__DOT__r8__8(VAes128Core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VAes128Core_StdRoundGen::_combo__TOP__Aes128Core__DOT__r8__8\n"); );
    VAes128Core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
        = ((0xff000000U & __PVT__core__DOT__sub->io_out_bits_bits[0U]) 
           | ((0xff0000U & __PVT__core__DOT__sub->io_out_bits_bits[3U]) 
              | ((0xff00U & __PVT__core__DOT__sub->io_out_bits_bits[2U]) 
                 | (0xffU & __PVT__core__DOT__sub->io_out_bits_bits[1U]))));
    this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
        = ((0xff000000U & __PVT__core__DOT__sub->io_out_bits_bits[1U]) 
           | ((0xff0000U & __PVT__core__DOT__sub->io_out_bits_bits[0U]) 
              | ((0xff00U & __PVT__core__DOT__sub->io_out_bits_bits[3U]) 
                 | (0xffU & __PVT__core__DOT__sub->io_out_bits_bits[2U]))));
    this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
        = (IData)((((QData)((IData)(((0xff000000U & 
                                      __PVT__core__DOT__sub->io_out_bits_bits[3U]) 
                                     | ((0xff0000U 
                                         & __PVT__core__DOT__sub->io_out_bits_bits[2U]) 
                                        | ((0xff00U 
                                            & __PVT__core__DOT__sub->io_out_bits_bits[1U]) 
                                           | (0xffU 
                                              & __PVT__core__DOT__sub->io_out_bits_bits[0U])))))) 
                    << 0x20U) | (QData)((IData)(((0xff000000U 
                                                  & __PVT__core__DOT__sub->io_out_bits_bits[2U]) 
                                                 | ((0xff0000U 
                                                     & __PVT__core__DOT__sub->io_out_bits_bits[1U]) 
                                                    | ((0xff00U 
                                                        & __PVT__core__DOT__sub->io_out_bits_bits[0U]) 
                                                       | (0xffU 
                                                          & __PVT__core__DOT__sub->io_out_bits_bits[3U]))))))));
    this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
        = (IData)(((((QData)((IData)(((0xff000000U 
                                       & __PVT__core__DOT__sub->io_out_bits_bits[3U]) 
                                      | ((0xff0000U 
                                          & __PVT__core__DOT__sub->io_out_bits_bits[2U]) 
                                         | ((0xff00U 
                                             & __PVT__core__DOT__sub->io_out_bits_bits[1U]) 
                                            | (0xffU 
                                               & __PVT__core__DOT__sub->io_out_bits_bits[0U])))))) 
                     << 0x20U) | (QData)((IData)(((0xff000000U 
                                                   & __PVT__core__DOT__sub->io_out_bits_bits[2U]) 
                                                  | ((0xff0000U 
                                                      & __PVT__core__DOT__sub->io_out_bits_bits[1U]) 
                                                     | ((0xff00U 
                                                         & __PVT__core__DOT__sub->io_out_bits_bits[0U]) 
                                                        | (0xffU 
                                                           & __PVT__core__DOT__sub->io_out_bits_bits[3U]))))))) 
                   >> 0x20U));
    this->__PVT__core__DOT__mix__DOT___r0_T_1 = ((0x80000000U 
                                                  & this->__PVT__core__DOT__sh_io_out_bits_bits[3U])
                                                  ? 
                                                 (0x1bU 
                                                  ^ 
                                                  (0xfeU 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                      >> 0x17U)))
                                                  : 
                                                 (0xfeU 
                                                  & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                     >> 0x17U)));
    this->__PVT__core__DOT__mix__DOT___r0_T_3 = ((0x800000U 
                                                  & this->__PVT__core__DOT__sh_io_out_bits_bits[3U])
                                                  ? 
                                                 (0x1bU 
                                                  ^ 
                                                  (0xfeU 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                      >> 0xfU)))
                                                  : 
                                                 (0xfeU 
                                                  & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                     >> 0xfU)));
    this->__PVT__core__DOT__mix__DOT___r1_T_4 = ((0x8000U 
                                                  & this->__PVT__core__DOT__sh_io_out_bits_bits[3U])
                                                  ? 
                                                 (0x1bU 
                                                  ^ 
                                                  (0xfeU 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                      >> 7U)))
                                                  : 
                                                 (0xfeU 
                                                  & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                     >> 7U)));
    this->__PVT__core__DOT__mix__DOT___r2_T_5 = ((0x80U 
                                                  & this->__PVT__core__DOT__sh_io_out_bits_bits[3U])
                                                  ? 
                                                 (0x1bU 
                                                  ^ 
                                                  (0xfeU 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                      << 1U)))
                                                  : 
                                                 (0xfeU 
                                                  & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                     << 1U)));
    this->__PVT__core__DOT__mix__DOT___r0_T_8 = ((0x80000000U 
                                                  & this->__PVT__core__DOT__sh_io_out_bits_bits[2U])
                                                  ? 
                                                 (0x1bU 
                                                  ^ 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                       << 9U) 
                                                      | (0x1feU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                            >> 0x17U)))))
                                                  : 
                                                 (0xfeU 
                                                  & ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                      << 9U) 
                                                     | (0x1feU 
                                                        & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                           >> 0x17U)))));
    this->__PVT__core__DOT__mix__DOT___r0_T_10 = ((0x800000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[2U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                        << 0x11U) 
                                                       | (0x1fffeU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                             >> 0xfU)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                       << 0x11U) 
                                                      | (0x1fffeU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                            >> 0xfU)))));
    this->__PVT__core__DOT__mix__DOT___r1_T_11 = ((0x8000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[2U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                        << 0x19U) 
                                                       | (0x1fffffeU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                             >> 7U)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                       << 0x19U) 
                                                      | (0x1fffffeU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                            >> 7U)))));
    this->__PVT__core__DOT__mix__DOT___r2_T_12 = ((0x80U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[2U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                       << 1U)))
                                                   : 
                                                  (0xfeU 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                      << 1U)));
    this->__PVT__core__DOT__mix__DOT___r0_T_15 = ((0x80000000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[1U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                        << 9U) 
                                                       | (0x1feU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                             >> 0x17U)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                       << 9U) 
                                                      | (0x1feU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                            >> 0x17U)))));
    this->__PVT__core__DOT__mix__DOT___r0_T_17 = ((0x800000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[1U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                        << 0x11U) 
                                                       | (0x1fffeU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                             >> 0xfU)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                       << 0x11U) 
                                                      | (0x1fffeU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                            >> 0xfU)))));
    this->__PVT__core__DOT__mix__DOT___r1_T_18 = ((0x8000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[1U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                        << 0x19U) 
                                                       | (0x1fffffeU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                             >> 7U)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                       << 0x19U) 
                                                      | (0x1fffffeU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                            >> 7U)))));
    this->__PVT__core__DOT__mix__DOT___r2_T_19 = ((0x80U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[1U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                       << 1U)))
                                                   : 
                                                  (0xfeU 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                      << 1U)));
    this->__PVT__core__DOT__mix__DOT___r0_T_22 = ((0x80000000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[0U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                        << 9U) 
                                                       | (0x1feU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                             >> 0x17U)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                       << 9U) 
                                                      | (0x1feU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                            >> 0x17U)))));
    this->__PVT__core__DOT__mix__DOT___r0_T_24 = ((0x800000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[0U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                        << 0x11U) 
                                                       | (0x1fffeU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                             >> 0xfU)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                       << 0x11U) 
                                                      | (0x1fffeU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                            >> 0xfU)))));
    this->__PVT__core__DOT__mix__DOT___r1_T_25 = ((0x8000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[0U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                        << 0x19U) 
                                                       | (0x1fffffeU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                             >> 7U)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                       << 0x19U) 
                                                      | (0x1fffffeU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                            >> 7U)))));
    this->__PVT__core__DOT__mix__DOT___r2_T_26 = ((0x80U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[0U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                       << 1U)))
                                                   : 
                                                  (0xfeU 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                      << 1U)));
    this->__PVT__core__DOT__mix__DOT__io_out_bits_bits_hi 
        = (((QData)((IData)(((0xff000000U & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_1) 
                                                << 0x18U) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_3) 
                                                   << 0x18U) 
                                                  ^ 
                                                  (0xff000000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                      << 8U)))) 
                                              ^ (0xff000000U 
                                                 & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                    << 0x10U))) 
                                             ^ (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                << 0x18U))) 
                             | ((0xff0000U & ((((0xff0000U 
                                                 & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                    >> 8U)) 
                                                ^ ((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_3) 
                                                   << 0x10U)) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_4) 
                                                   << 0x10U) 
                                                  ^ 
                                                  (0xffff0000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                      << 8U)))) 
                                              ^ (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                 << 0x10U))) 
                                | ((0xff00U & ((((0xff00U 
                                                  & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                     >> 0x10U)) 
                                                 ^ 
                                                 (0xffff00U 
                                                  & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                     >> 8U))) 
                                                ^ ((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_4) 
                                                   << 8U)) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r2_T_5) 
                                                   ^ 
                                                   this->__PVT__core__DOT__sh_io_out_bits_bits[3U]) 
                                                  << 8U))) 
                                   | (0xffU & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_1) 
                                                  ^ 
                                                  (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                   >> 0x18U)) 
                                                 ^ 
                                                 (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                  >> 0x10U)) 
                                                ^ (
                                                   this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                   >> 8U)) 
                                               ^ (IData)(this->__PVT__core__DOT__mix__DOT___r2_T_5)))))))) 
            << 0x20U) | (QData)((IData)(((0xff000000U 
                                          & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_8) 
                                                << 0x18U) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_10) 
                                                   << 0x18U) 
                                                  ^ 
                                                  (0xff000000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                      << 8U)))) 
                                              ^ (0xff000000U 
                                                 & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                    << 0x10U))) 
                                             ^ (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                << 0x18U))) 
                                         | ((0xff0000U 
                                             & (((((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                    << 0x18U) 
                                                   | (0xff0000U 
                                                      & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                         >> 8U))) 
                                                  ^ 
                                                  ((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_10) 
                                                   << 0x10U)) 
                                                 ^ 
                                                 (((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_11) 
                                                   << 0x10U) 
                                                  ^ 
                                                  (0xffff0000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                      << 8U)))) 
                                                ^ (
                                                   this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                   << 0x10U))) 
                                            | ((0xff00U 
                                                & (((((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                       << 0x10U) 
                                                      | (0xff00U 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                            >> 0x10U))) 
                                                     ^ 
                                                     ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                       << 0x18U) 
                                                      | (0xffff00U 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                            >> 8U)))) 
                                                    ^ 
                                                    ((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_11) 
                                                     << 8U)) 
                                                   ^ 
                                                   (((IData)(this->__PVT__core__DOT__mix__DOT___r2_T_12) 
                                                     ^ 
                                                     this->__PVT__core__DOT__sh_io_out_bits_bits[2U]) 
                                                    << 8U))) 
                                               | (0xffU 
                                                  & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_8) 
                                                        ^ 
                                                        ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                          << 8U) 
                                                         | (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                            >> 0x18U))) 
                                                       ^ 
                                                       ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                         << 0x10U) 
                                                        | (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                           >> 0x10U))) 
                                                      ^ 
                                                      ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                        << 0x18U) 
                                                       | (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                          >> 8U))) 
                                                     ^ (IData)(this->__PVT__core__DOT__mix__DOT___r2_T_12)))))))));
    this->__PVT__core__DOT__mix__DOT__io_out_bits_bits_lo 
        = (((QData)((IData)(((0xff000000U & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_15) 
                                                << 0x18U) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_17) 
                                                   << 0x18U) 
                                                  ^ 
                                                  (0xff000000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                      << 8U)))) 
                                              ^ (0xff000000U 
                                                 & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                    << 0x10U))) 
                                             ^ (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                << 0x18U))) 
                             | ((0xff0000U & (((((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                  << 0x18U) 
                                                 | (0xff0000U 
                                                    & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                       >> 8U))) 
                                                ^ ((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_17) 
                                                   << 0x10U)) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_18) 
                                                   << 0x10U) 
                                                  ^ 
                                                  (0xffff0000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                      << 8U)))) 
                                              ^ (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                 << 0x10U))) 
                                | ((0xff00U & (((((
                                                   this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                   << 0x10U) 
                                                  | (0xff00U 
                                                     & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                        >> 0x10U))) 
                                                 ^ 
                                                 ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                   << 0x18U) 
                                                  | (0xffff00U 
                                                     & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                        >> 8U)))) 
                                                ^ ((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_18) 
                                                   << 8U)) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r2_T_19) 
                                                   ^ 
                                                   this->__PVT__core__DOT__sh_io_out_bits_bits[1U]) 
                                                  << 8U))) 
                                   | (0xffU & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_15) 
                                                  ^ 
                                                  ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                    << 8U) 
                                                   | (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                      >> 0x18U))) 
                                                 ^ 
                                                 ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                   << 0x10U) 
                                                  | (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                     >> 0x10U))) 
                                                ^ (
                                                   (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                    << 0x18U) 
                                                   | (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                      >> 8U))) 
                                               ^ (IData)(this->__PVT__core__DOT__mix__DOT___r2_T_19)))))))) 
            << 0x20U) | (QData)((IData)(((0xff000000U 
                                          & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_22) 
                                                << 0x18U) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_24) 
                                                   << 0x18U) 
                                                  ^ 
                                                  (0xff000000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                      << 8U)))) 
                                              ^ (0xff000000U 
                                                 & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                    << 0x10U))) 
                                             ^ (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                << 0x18U))) 
                                         | ((0xff0000U 
                                             & (((((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                    << 0x18U) 
                                                   | (0xff0000U 
                                                      & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                         >> 8U))) 
                                                  ^ 
                                                  ((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_24) 
                                                   << 0x10U)) 
                                                 ^ 
                                                 (((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_25) 
                                                   << 0x10U) 
                                                  ^ 
                                                  (0xffff0000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                      << 8U)))) 
                                                ^ (
                                                   this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                   << 0x10U))) 
                                            | ((0xff00U 
                                                & (((((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                       << 0x10U) 
                                                      | (0xff00U 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                            >> 0x10U))) 
                                                     ^ 
                                                     ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                       << 0x18U) 
                                                      | (0xffff00U 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                            >> 8U)))) 
                                                    ^ 
                                                    ((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_25) 
                                                     << 8U)) 
                                                   ^ 
                                                   (((IData)(this->__PVT__core__DOT__mix__DOT___r2_T_26) 
                                                     ^ 
                                                     this->__PVT__core__DOT__sh_io_out_bits_bits[0U]) 
                                                    << 8U))) 
                                               | (0xffU 
                                                  & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_22) 
                                                        ^ 
                                                        ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                          << 8U) 
                                                         | (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                            >> 0x18U))) 
                                                       ^ 
                                                       ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                         << 0x10U) 
                                                        | (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                           >> 0x10U))) 
                                                      ^ 
                                                      ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                        << 0x18U) 
                                                       | (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                          >> 8U))) 
                                                     ^ (IData)(this->__PVT__core__DOT__mix__DOT___r2_T_26)))))))));
    this->__PVT__core__DOT__addk_io_out_bits_bits[0U] 
        = ((IData)(this->__PVT__core__DOT__mix__DOT__io_out_bits_bits_lo) 
           ^ vlTOPp->Aes128Core__DOT__ks__DOT__w_35);
    this->__PVT__core__DOT__addk_io_out_bits_bits[1U] 
        = ((IData)((this->__PVT__core__DOT__mix__DOT__io_out_bits_bits_lo 
                    >> 0x20U)) ^ vlTOPp->Aes128Core__DOT__ks__DOT__w_34);
    this->__PVT__core__DOT__addk_io_out_bits_bits[2U] 
        = ((IData)(this->__PVT__core__DOT__mix__DOT__io_out_bits_bits_hi) 
           ^ (IData)((((QData)((IData)(vlTOPp->Aes128Core__DOT__ks__DOT__w_32)) 
                       << 0x20U) | (QData)((IData)(vlTOPp->Aes128Core__DOT__ks__DOT__w_33)))));
    this->__PVT__core__DOT__addk_io_out_bits_bits[3U] 
        = ((IData)((this->__PVT__core__DOT__mix__DOT__io_out_bits_bits_hi 
                    >> 0x20U)) ^ (IData)(((((QData)((IData)(vlTOPp->Aes128Core__DOT__ks__DOT__w_32)) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlTOPp->Aes128Core__DOT__ks__DOT__w_33))) 
                                          >> 0x20U)));
}

VL_INLINE_OPT void VAes128Core_StdRoundGen::_combo__TOP__Aes128Core__DOT__r9__9(VAes128Core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VAes128Core_StdRoundGen::_combo__TOP__Aes128Core__DOT__r9__9\n"); );
    VAes128Core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
        = ((0xff000000U & __PVT__core__DOT__sub->io_out_bits_bits[0U]) 
           | ((0xff0000U & __PVT__core__DOT__sub->io_out_bits_bits[3U]) 
              | ((0xff00U & __PVT__core__DOT__sub->io_out_bits_bits[2U]) 
                 | (0xffU & __PVT__core__DOT__sub->io_out_bits_bits[1U]))));
    this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
        = ((0xff000000U & __PVT__core__DOT__sub->io_out_bits_bits[1U]) 
           | ((0xff0000U & __PVT__core__DOT__sub->io_out_bits_bits[0U]) 
              | ((0xff00U & __PVT__core__DOT__sub->io_out_bits_bits[3U]) 
                 | (0xffU & __PVT__core__DOT__sub->io_out_bits_bits[2U]))));
    this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
        = (IData)((((QData)((IData)(((0xff000000U & 
                                      __PVT__core__DOT__sub->io_out_bits_bits[3U]) 
                                     | ((0xff0000U 
                                         & __PVT__core__DOT__sub->io_out_bits_bits[2U]) 
                                        | ((0xff00U 
                                            & __PVT__core__DOT__sub->io_out_bits_bits[1U]) 
                                           | (0xffU 
                                              & __PVT__core__DOT__sub->io_out_bits_bits[0U])))))) 
                    << 0x20U) | (QData)((IData)(((0xff000000U 
                                                  & __PVT__core__DOT__sub->io_out_bits_bits[2U]) 
                                                 | ((0xff0000U 
                                                     & __PVT__core__DOT__sub->io_out_bits_bits[1U]) 
                                                    | ((0xff00U 
                                                        & __PVT__core__DOT__sub->io_out_bits_bits[0U]) 
                                                       | (0xffU 
                                                          & __PVT__core__DOT__sub->io_out_bits_bits[3U]))))))));
    this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
        = (IData)(((((QData)((IData)(((0xff000000U 
                                       & __PVT__core__DOT__sub->io_out_bits_bits[3U]) 
                                      | ((0xff0000U 
                                          & __PVT__core__DOT__sub->io_out_bits_bits[2U]) 
                                         | ((0xff00U 
                                             & __PVT__core__DOT__sub->io_out_bits_bits[1U]) 
                                            | (0xffU 
                                               & __PVT__core__DOT__sub->io_out_bits_bits[0U])))))) 
                     << 0x20U) | (QData)((IData)(((0xff000000U 
                                                   & __PVT__core__DOT__sub->io_out_bits_bits[2U]) 
                                                  | ((0xff0000U 
                                                      & __PVT__core__DOT__sub->io_out_bits_bits[1U]) 
                                                     | ((0xff00U 
                                                         & __PVT__core__DOT__sub->io_out_bits_bits[0U]) 
                                                        | (0xffU 
                                                           & __PVT__core__DOT__sub->io_out_bits_bits[3U]))))))) 
                   >> 0x20U));
    this->__PVT__core__DOT__mix__DOT___r0_T_1 = ((0x80000000U 
                                                  & this->__PVT__core__DOT__sh_io_out_bits_bits[3U])
                                                  ? 
                                                 (0x1bU 
                                                  ^ 
                                                  (0xfeU 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                      >> 0x17U)))
                                                  : 
                                                 (0xfeU 
                                                  & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                     >> 0x17U)));
    this->__PVT__core__DOT__mix__DOT___r0_T_3 = ((0x800000U 
                                                  & this->__PVT__core__DOT__sh_io_out_bits_bits[3U])
                                                  ? 
                                                 (0x1bU 
                                                  ^ 
                                                  (0xfeU 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                      >> 0xfU)))
                                                  : 
                                                 (0xfeU 
                                                  & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                     >> 0xfU)));
    this->__PVT__core__DOT__mix__DOT___r1_T_4 = ((0x8000U 
                                                  & this->__PVT__core__DOT__sh_io_out_bits_bits[3U])
                                                  ? 
                                                 (0x1bU 
                                                  ^ 
                                                  (0xfeU 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                      >> 7U)))
                                                  : 
                                                 (0xfeU 
                                                  & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                     >> 7U)));
    this->__PVT__core__DOT__mix__DOT___r2_T_5 = ((0x80U 
                                                  & this->__PVT__core__DOT__sh_io_out_bits_bits[3U])
                                                  ? 
                                                 (0x1bU 
                                                  ^ 
                                                  (0xfeU 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                      << 1U)))
                                                  : 
                                                 (0xfeU 
                                                  & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                     << 1U)));
    this->__PVT__core__DOT__mix__DOT___r0_T_8 = ((0x80000000U 
                                                  & this->__PVT__core__DOT__sh_io_out_bits_bits[2U])
                                                  ? 
                                                 (0x1bU 
                                                  ^ 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                       << 9U) 
                                                      | (0x1feU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                            >> 0x17U)))))
                                                  : 
                                                 (0xfeU 
                                                  & ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                      << 9U) 
                                                     | (0x1feU 
                                                        & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                           >> 0x17U)))));
    this->__PVT__core__DOT__mix__DOT___r0_T_10 = ((0x800000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[2U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                        << 0x11U) 
                                                       | (0x1fffeU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                             >> 0xfU)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                       << 0x11U) 
                                                      | (0x1fffeU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                            >> 0xfU)))));
    this->__PVT__core__DOT__mix__DOT___r1_T_11 = ((0x8000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[2U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                        << 0x19U) 
                                                       | (0x1fffffeU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                             >> 7U)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                       << 0x19U) 
                                                      | (0x1fffffeU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                            >> 7U)))));
    this->__PVT__core__DOT__mix__DOT___r2_T_12 = ((0x80U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[2U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                       << 1U)))
                                                   : 
                                                  (0xfeU 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                      << 1U)));
    this->__PVT__core__DOT__mix__DOT___r0_T_15 = ((0x80000000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[1U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                        << 9U) 
                                                       | (0x1feU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                             >> 0x17U)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                       << 9U) 
                                                      | (0x1feU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                            >> 0x17U)))));
    this->__PVT__core__DOT__mix__DOT___r0_T_17 = ((0x800000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[1U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                        << 0x11U) 
                                                       | (0x1fffeU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                             >> 0xfU)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                       << 0x11U) 
                                                      | (0x1fffeU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                            >> 0xfU)))));
    this->__PVT__core__DOT__mix__DOT___r1_T_18 = ((0x8000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[1U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                        << 0x19U) 
                                                       | (0x1fffffeU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                             >> 7U)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                       << 0x19U) 
                                                      | (0x1fffffeU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                            >> 7U)))));
    this->__PVT__core__DOT__mix__DOT___r2_T_19 = ((0x80U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[1U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                       << 1U)))
                                                   : 
                                                  (0xfeU 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                      << 1U)));
    this->__PVT__core__DOT__mix__DOT___r0_T_22 = ((0x80000000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[0U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                        << 9U) 
                                                       | (0x1feU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                             >> 0x17U)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                       << 9U) 
                                                      | (0x1feU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                            >> 0x17U)))));
    this->__PVT__core__DOT__mix__DOT___r0_T_24 = ((0x800000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[0U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                        << 0x11U) 
                                                       | (0x1fffeU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                             >> 0xfU)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                       << 0x11U) 
                                                      | (0x1fffeU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                            >> 0xfU)))));
    this->__PVT__core__DOT__mix__DOT___r1_T_25 = ((0x8000U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[0U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                        << 0x19U) 
                                                       | (0x1fffffeU 
                                                          & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                             >> 7U)))))
                                                   : 
                                                  (0xfeU 
                                                   & ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                       << 0x19U) 
                                                      | (0x1fffffeU 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                            >> 7U)))));
    this->__PVT__core__DOT__mix__DOT___r2_T_26 = ((0x80U 
                                                   & this->__PVT__core__DOT__sh_io_out_bits_bits[0U])
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   (0xfeU 
                                                    & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                       << 1U)))
                                                   : 
                                                  (0xfeU 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                      << 1U)));
    this->__PVT__core__DOT__mix__DOT__io_out_bits_bits_hi 
        = (((QData)((IData)(((0xff000000U & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_1) 
                                                << 0x18U) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_3) 
                                                   << 0x18U) 
                                                  ^ 
                                                  (0xff000000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                      << 8U)))) 
                                              ^ (0xff000000U 
                                                 & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                    << 0x10U))) 
                                             ^ (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                << 0x18U))) 
                             | ((0xff0000U & ((((0xff0000U 
                                                 & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                    >> 8U)) 
                                                ^ ((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_3) 
                                                   << 0x10U)) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_4) 
                                                   << 0x10U) 
                                                  ^ 
                                                  (0xffff0000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                      << 8U)))) 
                                              ^ (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                 << 0x10U))) 
                                | ((0xff00U & ((((0xff00U 
                                                  & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                     >> 0x10U)) 
                                                 ^ 
                                                 (0xffff00U 
                                                  & (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                     >> 8U))) 
                                                ^ ((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_4) 
                                                   << 8U)) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r2_T_5) 
                                                   ^ 
                                                   this->__PVT__core__DOT__sh_io_out_bits_bits[3U]) 
                                                  << 8U))) 
                                   | (0xffU & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_1) 
                                                  ^ 
                                                  (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                   >> 0x18U)) 
                                                 ^ 
                                                 (this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                  >> 0x10U)) 
                                                ^ (
                                                   this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                   >> 8U)) 
                                               ^ (IData)(this->__PVT__core__DOT__mix__DOT___r2_T_5)))))))) 
            << 0x20U) | (QData)((IData)(((0xff000000U 
                                          & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_8) 
                                                << 0x18U) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_10) 
                                                   << 0x18U) 
                                                  ^ 
                                                  (0xff000000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                      << 8U)))) 
                                              ^ (0xff000000U 
                                                 & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                    << 0x10U))) 
                                             ^ (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                << 0x18U))) 
                                         | ((0xff0000U 
                                             & (((((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                    << 0x18U) 
                                                   | (0xff0000U 
                                                      & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                         >> 8U))) 
                                                  ^ 
                                                  ((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_10) 
                                                   << 0x10U)) 
                                                 ^ 
                                                 (((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_11) 
                                                   << 0x10U) 
                                                  ^ 
                                                  (0xffff0000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                      << 8U)))) 
                                                ^ (
                                                   this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                   << 0x10U))) 
                                            | ((0xff00U 
                                                & (((((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                       << 0x10U) 
                                                      | (0xff00U 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                            >> 0x10U))) 
                                                     ^ 
                                                     ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                       << 0x18U) 
                                                      | (0xffff00U 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                            >> 8U)))) 
                                                    ^ 
                                                    ((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_11) 
                                                     << 8U)) 
                                                   ^ 
                                                   (((IData)(this->__PVT__core__DOT__mix__DOT___r2_T_12) 
                                                     ^ 
                                                     this->__PVT__core__DOT__sh_io_out_bits_bits[2U]) 
                                                    << 8U))) 
                                               | (0xffU 
                                                  & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_8) 
                                                        ^ 
                                                        ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                          << 8U) 
                                                         | (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                            >> 0x18U))) 
                                                       ^ 
                                                       ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                         << 0x10U) 
                                                        | (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                           >> 0x10U))) 
                                                      ^ 
                                                      ((this->__PVT__core__DOT__sh_io_out_bits_bits[3U] 
                                                        << 0x18U) 
                                                       | (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                          >> 8U))) 
                                                     ^ (IData)(this->__PVT__core__DOT__mix__DOT___r2_T_12)))))))));
    this->__PVT__core__DOT__mix__DOT__io_out_bits_bits_lo 
        = (((QData)((IData)(((0xff000000U & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_15) 
                                                << 0x18U) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_17) 
                                                   << 0x18U) 
                                                  ^ 
                                                  (0xff000000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                      << 8U)))) 
                                              ^ (0xff000000U 
                                                 & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                    << 0x10U))) 
                                             ^ (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                << 0x18U))) 
                             | ((0xff0000U & (((((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                  << 0x18U) 
                                                 | (0xff0000U 
                                                    & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                       >> 8U))) 
                                                ^ ((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_17) 
                                                   << 0x10U)) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_18) 
                                                   << 0x10U) 
                                                  ^ 
                                                  (0xffff0000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                      << 8U)))) 
                                              ^ (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                 << 0x10U))) 
                                | ((0xff00U & (((((
                                                   this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                   << 0x10U) 
                                                  | (0xff00U 
                                                     & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                        >> 0x10U))) 
                                                 ^ 
                                                 ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                   << 0x18U) 
                                                  | (0xffff00U 
                                                     & (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                        >> 8U)))) 
                                                ^ ((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_18) 
                                                   << 8U)) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r2_T_19) 
                                                   ^ 
                                                   this->__PVT__core__DOT__sh_io_out_bits_bits[1U]) 
                                                  << 8U))) 
                                   | (0xffU & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_15) 
                                                  ^ 
                                                  ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                    << 8U) 
                                                   | (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                      >> 0x18U))) 
                                                 ^ 
                                                 ((this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                   << 0x10U) 
                                                  | (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                     >> 0x10U))) 
                                                ^ (
                                                   (this->__PVT__core__DOT__sh_io_out_bits_bits[2U] 
                                                    << 0x18U) 
                                                   | (this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                      >> 8U))) 
                                               ^ (IData)(this->__PVT__core__DOT__mix__DOT___r2_T_19)))))))) 
            << 0x20U) | (QData)((IData)(((0xff000000U 
                                          & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_22) 
                                                << 0x18U) 
                                               ^ (((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_24) 
                                                   << 0x18U) 
                                                  ^ 
                                                  (0xff000000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                      << 8U)))) 
                                              ^ (0xff000000U 
                                                 & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                    << 0x10U))) 
                                             ^ (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                << 0x18U))) 
                                         | ((0xff0000U 
                                             & (((((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                    << 0x18U) 
                                                   | (0xff0000U 
                                                      & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                         >> 8U))) 
                                                  ^ 
                                                  ((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_24) 
                                                   << 0x10U)) 
                                                 ^ 
                                                 (((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_25) 
                                                   << 0x10U) 
                                                  ^ 
                                                  (0xffff0000U 
                                                   & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                      << 8U)))) 
                                                ^ (
                                                   this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                   << 0x10U))) 
                                            | ((0xff00U 
                                                & (((((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                       << 0x10U) 
                                                      | (0xff00U 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                            >> 0x10U))) 
                                                     ^ 
                                                     ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                       << 0x18U) 
                                                      | (0xffff00U 
                                                         & (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                            >> 8U)))) 
                                                    ^ 
                                                    ((IData)(this->__PVT__core__DOT__mix__DOT___r1_T_25) 
                                                     << 8U)) 
                                                   ^ 
                                                   (((IData)(this->__PVT__core__DOT__mix__DOT___r2_T_26) 
                                                     ^ 
                                                     this->__PVT__core__DOT__sh_io_out_bits_bits[0U]) 
                                                    << 8U))) 
                                               | (0xffU 
                                                  & (((((IData)(this->__PVT__core__DOT__mix__DOT___r0_T_22) 
                                                        ^ 
                                                        ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                          << 8U) 
                                                         | (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                            >> 0x18U))) 
                                                       ^ 
                                                       ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                         << 0x10U) 
                                                        | (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                           >> 0x10U))) 
                                                      ^ 
                                                      ((this->__PVT__core__DOT__sh_io_out_bits_bits[1U] 
                                                        << 0x18U) 
                                                       | (this->__PVT__core__DOT__sh_io_out_bits_bits[0U] 
                                                          >> 8U))) 
                                                     ^ (IData)(this->__PVT__core__DOT__mix__DOT___r2_T_26)))))))));
    this->__PVT__core__DOT__addk_io_out_bits_bits[0U] 
        = ((IData)(this->__PVT__core__DOT__mix__DOT__io_out_bits_bits_lo) 
           ^ vlTOPp->Aes128Core__DOT__ks__DOT__w_39);
    this->__PVT__core__DOT__addk_io_out_bits_bits[1U] 
        = ((IData)((this->__PVT__core__DOT__mix__DOT__io_out_bits_bits_lo 
                    >> 0x20U)) ^ vlTOPp->Aes128Core__DOT__ks__DOT__w_38);
    this->__PVT__core__DOT__addk_io_out_bits_bits[2U] 
        = ((IData)(this->__PVT__core__DOT__mix__DOT__io_out_bits_bits_hi) 
           ^ (IData)((((QData)((IData)(vlTOPp->Aes128Core__DOT__ks__DOT__w_36)) 
                       << 0x20U) | (QData)((IData)(vlTOPp->Aes128Core__DOT__ks__DOT__w_37)))));
    this->__PVT__core__DOT__addk_io_out_bits_bits[3U] 
        = ((IData)((this->__PVT__core__DOT__mix__DOT__io_out_bits_bits_hi 
                    >> 0x20U)) ^ (IData)(((((QData)((IData)(vlTOPp->Aes128Core__DOT__ks__DOT__w_36)) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlTOPp->Aes128Core__DOT__ks__DOT__w_37))) 
                                          >> 0x20U)));
}
