// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAes128Core.h for the primary calling header

#include "VAes128Core_SubBytes.h"
#include "VAes128Core__Syms.h"

VL_INLINE_OPT void VAes128Core_SubBytes::_combo__TOP__Aes128Core__DOT__r8__core__DOT__sub__16(VAes128Core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VAes128Core_SubBytes::_combo__TOP__Aes128Core__DOT__r8__core__DOT__sub__16\n"); );
    VAes128Core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT___GEN_2972 = ((0x9cU == (0xffU & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                               ? 0xdeU : ((0x9bU == 
                                           (0xffU & 
                                            vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                           ? 0x14U : 
                                          ((0x9aU == 
                                            (0xffU 
                                             & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                            ? 0xb8U
                                            : ((0x99U 
                                                == 
                                                (0xffU 
                                                 & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                ? 0xeeU
                                                : (
                                                   (0x98U 
                                                    == 
                                                    (0xffU 
                                                     & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                    ? 0x46U
                                                    : 
                                                   ((0x97U 
                                                     == 
                                                     (0xffU 
                                                      & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                     ? 0x88U
                                                     : 
                                                    ((0x96U 
                                                      == 
                                                      (0xffU 
                                                       & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                      ? 0x90U
                                                      : 
                                                     ((0x95U 
                                                       == 
                                                       (0xffU 
                                                        & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                       ? 0x2aU
                                                       : 
                                                      ((0x94U 
                                                        == 
                                                        (0xffU 
                                                         & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                        ? 0x22U
                                                        : 
                                                       ((0x93U 
                                                         == 
                                                         (0xffU 
                                                          & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                         ? 0xdcU
                                                         : 
                                                        ((0x92U 
                                                          == 
                                                          (0xffU 
                                                           & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                          ? 0x4fU
                                                          : 
                                                         ((0x91U 
                                                           == 
                                                           (0xffU 
                                                            & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                           ? 0x81U
                                                           : 
                                                          ((0x90U 
                                                            == 
                                                            (0xffU 
                                                             & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                            ? 0x60U
                                                            : (IData)(this->__PVT___GEN_2959))))))))))))));
    this->__PVT___GEN_3228 = ((0x9cU == (0xffU & ((
                                                   vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                     >> 0x18U))))
                               ? 0xdeU : ((0x9bU == 
                                           (0xffU & 
                                            ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                              << 8U) 
                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                >> 0x18U))))
                                           ? 0x14U : 
                                          ((0x9aU == 
                                            (0xffU 
                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                   >> 0x18U))))
                                            ? 0xb8U
                                            : ((0x99U 
                                                == 
                                                (0xffU 
                                                 & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                     << 8U) 
                                                    | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                       >> 0x18U))))
                                                ? 0xeeU
                                                : (
                                                   (0x98U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                         << 8U) 
                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                           >> 0x18U))))
                                                    ? 0x46U
                                                    : 
                                                   ((0x97U 
                                                     == 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                          << 8U) 
                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                            >> 0x18U))))
                                                     ? 0x88U
                                                     : 
                                                    ((0x96U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                           << 8U) 
                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                             >> 0x18U))))
                                                      ? 0x90U
                                                      : 
                                                     ((0x95U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                            << 8U) 
                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                              >> 0x18U))))
                                                       ? 0x2aU
                                                       : 
                                                      ((0x94U 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                             << 8U) 
                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                               >> 0x18U))))
                                                        ? 0x22U
                                                        : 
                                                       ((0x93U 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                              << 8U) 
                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                >> 0x18U))))
                                                         ? 0xdcU
                                                         : 
                                                        ((0x92U 
                                                          == 
                                                          (0xffU 
                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                               << 8U) 
                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                 >> 0x18U))))
                                                          ? 0x4fU
                                                          : 
                                                         ((0x91U 
                                                           == 
                                                           (0xffU 
                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                << 8U) 
                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                  >> 0x18U))))
                                                           ? 0x81U
                                                           : 
                                                          ((0x90U 
                                                            == 
                                                            (0xffU 
                                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                 << 8U) 
                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                   >> 0x18U))))
                                                            ? 0x60U
                                                            : (IData)(this->__PVT___GEN_3215))))))))))))));
    this->__PVT___GEN_3484 = ((0x9cU == (0xffU & ((
                                                   vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                   << 0x10U) 
                                                  | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                     >> 0x10U))))
                               ? 0xdeU : ((0x9bU == 
                                           (0xffU & 
                                            ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                              << 0x10U) 
                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                >> 0x10U))))
                                           ? 0x14U : 
                                          ((0x9aU == 
                                            (0xffU 
                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                   >> 0x10U))))
                                            ? 0xb8U
                                            : ((0x99U 
                                                == 
                                                (0xffU 
                                                 & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                     << 0x10U) 
                                                    | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                       >> 0x10U))))
                                                ? 0xeeU
                                                : (
                                                   (0x98U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                         << 0x10U) 
                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                           >> 0x10U))))
                                                    ? 0x46U
                                                    : 
                                                   ((0x97U 
                                                     == 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                          << 0x10U) 
                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                            >> 0x10U))))
                                                     ? 0x88U
                                                     : 
                                                    ((0x96U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                           << 0x10U) 
                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                             >> 0x10U))))
                                                      ? 0x90U
                                                      : 
                                                     ((0x95U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                            << 0x10U) 
                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                              >> 0x10U))))
                                                       ? 0x2aU
                                                       : 
                                                      ((0x94U 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                             << 0x10U) 
                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                               >> 0x10U))))
                                                        ? 0x22U
                                                        : 
                                                       ((0x93U 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                              << 0x10U) 
                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                >> 0x10U))))
                                                         ? 0xdcU
                                                         : 
                                                        ((0x92U 
                                                          == 
                                                          (0xffU 
                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                               << 0x10U) 
                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                 >> 0x10U))))
                                                          ? 0x4fU
                                                          : 
                                                         ((0x91U 
                                                           == 
                                                           (0xffU 
                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                << 0x10U) 
                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                  >> 0x10U))))
                                                           ? 0x81U
                                                           : 
                                                          ((0x90U 
                                                            == 
                                                            (0xffU 
                                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                 << 0x10U) 
                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                   >> 0x10U))))
                                                            ? 0x60U
                                                            : (IData)(this->__PVT___GEN_3471))))))))))))));
    this->__PVT___GEN_3740 = ((0x9cU == (0xffU & ((
                                                   vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                   << 0x18U) 
                                                  | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                     >> 8U))))
                               ? 0xdeU : ((0x9bU == 
                                           (0xffU & 
                                            ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                              << 0x18U) 
                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                >> 8U))))
                                           ? 0x14U : 
                                          ((0x9aU == 
                                            (0xffU 
                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                 << 0x18U) 
                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                   >> 8U))))
                                            ? 0xb8U
                                            : ((0x99U 
                                                == 
                                                (0xffU 
                                                 & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                     << 0x18U) 
                                                    | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                       >> 8U))))
                                                ? 0xeeU
                                                : (
                                                   (0x98U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                         << 0x18U) 
                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                           >> 8U))))
                                                    ? 0x46U
                                                    : 
                                                   ((0x97U 
                                                     == 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                          << 0x18U) 
                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                            >> 8U))))
                                                     ? 0x88U
                                                     : 
                                                    ((0x96U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                           << 0x18U) 
                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                             >> 8U))))
                                                      ? 0x90U
                                                      : 
                                                     ((0x95U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                            << 0x18U) 
                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                              >> 8U))))
                                                       ? 0x2aU
                                                       : 
                                                      ((0x94U 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                             << 0x18U) 
                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                               >> 8U))))
                                                        ? 0x22U
                                                        : 
                                                       ((0x93U 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                              << 0x18U) 
                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                >> 8U))))
                                                         ? 0xdcU
                                                         : 
                                                        ((0x92U 
                                                          == 
                                                          (0xffU 
                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                               << 0x18U) 
                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                 >> 8U))))
                                                          ? 0x4fU
                                                          : 
                                                         ((0x91U 
                                                           == 
                                                           (0xffU 
                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                << 0x18U) 
                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                  >> 8U))))
                                                           ? 0x81U
                                                           : 
                                                          ((0x90U 
                                                            == 
                                                            (0xffU 
                                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                 << 0x18U) 
                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                   >> 8U))))
                                                            ? 0x60U
                                                            : (IData)(this->__PVT___GEN_3727))))))))))))));
    this->__PVT___GEN_3996 = ((0x9cU == (0xffU & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                               ? 0xdeU : ((0x9bU == 
                                           (0xffU & 
                                            vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                           ? 0x14U : 
                                          ((0x9aU == 
                                            (0xffU 
                                             & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                            ? 0xb8U
                                            : ((0x99U 
                                                == 
                                                (0xffU 
                                                 & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                ? 0xeeU
                                                : (
                                                   (0x98U 
                                                    == 
                                                    (0xffU 
                                                     & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                    ? 0x46U
                                                    : 
                                                   ((0x97U 
                                                     == 
                                                     (0xffU 
                                                      & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                     ? 0x88U
                                                     : 
                                                    ((0x96U 
                                                      == 
                                                      (0xffU 
                                                       & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                      ? 0x90U
                                                      : 
                                                     ((0x95U 
                                                       == 
                                                       (0xffU 
                                                        & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                       ? 0x2aU
                                                       : 
                                                      ((0x94U 
                                                        == 
                                                        (0xffU 
                                                         & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                        ? 0x22U
                                                        : 
                                                       ((0x93U 
                                                         == 
                                                         (0xffU 
                                                          & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                         ? 0xdcU
                                                         : 
                                                        ((0x92U 
                                                          == 
                                                          (0xffU 
                                                           & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                          ? 0x4fU
                                                          : 
                                                         ((0x91U 
                                                           == 
                                                           (0xffU 
                                                            & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                           ? 0x81U
                                                           : 
                                                          ((0x90U 
                                                            == 
                                                            (0xffU 
                                                             & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                            ? 0x60U
                                                            : (IData)(this->__PVT___GEN_3983))))))))))))));
    this->__PVT___GEN_169 = ((0xa9U == (0xffU & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                 >> 0x18U)))
                              ? 0xd3U : ((0xa8U == 
                                          (0xffU & 
                                           (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                            >> 0x18U)))
                                          ? 0xc2U : 
                                         ((0xa7U == 
                                           (0xffU & 
                                            (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                             >> 0x18U)))
                                           ? 0x5cU : 
                                          ((0xa6U == 
                                            (0xffU 
                                             & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                >> 0x18U)))
                                            ? 0x24U
                                            : ((0xa5U 
                                                == 
                                                (0xffU 
                                                 & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                    >> 0x18U)))
                                                ? 6U
                                                : (
                                                   (0xa4U 
                                                    == 
                                                    (0xffU 
                                                     & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                        >> 0x18U)))
                                                    ? 0x49U
                                                    : 
                                                   ((0xa3U 
                                                     == 
                                                     (0xffU 
                                                      & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                         >> 0x18U)))
                                                     ? 0xaU
                                                     : 
                                                    ((0xa2U 
                                                      == 
                                                      (0xffU 
                                                       & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                          >> 0x18U)))
                                                      ? 0x3aU
                                                      : 
                                                     ((0xa1U 
                                                       == 
                                                       (0xffU 
                                                        & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                           >> 0x18U)))
                                                       ? 0x32U
                                                       : 
                                                      ((0xa0U 
                                                        == 
                                                        (0xffU 
                                                         & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                            >> 0x18U)))
                                                        ? 0xe0U
                                                        : 
                                                       ((0x9fU 
                                                         == 
                                                         (0xffU 
                                                          & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                             >> 0x18U)))
                                                         ? 0xdbU
                                                         : 
                                                        ((0x9eU 
                                                          == 
                                                          (0xffU 
                                                           & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                              >> 0x18U)))
                                                          ? 0xbU
                                                          : 
                                                         ((0x9dU 
                                                           == 
                                                           (0xffU 
                                                            & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                               >> 0x18U)))
                                                           ? 0x5eU
                                                           : (IData)(this->__PVT___GEN_156))))))))))))));
    this->__PVT___GEN_425 = ((0xa9U == (0xffU & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                 >> 0x10U)))
                              ? 0xd3U : ((0xa8U == 
                                          (0xffU & 
                                           (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                            >> 0x10U)))
                                          ? 0xc2U : 
                                         ((0xa7U == 
                                           (0xffU & 
                                            (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                             >> 0x10U)))
                                           ? 0x5cU : 
                                          ((0xa6U == 
                                            (0xffU 
                                             & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                >> 0x10U)))
                                            ? 0x24U
                                            : ((0xa5U 
                                                == 
                                                (0xffU 
                                                 & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                    >> 0x10U)))
                                                ? 6U
                                                : (
                                                   (0xa4U 
                                                    == 
                                                    (0xffU 
                                                     & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                        >> 0x10U)))
                                                    ? 0x49U
                                                    : 
                                                   ((0xa3U 
                                                     == 
                                                     (0xffU 
                                                      & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                         >> 0x10U)))
                                                     ? 0xaU
                                                     : 
                                                    ((0xa2U 
                                                      == 
                                                      (0xffU 
                                                       & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                          >> 0x10U)))
                                                      ? 0x3aU
                                                      : 
                                                     ((0xa1U 
                                                       == 
                                                       (0xffU 
                                                        & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                           >> 0x10U)))
                                                       ? 0x32U
                                                       : 
                                                      ((0xa0U 
                                                        == 
                                                        (0xffU 
                                                         & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                            >> 0x10U)))
                                                        ? 0xe0U
                                                        : 
                                                       ((0x9fU 
                                                         == 
                                                         (0xffU 
                                                          & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                             >> 0x10U)))
                                                         ? 0xdbU
                                                         : 
                                                        ((0x9eU 
                                                          == 
                                                          (0xffU 
                                                           & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                              >> 0x10U)))
                                                          ? 0xbU
                                                          : 
                                                         ((0x9dU 
                                                           == 
                                                           (0xffU 
                                                            & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                               >> 0x10U)))
                                                           ? 0x5eU
                                                           : (IData)(this->__PVT___GEN_412))))))))))))));
    this->__PVT___GEN_681 = ((0xa9U == (0xffU & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                 >> 8U)))
                              ? 0xd3U : ((0xa8U == 
                                          (0xffU & 
                                           (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                            >> 8U)))
                                          ? 0xc2U : 
                                         ((0xa7U == 
                                           (0xffU & 
                                            (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                             >> 8U)))
                                           ? 0x5cU : 
                                          ((0xa6U == 
                                            (0xffU 
                                             & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                >> 8U)))
                                            ? 0x24U
                                            : ((0xa5U 
                                                == 
                                                (0xffU 
                                                 & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                    >> 8U)))
                                                ? 6U
                                                : (
                                                   (0xa4U 
                                                    == 
                                                    (0xffU 
                                                     & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                        >> 8U)))
                                                    ? 0x49U
                                                    : 
                                                   ((0xa3U 
                                                     == 
                                                     (0xffU 
                                                      & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                         >> 8U)))
                                                     ? 0xaU
                                                     : 
                                                    ((0xa2U 
                                                      == 
                                                      (0xffU 
                                                       & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                          >> 8U)))
                                                      ? 0x3aU
                                                      : 
                                                     ((0xa1U 
                                                       == 
                                                       (0xffU 
                                                        & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                           >> 8U)))
                                                       ? 0x32U
                                                       : 
                                                      ((0xa0U 
                                                        == 
                                                        (0xffU 
                                                         & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                            >> 8U)))
                                                        ? 0xe0U
                                                        : 
                                                       ((0x9fU 
                                                         == 
                                                         (0xffU 
                                                          & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                             >> 8U)))
                                                         ? 0xdbU
                                                         : 
                                                        ((0x9eU 
                                                          == 
                                                          (0xffU 
                                                           & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                              >> 8U)))
                                                          ? 0xbU
                                                          : 
                                                         ((0x9dU 
                                                           == 
                                                           (0xffU 
                                                            & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                               >> 8U)))
                                                           ? 0x5eU
                                                           : (IData)(this->__PVT___GEN_668))))))))))))));
    this->__PVT___GEN_937 = ((0xa9U == (0xffU & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                              ? 0xd3U : ((0xa8U == 
                                          (0xffU & 
                                           vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                          ? 0xc2U : 
                                         ((0xa7U == 
                                           (0xffU & 
                                            vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                           ? 0x5cU : 
                                          ((0xa6U == 
                                            (0xffU 
                                             & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                            ? 0x24U
                                            : ((0xa5U 
                                                == 
                                                (0xffU 
                                                 & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                ? 6U
                                                : (
                                                   (0xa4U 
                                                    == 
                                                    (0xffU 
                                                     & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                    ? 0x49U
                                                    : 
                                                   ((0xa3U 
                                                     == 
                                                     (0xffU 
                                                      & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                     ? 0xaU
                                                     : 
                                                    ((0xa2U 
                                                      == 
                                                      (0xffU 
                                                       & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                      ? 0x3aU
                                                      : 
                                                     ((0xa1U 
                                                       == 
                                                       (0xffU 
                                                        & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                       ? 0x32U
                                                       : 
                                                      ((0xa0U 
                                                        == 
                                                        (0xffU 
                                                         & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                        ? 0xe0U
                                                        : 
                                                       ((0x9fU 
                                                         == 
                                                         (0xffU 
                                                          & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                         ? 0xdbU
                                                         : 
                                                        ((0x9eU 
                                                          == 
                                                          (0xffU 
                                                           & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                          ? 0xbU
                                                          : 
                                                         ((0x9dU 
                                                           == 
                                                           (0xffU 
                                                            & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                           ? 0x5eU
                                                           : (IData)(this->__PVT___GEN_924))))))))))))));
    this->__PVT___GEN_1193 = ((0xa9U == (0xffU & ((
                                                   vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                     >> 0x18U))))
                               ? 0xd3U : ((0xa8U == 
                                           (0xffU & 
                                            ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                              << 8U) 
                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                >> 0x18U))))
                                           ? 0xc2U : 
                                          ((0xa7U == 
                                            (0xffU 
                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                   >> 0x18U))))
                                            ? 0x5cU
                                            : ((0xa6U 
                                                == 
                                                (0xffU 
                                                 & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                     << 8U) 
                                                    | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                       >> 0x18U))))
                                                ? 0x24U
                                                : (
                                                   (0xa5U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                         << 8U) 
                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                           >> 0x18U))))
                                                    ? 6U
                                                    : 
                                                   ((0xa4U 
                                                     == 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                          << 8U) 
                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                            >> 0x18U))))
                                                     ? 0x49U
                                                     : 
                                                    ((0xa3U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                           << 8U) 
                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                             >> 0x18U))))
                                                      ? 0xaU
                                                      : 
                                                     ((0xa2U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                            << 8U) 
                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                              >> 0x18U))))
                                                       ? 0x3aU
                                                       : 
                                                      ((0xa1U 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                             << 8U) 
                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                               >> 0x18U))))
                                                        ? 0x32U
                                                        : 
                                                       ((0xa0U 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                              << 8U) 
                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                >> 0x18U))))
                                                         ? 0xe0U
                                                         : 
                                                        ((0x9fU 
                                                          == 
                                                          (0xffU 
                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                               << 8U) 
                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                 >> 0x18U))))
                                                          ? 0xdbU
                                                          : 
                                                         ((0x9eU 
                                                           == 
                                                           (0xffU 
                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                << 8U) 
                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                  >> 0x18U))))
                                                           ? 0xbU
                                                           : 
                                                          ((0x9dU 
                                                            == 
                                                            (0xffU 
                                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                 << 8U) 
                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                   >> 0x18U))))
                                                            ? 0x5eU
                                                            : (IData)(this->__PVT___GEN_1180))))))))))))));
    this->__PVT___GEN_1449 = ((0xa9U == (0xffU & ((
                                                   vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                   << 0x10U) 
                                                  | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                     >> 0x10U))))
                               ? 0xd3U : ((0xa8U == 
                                           (0xffU & 
                                            ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                              << 0x10U) 
                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                >> 0x10U))))
                                           ? 0xc2U : 
                                          ((0xa7U == 
                                            (0xffU 
                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                   >> 0x10U))))
                                            ? 0x5cU
                                            : ((0xa6U 
                                                == 
                                                (0xffU 
                                                 & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                     << 0x10U) 
                                                    | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                       >> 0x10U))))
                                                ? 0x24U
                                                : (
                                                   (0xa5U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                         << 0x10U) 
                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                           >> 0x10U))))
                                                    ? 6U
                                                    : 
                                                   ((0xa4U 
                                                     == 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                          << 0x10U) 
                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                            >> 0x10U))))
                                                     ? 0x49U
                                                     : 
                                                    ((0xa3U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                           << 0x10U) 
                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                             >> 0x10U))))
                                                      ? 0xaU
                                                      : 
                                                     ((0xa2U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                            << 0x10U) 
                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                              >> 0x10U))))
                                                       ? 0x3aU
                                                       : 
                                                      ((0xa1U 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                             << 0x10U) 
                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                               >> 0x10U))))
                                                        ? 0x32U
                                                        : 
                                                       ((0xa0U 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                              << 0x10U) 
                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                >> 0x10U))))
                                                         ? 0xe0U
                                                         : 
                                                        ((0x9fU 
                                                          == 
                                                          (0xffU 
                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                               << 0x10U) 
                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                 >> 0x10U))))
                                                          ? 0xdbU
                                                          : 
                                                         ((0x9eU 
                                                           == 
                                                           (0xffU 
                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                << 0x10U) 
                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                  >> 0x10U))))
                                                           ? 0xbU
                                                           : 
                                                          ((0x9dU 
                                                            == 
                                                            (0xffU 
                                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                 << 0x10U) 
                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                   >> 0x10U))))
                                                            ? 0x5eU
                                                            : (IData)(this->__PVT___GEN_1436))))))))))))));
    this->__PVT___GEN_1705 = ((0xa9U == (0xffU & ((
                                                   vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                   << 0x18U) 
                                                  | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                     >> 8U))))
                               ? 0xd3U : ((0xa8U == 
                                           (0xffU & 
                                            ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                              << 0x18U) 
                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                >> 8U))))
                                           ? 0xc2U : 
                                          ((0xa7U == 
                                            (0xffU 
                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                 << 0x18U) 
                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                   >> 8U))))
                                            ? 0x5cU
                                            : ((0xa6U 
                                                == 
                                                (0xffU 
                                                 & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                     << 0x18U) 
                                                    | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                       >> 8U))))
                                                ? 0x24U
                                                : (
                                                   (0xa5U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                         << 0x18U) 
                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                           >> 8U))))
                                                    ? 6U
                                                    : 
                                                   ((0xa4U 
                                                     == 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                          << 0x18U) 
                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                            >> 8U))))
                                                     ? 0x49U
                                                     : 
                                                    ((0xa3U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                           << 0x18U) 
                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                             >> 8U))))
                                                      ? 0xaU
                                                      : 
                                                     ((0xa2U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                            << 0x18U) 
                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                              >> 8U))))
                                                       ? 0x3aU
                                                       : 
                                                      ((0xa1U 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                             << 0x18U) 
                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                               >> 8U))))
                                                        ? 0x32U
                                                        : 
                                                       ((0xa0U 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                              << 0x18U) 
                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                >> 8U))))
                                                         ? 0xe0U
                                                         : 
                                                        ((0x9fU 
                                                          == 
                                                          (0xffU 
                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                               << 0x18U) 
                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                 >> 8U))))
                                                          ? 0xdbU
                                                          : 
                                                         ((0x9eU 
                                                           == 
                                                           (0xffU 
                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                << 0x18U) 
                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                  >> 8U))))
                                                           ? 0xbU
                                                           : 
                                                          ((0x9dU 
                                                            == 
                                                            (0xffU 
                                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                 << 0x18U) 
                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                   >> 8U))))
                                                            ? 0x5eU
                                                            : (IData)(this->__PVT___GEN_1692))))))))))))));
    this->__PVT___GEN_1961 = ((0xa9U == (0xffU & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                               ? 0xd3U : ((0xa8U == 
                                           (0xffU & 
                                            vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                           ? 0xc2U : 
                                          ((0xa7U == 
                                            (0xffU 
                                             & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                            ? 0x5cU
                                            : ((0xa6U 
                                                == 
                                                (0xffU 
                                                 & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                ? 0x24U
                                                : (
                                                   (0xa5U 
                                                    == 
                                                    (0xffU 
                                                     & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                    ? 6U
                                                    : 
                                                   ((0xa4U 
                                                     == 
                                                     (0xffU 
                                                      & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                     ? 0x49U
                                                     : 
                                                    ((0xa3U 
                                                      == 
                                                      (0xffU 
                                                       & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                      ? 0xaU
                                                      : 
                                                     ((0xa2U 
                                                       == 
                                                       (0xffU 
                                                        & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                       ? 0x3aU
                                                       : 
                                                      ((0xa1U 
                                                        == 
                                                        (0xffU 
                                                         & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                        ? 0x32U
                                                        : 
                                                       ((0xa0U 
                                                         == 
                                                         (0xffU 
                                                          & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                         ? 0xe0U
                                                         : 
                                                        ((0x9fU 
                                                          == 
                                                          (0xffU 
                                                           & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                          ? 0xdbU
                                                          : 
                                                         ((0x9eU 
                                                           == 
                                                           (0xffU 
                                                            & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                           ? 0xbU
                                                           : 
                                                          ((0x9dU 
                                                            == 
                                                            (0xffU 
                                                             & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                            ? 0x5eU
                                                            : (IData)(this->__PVT___GEN_1948))))))))))))));
    this->__PVT___GEN_2217 = ((0xa9U == (0xffU & ((
                                                   vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                     >> 0x18U))))
                               ? 0xd3U : ((0xa8U == 
                                           (0xffU & 
                                            ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                              << 8U) 
                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                >> 0x18U))))
                                           ? 0xc2U : 
                                          ((0xa7U == 
                                            (0xffU 
                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                   >> 0x18U))))
                                            ? 0x5cU
                                            : ((0xa6U 
                                                == 
                                                (0xffU 
                                                 & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                     << 8U) 
                                                    | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                       >> 0x18U))))
                                                ? 0x24U
                                                : (
                                                   (0xa5U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                         << 8U) 
                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                           >> 0x18U))))
                                                    ? 6U
                                                    : 
                                                   ((0xa4U 
                                                     == 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                          << 8U) 
                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                            >> 0x18U))))
                                                     ? 0x49U
                                                     : 
                                                    ((0xa3U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                           << 8U) 
                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                             >> 0x18U))))
                                                      ? 0xaU
                                                      : 
                                                     ((0xa2U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                            << 8U) 
                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                              >> 0x18U))))
                                                       ? 0x3aU
                                                       : 
                                                      ((0xa1U 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                             << 8U) 
                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                               >> 0x18U))))
                                                        ? 0x32U
                                                        : 
                                                       ((0xa0U 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                              << 8U) 
                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                >> 0x18U))))
                                                         ? 0xe0U
                                                         : 
                                                        ((0x9fU 
                                                          == 
                                                          (0xffU 
                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                               << 8U) 
                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                 >> 0x18U))))
                                                          ? 0xdbU
                                                          : 
                                                         ((0x9eU 
                                                           == 
                                                           (0xffU 
                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                << 8U) 
                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                  >> 0x18U))))
                                                           ? 0xbU
                                                           : 
                                                          ((0x9dU 
                                                            == 
                                                            (0xffU 
                                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                 << 8U) 
                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                   >> 0x18U))))
                                                            ? 0x5eU
                                                            : (IData)(this->__PVT___GEN_2204))))))))))))));
    this->__PVT___GEN_2473 = ((0xa9U == (0xffU & ((
                                                   vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                   << 0x10U) 
                                                  | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                     >> 0x10U))))
                               ? 0xd3U : ((0xa8U == 
                                           (0xffU & 
                                            ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                              << 0x10U) 
                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                >> 0x10U))))
                                           ? 0xc2U : 
                                          ((0xa7U == 
                                            (0xffU 
                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                   >> 0x10U))))
                                            ? 0x5cU
                                            : ((0xa6U 
                                                == 
                                                (0xffU 
                                                 & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                     << 0x10U) 
                                                    | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                       >> 0x10U))))
                                                ? 0x24U
                                                : (
                                                   (0xa5U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                         << 0x10U) 
                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                           >> 0x10U))))
                                                    ? 6U
                                                    : 
                                                   ((0xa4U 
                                                     == 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                          << 0x10U) 
                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                            >> 0x10U))))
                                                     ? 0x49U
                                                     : 
                                                    ((0xa3U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                           << 0x10U) 
                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                             >> 0x10U))))
                                                      ? 0xaU
                                                      : 
                                                     ((0xa2U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                            << 0x10U) 
                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                              >> 0x10U))))
                                                       ? 0x3aU
                                                       : 
                                                      ((0xa1U 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                             << 0x10U) 
                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                               >> 0x10U))))
                                                        ? 0x32U
                                                        : 
                                                       ((0xa0U 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                              << 0x10U) 
                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                >> 0x10U))))
                                                         ? 0xe0U
                                                         : 
                                                        ((0x9fU 
                                                          == 
                                                          (0xffU 
                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                               << 0x10U) 
                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                 >> 0x10U))))
                                                          ? 0xdbU
                                                          : 
                                                         ((0x9eU 
                                                           == 
                                                           (0xffU 
                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                << 0x10U) 
                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                  >> 0x10U))))
                                                           ? 0xbU
                                                           : 
                                                          ((0x9dU 
                                                            == 
                                                            (0xffU 
                                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                 << 0x10U) 
                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                   >> 0x10U))))
                                                            ? 0x5eU
                                                            : (IData)(this->__PVT___GEN_2460))))))))))))));
    this->__PVT___GEN_2729 = ((0xa9U == (0xffU & ((
                                                   vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                   << 0x18U) 
                                                  | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                     >> 8U))))
                               ? 0xd3U : ((0xa8U == 
                                           (0xffU & 
                                            ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                              << 0x18U) 
                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                >> 8U))))
                                           ? 0xc2U : 
                                          ((0xa7U == 
                                            (0xffU 
                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                 << 0x18U) 
                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                   >> 8U))))
                                            ? 0x5cU
                                            : ((0xa6U 
                                                == 
                                                (0xffU 
                                                 & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                     << 0x18U) 
                                                    | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                       >> 8U))))
                                                ? 0x24U
                                                : (
                                                   (0xa5U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                         << 0x18U) 
                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                           >> 8U))))
                                                    ? 6U
                                                    : 
                                                   ((0xa4U 
                                                     == 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                          << 0x18U) 
                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                            >> 8U))))
                                                     ? 0x49U
                                                     : 
                                                    ((0xa3U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                           << 0x18U) 
                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                             >> 8U))))
                                                      ? 0xaU
                                                      : 
                                                     ((0xa2U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                            << 0x18U) 
                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                              >> 8U))))
                                                       ? 0x3aU
                                                       : 
                                                      ((0xa1U 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                             << 0x18U) 
                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                               >> 8U))))
                                                        ? 0x32U
                                                        : 
                                                       ((0xa0U 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                              << 0x18U) 
                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                >> 8U))))
                                                         ? 0xe0U
                                                         : 
                                                        ((0x9fU 
                                                          == 
                                                          (0xffU 
                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                               << 0x18U) 
                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                 >> 8U))))
                                                          ? 0xdbU
                                                          : 
                                                         ((0x9eU 
                                                           == 
                                                           (0xffU 
                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                << 0x18U) 
                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                  >> 8U))))
                                                           ? 0xbU
                                                           : 
                                                          ((0x9dU 
                                                            == 
                                                            (0xffU 
                                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                 << 0x18U) 
                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                   >> 8U))))
                                                            ? 0x5eU
                                                            : (IData)(this->__PVT___GEN_2716))))))))))))));
    this->__PVT___GEN_2985 = ((0xa9U == (0xffU & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                               ? 0xd3U : ((0xa8U == 
                                           (0xffU & 
                                            vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                           ? 0xc2U : 
                                          ((0xa7U == 
                                            (0xffU 
                                             & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                            ? 0x5cU
                                            : ((0xa6U 
                                                == 
                                                (0xffU 
                                                 & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                ? 0x24U
                                                : (
                                                   (0xa5U 
                                                    == 
                                                    (0xffU 
                                                     & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                    ? 6U
                                                    : 
                                                   ((0xa4U 
                                                     == 
                                                     (0xffU 
                                                      & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                     ? 0x49U
                                                     : 
                                                    ((0xa3U 
                                                      == 
                                                      (0xffU 
                                                       & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                      ? 0xaU
                                                      : 
                                                     ((0xa2U 
                                                       == 
                                                       (0xffU 
                                                        & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                       ? 0x3aU
                                                       : 
                                                      ((0xa1U 
                                                        == 
                                                        (0xffU 
                                                         & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                        ? 0x32U
                                                        : 
                                                       ((0xa0U 
                                                         == 
                                                         (0xffU 
                                                          & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                         ? 0xe0U
                                                         : 
                                                        ((0x9fU 
                                                          == 
                                                          (0xffU 
                                                           & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                          ? 0xdbU
                                                          : 
                                                         ((0x9eU 
                                                           == 
                                                           (0xffU 
                                                            & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                           ? 0xbU
                                                           : 
                                                          ((0x9dU 
                                                            == 
                                                            (0xffU 
                                                             & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                            ? 0x5eU
                                                            : (IData)(this->__PVT___GEN_2972))))))))))))));
    this->__PVT___GEN_3241 = ((0xa9U == (0xffU & ((
                                                   vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                     >> 0x18U))))
                               ? 0xd3U : ((0xa8U == 
                                           (0xffU & 
                                            ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                              << 8U) 
                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                >> 0x18U))))
                                           ? 0xc2U : 
                                          ((0xa7U == 
                                            (0xffU 
                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                   >> 0x18U))))
                                            ? 0x5cU
                                            : ((0xa6U 
                                                == 
                                                (0xffU 
                                                 & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                     << 8U) 
                                                    | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                       >> 0x18U))))
                                                ? 0x24U
                                                : (
                                                   (0xa5U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                         << 8U) 
                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                           >> 0x18U))))
                                                    ? 6U
                                                    : 
                                                   ((0xa4U 
                                                     == 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                          << 8U) 
                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                            >> 0x18U))))
                                                     ? 0x49U
                                                     : 
                                                    ((0xa3U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                           << 8U) 
                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                             >> 0x18U))))
                                                      ? 0xaU
                                                      : 
                                                     ((0xa2U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                            << 8U) 
                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                              >> 0x18U))))
                                                       ? 0x3aU
                                                       : 
                                                      ((0xa1U 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                             << 8U) 
                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                               >> 0x18U))))
                                                        ? 0x32U
                                                        : 
                                                       ((0xa0U 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                              << 8U) 
                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                >> 0x18U))))
                                                         ? 0xe0U
                                                         : 
                                                        ((0x9fU 
                                                          == 
                                                          (0xffU 
                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                               << 8U) 
                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                 >> 0x18U))))
                                                          ? 0xdbU
                                                          : 
                                                         ((0x9eU 
                                                           == 
                                                           (0xffU 
                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                << 8U) 
                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                  >> 0x18U))))
                                                           ? 0xbU
                                                           : 
                                                          ((0x9dU 
                                                            == 
                                                            (0xffU 
                                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                 << 8U) 
                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                   >> 0x18U))))
                                                            ? 0x5eU
                                                            : (IData)(this->__PVT___GEN_3228))))))))))))));
    this->__PVT___GEN_3497 = ((0xa9U == (0xffU & ((
                                                   vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                   << 0x10U) 
                                                  | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                     >> 0x10U))))
                               ? 0xd3U : ((0xa8U == 
                                           (0xffU & 
                                            ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                              << 0x10U) 
                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                >> 0x10U))))
                                           ? 0xc2U : 
                                          ((0xa7U == 
                                            (0xffU 
                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                   >> 0x10U))))
                                            ? 0x5cU
                                            : ((0xa6U 
                                                == 
                                                (0xffU 
                                                 & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                     << 0x10U) 
                                                    | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                       >> 0x10U))))
                                                ? 0x24U
                                                : (
                                                   (0xa5U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                         << 0x10U) 
                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                           >> 0x10U))))
                                                    ? 6U
                                                    : 
                                                   ((0xa4U 
                                                     == 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                          << 0x10U) 
                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                            >> 0x10U))))
                                                     ? 0x49U
                                                     : 
                                                    ((0xa3U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                           << 0x10U) 
                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                             >> 0x10U))))
                                                      ? 0xaU
                                                      : 
                                                     ((0xa2U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                            << 0x10U) 
                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                              >> 0x10U))))
                                                       ? 0x3aU
                                                       : 
                                                      ((0xa1U 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                             << 0x10U) 
                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                               >> 0x10U))))
                                                        ? 0x32U
                                                        : 
                                                       ((0xa0U 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                              << 0x10U) 
                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                >> 0x10U))))
                                                         ? 0xe0U
                                                         : 
                                                        ((0x9fU 
                                                          == 
                                                          (0xffU 
                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                               << 0x10U) 
                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                 >> 0x10U))))
                                                          ? 0xdbU
                                                          : 
                                                         ((0x9eU 
                                                           == 
                                                           (0xffU 
                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                << 0x10U) 
                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                  >> 0x10U))))
                                                           ? 0xbU
                                                           : 
                                                          ((0x9dU 
                                                            == 
                                                            (0xffU 
                                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                 << 0x10U) 
                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                   >> 0x10U))))
                                                            ? 0x5eU
                                                            : (IData)(this->__PVT___GEN_3484))))))))))))));
    this->__PVT___GEN_3753 = ((0xa9U == (0xffU & ((
                                                   vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                   << 0x18U) 
                                                  | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                     >> 8U))))
                               ? 0xd3U : ((0xa8U == 
                                           (0xffU & 
                                            ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                              << 0x18U) 
                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                >> 8U))))
                                           ? 0xc2U : 
                                          ((0xa7U == 
                                            (0xffU 
                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                 << 0x18U) 
                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                   >> 8U))))
                                            ? 0x5cU
                                            : ((0xa6U 
                                                == 
                                                (0xffU 
                                                 & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                     << 0x18U) 
                                                    | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                       >> 8U))))
                                                ? 0x24U
                                                : (
                                                   (0xa5U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                         << 0x18U) 
                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                           >> 8U))))
                                                    ? 6U
                                                    : 
                                                   ((0xa4U 
                                                     == 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                          << 0x18U) 
                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                            >> 8U))))
                                                     ? 0x49U
                                                     : 
                                                    ((0xa3U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                           << 0x18U) 
                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                             >> 8U))))
                                                      ? 0xaU
                                                      : 
                                                     ((0xa2U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                            << 0x18U) 
                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                              >> 8U))))
                                                       ? 0x3aU
                                                       : 
                                                      ((0xa1U 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                             << 0x18U) 
                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                               >> 8U))))
                                                        ? 0x32U
                                                        : 
                                                       ((0xa0U 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                              << 0x18U) 
                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                >> 8U))))
                                                         ? 0xe0U
                                                         : 
                                                        ((0x9fU 
                                                          == 
                                                          (0xffU 
                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                               << 0x18U) 
                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                 >> 8U))))
                                                          ? 0xdbU
                                                          : 
                                                         ((0x9eU 
                                                           == 
                                                           (0xffU 
                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                << 0x18U) 
                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                  >> 8U))))
                                                           ? 0xbU
                                                           : 
                                                          ((0x9dU 
                                                            == 
                                                            (0xffU 
                                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                 << 0x18U) 
                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                   >> 8U))))
                                                            ? 0x5eU
                                                            : (IData)(this->__PVT___GEN_3740))))))))))))));
    this->__PVT___GEN_4009 = ((0xa9U == (0xffU & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                               ? 0xd3U : ((0xa8U == 
                                           (0xffU & 
                                            vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                           ? 0xc2U : 
                                          ((0xa7U == 
                                            (0xffU 
                                             & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                            ? 0x5cU
                                            : ((0xa6U 
                                                == 
                                                (0xffU 
                                                 & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                ? 0x24U
                                                : (
                                                   (0xa5U 
                                                    == 
                                                    (0xffU 
                                                     & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                    ? 6U
                                                    : 
                                                   ((0xa4U 
                                                     == 
                                                     (0xffU 
                                                      & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                     ? 0x49U
                                                     : 
                                                    ((0xa3U 
                                                      == 
                                                      (0xffU 
                                                       & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                      ? 0xaU
                                                      : 
                                                     ((0xa2U 
                                                       == 
                                                       (0xffU 
                                                        & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                       ? 0x3aU
                                                       : 
                                                      ((0xa1U 
                                                        == 
                                                        (0xffU 
                                                         & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                        ? 0x32U
                                                        : 
                                                       ((0xa0U 
                                                         == 
                                                         (0xffU 
                                                          & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                         ? 0xe0U
                                                         : 
                                                        ((0x9fU 
                                                          == 
                                                          (0xffU 
                                                           & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                          ? 0xdbU
                                                          : 
                                                         ((0x9eU 
                                                           == 
                                                           (0xffU 
                                                            & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                           ? 0xbU
                                                           : 
                                                          ((0x9dU 
                                                            == 
                                                            (0xffU 
                                                             & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                            ? 0x5eU
                                                            : (IData)(this->__PVT___GEN_3996))))))))))))));
    this->__PVT___GEN_182 = ((0xb6U == (0xffU & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                 >> 0x18U)))
                              ? 0x4eU : ((0xb5U == 
                                          (0xffU & 
                                           (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                            >> 0x18U)))
                                          ? 0xd5U : 
                                         ((0xb4U == 
                                           (0xffU & 
                                            (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                             >> 0x18U)))
                                           ? 0x8dU : 
                                          ((0xb3U == 
                                            (0xffU 
                                             & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                >> 0x18U)))
                                            ? 0x6dU
                                            : ((0xb2U 
                                                == 
                                                (0xffU 
                                                 & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                    >> 0x18U)))
                                                ? 0x37U
                                                : (
                                                   (0xb1U 
                                                    == 
                                                    (0xffU 
                                                     & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                        >> 0x18U)))
                                                    ? 0xc8U
                                                    : 
                                                   ((0xb0U 
                                                     == 
                                                     (0xffU 
                                                      & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                         >> 0x18U)))
                                                     ? 0xe7U
                                                     : 
                                                    ((0xafU 
                                                      == 
                                                      (0xffU 
                                                       & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                          >> 0x18U)))
                                                      ? 0x79U
                                                      : 
                                                     ((0xaeU 
                                                       == 
                                                       (0xffU 
                                                        & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                           >> 0x18U)))
                                                       ? 0xe4U
                                                       : 
                                                      ((0xadU 
                                                        == 
                                                        (0xffU 
                                                         & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                            >> 0x18U)))
                                                        ? 0x95U
                                                        : 
                                                       ((0xacU 
                                                         == 
                                                         (0xffU 
                                                          & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                             >> 0x18U)))
                                                         ? 0x91U
                                                         : 
                                                        ((0xabU 
                                                          == 
                                                          (0xffU 
                                                           & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                              >> 0x18U)))
                                                          ? 0x62U
                                                          : 
                                                         ((0xaaU 
                                                           == 
                                                           (0xffU 
                                                            & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                               >> 0x18U)))
                                                           ? 0xacU
                                                           : (IData)(this->__PVT___GEN_169))))))))))))));
    this->__PVT___GEN_438 = ((0xb6U == (0xffU & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                 >> 0x10U)))
                              ? 0x4eU : ((0xb5U == 
                                          (0xffU & 
                                           (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                            >> 0x10U)))
                                          ? 0xd5U : 
                                         ((0xb4U == 
                                           (0xffU & 
                                            (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                             >> 0x10U)))
                                           ? 0x8dU : 
                                          ((0xb3U == 
                                            (0xffU 
                                             & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                >> 0x10U)))
                                            ? 0x6dU
                                            : ((0xb2U 
                                                == 
                                                (0xffU 
                                                 & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                    >> 0x10U)))
                                                ? 0x37U
                                                : (
                                                   (0xb1U 
                                                    == 
                                                    (0xffU 
                                                     & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                        >> 0x10U)))
                                                    ? 0xc8U
                                                    : 
                                                   ((0xb0U 
                                                     == 
                                                     (0xffU 
                                                      & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                         >> 0x10U)))
                                                     ? 0xe7U
                                                     : 
                                                    ((0xafU 
                                                      == 
                                                      (0xffU 
                                                       & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                          >> 0x10U)))
                                                      ? 0x79U
                                                      : 
                                                     ((0xaeU 
                                                       == 
                                                       (0xffU 
                                                        & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                           >> 0x10U)))
                                                       ? 0xe4U
                                                       : 
                                                      ((0xadU 
                                                        == 
                                                        (0xffU 
                                                         & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                            >> 0x10U)))
                                                        ? 0x95U
                                                        : 
                                                       ((0xacU 
                                                         == 
                                                         (0xffU 
                                                          & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                             >> 0x10U)))
                                                         ? 0x91U
                                                         : 
                                                        ((0xabU 
                                                          == 
                                                          (0xffU 
                                                           & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                              >> 0x10U)))
                                                          ? 0x62U
                                                          : 
                                                         ((0xaaU 
                                                           == 
                                                           (0xffU 
                                                            & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                               >> 0x10U)))
                                                           ? 0xacU
                                                           : (IData)(this->__PVT___GEN_425))))))))))))));
    this->__PVT___GEN_694 = ((0xb6U == (0xffU & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                 >> 8U)))
                              ? 0x4eU : ((0xb5U == 
                                          (0xffU & 
                                           (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                            >> 8U)))
                                          ? 0xd5U : 
                                         ((0xb4U == 
                                           (0xffU & 
                                            (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                             >> 8U)))
                                           ? 0x8dU : 
                                          ((0xb3U == 
                                            (0xffU 
                                             & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                >> 8U)))
                                            ? 0x6dU
                                            : ((0xb2U 
                                                == 
                                                (0xffU 
                                                 & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                    >> 8U)))
                                                ? 0x37U
                                                : (
                                                   (0xb1U 
                                                    == 
                                                    (0xffU 
                                                     & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                        >> 8U)))
                                                    ? 0xc8U
                                                    : 
                                                   ((0xb0U 
                                                     == 
                                                     (0xffU 
                                                      & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                         >> 8U)))
                                                     ? 0xe7U
                                                     : 
                                                    ((0xafU 
                                                      == 
                                                      (0xffU 
                                                       & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                          >> 8U)))
                                                      ? 0x79U
                                                      : 
                                                     ((0xaeU 
                                                       == 
                                                       (0xffU 
                                                        & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                           >> 8U)))
                                                       ? 0xe4U
                                                       : 
                                                      ((0xadU 
                                                        == 
                                                        (0xffU 
                                                         & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                            >> 8U)))
                                                        ? 0x95U
                                                        : 
                                                       ((0xacU 
                                                         == 
                                                         (0xffU 
                                                          & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                             >> 8U)))
                                                         ? 0x91U
                                                         : 
                                                        ((0xabU 
                                                          == 
                                                          (0xffU 
                                                           & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                              >> 8U)))
                                                          ? 0x62U
                                                          : 
                                                         ((0xaaU 
                                                           == 
                                                           (0xffU 
                                                            & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                               >> 8U)))
                                                           ? 0xacU
                                                           : (IData)(this->__PVT___GEN_681))))))))))))));
    this->__PVT___GEN_950 = ((0xb6U == (0xffU & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                              ? 0x4eU : ((0xb5U == 
                                          (0xffU & 
                                           vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                          ? 0xd5U : 
                                         ((0xb4U == 
                                           (0xffU & 
                                            vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                           ? 0x8dU : 
                                          ((0xb3U == 
                                            (0xffU 
                                             & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                            ? 0x6dU
                                            : ((0xb2U 
                                                == 
                                                (0xffU 
                                                 & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                ? 0x37U
                                                : (
                                                   (0xb1U 
                                                    == 
                                                    (0xffU 
                                                     & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                    ? 0xc8U
                                                    : 
                                                   ((0xb0U 
                                                     == 
                                                     (0xffU 
                                                      & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                     ? 0xe7U
                                                     : 
                                                    ((0xafU 
                                                      == 
                                                      (0xffU 
                                                       & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                      ? 0x79U
                                                      : 
                                                     ((0xaeU 
                                                       == 
                                                       (0xffU 
                                                        & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                       ? 0xe4U
                                                       : 
                                                      ((0xadU 
                                                        == 
                                                        (0xffU 
                                                         & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                        ? 0x95U
                                                        : 
                                                       ((0xacU 
                                                         == 
                                                         (0xffU 
                                                          & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                         ? 0x91U
                                                         : 
                                                        ((0xabU 
                                                          == 
                                                          (0xffU 
                                                           & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                          ? 0x62U
                                                          : 
                                                         ((0xaaU 
                                                           == 
                                                           (0xffU 
                                                            & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                           ? 0xacU
                                                           : (IData)(this->__PVT___GEN_937))))))))))))));
    this->__PVT___GEN_1206 = ((0xb6U == (0xffU & ((
                                                   vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                     >> 0x18U))))
                               ? 0x4eU : ((0xb5U == 
                                           (0xffU & 
                                            ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                              << 8U) 
                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                >> 0x18U))))
                                           ? 0xd5U : 
                                          ((0xb4U == 
                                            (0xffU 
                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                   >> 0x18U))))
                                            ? 0x8dU
                                            : ((0xb3U 
                                                == 
                                                (0xffU 
                                                 & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                     << 8U) 
                                                    | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                       >> 0x18U))))
                                                ? 0x6dU
                                                : (
                                                   (0xb2U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                         << 8U) 
                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                           >> 0x18U))))
                                                    ? 0x37U
                                                    : 
                                                   ((0xb1U 
                                                     == 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                          << 8U) 
                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                            >> 0x18U))))
                                                     ? 0xc8U
                                                     : 
                                                    ((0xb0U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                           << 8U) 
                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                             >> 0x18U))))
                                                      ? 0xe7U
                                                      : 
                                                     ((0xafU 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                            << 8U) 
                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                              >> 0x18U))))
                                                       ? 0x79U
                                                       : 
                                                      ((0xaeU 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                             << 8U) 
                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                               >> 0x18U))))
                                                        ? 0xe4U
                                                        : 
                                                       ((0xadU 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                              << 8U) 
                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                >> 0x18U))))
                                                         ? 0x95U
                                                         : 
                                                        ((0xacU 
                                                          == 
                                                          (0xffU 
                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                               << 8U) 
                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                 >> 0x18U))))
                                                          ? 0x91U
                                                          : 
                                                         ((0xabU 
                                                           == 
                                                           (0xffU 
                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                << 8U) 
                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                  >> 0x18U))))
                                                           ? 0x62U
                                                           : 
                                                          ((0xaaU 
                                                            == 
                                                            (0xffU 
                                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                 << 8U) 
                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                   >> 0x18U))))
                                                            ? 0xacU
                                                            : (IData)(this->__PVT___GEN_1193))))))))))))));
    this->__PVT___GEN_1462 = ((0xb6U == (0xffU & ((
                                                   vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                   << 0x10U) 
                                                  | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                     >> 0x10U))))
                               ? 0x4eU : ((0xb5U == 
                                           (0xffU & 
                                            ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                              << 0x10U) 
                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                >> 0x10U))))
                                           ? 0xd5U : 
                                          ((0xb4U == 
                                            (0xffU 
                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                   >> 0x10U))))
                                            ? 0x8dU
                                            : ((0xb3U 
                                                == 
                                                (0xffU 
                                                 & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                     << 0x10U) 
                                                    | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                       >> 0x10U))))
                                                ? 0x6dU
                                                : (
                                                   (0xb2U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                         << 0x10U) 
                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                           >> 0x10U))))
                                                    ? 0x37U
                                                    : 
                                                   ((0xb1U 
                                                     == 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                          << 0x10U) 
                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                            >> 0x10U))))
                                                     ? 0xc8U
                                                     : 
                                                    ((0xb0U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                           << 0x10U) 
                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                             >> 0x10U))))
                                                      ? 0xe7U
                                                      : 
                                                     ((0xafU 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                            << 0x10U) 
                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                              >> 0x10U))))
                                                       ? 0x79U
                                                       : 
                                                      ((0xaeU 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                             << 0x10U) 
                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                               >> 0x10U))))
                                                        ? 0xe4U
                                                        : 
                                                       ((0xadU 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                              << 0x10U) 
                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                >> 0x10U))))
                                                         ? 0x95U
                                                         : 
                                                        ((0xacU 
                                                          == 
                                                          (0xffU 
                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                               << 0x10U) 
                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                 >> 0x10U))))
                                                          ? 0x91U
                                                          : 
                                                         ((0xabU 
                                                           == 
                                                           (0xffU 
                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                << 0x10U) 
                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                  >> 0x10U))))
                                                           ? 0x62U
                                                           : 
                                                          ((0xaaU 
                                                            == 
                                                            (0xffU 
                                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                 << 0x10U) 
                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                   >> 0x10U))))
                                                            ? 0xacU
                                                            : (IData)(this->__PVT___GEN_1449))))))))))))));
    this->__PVT___GEN_1718 = ((0xb6U == (0xffU & ((
                                                   vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                   << 0x18U) 
                                                  | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                     >> 8U))))
                               ? 0x4eU : ((0xb5U == 
                                           (0xffU & 
                                            ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                              << 0x18U) 
                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                >> 8U))))
                                           ? 0xd5U : 
                                          ((0xb4U == 
                                            (0xffU 
                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                 << 0x18U) 
                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                   >> 8U))))
                                            ? 0x8dU
                                            : ((0xb3U 
                                                == 
                                                (0xffU 
                                                 & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                     << 0x18U) 
                                                    | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                       >> 8U))))
                                                ? 0x6dU
                                                : (
                                                   (0xb2U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                         << 0x18U) 
                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                           >> 8U))))
                                                    ? 0x37U
                                                    : 
                                                   ((0xb1U 
                                                     == 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                          << 0x18U) 
                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                            >> 8U))))
                                                     ? 0xc8U
                                                     : 
                                                    ((0xb0U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                           << 0x18U) 
                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                             >> 8U))))
                                                      ? 0xe7U
                                                      : 
                                                     ((0xafU 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                            << 0x18U) 
                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                              >> 8U))))
                                                       ? 0x79U
                                                       : 
                                                      ((0xaeU 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                             << 0x18U) 
                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                               >> 8U))))
                                                        ? 0xe4U
                                                        : 
                                                       ((0xadU 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                              << 0x18U) 
                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                >> 8U))))
                                                         ? 0x95U
                                                         : 
                                                        ((0xacU 
                                                          == 
                                                          (0xffU 
                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                               << 0x18U) 
                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                 >> 8U))))
                                                          ? 0x91U
                                                          : 
                                                         ((0xabU 
                                                           == 
                                                           (0xffU 
                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                << 0x18U) 
                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                  >> 8U))))
                                                           ? 0x62U
                                                           : 
                                                          ((0xaaU 
                                                            == 
                                                            (0xffU 
                                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                 << 0x18U) 
                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                   >> 8U))))
                                                            ? 0xacU
                                                            : (IData)(this->__PVT___GEN_1705))))))))))))));
    this->__PVT___GEN_1974 = ((0xb6U == (0xffU & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                               ? 0x4eU : ((0xb5U == 
                                           (0xffU & 
                                            vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                           ? 0xd5U : 
                                          ((0xb4U == 
                                            (0xffU 
                                             & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                            ? 0x8dU
                                            : ((0xb3U 
                                                == 
                                                (0xffU 
                                                 & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                ? 0x6dU
                                                : (
                                                   (0xb2U 
                                                    == 
                                                    (0xffU 
                                                     & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                    ? 0x37U
                                                    : 
                                                   ((0xb1U 
                                                     == 
                                                     (0xffU 
                                                      & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                     ? 0xc8U
                                                     : 
                                                    ((0xb0U 
                                                      == 
                                                      (0xffU 
                                                       & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                      ? 0xe7U
                                                      : 
                                                     ((0xafU 
                                                       == 
                                                       (0xffU 
                                                        & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                       ? 0x79U
                                                       : 
                                                      ((0xaeU 
                                                        == 
                                                        (0xffU 
                                                         & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                        ? 0xe4U
                                                        : 
                                                       ((0xadU 
                                                         == 
                                                         (0xffU 
                                                          & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                         ? 0x95U
                                                         : 
                                                        ((0xacU 
                                                          == 
                                                          (0xffU 
                                                           & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                          ? 0x91U
                                                          : 
                                                         ((0xabU 
                                                           == 
                                                           (0xffU 
                                                            & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                           ? 0x62U
                                                           : 
                                                          ((0xaaU 
                                                            == 
                                                            (0xffU 
                                                             & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                            ? 0xacU
                                                            : (IData)(this->__PVT___GEN_1961))))))))))))));
    this->__PVT___GEN_2230 = ((0xb6U == (0xffU & ((
                                                   vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                     >> 0x18U))))
                               ? 0x4eU : ((0xb5U == 
                                           (0xffU & 
                                            ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                              << 8U) 
                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                >> 0x18U))))
                                           ? 0xd5U : 
                                          ((0xb4U == 
                                            (0xffU 
                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                   >> 0x18U))))
                                            ? 0x8dU
                                            : ((0xb3U 
                                                == 
                                                (0xffU 
                                                 & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                     << 8U) 
                                                    | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                       >> 0x18U))))
                                                ? 0x6dU
                                                : (
                                                   (0xb2U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                         << 8U) 
                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                           >> 0x18U))))
                                                    ? 0x37U
                                                    : 
                                                   ((0xb1U 
                                                     == 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                          << 8U) 
                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                            >> 0x18U))))
                                                     ? 0xc8U
                                                     : 
                                                    ((0xb0U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                           << 8U) 
                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                             >> 0x18U))))
                                                      ? 0xe7U
                                                      : 
                                                     ((0xafU 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                            << 8U) 
                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                              >> 0x18U))))
                                                       ? 0x79U
                                                       : 
                                                      ((0xaeU 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                             << 8U) 
                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                               >> 0x18U))))
                                                        ? 0xe4U
                                                        : 
                                                       ((0xadU 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                              << 8U) 
                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                >> 0x18U))))
                                                         ? 0x95U
                                                         : 
                                                        ((0xacU 
                                                          == 
                                                          (0xffU 
                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                               << 8U) 
                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                 >> 0x18U))))
                                                          ? 0x91U
                                                          : 
                                                         ((0xabU 
                                                           == 
                                                           (0xffU 
                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                << 8U) 
                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                  >> 0x18U))))
                                                           ? 0x62U
                                                           : 
                                                          ((0xaaU 
                                                            == 
                                                            (0xffU 
                                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                 << 8U) 
                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                   >> 0x18U))))
                                                            ? 0xacU
                                                            : (IData)(this->__PVT___GEN_2217))))))))))))));
    this->__PVT___GEN_2486 = ((0xb6U == (0xffU & ((
                                                   vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                   << 0x10U) 
                                                  | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                     >> 0x10U))))
                               ? 0x4eU : ((0xb5U == 
                                           (0xffU & 
                                            ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                              << 0x10U) 
                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                >> 0x10U))))
                                           ? 0xd5U : 
                                          ((0xb4U == 
                                            (0xffU 
                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                   >> 0x10U))))
                                            ? 0x8dU
                                            : ((0xb3U 
                                                == 
                                                (0xffU 
                                                 & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                     << 0x10U) 
                                                    | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                       >> 0x10U))))
                                                ? 0x6dU
                                                : (
                                                   (0xb2U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                         << 0x10U) 
                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                           >> 0x10U))))
                                                    ? 0x37U
                                                    : 
                                                   ((0xb1U 
                                                     == 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                          << 0x10U) 
                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                            >> 0x10U))))
                                                     ? 0xc8U
                                                     : 
                                                    ((0xb0U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                           << 0x10U) 
                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                             >> 0x10U))))
                                                      ? 0xe7U
                                                      : 
                                                     ((0xafU 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                            << 0x10U) 
                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                              >> 0x10U))))
                                                       ? 0x79U
                                                       : 
                                                      ((0xaeU 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                             << 0x10U) 
                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                               >> 0x10U))))
                                                        ? 0xe4U
                                                        : 
                                                       ((0xadU 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                              << 0x10U) 
                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                >> 0x10U))))
                                                         ? 0x95U
                                                         : 
                                                        ((0xacU 
                                                          == 
                                                          (0xffU 
                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                               << 0x10U) 
                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                 >> 0x10U))))
                                                          ? 0x91U
                                                          : 
                                                         ((0xabU 
                                                           == 
                                                           (0xffU 
                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                << 0x10U) 
                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                  >> 0x10U))))
                                                           ? 0x62U
                                                           : 
                                                          ((0xaaU 
                                                            == 
                                                            (0xffU 
                                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                 << 0x10U) 
                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                   >> 0x10U))))
                                                            ? 0xacU
                                                            : (IData)(this->__PVT___GEN_2473))))))))))))));
    this->__PVT___GEN_2742 = ((0xb6U == (0xffU & ((
                                                   vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                   << 0x18U) 
                                                  | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                     >> 8U))))
                               ? 0x4eU : ((0xb5U == 
                                           (0xffU & 
                                            ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                              << 0x18U) 
                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                >> 8U))))
                                           ? 0xd5U : 
                                          ((0xb4U == 
                                            (0xffU 
                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                 << 0x18U) 
                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                   >> 8U))))
                                            ? 0x8dU
                                            : ((0xb3U 
                                                == 
                                                (0xffU 
                                                 & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                     << 0x18U) 
                                                    | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                       >> 8U))))
                                                ? 0x6dU
                                                : (
                                                   (0xb2U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                         << 0x18U) 
                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                           >> 8U))))
                                                    ? 0x37U
                                                    : 
                                                   ((0xb1U 
                                                     == 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                          << 0x18U) 
                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                            >> 8U))))
                                                     ? 0xc8U
                                                     : 
                                                    ((0xb0U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                           << 0x18U) 
                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                             >> 8U))))
                                                      ? 0xe7U
                                                      : 
                                                     ((0xafU 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                            << 0x18U) 
                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                              >> 8U))))
                                                       ? 0x79U
                                                       : 
                                                      ((0xaeU 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                             << 0x18U) 
                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                               >> 8U))))
                                                        ? 0xe4U
                                                        : 
                                                       ((0xadU 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                              << 0x18U) 
                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                >> 8U))))
                                                         ? 0x95U
                                                         : 
                                                        ((0xacU 
                                                          == 
                                                          (0xffU 
                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                               << 0x18U) 
                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                 >> 8U))))
                                                          ? 0x91U
                                                          : 
                                                         ((0xabU 
                                                           == 
                                                           (0xffU 
                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                << 0x18U) 
                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                  >> 8U))))
                                                           ? 0x62U
                                                           : 
                                                          ((0xaaU 
                                                            == 
                                                            (0xffU 
                                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                 << 0x18U) 
                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                   >> 8U))))
                                                            ? 0xacU
                                                            : (IData)(this->__PVT___GEN_2729))))))))))))));
    this->__PVT___GEN_2998 = ((0xb6U == (0xffU & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                               ? 0x4eU : ((0xb5U == 
                                           (0xffU & 
                                            vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                           ? 0xd5U : 
                                          ((0xb4U == 
                                            (0xffU 
                                             & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                            ? 0x8dU
                                            : ((0xb3U 
                                                == 
                                                (0xffU 
                                                 & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                ? 0x6dU
                                                : (
                                                   (0xb2U 
                                                    == 
                                                    (0xffU 
                                                     & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                    ? 0x37U
                                                    : 
                                                   ((0xb1U 
                                                     == 
                                                     (0xffU 
                                                      & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                     ? 0xc8U
                                                     : 
                                                    ((0xb0U 
                                                      == 
                                                      (0xffU 
                                                       & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                      ? 0xe7U
                                                      : 
                                                     ((0xafU 
                                                       == 
                                                       (0xffU 
                                                        & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                       ? 0x79U
                                                       : 
                                                      ((0xaeU 
                                                        == 
                                                        (0xffU 
                                                         & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                        ? 0xe4U
                                                        : 
                                                       ((0xadU 
                                                         == 
                                                         (0xffU 
                                                          & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                         ? 0x95U
                                                         : 
                                                        ((0xacU 
                                                          == 
                                                          (0xffU 
                                                           & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                          ? 0x91U
                                                          : 
                                                         ((0xabU 
                                                           == 
                                                           (0xffU 
                                                            & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                           ? 0x62U
                                                           : 
                                                          ((0xaaU 
                                                            == 
                                                            (0xffU 
                                                             & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                            ? 0xacU
                                                            : (IData)(this->__PVT___GEN_2985))))))))))))));
    this->__PVT___GEN_3254 = ((0xb6U == (0xffU & ((
                                                   vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                     >> 0x18U))))
                               ? 0x4eU : ((0xb5U == 
                                           (0xffU & 
                                            ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                              << 8U) 
                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                >> 0x18U))))
                                           ? 0xd5U : 
                                          ((0xb4U == 
                                            (0xffU 
                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                   >> 0x18U))))
                                            ? 0x8dU
                                            : ((0xb3U 
                                                == 
                                                (0xffU 
                                                 & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                     << 8U) 
                                                    | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                       >> 0x18U))))
                                                ? 0x6dU
                                                : (
                                                   (0xb2U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                         << 8U) 
                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                           >> 0x18U))))
                                                    ? 0x37U
                                                    : 
                                                   ((0xb1U 
                                                     == 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                          << 8U) 
                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                            >> 0x18U))))
                                                     ? 0xc8U
                                                     : 
                                                    ((0xb0U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                           << 8U) 
                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                             >> 0x18U))))
                                                      ? 0xe7U
                                                      : 
                                                     ((0xafU 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                            << 8U) 
                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                              >> 0x18U))))
                                                       ? 0x79U
                                                       : 
                                                      ((0xaeU 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                             << 8U) 
                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                               >> 0x18U))))
                                                        ? 0xe4U
                                                        : 
                                                       ((0xadU 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                              << 8U) 
                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                >> 0x18U))))
                                                         ? 0x95U
                                                         : 
                                                        ((0xacU 
                                                          == 
                                                          (0xffU 
                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                               << 8U) 
                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                 >> 0x18U))))
                                                          ? 0x91U
                                                          : 
                                                         ((0xabU 
                                                           == 
                                                           (0xffU 
                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                << 8U) 
                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                  >> 0x18U))))
                                                           ? 0x62U
                                                           : 
                                                          ((0xaaU 
                                                            == 
                                                            (0xffU 
                                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                 << 8U) 
                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                   >> 0x18U))))
                                                            ? 0xacU
                                                            : (IData)(this->__PVT___GEN_3241))))))))))))));
    this->__PVT___GEN_3510 = ((0xb6U == (0xffU & ((
                                                   vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                   << 0x10U) 
                                                  | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                     >> 0x10U))))
                               ? 0x4eU : ((0xb5U == 
                                           (0xffU & 
                                            ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                              << 0x10U) 
                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                >> 0x10U))))
                                           ? 0xd5U : 
                                          ((0xb4U == 
                                            (0xffU 
                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                   >> 0x10U))))
                                            ? 0x8dU
                                            : ((0xb3U 
                                                == 
                                                (0xffU 
                                                 & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                     << 0x10U) 
                                                    | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                       >> 0x10U))))
                                                ? 0x6dU
                                                : (
                                                   (0xb2U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                         << 0x10U) 
                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                           >> 0x10U))))
                                                    ? 0x37U
                                                    : 
                                                   ((0xb1U 
                                                     == 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                          << 0x10U) 
                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                            >> 0x10U))))
                                                     ? 0xc8U
                                                     : 
                                                    ((0xb0U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                           << 0x10U) 
                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                             >> 0x10U))))
                                                      ? 0xe7U
                                                      : 
                                                     ((0xafU 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                            << 0x10U) 
                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                              >> 0x10U))))
                                                       ? 0x79U
                                                       : 
                                                      ((0xaeU 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                             << 0x10U) 
                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                               >> 0x10U))))
                                                        ? 0xe4U
                                                        : 
                                                       ((0xadU 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                              << 0x10U) 
                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                >> 0x10U))))
                                                         ? 0x95U
                                                         : 
                                                        ((0xacU 
                                                          == 
                                                          (0xffU 
                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                               << 0x10U) 
                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                 >> 0x10U))))
                                                          ? 0x91U
                                                          : 
                                                         ((0xabU 
                                                           == 
                                                           (0xffU 
                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                << 0x10U) 
                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                  >> 0x10U))))
                                                           ? 0x62U
                                                           : 
                                                          ((0xaaU 
                                                            == 
                                                            (0xffU 
                                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                 << 0x10U) 
                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                   >> 0x10U))))
                                                            ? 0xacU
                                                            : (IData)(this->__PVT___GEN_3497))))))))))))));
    this->__PVT___GEN_3766 = ((0xb6U == (0xffU & ((
                                                   vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                   << 0x18U) 
                                                  | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                     >> 8U))))
                               ? 0x4eU : ((0xb5U == 
                                           (0xffU & 
                                            ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                              << 0x18U) 
                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                >> 8U))))
                                           ? 0xd5U : 
                                          ((0xb4U == 
                                            (0xffU 
                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                 << 0x18U) 
                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                   >> 8U))))
                                            ? 0x8dU
                                            : ((0xb3U 
                                                == 
                                                (0xffU 
                                                 & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                     << 0x18U) 
                                                    | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                       >> 8U))))
                                                ? 0x6dU
                                                : (
                                                   (0xb2U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                         << 0x18U) 
                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                           >> 8U))))
                                                    ? 0x37U
                                                    : 
                                                   ((0xb1U 
                                                     == 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                          << 0x18U) 
                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                            >> 8U))))
                                                     ? 0xc8U
                                                     : 
                                                    ((0xb0U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                           << 0x18U) 
                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                             >> 8U))))
                                                      ? 0xe7U
                                                      : 
                                                     ((0xafU 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                            << 0x18U) 
                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                              >> 8U))))
                                                       ? 0x79U
                                                       : 
                                                      ((0xaeU 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                             << 0x18U) 
                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                               >> 8U))))
                                                        ? 0xe4U
                                                        : 
                                                       ((0xadU 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                              << 0x18U) 
                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                >> 8U))))
                                                         ? 0x95U
                                                         : 
                                                        ((0xacU 
                                                          == 
                                                          (0xffU 
                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                               << 0x18U) 
                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                 >> 8U))))
                                                          ? 0x91U
                                                          : 
                                                         ((0xabU 
                                                           == 
                                                           (0xffU 
                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                << 0x18U) 
                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                  >> 8U))))
                                                           ? 0x62U
                                                           : 
                                                          ((0xaaU 
                                                            == 
                                                            (0xffU 
                                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                 << 0x18U) 
                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                   >> 8U))))
                                                            ? 0xacU
                                                            : (IData)(this->__PVT___GEN_3753))))))))))))));
    this->__PVT___GEN_4022 = ((0xb6U == (0xffU & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                               ? 0x4eU : ((0xb5U == 
                                           (0xffU & 
                                            vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                           ? 0xd5U : 
                                          ((0xb4U == 
                                            (0xffU 
                                             & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                            ? 0x8dU
                                            : ((0xb3U 
                                                == 
                                                (0xffU 
                                                 & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                ? 0x6dU
                                                : (
                                                   (0xb2U 
                                                    == 
                                                    (0xffU 
                                                     & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                    ? 0x37U
                                                    : 
                                                   ((0xb1U 
                                                     == 
                                                     (0xffU 
                                                      & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                     ? 0xc8U
                                                     : 
                                                    ((0xb0U 
                                                      == 
                                                      (0xffU 
                                                       & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                      ? 0xe7U
                                                      : 
                                                     ((0xafU 
                                                       == 
                                                       (0xffU 
                                                        & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                       ? 0x79U
                                                       : 
                                                      ((0xaeU 
                                                        == 
                                                        (0xffU 
                                                         & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                        ? 0xe4U
                                                        : 
                                                       ((0xadU 
                                                         == 
                                                         (0xffU 
                                                          & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                         ? 0x95U
                                                         : 
                                                        ((0xacU 
                                                          == 
                                                          (0xffU 
                                                           & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                          ? 0x91U
                                                          : 
                                                         ((0xabU 
                                                           == 
                                                           (0xffU 
                                                            & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                           ? 0x62U
                                                           : 
                                                          ((0xaaU 
                                                            == 
                                                            (0xffU 
                                                             & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                            ? 0xacU
                                                            : (IData)(this->__PVT___GEN_4009))))))))))))));
    this->__PVT___GEN_195 = ((0xc3U == (0xffU & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                 >> 0x18U)))
                              ? 0x2eU : ((0xc2U == 
                                          (0xffU & 
                                           (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                            >> 0x18U)))
                                          ? 0x25U : 
                                         ((0xc1U == 
                                           (0xffU & 
                                            (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                             >> 0x18U)))
                                           ? 0x78U : 
                                          ((0xc0U == 
                                            (0xffU 
                                             & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                >> 0x18U)))
                                            ? 0xbaU
                                            : ((0xbfU 
                                                == 
                                                (0xffU 
                                                 & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                    >> 0x18U)))
                                                ? 8U
                                                : (
                                                   (0xbeU 
                                                    == 
                                                    (0xffU 
                                                     & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                        >> 0x18U)))
                                                    ? 0xaeU
                                                    : 
                                                   ((0xbdU 
                                                     == 
                                                     (0xffU 
                                                      & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                         >> 0x18U)))
                                                     ? 0x7aU
                                                     : 
                                                    ((0xbcU 
                                                      == 
                                                      (0xffU 
                                                       & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                          >> 0x18U)))
                                                      ? 0x65U
                                                      : 
                                                     ((0xbbU 
                                                       == 
                                                       (0xffU 
                                                        & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                           >> 0x18U)))
                                                       ? 0xeaU
                                                       : 
                                                      ((0xbaU 
                                                        == 
                                                        (0xffU 
                                                         & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                            >> 0x18U)))
                                                        ? 0xf4U
                                                        : 
                                                       ((0xb9U 
                                                         == 
                                                         (0xffU 
                                                          & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                             >> 0x18U)))
                                                         ? 0x56U
                                                         : 
                                                        ((0xb8U 
                                                          == 
                                                          (0xffU 
                                                           & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                              >> 0x18U)))
                                                          ? 0x6cU
                                                          : 
                                                         ((0xb7U 
                                                           == 
                                                           (0xffU 
                                                            & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                               >> 0x18U)))
                                                           ? 0xa9U
                                                           : (IData)(this->__PVT___GEN_182))))))))))))));
    this->__PVT___GEN_451 = ((0xc3U == (0xffU & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                 >> 0x10U)))
                              ? 0x2eU : ((0xc2U == 
                                          (0xffU & 
                                           (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                            >> 0x10U)))
                                          ? 0x25U : 
                                         ((0xc1U == 
                                           (0xffU & 
                                            (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                             >> 0x10U)))
                                           ? 0x78U : 
                                          ((0xc0U == 
                                            (0xffU 
                                             & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                >> 0x10U)))
                                            ? 0xbaU
                                            : ((0xbfU 
                                                == 
                                                (0xffU 
                                                 & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                    >> 0x10U)))
                                                ? 8U
                                                : (
                                                   (0xbeU 
                                                    == 
                                                    (0xffU 
                                                     & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                        >> 0x10U)))
                                                    ? 0xaeU
                                                    : 
                                                   ((0xbdU 
                                                     == 
                                                     (0xffU 
                                                      & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                         >> 0x10U)))
                                                     ? 0x7aU
                                                     : 
                                                    ((0xbcU 
                                                      == 
                                                      (0xffU 
                                                       & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                          >> 0x10U)))
                                                      ? 0x65U
                                                      : 
                                                     ((0xbbU 
                                                       == 
                                                       (0xffU 
                                                        & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                           >> 0x10U)))
                                                       ? 0xeaU
                                                       : 
                                                      ((0xbaU 
                                                        == 
                                                        (0xffU 
                                                         & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                            >> 0x10U)))
                                                        ? 0xf4U
                                                        : 
                                                       ((0xb9U 
                                                         == 
                                                         (0xffU 
                                                          & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                             >> 0x10U)))
                                                         ? 0x56U
                                                         : 
                                                        ((0xb8U 
                                                          == 
                                                          (0xffU 
                                                           & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                              >> 0x10U)))
                                                          ? 0x6cU
                                                          : 
                                                         ((0xb7U 
                                                           == 
                                                           (0xffU 
                                                            & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                               >> 0x10U)))
                                                           ? 0xa9U
                                                           : (IData)(this->__PVT___GEN_438))))))))))))));
    this->__PVT___GEN_707 = ((0xc3U == (0xffU & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                 >> 8U)))
                              ? 0x2eU : ((0xc2U == 
                                          (0xffU & 
                                           (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                            >> 8U)))
                                          ? 0x25U : 
                                         ((0xc1U == 
                                           (0xffU & 
                                            (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                             >> 8U)))
                                           ? 0x78U : 
                                          ((0xc0U == 
                                            (0xffU 
                                             & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                >> 8U)))
                                            ? 0xbaU
                                            : ((0xbfU 
                                                == 
                                                (0xffU 
                                                 & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                    >> 8U)))
                                                ? 8U
                                                : (
                                                   (0xbeU 
                                                    == 
                                                    (0xffU 
                                                     & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                        >> 8U)))
                                                    ? 0xaeU
                                                    : 
                                                   ((0xbdU 
                                                     == 
                                                     (0xffU 
                                                      & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                         >> 8U)))
                                                     ? 0x7aU
                                                     : 
                                                    ((0xbcU 
                                                      == 
                                                      (0xffU 
                                                       & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                          >> 8U)))
                                                      ? 0x65U
                                                      : 
                                                     ((0xbbU 
                                                       == 
                                                       (0xffU 
                                                        & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                           >> 8U)))
                                                       ? 0xeaU
                                                       : 
                                                      ((0xbaU 
                                                        == 
                                                        (0xffU 
                                                         & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                            >> 8U)))
                                                        ? 0xf4U
                                                        : 
                                                       ((0xb9U 
                                                         == 
                                                         (0xffU 
                                                          & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                             >> 8U)))
                                                         ? 0x56U
                                                         : 
                                                        ((0xb8U 
                                                          == 
                                                          (0xffU 
                                                           & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                              >> 8U)))
                                                          ? 0x6cU
                                                          : 
                                                         ((0xb7U 
                                                           == 
                                                           (0xffU 
                                                            & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                               >> 8U)))
                                                           ? 0xa9U
                                                           : (IData)(this->__PVT___GEN_694))))))))))))));
    this->__PVT___GEN_963 = ((0xc3U == (0xffU & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                              ? 0x2eU : ((0xc2U == 
                                          (0xffU & 
                                           vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                          ? 0x25U : 
                                         ((0xc1U == 
                                           (0xffU & 
                                            vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                           ? 0x78U : 
                                          ((0xc0U == 
                                            (0xffU 
                                             & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                            ? 0xbaU
                                            : ((0xbfU 
                                                == 
                                                (0xffU 
                                                 & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                ? 8U
                                                : (
                                                   (0xbeU 
                                                    == 
                                                    (0xffU 
                                                     & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                    ? 0xaeU
                                                    : 
                                                   ((0xbdU 
                                                     == 
                                                     (0xffU 
                                                      & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                     ? 0x7aU
                                                     : 
                                                    ((0xbcU 
                                                      == 
                                                      (0xffU 
                                                       & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                      ? 0x65U
                                                      : 
                                                     ((0xbbU 
                                                       == 
                                                       (0xffU 
                                                        & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                       ? 0xeaU
                                                       : 
                                                      ((0xbaU 
                                                        == 
                                                        (0xffU 
                                                         & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                        ? 0xf4U
                                                        : 
                                                       ((0xb9U 
                                                         == 
                                                         (0xffU 
                                                          & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                         ? 0x56U
                                                         : 
                                                        ((0xb8U 
                                                          == 
                                                          (0xffU 
                                                           & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                          ? 0x6cU
                                                          : 
                                                         ((0xb7U 
                                                           == 
                                                           (0xffU 
                                                            & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                           ? 0xa9U
                                                           : (IData)(this->__PVT___GEN_950))))))))))))));
    this->__PVT___GEN_1219 = ((0xc3U == (0xffU & ((
                                                   vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                     >> 0x18U))))
                               ? 0x2eU : ((0xc2U == 
                                           (0xffU & 
                                            ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                              << 8U) 
                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                >> 0x18U))))
                                           ? 0x25U : 
                                          ((0xc1U == 
                                            (0xffU 
                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                   >> 0x18U))))
                                            ? 0x78U
                                            : ((0xc0U 
                                                == 
                                                (0xffU 
                                                 & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                     << 8U) 
                                                    | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                       >> 0x18U))))
                                                ? 0xbaU
                                                : (
                                                   (0xbfU 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                         << 8U) 
                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                           >> 0x18U))))
                                                    ? 8U
                                                    : 
                                                   ((0xbeU 
                                                     == 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                          << 8U) 
                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                            >> 0x18U))))
                                                     ? 0xaeU
                                                     : 
                                                    ((0xbdU 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                           << 8U) 
                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                             >> 0x18U))))
                                                      ? 0x7aU
                                                      : 
                                                     ((0xbcU 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                            << 8U) 
                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                              >> 0x18U))))
                                                       ? 0x65U
                                                       : 
                                                      ((0xbbU 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                             << 8U) 
                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                               >> 0x18U))))
                                                        ? 0xeaU
                                                        : 
                                                       ((0xbaU 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                              << 8U) 
                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                >> 0x18U))))
                                                         ? 0xf4U
                                                         : 
                                                        ((0xb9U 
                                                          == 
                                                          (0xffU 
                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                               << 8U) 
                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                 >> 0x18U))))
                                                          ? 0x56U
                                                          : 
                                                         ((0xb8U 
                                                           == 
                                                           (0xffU 
                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                << 8U) 
                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                  >> 0x18U))))
                                                           ? 0x6cU
                                                           : 
                                                          ((0xb7U 
                                                            == 
                                                            (0xffU 
                                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                 << 8U) 
                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                   >> 0x18U))))
                                                            ? 0xa9U
                                                            : (IData)(this->__PVT___GEN_1206))))))))))))));
    this->__PVT___GEN_1475 = ((0xc3U == (0xffU & ((
                                                   vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                   << 0x10U) 
                                                  | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                     >> 0x10U))))
                               ? 0x2eU : ((0xc2U == 
                                           (0xffU & 
                                            ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                              << 0x10U) 
                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                >> 0x10U))))
                                           ? 0x25U : 
                                          ((0xc1U == 
                                            (0xffU 
                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                   >> 0x10U))))
                                            ? 0x78U
                                            : ((0xc0U 
                                                == 
                                                (0xffU 
                                                 & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                     << 0x10U) 
                                                    | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                       >> 0x10U))))
                                                ? 0xbaU
                                                : (
                                                   (0xbfU 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                         << 0x10U) 
                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                           >> 0x10U))))
                                                    ? 8U
                                                    : 
                                                   ((0xbeU 
                                                     == 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                          << 0x10U) 
                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                            >> 0x10U))))
                                                     ? 0xaeU
                                                     : 
                                                    ((0xbdU 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                           << 0x10U) 
                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                             >> 0x10U))))
                                                      ? 0x7aU
                                                      : 
                                                     ((0xbcU 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                            << 0x10U) 
                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                              >> 0x10U))))
                                                       ? 0x65U
                                                       : 
                                                      ((0xbbU 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                             << 0x10U) 
                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                               >> 0x10U))))
                                                        ? 0xeaU
                                                        : 
                                                       ((0xbaU 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                              << 0x10U) 
                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                >> 0x10U))))
                                                         ? 0xf4U
                                                         : 
                                                        ((0xb9U 
                                                          == 
                                                          (0xffU 
                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                               << 0x10U) 
                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                 >> 0x10U))))
                                                          ? 0x56U
                                                          : 
                                                         ((0xb8U 
                                                           == 
                                                           (0xffU 
                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                << 0x10U) 
                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                  >> 0x10U))))
                                                           ? 0x6cU
                                                           : 
                                                          ((0xb7U 
                                                            == 
                                                            (0xffU 
                                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                 << 0x10U) 
                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                   >> 0x10U))))
                                                            ? 0xa9U
                                                            : (IData)(this->__PVT___GEN_1462))))))))))))));
    this->__PVT___GEN_1731 = ((0xc3U == (0xffU & ((
                                                   vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                   << 0x18U) 
                                                  | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                     >> 8U))))
                               ? 0x2eU : ((0xc2U == 
                                           (0xffU & 
                                            ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                              << 0x18U) 
                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                >> 8U))))
                                           ? 0x25U : 
                                          ((0xc1U == 
                                            (0xffU 
                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                 << 0x18U) 
                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                   >> 8U))))
                                            ? 0x78U
                                            : ((0xc0U 
                                                == 
                                                (0xffU 
                                                 & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                     << 0x18U) 
                                                    | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                       >> 8U))))
                                                ? 0xbaU
                                                : (
                                                   (0xbfU 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                         << 0x18U) 
                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                           >> 8U))))
                                                    ? 8U
                                                    : 
                                                   ((0xbeU 
                                                     == 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                          << 0x18U) 
                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                            >> 8U))))
                                                     ? 0xaeU
                                                     : 
                                                    ((0xbdU 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                           << 0x18U) 
                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                             >> 8U))))
                                                      ? 0x7aU
                                                      : 
                                                     ((0xbcU 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                            << 0x18U) 
                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                              >> 8U))))
                                                       ? 0x65U
                                                       : 
                                                      ((0xbbU 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                             << 0x18U) 
                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                               >> 8U))))
                                                        ? 0xeaU
                                                        : 
                                                       ((0xbaU 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                              << 0x18U) 
                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                >> 8U))))
                                                         ? 0xf4U
                                                         : 
                                                        ((0xb9U 
                                                          == 
                                                          (0xffU 
                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                               << 0x18U) 
                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                 >> 8U))))
                                                          ? 0x56U
                                                          : 
                                                         ((0xb8U 
                                                           == 
                                                           (0xffU 
                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                << 0x18U) 
                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                  >> 8U))))
                                                           ? 0x6cU
                                                           : 
                                                          ((0xb7U 
                                                            == 
                                                            (0xffU 
                                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                 << 0x18U) 
                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                   >> 8U))))
                                                            ? 0xa9U
                                                            : (IData)(this->__PVT___GEN_1718))))))))))))));
    this->__PVT___GEN_1987 = ((0xc3U == (0xffU & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                               ? 0x2eU : ((0xc2U == 
                                           (0xffU & 
                                            vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                           ? 0x25U : 
                                          ((0xc1U == 
                                            (0xffU 
                                             & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                            ? 0x78U
                                            : ((0xc0U 
                                                == 
                                                (0xffU 
                                                 & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                ? 0xbaU
                                                : (
                                                   (0xbfU 
                                                    == 
                                                    (0xffU 
                                                     & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                    ? 8U
                                                    : 
                                                   ((0xbeU 
                                                     == 
                                                     (0xffU 
                                                      & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                     ? 0xaeU
                                                     : 
                                                    ((0xbdU 
                                                      == 
                                                      (0xffU 
                                                       & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                      ? 0x7aU
                                                      : 
                                                     ((0xbcU 
                                                       == 
                                                       (0xffU 
                                                        & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                       ? 0x65U
                                                       : 
                                                      ((0xbbU 
                                                        == 
                                                        (0xffU 
                                                         & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                        ? 0xeaU
                                                        : 
                                                       ((0xbaU 
                                                         == 
                                                         (0xffU 
                                                          & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                         ? 0xf4U
                                                         : 
                                                        ((0xb9U 
                                                          == 
                                                          (0xffU 
                                                           & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                          ? 0x56U
                                                          : 
                                                         ((0xb8U 
                                                           == 
                                                           (0xffU 
                                                            & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                           ? 0x6cU
                                                           : 
                                                          ((0xb7U 
                                                            == 
                                                            (0xffU 
                                                             & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                            ? 0xa9U
                                                            : (IData)(this->__PVT___GEN_1974))))))))))))));
    this->__PVT___GEN_2243 = ((0xc3U == (0xffU & ((
                                                   vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                     >> 0x18U))))
                               ? 0x2eU : ((0xc2U == 
                                           (0xffU & 
                                            ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                              << 8U) 
                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                >> 0x18U))))
                                           ? 0x25U : 
                                          ((0xc1U == 
                                            (0xffU 
                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                   >> 0x18U))))
                                            ? 0x78U
                                            : ((0xc0U 
                                                == 
                                                (0xffU 
                                                 & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                     << 8U) 
                                                    | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                       >> 0x18U))))
                                                ? 0xbaU
                                                : (
                                                   (0xbfU 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                         << 8U) 
                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                           >> 0x18U))))
                                                    ? 8U
                                                    : 
                                                   ((0xbeU 
                                                     == 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                          << 8U) 
                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                            >> 0x18U))))
                                                     ? 0xaeU
                                                     : 
                                                    ((0xbdU 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                           << 8U) 
                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                             >> 0x18U))))
                                                      ? 0x7aU
                                                      : 
                                                     ((0xbcU 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                            << 8U) 
                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                              >> 0x18U))))
                                                       ? 0x65U
                                                       : 
                                                      ((0xbbU 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                             << 8U) 
                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                               >> 0x18U))))
                                                        ? 0xeaU
                                                        : 
                                                       ((0xbaU 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                              << 8U) 
                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                >> 0x18U))))
                                                         ? 0xf4U
                                                         : 
                                                        ((0xb9U 
                                                          == 
                                                          (0xffU 
                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                               << 8U) 
                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                 >> 0x18U))))
                                                          ? 0x56U
                                                          : 
                                                         ((0xb8U 
                                                           == 
                                                           (0xffU 
                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                << 8U) 
                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                  >> 0x18U))))
                                                           ? 0x6cU
                                                           : 
                                                          ((0xb7U 
                                                            == 
                                                            (0xffU 
                                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                 << 8U) 
                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                   >> 0x18U))))
                                                            ? 0xa9U
                                                            : (IData)(this->__PVT___GEN_2230))))))))))))));
    this->__PVT___GEN_2499 = ((0xc3U == (0xffU & ((
                                                   vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                   << 0x10U) 
                                                  | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                     >> 0x10U))))
                               ? 0x2eU : ((0xc2U == 
                                           (0xffU & 
                                            ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                              << 0x10U) 
                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                >> 0x10U))))
                                           ? 0x25U : 
                                          ((0xc1U == 
                                            (0xffU 
                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                   >> 0x10U))))
                                            ? 0x78U
                                            : ((0xc0U 
                                                == 
                                                (0xffU 
                                                 & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                     << 0x10U) 
                                                    | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                       >> 0x10U))))
                                                ? 0xbaU
                                                : (
                                                   (0xbfU 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                         << 0x10U) 
                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                           >> 0x10U))))
                                                    ? 8U
                                                    : 
                                                   ((0xbeU 
                                                     == 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                          << 0x10U) 
                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                            >> 0x10U))))
                                                     ? 0xaeU
                                                     : 
                                                    ((0xbdU 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                           << 0x10U) 
                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                             >> 0x10U))))
                                                      ? 0x7aU
                                                      : 
                                                     ((0xbcU 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                            << 0x10U) 
                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                              >> 0x10U))))
                                                       ? 0x65U
                                                       : 
                                                      ((0xbbU 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                             << 0x10U) 
                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                               >> 0x10U))))
                                                        ? 0xeaU
                                                        : 
                                                       ((0xbaU 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                              << 0x10U) 
                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                >> 0x10U))))
                                                         ? 0xf4U
                                                         : 
                                                        ((0xb9U 
                                                          == 
                                                          (0xffU 
                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                               << 0x10U) 
                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                 >> 0x10U))))
                                                          ? 0x56U
                                                          : 
                                                         ((0xb8U 
                                                           == 
                                                           (0xffU 
                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                << 0x10U) 
                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                  >> 0x10U))))
                                                           ? 0x6cU
                                                           : 
                                                          ((0xb7U 
                                                            == 
                                                            (0xffU 
                                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                 << 0x10U) 
                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                   >> 0x10U))))
                                                            ? 0xa9U
                                                            : (IData)(this->__PVT___GEN_2486))))))))))))));
    this->__PVT___GEN_2755 = ((0xc3U == (0xffU & ((
                                                   vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                   << 0x18U) 
                                                  | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                     >> 8U))))
                               ? 0x2eU : ((0xc2U == 
                                           (0xffU & 
                                            ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                              << 0x18U) 
                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                >> 8U))))
                                           ? 0x25U : 
                                          ((0xc1U == 
                                            (0xffU 
                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                 << 0x18U) 
                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                   >> 8U))))
                                            ? 0x78U
                                            : ((0xc0U 
                                                == 
                                                (0xffU 
                                                 & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                     << 0x18U) 
                                                    | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                       >> 8U))))
                                                ? 0xbaU
                                                : (
                                                   (0xbfU 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                         << 0x18U) 
                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                           >> 8U))))
                                                    ? 8U
                                                    : 
                                                   ((0xbeU 
                                                     == 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                          << 0x18U) 
                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                            >> 8U))))
                                                     ? 0xaeU
                                                     : 
                                                    ((0xbdU 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                           << 0x18U) 
                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                             >> 8U))))
                                                      ? 0x7aU
                                                      : 
                                                     ((0xbcU 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                            << 0x18U) 
                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                              >> 8U))))
                                                       ? 0x65U
                                                       : 
                                                      ((0xbbU 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                             << 0x18U) 
                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                               >> 8U))))
                                                        ? 0xeaU
                                                        : 
                                                       ((0xbaU 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                              << 0x18U) 
                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                >> 8U))))
                                                         ? 0xf4U
                                                         : 
                                                        ((0xb9U 
                                                          == 
                                                          (0xffU 
                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                               << 0x18U) 
                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                 >> 8U))))
                                                          ? 0x56U
                                                          : 
                                                         ((0xb8U 
                                                           == 
                                                           (0xffU 
                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                << 0x18U) 
                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                  >> 8U))))
                                                           ? 0x6cU
                                                           : 
                                                          ((0xb7U 
                                                            == 
                                                            (0xffU 
                                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                 << 0x18U) 
                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                   >> 8U))))
                                                            ? 0xa9U
                                                            : (IData)(this->__PVT___GEN_2742))))))))))))));
    this->__PVT___GEN_3011 = ((0xc3U == (0xffU & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                               ? 0x2eU : ((0xc2U == 
                                           (0xffU & 
                                            vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                           ? 0x25U : 
                                          ((0xc1U == 
                                            (0xffU 
                                             & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                            ? 0x78U
                                            : ((0xc0U 
                                                == 
                                                (0xffU 
                                                 & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                ? 0xbaU
                                                : (
                                                   (0xbfU 
                                                    == 
                                                    (0xffU 
                                                     & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                    ? 8U
                                                    : 
                                                   ((0xbeU 
                                                     == 
                                                     (0xffU 
                                                      & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                     ? 0xaeU
                                                     : 
                                                    ((0xbdU 
                                                      == 
                                                      (0xffU 
                                                       & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                      ? 0x7aU
                                                      : 
                                                     ((0xbcU 
                                                       == 
                                                       (0xffU 
                                                        & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                       ? 0x65U
                                                       : 
                                                      ((0xbbU 
                                                        == 
                                                        (0xffU 
                                                         & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                        ? 0xeaU
                                                        : 
                                                       ((0xbaU 
                                                         == 
                                                         (0xffU 
                                                          & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                         ? 0xf4U
                                                         : 
                                                        ((0xb9U 
                                                          == 
                                                          (0xffU 
                                                           & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                          ? 0x56U
                                                          : 
                                                         ((0xb8U 
                                                           == 
                                                           (0xffU 
                                                            & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                           ? 0x6cU
                                                           : 
                                                          ((0xb7U 
                                                            == 
                                                            (0xffU 
                                                             & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                            ? 0xa9U
                                                            : (IData)(this->__PVT___GEN_2998))))))))))))));
    this->__PVT___GEN_3267 = ((0xc3U == (0xffU & ((
                                                   vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                     >> 0x18U))))
                               ? 0x2eU : ((0xc2U == 
                                           (0xffU & 
                                            ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                              << 8U) 
                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                >> 0x18U))))
                                           ? 0x25U : 
                                          ((0xc1U == 
                                            (0xffU 
                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                   >> 0x18U))))
                                            ? 0x78U
                                            : ((0xc0U 
                                                == 
                                                (0xffU 
                                                 & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                     << 8U) 
                                                    | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                       >> 0x18U))))
                                                ? 0xbaU
                                                : (
                                                   (0xbfU 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                         << 8U) 
                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                           >> 0x18U))))
                                                    ? 8U
                                                    : 
                                                   ((0xbeU 
                                                     == 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                          << 8U) 
                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                            >> 0x18U))))
                                                     ? 0xaeU
                                                     : 
                                                    ((0xbdU 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                           << 8U) 
                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                             >> 0x18U))))
                                                      ? 0x7aU
                                                      : 
                                                     ((0xbcU 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                            << 8U) 
                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                              >> 0x18U))))
                                                       ? 0x65U
                                                       : 
                                                      ((0xbbU 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                             << 8U) 
                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                               >> 0x18U))))
                                                        ? 0xeaU
                                                        : 
                                                       ((0xbaU 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                              << 8U) 
                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                >> 0x18U))))
                                                         ? 0xf4U
                                                         : 
                                                        ((0xb9U 
                                                          == 
                                                          (0xffU 
                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                               << 8U) 
                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                 >> 0x18U))))
                                                          ? 0x56U
                                                          : 
                                                         ((0xb8U 
                                                           == 
                                                           (0xffU 
                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                << 8U) 
                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                  >> 0x18U))))
                                                           ? 0x6cU
                                                           : 
                                                          ((0xb7U 
                                                            == 
                                                            (0xffU 
                                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                 << 8U) 
                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                   >> 0x18U))))
                                                            ? 0xa9U
                                                            : (IData)(this->__PVT___GEN_3254))))))))))))));
    this->__PVT___GEN_3523 = ((0xc3U == (0xffU & ((
                                                   vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                   << 0x10U) 
                                                  | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                     >> 0x10U))))
                               ? 0x2eU : ((0xc2U == 
                                           (0xffU & 
                                            ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                              << 0x10U) 
                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                >> 0x10U))))
                                           ? 0x25U : 
                                          ((0xc1U == 
                                            (0xffU 
                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                   >> 0x10U))))
                                            ? 0x78U
                                            : ((0xc0U 
                                                == 
                                                (0xffU 
                                                 & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                     << 0x10U) 
                                                    | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                       >> 0x10U))))
                                                ? 0xbaU
                                                : (
                                                   (0xbfU 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                         << 0x10U) 
                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                           >> 0x10U))))
                                                    ? 8U
                                                    : 
                                                   ((0xbeU 
                                                     == 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                          << 0x10U) 
                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                            >> 0x10U))))
                                                     ? 0xaeU
                                                     : 
                                                    ((0xbdU 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                           << 0x10U) 
                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                             >> 0x10U))))
                                                      ? 0x7aU
                                                      : 
                                                     ((0xbcU 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                            << 0x10U) 
                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                              >> 0x10U))))
                                                       ? 0x65U
                                                       : 
                                                      ((0xbbU 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                             << 0x10U) 
                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                               >> 0x10U))))
                                                        ? 0xeaU
                                                        : 
                                                       ((0xbaU 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                              << 0x10U) 
                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                >> 0x10U))))
                                                         ? 0xf4U
                                                         : 
                                                        ((0xb9U 
                                                          == 
                                                          (0xffU 
                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                               << 0x10U) 
                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                 >> 0x10U))))
                                                          ? 0x56U
                                                          : 
                                                         ((0xb8U 
                                                           == 
                                                           (0xffU 
                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                << 0x10U) 
                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                  >> 0x10U))))
                                                           ? 0x6cU
                                                           : 
                                                          ((0xb7U 
                                                            == 
                                                            (0xffU 
                                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                 << 0x10U) 
                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                   >> 0x10U))))
                                                            ? 0xa9U
                                                            : (IData)(this->__PVT___GEN_3510))))))))))))));
    this->__PVT___GEN_3779 = ((0xc3U == (0xffU & ((
                                                   vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                   << 0x18U) 
                                                  | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                     >> 8U))))
                               ? 0x2eU : ((0xc2U == 
                                           (0xffU & 
                                            ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                              << 0x18U) 
                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                >> 8U))))
                                           ? 0x25U : 
                                          ((0xc1U == 
                                            (0xffU 
                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                 << 0x18U) 
                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                   >> 8U))))
                                            ? 0x78U
                                            : ((0xc0U 
                                                == 
                                                (0xffU 
                                                 & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                     << 0x18U) 
                                                    | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                       >> 8U))))
                                                ? 0xbaU
                                                : (
                                                   (0xbfU 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                         << 0x18U) 
                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                           >> 8U))))
                                                    ? 8U
                                                    : 
                                                   ((0xbeU 
                                                     == 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                          << 0x18U) 
                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                            >> 8U))))
                                                     ? 0xaeU
                                                     : 
                                                    ((0xbdU 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                           << 0x18U) 
                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                             >> 8U))))
                                                      ? 0x7aU
                                                      : 
                                                     ((0xbcU 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                            << 0x18U) 
                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                              >> 8U))))
                                                       ? 0x65U
                                                       : 
                                                      ((0xbbU 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                             << 0x18U) 
                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                               >> 8U))))
                                                        ? 0xeaU
                                                        : 
                                                       ((0xbaU 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                              << 0x18U) 
                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                >> 8U))))
                                                         ? 0xf4U
                                                         : 
                                                        ((0xb9U 
                                                          == 
                                                          (0xffU 
                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                               << 0x18U) 
                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                 >> 8U))))
                                                          ? 0x56U
                                                          : 
                                                         ((0xb8U 
                                                           == 
                                                           (0xffU 
                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                << 0x18U) 
                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                  >> 8U))))
                                                           ? 0x6cU
                                                           : 
                                                          ((0xb7U 
                                                            == 
                                                            (0xffU 
                                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                 << 0x18U) 
                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                   >> 8U))))
                                                            ? 0xa9U
                                                            : (IData)(this->__PVT___GEN_3766))))))))))))));
    this->__PVT___GEN_4035 = ((0xc3U == (0xffU & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                               ? 0x2eU : ((0xc2U == 
                                           (0xffU & 
                                            vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                           ? 0x25U : 
                                          ((0xc1U == 
                                            (0xffU 
                                             & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                            ? 0x78U
                                            : ((0xc0U 
                                                == 
                                                (0xffU 
                                                 & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                ? 0xbaU
                                                : (
                                                   (0xbfU 
                                                    == 
                                                    (0xffU 
                                                     & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                    ? 8U
                                                    : 
                                                   ((0xbeU 
                                                     == 
                                                     (0xffU 
                                                      & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                     ? 0xaeU
                                                     : 
                                                    ((0xbdU 
                                                      == 
                                                      (0xffU 
                                                       & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                      ? 0x7aU
                                                      : 
                                                     ((0xbcU 
                                                       == 
                                                       (0xffU 
                                                        & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                       ? 0x65U
                                                       : 
                                                      ((0xbbU 
                                                        == 
                                                        (0xffU 
                                                         & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                        ? 0xeaU
                                                        : 
                                                       ((0xbaU 
                                                         == 
                                                         (0xffU 
                                                          & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                         ? 0xf4U
                                                         : 
                                                        ((0xb9U 
                                                          == 
                                                          (0xffU 
                                                           & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                          ? 0x56U
                                                          : 
                                                         ((0xb8U 
                                                           == 
                                                           (0xffU 
                                                            & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                           ? 0x6cU
                                                           : 
                                                          ((0xb7U 
                                                            == 
                                                            (0xffU 
                                                             & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                            ? 0xa9U
                                                            : (IData)(this->__PVT___GEN_4022))))))))))))));
    this->__PVT___GEN_208 = ((0xd0U == (0xffU & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                 >> 0x18U)))
                              ? 0x70U : ((0xcfU == 
                                          (0xffU & 
                                           (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                            >> 0x18U)))
                                          ? 0x8aU : 
                                         ((0xceU == 
                                           (0xffU & 
                                            (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                             >> 0x18U)))
                                           ? 0x8bU : 
                                          ((0xcdU == 
                                            (0xffU 
                                             & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                >> 0x18U)))
                                            ? 0xbdU
                                            : ((0xccU 
                                                == 
                                                (0xffU 
                                                 & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                    >> 0x18U)))
                                                ? 0x4bU
                                                : (
                                                   (0xcbU 
                                                    == 
                                                    (0xffU 
                                                     & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                        >> 0x18U)))
                                                    ? 0x1fU
                                                    : 
                                                   ((0xcaU 
                                                     == 
                                                     (0xffU 
                                                      & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                         >> 0x18U)))
                                                     ? 0x74U
                                                     : 
                                                    ((0xc9U 
                                                      == 
                                                      (0xffU 
                                                       & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                          >> 0x18U)))
                                                      ? 0xddU
                                                      : 
                                                     ((0xc8U 
                                                       == 
                                                       (0xffU 
                                                        & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                           >> 0x18U)))
                                                       ? 0xe8U
                                                       : 
                                                      ((0xc7U 
                                                        == 
                                                        (0xffU 
                                                         & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                            >> 0x18U)))
                                                        ? 0xc6U
                                                        : 
                                                       ((0xc6U 
                                                         == 
                                                         (0xffU 
                                                          & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                             >> 0x18U)))
                                                         ? 0xb4U
                                                         : 
                                                        ((0xc5U 
                                                          == 
                                                          (0xffU 
                                                           & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                              >> 0x18U)))
                                                          ? 0xa6U
                                                          : 
                                                         ((0xc4U 
                                                           == 
                                                           (0xffU 
                                                            & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                               >> 0x18U)))
                                                           ? 0x1cU
                                                           : (IData)(this->__PVT___GEN_195))))))))))))));
    this->__PVT___GEN_464 = ((0xd0U == (0xffU & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                 >> 0x10U)))
                              ? 0x70U : ((0xcfU == 
                                          (0xffU & 
                                           (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                            >> 0x10U)))
                                          ? 0x8aU : 
                                         ((0xceU == 
                                           (0xffU & 
                                            (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                             >> 0x10U)))
                                           ? 0x8bU : 
                                          ((0xcdU == 
                                            (0xffU 
                                             & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                >> 0x10U)))
                                            ? 0xbdU
                                            : ((0xccU 
                                                == 
                                                (0xffU 
                                                 & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                    >> 0x10U)))
                                                ? 0x4bU
                                                : (
                                                   (0xcbU 
                                                    == 
                                                    (0xffU 
                                                     & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                        >> 0x10U)))
                                                    ? 0x1fU
                                                    : 
                                                   ((0xcaU 
                                                     == 
                                                     (0xffU 
                                                      & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                         >> 0x10U)))
                                                     ? 0x74U
                                                     : 
                                                    ((0xc9U 
                                                      == 
                                                      (0xffU 
                                                       & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                          >> 0x10U)))
                                                      ? 0xddU
                                                      : 
                                                     ((0xc8U 
                                                       == 
                                                       (0xffU 
                                                        & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                           >> 0x10U)))
                                                       ? 0xe8U
                                                       : 
                                                      ((0xc7U 
                                                        == 
                                                        (0xffU 
                                                         & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                            >> 0x10U)))
                                                        ? 0xc6U
                                                        : 
                                                       ((0xc6U 
                                                         == 
                                                         (0xffU 
                                                          & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                             >> 0x10U)))
                                                         ? 0xb4U
                                                         : 
                                                        ((0xc5U 
                                                          == 
                                                          (0xffU 
                                                           & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                              >> 0x10U)))
                                                          ? 0xa6U
                                                          : 
                                                         ((0xc4U 
                                                           == 
                                                           (0xffU 
                                                            & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                               >> 0x10U)))
                                                           ? 0x1cU
                                                           : (IData)(this->__PVT___GEN_451))))))))))))));
    this->__PVT___GEN_720 = ((0xd0U == (0xffU & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                 >> 8U)))
                              ? 0x70U : ((0xcfU == 
                                          (0xffU & 
                                           (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                            >> 8U)))
                                          ? 0x8aU : 
                                         ((0xceU == 
                                           (0xffU & 
                                            (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                             >> 8U)))
                                           ? 0x8bU : 
                                          ((0xcdU == 
                                            (0xffU 
                                             & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                >> 8U)))
                                            ? 0xbdU
                                            : ((0xccU 
                                                == 
                                                (0xffU 
                                                 & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                    >> 8U)))
                                                ? 0x4bU
                                                : (
                                                   (0xcbU 
                                                    == 
                                                    (0xffU 
                                                     & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                        >> 8U)))
                                                    ? 0x1fU
                                                    : 
                                                   ((0xcaU 
                                                     == 
                                                     (0xffU 
                                                      & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                         >> 8U)))
                                                     ? 0x74U
                                                     : 
                                                    ((0xc9U 
                                                      == 
                                                      (0xffU 
                                                       & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                          >> 8U)))
                                                      ? 0xddU
                                                      : 
                                                     ((0xc8U 
                                                       == 
                                                       (0xffU 
                                                        & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                           >> 8U)))
                                                       ? 0xe8U
                                                       : 
                                                      ((0xc7U 
                                                        == 
                                                        (0xffU 
                                                         & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                            >> 8U)))
                                                        ? 0xc6U
                                                        : 
                                                       ((0xc6U 
                                                         == 
                                                         (0xffU 
                                                          & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                             >> 8U)))
                                                         ? 0xb4U
                                                         : 
                                                        ((0xc5U 
                                                          == 
                                                          (0xffU 
                                                           & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                              >> 8U)))
                                                          ? 0xa6U
                                                          : 
                                                         ((0xc4U 
                                                           == 
                                                           (0xffU 
                                                            & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                               >> 8U)))
                                                           ? 0x1cU
                                                           : (IData)(this->__PVT___GEN_707))))))))))))));
    this->__PVT___GEN_976 = ((0xd0U == (0xffU & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                              ? 0x70U : ((0xcfU == 
                                          (0xffU & 
                                           vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                          ? 0x8aU : 
                                         ((0xceU == 
                                           (0xffU & 
                                            vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                           ? 0x8bU : 
                                          ((0xcdU == 
                                            (0xffU 
                                             & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                            ? 0xbdU
                                            : ((0xccU 
                                                == 
                                                (0xffU 
                                                 & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                ? 0x4bU
                                                : (
                                                   (0xcbU 
                                                    == 
                                                    (0xffU 
                                                     & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                    ? 0x1fU
                                                    : 
                                                   ((0xcaU 
                                                     == 
                                                     (0xffU 
                                                      & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                     ? 0x74U
                                                     : 
                                                    ((0xc9U 
                                                      == 
                                                      (0xffU 
                                                       & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                      ? 0xddU
                                                      : 
                                                     ((0xc8U 
                                                       == 
                                                       (0xffU 
                                                        & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                       ? 0xe8U
                                                       : 
                                                      ((0xc7U 
                                                        == 
                                                        (0xffU 
                                                         & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                        ? 0xc6U
                                                        : 
                                                       ((0xc6U 
                                                         == 
                                                         (0xffU 
                                                          & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                         ? 0xb4U
                                                         : 
                                                        ((0xc5U 
                                                          == 
                                                          (0xffU 
                                                           & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                          ? 0xa6U
                                                          : 
                                                         ((0xc4U 
                                                           == 
                                                           (0xffU 
                                                            & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                           ? 0x1cU
                                                           : (IData)(this->__PVT___GEN_963))))))))))))));
    this->__PVT___GEN_1232 = ((0xd0U == (0xffU & ((
                                                   vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                     >> 0x18U))))
                               ? 0x70U : ((0xcfU == 
                                           (0xffU & 
                                            ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                              << 8U) 
                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                >> 0x18U))))
                                           ? 0x8aU : 
                                          ((0xceU == 
                                            (0xffU 
                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                   >> 0x18U))))
                                            ? 0x8bU
                                            : ((0xcdU 
                                                == 
                                                (0xffU 
                                                 & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                     << 8U) 
                                                    | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                       >> 0x18U))))
                                                ? 0xbdU
                                                : (
                                                   (0xccU 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                         << 8U) 
                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                           >> 0x18U))))
                                                    ? 0x4bU
                                                    : 
                                                   ((0xcbU 
                                                     == 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                          << 8U) 
                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                            >> 0x18U))))
                                                     ? 0x1fU
                                                     : 
                                                    ((0xcaU 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                           << 8U) 
                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                             >> 0x18U))))
                                                      ? 0x74U
                                                      : 
                                                     ((0xc9U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                            << 8U) 
                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                              >> 0x18U))))
                                                       ? 0xddU
                                                       : 
                                                      ((0xc8U 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                             << 8U) 
                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                               >> 0x18U))))
                                                        ? 0xe8U
                                                        : 
                                                       ((0xc7U 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                              << 8U) 
                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                >> 0x18U))))
                                                         ? 0xc6U
                                                         : 
                                                        ((0xc6U 
                                                          == 
                                                          (0xffU 
                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                               << 8U) 
                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                 >> 0x18U))))
                                                          ? 0xb4U
                                                          : 
                                                         ((0xc5U 
                                                           == 
                                                           (0xffU 
                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                << 8U) 
                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                  >> 0x18U))))
                                                           ? 0xa6U
                                                           : 
                                                          ((0xc4U 
                                                            == 
                                                            (0xffU 
                                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                 << 8U) 
                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                   >> 0x18U))))
                                                            ? 0x1cU
                                                            : (IData)(this->__PVT___GEN_1219))))))))))))));
    this->__PVT___GEN_1488 = ((0xd0U == (0xffU & ((
                                                   vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                   << 0x10U) 
                                                  | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                     >> 0x10U))))
                               ? 0x70U : ((0xcfU == 
                                           (0xffU & 
                                            ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                              << 0x10U) 
                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                >> 0x10U))))
                                           ? 0x8aU : 
                                          ((0xceU == 
                                            (0xffU 
                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                   >> 0x10U))))
                                            ? 0x8bU
                                            : ((0xcdU 
                                                == 
                                                (0xffU 
                                                 & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                     << 0x10U) 
                                                    | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                       >> 0x10U))))
                                                ? 0xbdU
                                                : (
                                                   (0xccU 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                         << 0x10U) 
                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                           >> 0x10U))))
                                                    ? 0x4bU
                                                    : 
                                                   ((0xcbU 
                                                     == 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                          << 0x10U) 
                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                            >> 0x10U))))
                                                     ? 0x1fU
                                                     : 
                                                    ((0xcaU 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                           << 0x10U) 
                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                             >> 0x10U))))
                                                      ? 0x74U
                                                      : 
                                                     ((0xc9U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                            << 0x10U) 
                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                              >> 0x10U))))
                                                       ? 0xddU
                                                       : 
                                                      ((0xc8U 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                             << 0x10U) 
                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                               >> 0x10U))))
                                                        ? 0xe8U
                                                        : 
                                                       ((0xc7U 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                              << 0x10U) 
                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                >> 0x10U))))
                                                         ? 0xc6U
                                                         : 
                                                        ((0xc6U 
                                                          == 
                                                          (0xffU 
                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                               << 0x10U) 
                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                 >> 0x10U))))
                                                          ? 0xb4U
                                                          : 
                                                         ((0xc5U 
                                                           == 
                                                           (0xffU 
                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                << 0x10U) 
                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                  >> 0x10U))))
                                                           ? 0xa6U
                                                           : 
                                                          ((0xc4U 
                                                            == 
                                                            (0xffU 
                                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                 << 0x10U) 
                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                   >> 0x10U))))
                                                            ? 0x1cU
                                                            : (IData)(this->__PVT___GEN_1475))))))))))))));
    this->__PVT___GEN_1744 = ((0xd0U == (0xffU & ((
                                                   vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                   << 0x18U) 
                                                  | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                     >> 8U))))
                               ? 0x70U : ((0xcfU == 
                                           (0xffU & 
                                            ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                              << 0x18U) 
                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                >> 8U))))
                                           ? 0x8aU : 
                                          ((0xceU == 
                                            (0xffU 
                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                 << 0x18U) 
                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                   >> 8U))))
                                            ? 0x8bU
                                            : ((0xcdU 
                                                == 
                                                (0xffU 
                                                 & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                     << 0x18U) 
                                                    | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                       >> 8U))))
                                                ? 0xbdU
                                                : (
                                                   (0xccU 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                         << 0x18U) 
                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                           >> 8U))))
                                                    ? 0x4bU
                                                    : 
                                                   ((0xcbU 
                                                     == 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                          << 0x18U) 
                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                            >> 8U))))
                                                     ? 0x1fU
                                                     : 
                                                    ((0xcaU 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                           << 0x18U) 
                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                             >> 8U))))
                                                      ? 0x74U
                                                      : 
                                                     ((0xc9U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                            << 0x18U) 
                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                              >> 8U))))
                                                       ? 0xddU
                                                       : 
                                                      ((0xc8U 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                             << 0x18U) 
                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                               >> 8U))))
                                                        ? 0xe8U
                                                        : 
                                                       ((0xc7U 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                              << 0x18U) 
                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                >> 8U))))
                                                         ? 0xc6U
                                                         : 
                                                        ((0xc6U 
                                                          == 
                                                          (0xffU 
                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                               << 0x18U) 
                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                 >> 8U))))
                                                          ? 0xb4U
                                                          : 
                                                         ((0xc5U 
                                                           == 
                                                           (0xffU 
                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                << 0x18U) 
                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                  >> 8U))))
                                                           ? 0xa6U
                                                           : 
                                                          ((0xc4U 
                                                            == 
                                                            (0xffU 
                                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                 << 0x18U) 
                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                   >> 8U))))
                                                            ? 0x1cU
                                                            : (IData)(this->__PVT___GEN_1731))))))))))))));
    this->__PVT___GEN_2000 = ((0xd0U == (0xffU & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                               ? 0x70U : ((0xcfU == 
                                           (0xffU & 
                                            vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                           ? 0x8aU : 
                                          ((0xceU == 
                                            (0xffU 
                                             & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                            ? 0x8bU
                                            : ((0xcdU 
                                                == 
                                                (0xffU 
                                                 & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                ? 0xbdU
                                                : (
                                                   (0xccU 
                                                    == 
                                                    (0xffU 
                                                     & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                    ? 0x4bU
                                                    : 
                                                   ((0xcbU 
                                                     == 
                                                     (0xffU 
                                                      & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                     ? 0x1fU
                                                     : 
                                                    ((0xcaU 
                                                      == 
                                                      (0xffU 
                                                       & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                      ? 0x74U
                                                      : 
                                                     ((0xc9U 
                                                       == 
                                                       (0xffU 
                                                        & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                       ? 0xddU
                                                       : 
                                                      ((0xc8U 
                                                        == 
                                                        (0xffU 
                                                         & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                        ? 0xe8U
                                                        : 
                                                       ((0xc7U 
                                                         == 
                                                         (0xffU 
                                                          & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                         ? 0xc6U
                                                         : 
                                                        ((0xc6U 
                                                          == 
                                                          (0xffU 
                                                           & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                          ? 0xb4U
                                                          : 
                                                         ((0xc5U 
                                                           == 
                                                           (0xffU 
                                                            & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                           ? 0xa6U
                                                           : 
                                                          ((0xc4U 
                                                            == 
                                                            (0xffU 
                                                             & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                            ? 0x1cU
                                                            : (IData)(this->__PVT___GEN_1987))))))))))))));
    this->__PVT___GEN_2256 = ((0xd0U == (0xffU & ((
                                                   vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                     >> 0x18U))))
                               ? 0x70U : ((0xcfU == 
                                           (0xffU & 
                                            ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                              << 8U) 
                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                >> 0x18U))))
                                           ? 0x8aU : 
                                          ((0xceU == 
                                            (0xffU 
                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                   >> 0x18U))))
                                            ? 0x8bU
                                            : ((0xcdU 
                                                == 
                                                (0xffU 
                                                 & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                     << 8U) 
                                                    | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                       >> 0x18U))))
                                                ? 0xbdU
                                                : (
                                                   (0xccU 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                         << 8U) 
                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                           >> 0x18U))))
                                                    ? 0x4bU
                                                    : 
                                                   ((0xcbU 
                                                     == 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                          << 8U) 
                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                            >> 0x18U))))
                                                     ? 0x1fU
                                                     : 
                                                    ((0xcaU 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                           << 8U) 
                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                             >> 0x18U))))
                                                      ? 0x74U
                                                      : 
                                                     ((0xc9U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                            << 8U) 
                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                              >> 0x18U))))
                                                       ? 0xddU
                                                       : 
                                                      ((0xc8U 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                             << 8U) 
                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                               >> 0x18U))))
                                                        ? 0xe8U
                                                        : 
                                                       ((0xc7U 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                              << 8U) 
                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                >> 0x18U))))
                                                         ? 0xc6U
                                                         : 
                                                        ((0xc6U 
                                                          == 
                                                          (0xffU 
                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                               << 8U) 
                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                 >> 0x18U))))
                                                          ? 0xb4U
                                                          : 
                                                         ((0xc5U 
                                                           == 
                                                           (0xffU 
                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                << 8U) 
                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                  >> 0x18U))))
                                                           ? 0xa6U
                                                           : 
                                                          ((0xc4U 
                                                            == 
                                                            (0xffU 
                                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                 << 8U) 
                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                   >> 0x18U))))
                                                            ? 0x1cU
                                                            : (IData)(this->__PVT___GEN_2243))))))))))))));
    this->__PVT___GEN_2512 = ((0xd0U == (0xffU & ((
                                                   vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                   << 0x10U) 
                                                  | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                     >> 0x10U))))
                               ? 0x70U : ((0xcfU == 
                                           (0xffU & 
                                            ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                              << 0x10U) 
                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                >> 0x10U))))
                                           ? 0x8aU : 
                                          ((0xceU == 
                                            (0xffU 
                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                   >> 0x10U))))
                                            ? 0x8bU
                                            : ((0xcdU 
                                                == 
                                                (0xffU 
                                                 & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                     << 0x10U) 
                                                    | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                       >> 0x10U))))
                                                ? 0xbdU
                                                : (
                                                   (0xccU 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                         << 0x10U) 
                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                           >> 0x10U))))
                                                    ? 0x4bU
                                                    : 
                                                   ((0xcbU 
                                                     == 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                          << 0x10U) 
                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                            >> 0x10U))))
                                                     ? 0x1fU
                                                     : 
                                                    ((0xcaU 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                           << 0x10U) 
                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                             >> 0x10U))))
                                                      ? 0x74U
                                                      : 
                                                     ((0xc9U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                            << 0x10U) 
                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                              >> 0x10U))))
                                                       ? 0xddU
                                                       : 
                                                      ((0xc8U 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                             << 0x10U) 
                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                               >> 0x10U))))
                                                        ? 0xe8U
                                                        : 
                                                       ((0xc7U 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                              << 0x10U) 
                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                >> 0x10U))))
                                                         ? 0xc6U
                                                         : 
                                                        ((0xc6U 
                                                          == 
                                                          (0xffU 
                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                               << 0x10U) 
                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                 >> 0x10U))))
                                                          ? 0xb4U
                                                          : 
                                                         ((0xc5U 
                                                           == 
                                                           (0xffU 
                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                << 0x10U) 
                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                  >> 0x10U))))
                                                           ? 0xa6U
                                                           : 
                                                          ((0xc4U 
                                                            == 
                                                            (0xffU 
                                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                 << 0x10U) 
                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                   >> 0x10U))))
                                                            ? 0x1cU
                                                            : (IData)(this->__PVT___GEN_2499))))))))))))));
    this->__PVT___GEN_2768 = ((0xd0U == (0xffU & ((
                                                   vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                   << 0x18U) 
                                                  | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                     >> 8U))))
                               ? 0x70U : ((0xcfU == 
                                           (0xffU & 
                                            ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                              << 0x18U) 
                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                >> 8U))))
                                           ? 0x8aU : 
                                          ((0xceU == 
                                            (0xffU 
                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                 << 0x18U) 
                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                   >> 8U))))
                                            ? 0x8bU
                                            : ((0xcdU 
                                                == 
                                                (0xffU 
                                                 & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                     << 0x18U) 
                                                    | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                       >> 8U))))
                                                ? 0xbdU
                                                : (
                                                   (0xccU 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                         << 0x18U) 
                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                           >> 8U))))
                                                    ? 0x4bU
                                                    : 
                                                   ((0xcbU 
                                                     == 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                          << 0x18U) 
                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                            >> 8U))))
                                                     ? 0x1fU
                                                     : 
                                                    ((0xcaU 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                           << 0x18U) 
                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                             >> 8U))))
                                                      ? 0x74U
                                                      : 
                                                     ((0xc9U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                            << 0x18U) 
                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                              >> 8U))))
                                                       ? 0xddU
                                                       : 
                                                      ((0xc8U 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                             << 0x18U) 
                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                               >> 8U))))
                                                        ? 0xe8U
                                                        : 
                                                       ((0xc7U 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                              << 0x18U) 
                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                >> 8U))))
                                                         ? 0xc6U
                                                         : 
                                                        ((0xc6U 
                                                          == 
                                                          (0xffU 
                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                               << 0x18U) 
                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                 >> 8U))))
                                                          ? 0xb4U
                                                          : 
                                                         ((0xc5U 
                                                           == 
                                                           (0xffU 
                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                << 0x18U) 
                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                  >> 8U))))
                                                           ? 0xa6U
                                                           : 
                                                          ((0xc4U 
                                                            == 
                                                            (0xffU 
                                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                 << 0x18U) 
                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                   >> 8U))))
                                                            ? 0x1cU
                                                            : (IData)(this->__PVT___GEN_2755))))))))))))));
    this->__PVT___GEN_3024 = ((0xd0U == (0xffU & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                               ? 0x70U : ((0xcfU == 
                                           (0xffU & 
                                            vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                           ? 0x8aU : 
                                          ((0xceU == 
                                            (0xffU 
                                             & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                            ? 0x8bU
                                            : ((0xcdU 
                                                == 
                                                (0xffU 
                                                 & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                ? 0xbdU
                                                : (
                                                   (0xccU 
                                                    == 
                                                    (0xffU 
                                                     & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                    ? 0x4bU
                                                    : 
                                                   ((0xcbU 
                                                     == 
                                                     (0xffU 
                                                      & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                     ? 0x1fU
                                                     : 
                                                    ((0xcaU 
                                                      == 
                                                      (0xffU 
                                                       & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                      ? 0x74U
                                                      : 
                                                     ((0xc9U 
                                                       == 
                                                       (0xffU 
                                                        & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                       ? 0xddU
                                                       : 
                                                      ((0xc8U 
                                                        == 
                                                        (0xffU 
                                                         & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                        ? 0xe8U
                                                        : 
                                                       ((0xc7U 
                                                         == 
                                                         (0xffU 
                                                          & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                         ? 0xc6U
                                                         : 
                                                        ((0xc6U 
                                                          == 
                                                          (0xffU 
                                                           & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                          ? 0xb4U
                                                          : 
                                                         ((0xc5U 
                                                           == 
                                                           (0xffU 
                                                            & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                           ? 0xa6U
                                                           : 
                                                          ((0xc4U 
                                                            == 
                                                            (0xffU 
                                                             & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                            ? 0x1cU
                                                            : (IData)(this->__PVT___GEN_3011))))))))))))));
    this->__PVT___GEN_3280 = ((0xd0U == (0xffU & ((
                                                   vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                     >> 0x18U))))
                               ? 0x70U : ((0xcfU == 
                                           (0xffU & 
                                            ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                              << 8U) 
                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                >> 0x18U))))
                                           ? 0x8aU : 
                                          ((0xceU == 
                                            (0xffU 
                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                   >> 0x18U))))
                                            ? 0x8bU
                                            : ((0xcdU 
                                                == 
                                                (0xffU 
                                                 & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                     << 8U) 
                                                    | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                       >> 0x18U))))
                                                ? 0xbdU
                                                : (
                                                   (0xccU 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                         << 8U) 
                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                           >> 0x18U))))
                                                    ? 0x4bU
                                                    : 
                                                   ((0xcbU 
                                                     == 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                          << 8U) 
                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                            >> 0x18U))))
                                                     ? 0x1fU
                                                     : 
                                                    ((0xcaU 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                           << 8U) 
                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                             >> 0x18U))))
                                                      ? 0x74U
                                                      : 
                                                     ((0xc9U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                            << 8U) 
                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                              >> 0x18U))))
                                                       ? 0xddU
                                                       : 
                                                      ((0xc8U 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                             << 8U) 
                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                               >> 0x18U))))
                                                        ? 0xe8U
                                                        : 
                                                       ((0xc7U 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                              << 8U) 
                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                >> 0x18U))))
                                                         ? 0xc6U
                                                         : 
                                                        ((0xc6U 
                                                          == 
                                                          (0xffU 
                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                               << 8U) 
                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                 >> 0x18U))))
                                                          ? 0xb4U
                                                          : 
                                                         ((0xc5U 
                                                           == 
                                                           (0xffU 
                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                << 8U) 
                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                  >> 0x18U))))
                                                           ? 0xa6U
                                                           : 
                                                          ((0xc4U 
                                                            == 
                                                            (0xffU 
                                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                 << 8U) 
                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                   >> 0x18U))))
                                                            ? 0x1cU
                                                            : (IData)(this->__PVT___GEN_3267))))))))))))));
    this->__PVT___GEN_3536 = ((0xd0U == (0xffU & ((
                                                   vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                   << 0x10U) 
                                                  | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                     >> 0x10U))))
                               ? 0x70U : ((0xcfU == 
                                           (0xffU & 
                                            ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                              << 0x10U) 
                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                >> 0x10U))))
                                           ? 0x8aU : 
                                          ((0xceU == 
                                            (0xffU 
                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                   >> 0x10U))))
                                            ? 0x8bU
                                            : ((0xcdU 
                                                == 
                                                (0xffU 
                                                 & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                     << 0x10U) 
                                                    | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                       >> 0x10U))))
                                                ? 0xbdU
                                                : (
                                                   (0xccU 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                         << 0x10U) 
                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                           >> 0x10U))))
                                                    ? 0x4bU
                                                    : 
                                                   ((0xcbU 
                                                     == 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                          << 0x10U) 
                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                            >> 0x10U))))
                                                     ? 0x1fU
                                                     : 
                                                    ((0xcaU 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                           << 0x10U) 
                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                             >> 0x10U))))
                                                      ? 0x74U
                                                      : 
                                                     ((0xc9U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                            << 0x10U) 
                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                              >> 0x10U))))
                                                       ? 0xddU
                                                       : 
                                                      ((0xc8U 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                             << 0x10U) 
                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                               >> 0x10U))))
                                                        ? 0xe8U
                                                        : 
                                                       ((0xc7U 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                              << 0x10U) 
                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                >> 0x10U))))
                                                         ? 0xc6U
                                                         : 
                                                        ((0xc6U 
                                                          == 
                                                          (0xffU 
                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                               << 0x10U) 
                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                 >> 0x10U))))
                                                          ? 0xb4U
                                                          : 
                                                         ((0xc5U 
                                                           == 
                                                           (0xffU 
                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                << 0x10U) 
                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                  >> 0x10U))))
                                                           ? 0xa6U
                                                           : 
                                                          ((0xc4U 
                                                            == 
                                                            (0xffU 
                                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                 << 0x10U) 
                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                   >> 0x10U))))
                                                            ? 0x1cU
                                                            : (IData)(this->__PVT___GEN_3523))))))))))))));
    this->__PVT___GEN_3792 = ((0xd0U == (0xffU & ((
                                                   vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                   << 0x18U) 
                                                  | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                     >> 8U))))
                               ? 0x70U : ((0xcfU == 
                                           (0xffU & 
                                            ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                              << 0x18U) 
                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                >> 8U))))
                                           ? 0x8aU : 
                                          ((0xceU == 
                                            (0xffU 
                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                 << 0x18U) 
                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                   >> 8U))))
                                            ? 0x8bU
                                            : ((0xcdU 
                                                == 
                                                (0xffU 
                                                 & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                     << 0x18U) 
                                                    | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                       >> 8U))))
                                                ? 0xbdU
                                                : (
                                                   (0xccU 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                         << 0x18U) 
                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                           >> 8U))))
                                                    ? 0x4bU
                                                    : 
                                                   ((0xcbU 
                                                     == 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                          << 0x18U) 
                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                            >> 8U))))
                                                     ? 0x1fU
                                                     : 
                                                    ((0xcaU 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                           << 0x18U) 
                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                             >> 8U))))
                                                      ? 0x74U
                                                      : 
                                                     ((0xc9U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                            << 0x18U) 
                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                              >> 8U))))
                                                       ? 0xddU
                                                       : 
                                                      ((0xc8U 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                             << 0x18U) 
                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                               >> 8U))))
                                                        ? 0xe8U
                                                        : 
                                                       ((0xc7U 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                              << 0x18U) 
                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                >> 8U))))
                                                         ? 0xc6U
                                                         : 
                                                        ((0xc6U 
                                                          == 
                                                          (0xffU 
                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                               << 0x18U) 
                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                 >> 8U))))
                                                          ? 0xb4U
                                                          : 
                                                         ((0xc5U 
                                                           == 
                                                           (0xffU 
                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                << 0x18U) 
                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                  >> 8U))))
                                                           ? 0xa6U
                                                           : 
                                                          ((0xc4U 
                                                            == 
                                                            (0xffU 
                                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                 << 0x18U) 
                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                   >> 8U))))
                                                            ? 0x1cU
                                                            : (IData)(this->__PVT___GEN_3779))))))))))))));
    this->__PVT___GEN_4048 = ((0xd0U == (0xffU & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                               ? 0x70U : ((0xcfU == 
                                           (0xffU & 
                                            vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                           ? 0x8aU : 
                                          ((0xceU == 
                                            (0xffU 
                                             & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                            ? 0x8bU
                                            : ((0xcdU 
                                                == 
                                                (0xffU 
                                                 & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                ? 0xbdU
                                                : (
                                                   (0xccU 
                                                    == 
                                                    (0xffU 
                                                     & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                    ? 0x4bU
                                                    : 
                                                   ((0xcbU 
                                                     == 
                                                     (0xffU 
                                                      & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                     ? 0x1fU
                                                     : 
                                                    ((0xcaU 
                                                      == 
                                                      (0xffU 
                                                       & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                      ? 0x74U
                                                      : 
                                                     ((0xc9U 
                                                       == 
                                                       (0xffU 
                                                        & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                       ? 0xddU
                                                       : 
                                                      ((0xc8U 
                                                        == 
                                                        (0xffU 
                                                         & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                        ? 0xe8U
                                                        : 
                                                       ((0xc7U 
                                                         == 
                                                         (0xffU 
                                                          & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                         ? 0xc6U
                                                         : 
                                                        ((0xc6U 
                                                          == 
                                                          (0xffU 
                                                           & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                          ? 0xb4U
                                                          : 
                                                         ((0xc5U 
                                                           == 
                                                           (0xffU 
                                                            & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                           ? 0xa6U
                                                           : 
                                                          ((0xc4U 
                                                            == 
                                                            (0xffU 
                                                             & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                            ? 0x1cU
                                                            : (IData)(this->__PVT___GEN_4035))))))))))))));
    this->__PVT___GEN_221 = ((0xddU == (0xffU & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                 >> 0x18U)))
                              ? 0xc1U : ((0xdcU == 
                                          (0xffU & 
                                           (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                            >> 0x18U)))
                                          ? 0x86U : 
                                         ((0xdbU == 
                                           (0xffU & 
                                            (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                             >> 0x18U)))
                                           ? 0xb9U : 
                                          ((0xdaU == 
                                            (0xffU 
                                             & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                >> 0x18U)))
                                            ? 0x57U
                                            : ((0xd9U 
                                                == 
                                                (0xffU 
                                                 & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                    >> 0x18U)))
                                                ? 0x35U
                                                : (
                                                   (0xd8U 
                                                    == 
                                                    (0xffU 
                                                     & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                        >> 0x18U)))
                                                    ? 0x61U
                                                    : 
                                                   ((0xd7U 
                                                     == 
                                                     (0xffU 
                                                      & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                         >> 0x18U)))
                                                     ? 0xeU
                                                     : 
                                                    ((0xd6U 
                                                      == 
                                                      (0xffU 
                                                       & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                          >> 0x18U)))
                                                      ? 0xf6U
                                                      : 
                                                     ((0xd5U 
                                                       == 
                                                       (0xffU 
                                                        & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                           >> 0x18U)))
                                                       ? 3U
                                                       : 
                                                      ((0xd4U 
                                                        == 
                                                        (0xffU 
                                                         & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                            >> 0x18U)))
                                                        ? 0x48U
                                                        : 
                                                       ((0xd3U 
                                                         == 
                                                         (0xffU 
                                                          & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                             >> 0x18U)))
                                                         ? 0x66U
                                                         : 
                                                        ((0xd2U 
                                                          == 
                                                          (0xffU 
                                                           & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                              >> 0x18U)))
                                                          ? 0xb5U
                                                          : 
                                                         ((0xd1U 
                                                           == 
                                                           (0xffU 
                                                            & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                               >> 0x18U)))
                                                           ? 0x3eU
                                                           : (IData)(this->__PVT___GEN_208))))))))))))));
    this->__PVT___GEN_477 = ((0xddU == (0xffU & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                 >> 0x10U)))
                              ? 0xc1U : ((0xdcU == 
                                          (0xffU & 
                                           (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                            >> 0x10U)))
                                          ? 0x86U : 
                                         ((0xdbU == 
                                           (0xffU & 
                                            (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                             >> 0x10U)))
                                           ? 0xb9U : 
                                          ((0xdaU == 
                                            (0xffU 
                                             & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                >> 0x10U)))
                                            ? 0x57U
                                            : ((0xd9U 
                                                == 
                                                (0xffU 
                                                 & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                    >> 0x10U)))
                                                ? 0x35U
                                                : (
                                                   (0xd8U 
                                                    == 
                                                    (0xffU 
                                                     & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                        >> 0x10U)))
                                                    ? 0x61U
                                                    : 
                                                   ((0xd7U 
                                                     == 
                                                     (0xffU 
                                                      & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                         >> 0x10U)))
                                                     ? 0xeU
                                                     : 
                                                    ((0xd6U 
                                                      == 
                                                      (0xffU 
                                                       & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                          >> 0x10U)))
                                                      ? 0xf6U
                                                      : 
                                                     ((0xd5U 
                                                       == 
                                                       (0xffU 
                                                        & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                           >> 0x10U)))
                                                       ? 3U
                                                       : 
                                                      ((0xd4U 
                                                        == 
                                                        (0xffU 
                                                         & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                            >> 0x10U)))
                                                        ? 0x48U
                                                        : 
                                                       ((0xd3U 
                                                         == 
                                                         (0xffU 
                                                          & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                             >> 0x10U)))
                                                         ? 0x66U
                                                         : 
                                                        ((0xd2U 
                                                          == 
                                                          (0xffU 
                                                           & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                              >> 0x10U)))
                                                          ? 0xb5U
                                                          : 
                                                         ((0xd1U 
                                                           == 
                                                           (0xffU 
                                                            & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                               >> 0x10U)))
                                                           ? 0x3eU
                                                           : (IData)(this->__PVT___GEN_464))))))))))))));
    this->__PVT___GEN_733 = ((0xddU == (0xffU & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                 >> 8U)))
                              ? 0xc1U : ((0xdcU == 
                                          (0xffU & 
                                           (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                            >> 8U)))
                                          ? 0x86U : 
                                         ((0xdbU == 
                                           (0xffU & 
                                            (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                             >> 8U)))
                                           ? 0xb9U : 
                                          ((0xdaU == 
                                            (0xffU 
                                             & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                >> 8U)))
                                            ? 0x57U
                                            : ((0xd9U 
                                                == 
                                                (0xffU 
                                                 & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                    >> 8U)))
                                                ? 0x35U
                                                : (
                                                   (0xd8U 
                                                    == 
                                                    (0xffU 
                                                     & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                        >> 8U)))
                                                    ? 0x61U
                                                    : 
                                                   ((0xd7U 
                                                     == 
                                                     (0xffU 
                                                      & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                         >> 8U)))
                                                     ? 0xeU
                                                     : 
                                                    ((0xd6U 
                                                      == 
                                                      (0xffU 
                                                       & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                          >> 8U)))
                                                      ? 0xf6U
                                                      : 
                                                     ((0xd5U 
                                                       == 
                                                       (0xffU 
                                                        & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                           >> 8U)))
                                                       ? 3U
                                                       : 
                                                      ((0xd4U 
                                                        == 
                                                        (0xffU 
                                                         & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                            >> 8U)))
                                                        ? 0x48U
                                                        : 
                                                       ((0xd3U 
                                                         == 
                                                         (0xffU 
                                                          & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                             >> 8U)))
                                                         ? 0x66U
                                                         : 
                                                        ((0xd2U 
                                                          == 
                                                          (0xffU 
                                                           & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                              >> 8U)))
                                                          ? 0xb5U
                                                          : 
                                                         ((0xd1U 
                                                           == 
                                                           (0xffU 
                                                            & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                               >> 8U)))
                                                           ? 0x3eU
                                                           : (IData)(this->__PVT___GEN_720))))))))))))));
    this->__PVT___GEN_989 = ((0xddU == (0xffU & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                              ? 0xc1U : ((0xdcU == 
                                          (0xffU & 
                                           vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                          ? 0x86U : 
                                         ((0xdbU == 
                                           (0xffU & 
                                            vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                           ? 0xb9U : 
                                          ((0xdaU == 
                                            (0xffU 
                                             & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                            ? 0x57U
                                            : ((0xd9U 
                                                == 
                                                (0xffU 
                                                 & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                ? 0x35U
                                                : (
                                                   (0xd8U 
                                                    == 
                                                    (0xffU 
                                                     & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                    ? 0x61U
                                                    : 
                                                   ((0xd7U 
                                                     == 
                                                     (0xffU 
                                                      & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                     ? 0xeU
                                                     : 
                                                    ((0xd6U 
                                                      == 
                                                      (0xffU 
                                                       & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                      ? 0xf6U
                                                      : 
                                                     ((0xd5U 
                                                       == 
                                                       (0xffU 
                                                        & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                       ? 3U
                                                       : 
                                                      ((0xd4U 
                                                        == 
                                                        (0xffU 
                                                         & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                        ? 0x48U
                                                        : 
                                                       ((0xd3U 
                                                         == 
                                                         (0xffU 
                                                          & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                         ? 0x66U
                                                         : 
                                                        ((0xd2U 
                                                          == 
                                                          (0xffU 
                                                           & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                          ? 0xb5U
                                                          : 
                                                         ((0xd1U 
                                                           == 
                                                           (0xffU 
                                                            & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                           ? 0x3eU
                                                           : (IData)(this->__PVT___GEN_976))))))))))))));
    this->__PVT___GEN_1245 = ((0xddU == (0xffU & ((
                                                   vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                     >> 0x18U))))
                               ? 0xc1U : ((0xdcU == 
                                           (0xffU & 
                                            ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                              << 8U) 
                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                >> 0x18U))))
                                           ? 0x86U : 
                                          ((0xdbU == 
                                            (0xffU 
                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                   >> 0x18U))))
                                            ? 0xb9U
                                            : ((0xdaU 
                                                == 
                                                (0xffU 
                                                 & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                     << 8U) 
                                                    | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                       >> 0x18U))))
                                                ? 0x57U
                                                : (
                                                   (0xd9U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                         << 8U) 
                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                           >> 0x18U))))
                                                    ? 0x35U
                                                    : 
                                                   ((0xd8U 
                                                     == 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                          << 8U) 
                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                            >> 0x18U))))
                                                     ? 0x61U
                                                     : 
                                                    ((0xd7U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                           << 8U) 
                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                             >> 0x18U))))
                                                      ? 0xeU
                                                      : 
                                                     ((0xd6U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                            << 8U) 
                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                              >> 0x18U))))
                                                       ? 0xf6U
                                                       : 
                                                      ((0xd5U 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                             << 8U) 
                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                               >> 0x18U))))
                                                        ? 3U
                                                        : 
                                                       ((0xd4U 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                              << 8U) 
                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                >> 0x18U))))
                                                         ? 0x48U
                                                         : 
                                                        ((0xd3U 
                                                          == 
                                                          (0xffU 
                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                               << 8U) 
                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                 >> 0x18U))))
                                                          ? 0x66U
                                                          : 
                                                         ((0xd2U 
                                                           == 
                                                           (0xffU 
                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                << 8U) 
                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                  >> 0x18U))))
                                                           ? 0xb5U
                                                           : 
                                                          ((0xd1U 
                                                            == 
                                                            (0xffU 
                                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                 << 8U) 
                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                   >> 0x18U))))
                                                            ? 0x3eU
                                                            : (IData)(this->__PVT___GEN_1232))))))))))))));
    this->__PVT___GEN_1501 = ((0xddU == (0xffU & ((
                                                   vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                   << 0x10U) 
                                                  | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                     >> 0x10U))))
                               ? 0xc1U : ((0xdcU == 
                                           (0xffU & 
                                            ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                              << 0x10U) 
                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                >> 0x10U))))
                                           ? 0x86U : 
                                          ((0xdbU == 
                                            (0xffU 
                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                   >> 0x10U))))
                                            ? 0xb9U
                                            : ((0xdaU 
                                                == 
                                                (0xffU 
                                                 & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                     << 0x10U) 
                                                    | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                       >> 0x10U))))
                                                ? 0x57U
                                                : (
                                                   (0xd9U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                         << 0x10U) 
                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                           >> 0x10U))))
                                                    ? 0x35U
                                                    : 
                                                   ((0xd8U 
                                                     == 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                          << 0x10U) 
                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                            >> 0x10U))))
                                                     ? 0x61U
                                                     : 
                                                    ((0xd7U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                           << 0x10U) 
                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                             >> 0x10U))))
                                                      ? 0xeU
                                                      : 
                                                     ((0xd6U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                            << 0x10U) 
                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                              >> 0x10U))))
                                                       ? 0xf6U
                                                       : 
                                                      ((0xd5U 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                             << 0x10U) 
                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                               >> 0x10U))))
                                                        ? 3U
                                                        : 
                                                       ((0xd4U 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                              << 0x10U) 
                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                >> 0x10U))))
                                                         ? 0x48U
                                                         : 
                                                        ((0xd3U 
                                                          == 
                                                          (0xffU 
                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                               << 0x10U) 
                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                 >> 0x10U))))
                                                          ? 0x66U
                                                          : 
                                                         ((0xd2U 
                                                           == 
                                                           (0xffU 
                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                << 0x10U) 
                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                  >> 0x10U))))
                                                           ? 0xb5U
                                                           : 
                                                          ((0xd1U 
                                                            == 
                                                            (0xffU 
                                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                 << 0x10U) 
                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                   >> 0x10U))))
                                                            ? 0x3eU
                                                            : (IData)(this->__PVT___GEN_1488))))))))))))));
    this->__PVT___GEN_1757 = ((0xddU == (0xffU & ((
                                                   vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                   << 0x18U) 
                                                  | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                     >> 8U))))
                               ? 0xc1U : ((0xdcU == 
                                           (0xffU & 
                                            ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                              << 0x18U) 
                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                >> 8U))))
                                           ? 0x86U : 
                                          ((0xdbU == 
                                            (0xffU 
                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                 << 0x18U) 
                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                   >> 8U))))
                                            ? 0xb9U
                                            : ((0xdaU 
                                                == 
                                                (0xffU 
                                                 & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                     << 0x18U) 
                                                    | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                       >> 8U))))
                                                ? 0x57U
                                                : (
                                                   (0xd9U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                         << 0x18U) 
                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                           >> 8U))))
                                                    ? 0x35U
                                                    : 
                                                   ((0xd8U 
                                                     == 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                          << 0x18U) 
                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                            >> 8U))))
                                                     ? 0x61U
                                                     : 
                                                    ((0xd7U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                           << 0x18U) 
                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                             >> 8U))))
                                                      ? 0xeU
                                                      : 
                                                     ((0xd6U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                            << 0x18U) 
                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                              >> 8U))))
                                                       ? 0xf6U
                                                       : 
                                                      ((0xd5U 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                             << 0x18U) 
                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                               >> 8U))))
                                                        ? 3U
                                                        : 
                                                       ((0xd4U 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                              << 0x18U) 
                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                >> 8U))))
                                                         ? 0x48U
                                                         : 
                                                        ((0xd3U 
                                                          == 
                                                          (0xffU 
                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                               << 0x18U) 
                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                 >> 8U))))
                                                          ? 0x66U
                                                          : 
                                                         ((0xd2U 
                                                           == 
                                                           (0xffU 
                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                << 0x18U) 
                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                  >> 8U))))
                                                           ? 0xb5U
                                                           : 
                                                          ((0xd1U 
                                                            == 
                                                            (0xffU 
                                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                 << 0x18U) 
                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                   >> 8U))))
                                                            ? 0x3eU
                                                            : (IData)(this->__PVT___GEN_1744))))))))))))));
    this->__PVT___GEN_2013 = ((0xddU == (0xffU & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                               ? 0xc1U : ((0xdcU == 
                                           (0xffU & 
                                            vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                           ? 0x86U : 
                                          ((0xdbU == 
                                            (0xffU 
                                             & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                            ? 0xb9U
                                            : ((0xdaU 
                                                == 
                                                (0xffU 
                                                 & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                ? 0x57U
                                                : (
                                                   (0xd9U 
                                                    == 
                                                    (0xffU 
                                                     & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                    ? 0x35U
                                                    : 
                                                   ((0xd8U 
                                                     == 
                                                     (0xffU 
                                                      & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                     ? 0x61U
                                                     : 
                                                    ((0xd7U 
                                                      == 
                                                      (0xffU 
                                                       & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                      ? 0xeU
                                                      : 
                                                     ((0xd6U 
                                                       == 
                                                       (0xffU 
                                                        & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                       ? 0xf6U
                                                       : 
                                                      ((0xd5U 
                                                        == 
                                                        (0xffU 
                                                         & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                        ? 3U
                                                        : 
                                                       ((0xd4U 
                                                         == 
                                                         (0xffU 
                                                          & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                         ? 0x48U
                                                         : 
                                                        ((0xd3U 
                                                          == 
                                                          (0xffU 
                                                           & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                          ? 0x66U
                                                          : 
                                                         ((0xd2U 
                                                           == 
                                                           (0xffU 
                                                            & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                           ? 0xb5U
                                                           : 
                                                          ((0xd1U 
                                                            == 
                                                            (0xffU 
                                                             & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                            ? 0x3eU
                                                            : (IData)(this->__PVT___GEN_2000))))))))))))));
    this->__PVT___GEN_2269 = ((0xddU == (0xffU & ((
                                                   vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                     >> 0x18U))))
                               ? 0xc1U : ((0xdcU == 
                                           (0xffU & 
                                            ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                              << 8U) 
                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                >> 0x18U))))
                                           ? 0x86U : 
                                          ((0xdbU == 
                                            (0xffU 
                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                   >> 0x18U))))
                                            ? 0xb9U
                                            : ((0xdaU 
                                                == 
                                                (0xffU 
                                                 & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                     << 8U) 
                                                    | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                       >> 0x18U))))
                                                ? 0x57U
                                                : (
                                                   (0xd9U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                         << 8U) 
                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                           >> 0x18U))))
                                                    ? 0x35U
                                                    : 
                                                   ((0xd8U 
                                                     == 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                          << 8U) 
                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                            >> 0x18U))))
                                                     ? 0x61U
                                                     : 
                                                    ((0xd7U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                           << 8U) 
                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                             >> 0x18U))))
                                                      ? 0xeU
                                                      : 
                                                     ((0xd6U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                            << 8U) 
                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                              >> 0x18U))))
                                                       ? 0xf6U
                                                       : 
                                                      ((0xd5U 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                             << 8U) 
                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                               >> 0x18U))))
                                                        ? 3U
                                                        : 
                                                       ((0xd4U 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                              << 8U) 
                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                >> 0x18U))))
                                                         ? 0x48U
                                                         : 
                                                        ((0xd3U 
                                                          == 
                                                          (0xffU 
                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                               << 8U) 
                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                 >> 0x18U))))
                                                          ? 0x66U
                                                          : 
                                                         ((0xd2U 
                                                           == 
                                                           (0xffU 
                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                << 8U) 
                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                  >> 0x18U))))
                                                           ? 0xb5U
                                                           : 
                                                          ((0xd1U 
                                                            == 
                                                            (0xffU 
                                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                 << 8U) 
                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                   >> 0x18U))))
                                                            ? 0x3eU
                                                            : (IData)(this->__PVT___GEN_2256))))))))))))));
    this->__PVT___GEN_2525 = ((0xddU == (0xffU & ((
                                                   vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                   << 0x10U) 
                                                  | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                     >> 0x10U))))
                               ? 0xc1U : ((0xdcU == 
                                           (0xffU & 
                                            ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                              << 0x10U) 
                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                >> 0x10U))))
                                           ? 0x86U : 
                                          ((0xdbU == 
                                            (0xffU 
                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                   >> 0x10U))))
                                            ? 0xb9U
                                            : ((0xdaU 
                                                == 
                                                (0xffU 
                                                 & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                     << 0x10U) 
                                                    | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                       >> 0x10U))))
                                                ? 0x57U
                                                : (
                                                   (0xd9U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                         << 0x10U) 
                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                           >> 0x10U))))
                                                    ? 0x35U
                                                    : 
                                                   ((0xd8U 
                                                     == 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                          << 0x10U) 
                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                            >> 0x10U))))
                                                     ? 0x61U
                                                     : 
                                                    ((0xd7U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                           << 0x10U) 
                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                             >> 0x10U))))
                                                      ? 0xeU
                                                      : 
                                                     ((0xd6U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                            << 0x10U) 
                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                              >> 0x10U))))
                                                       ? 0xf6U
                                                       : 
                                                      ((0xd5U 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                             << 0x10U) 
                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                               >> 0x10U))))
                                                        ? 3U
                                                        : 
                                                       ((0xd4U 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                              << 0x10U) 
                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                >> 0x10U))))
                                                         ? 0x48U
                                                         : 
                                                        ((0xd3U 
                                                          == 
                                                          (0xffU 
                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                               << 0x10U) 
                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                 >> 0x10U))))
                                                          ? 0x66U
                                                          : 
                                                         ((0xd2U 
                                                           == 
                                                           (0xffU 
                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                << 0x10U) 
                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                  >> 0x10U))))
                                                           ? 0xb5U
                                                           : 
                                                          ((0xd1U 
                                                            == 
                                                            (0xffU 
                                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                 << 0x10U) 
                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                   >> 0x10U))))
                                                            ? 0x3eU
                                                            : (IData)(this->__PVT___GEN_2512))))))))))))));
    this->__PVT___GEN_2781 = ((0xddU == (0xffU & ((
                                                   vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                   << 0x18U) 
                                                  | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                     >> 8U))))
                               ? 0xc1U : ((0xdcU == 
                                           (0xffU & 
                                            ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                              << 0x18U) 
                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                >> 8U))))
                                           ? 0x86U : 
                                          ((0xdbU == 
                                            (0xffU 
                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                 << 0x18U) 
                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                   >> 8U))))
                                            ? 0xb9U
                                            : ((0xdaU 
                                                == 
                                                (0xffU 
                                                 & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                     << 0x18U) 
                                                    | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                       >> 8U))))
                                                ? 0x57U
                                                : (
                                                   (0xd9U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                         << 0x18U) 
                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                           >> 8U))))
                                                    ? 0x35U
                                                    : 
                                                   ((0xd8U 
                                                     == 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                          << 0x18U) 
                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                            >> 8U))))
                                                     ? 0x61U
                                                     : 
                                                    ((0xd7U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                           << 0x18U) 
                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                             >> 8U))))
                                                      ? 0xeU
                                                      : 
                                                     ((0xd6U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                            << 0x18U) 
                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                              >> 8U))))
                                                       ? 0xf6U
                                                       : 
                                                      ((0xd5U 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                             << 0x18U) 
                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                               >> 8U))))
                                                        ? 3U
                                                        : 
                                                       ((0xd4U 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                              << 0x18U) 
                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                >> 8U))))
                                                         ? 0x48U
                                                         : 
                                                        ((0xd3U 
                                                          == 
                                                          (0xffU 
                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                               << 0x18U) 
                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                 >> 8U))))
                                                          ? 0x66U
                                                          : 
                                                         ((0xd2U 
                                                           == 
                                                           (0xffU 
                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                << 0x18U) 
                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                  >> 8U))))
                                                           ? 0xb5U
                                                           : 
                                                          ((0xd1U 
                                                            == 
                                                            (0xffU 
                                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                 << 0x18U) 
                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                   >> 8U))))
                                                            ? 0x3eU
                                                            : (IData)(this->__PVT___GEN_2768))))))))))))));
    this->__PVT___GEN_3037 = ((0xddU == (0xffU & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                               ? 0xc1U : ((0xdcU == 
                                           (0xffU & 
                                            vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                           ? 0x86U : 
                                          ((0xdbU == 
                                            (0xffU 
                                             & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                            ? 0xb9U
                                            : ((0xdaU 
                                                == 
                                                (0xffU 
                                                 & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                ? 0x57U
                                                : (
                                                   (0xd9U 
                                                    == 
                                                    (0xffU 
                                                     & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                    ? 0x35U
                                                    : 
                                                   ((0xd8U 
                                                     == 
                                                     (0xffU 
                                                      & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                     ? 0x61U
                                                     : 
                                                    ((0xd7U 
                                                      == 
                                                      (0xffU 
                                                       & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                      ? 0xeU
                                                      : 
                                                     ((0xd6U 
                                                       == 
                                                       (0xffU 
                                                        & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                       ? 0xf6U
                                                       : 
                                                      ((0xd5U 
                                                        == 
                                                        (0xffU 
                                                         & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                        ? 3U
                                                        : 
                                                       ((0xd4U 
                                                         == 
                                                         (0xffU 
                                                          & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                         ? 0x48U
                                                         : 
                                                        ((0xd3U 
                                                          == 
                                                          (0xffU 
                                                           & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                          ? 0x66U
                                                          : 
                                                         ((0xd2U 
                                                           == 
                                                           (0xffU 
                                                            & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                           ? 0xb5U
                                                           : 
                                                          ((0xd1U 
                                                            == 
                                                            (0xffU 
                                                             & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                            ? 0x3eU
                                                            : (IData)(this->__PVT___GEN_3024))))))))))))));
    this->__PVT___GEN_3293 = ((0xddU == (0xffU & ((
                                                   vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                     >> 0x18U))))
                               ? 0xc1U : ((0xdcU == 
                                           (0xffU & 
                                            ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                              << 8U) 
                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                >> 0x18U))))
                                           ? 0x86U : 
                                          ((0xdbU == 
                                            (0xffU 
                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                   >> 0x18U))))
                                            ? 0xb9U
                                            : ((0xdaU 
                                                == 
                                                (0xffU 
                                                 & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                     << 8U) 
                                                    | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                       >> 0x18U))))
                                                ? 0x57U
                                                : (
                                                   (0xd9U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                         << 8U) 
                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                           >> 0x18U))))
                                                    ? 0x35U
                                                    : 
                                                   ((0xd8U 
                                                     == 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                          << 8U) 
                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                            >> 0x18U))))
                                                     ? 0x61U
                                                     : 
                                                    ((0xd7U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                           << 8U) 
                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                             >> 0x18U))))
                                                      ? 0xeU
                                                      : 
                                                     ((0xd6U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                            << 8U) 
                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                              >> 0x18U))))
                                                       ? 0xf6U
                                                       : 
                                                      ((0xd5U 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                             << 8U) 
                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                               >> 0x18U))))
                                                        ? 3U
                                                        : 
                                                       ((0xd4U 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                              << 8U) 
                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                >> 0x18U))))
                                                         ? 0x48U
                                                         : 
                                                        ((0xd3U 
                                                          == 
                                                          (0xffU 
                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                               << 8U) 
                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                 >> 0x18U))))
                                                          ? 0x66U
                                                          : 
                                                         ((0xd2U 
                                                           == 
                                                           (0xffU 
                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                << 8U) 
                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                  >> 0x18U))))
                                                           ? 0xb5U
                                                           : 
                                                          ((0xd1U 
                                                            == 
                                                            (0xffU 
                                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                 << 8U) 
                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                   >> 0x18U))))
                                                            ? 0x3eU
                                                            : (IData)(this->__PVT___GEN_3280))))))))))))));
    this->__PVT___GEN_3549 = ((0xddU == (0xffU & ((
                                                   vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                   << 0x10U) 
                                                  | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                     >> 0x10U))))
                               ? 0xc1U : ((0xdcU == 
                                           (0xffU & 
                                            ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                              << 0x10U) 
                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                >> 0x10U))))
                                           ? 0x86U : 
                                          ((0xdbU == 
                                            (0xffU 
                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                   >> 0x10U))))
                                            ? 0xb9U
                                            : ((0xdaU 
                                                == 
                                                (0xffU 
                                                 & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                     << 0x10U) 
                                                    | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                       >> 0x10U))))
                                                ? 0x57U
                                                : (
                                                   (0xd9U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                         << 0x10U) 
                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                           >> 0x10U))))
                                                    ? 0x35U
                                                    : 
                                                   ((0xd8U 
                                                     == 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                          << 0x10U) 
                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                            >> 0x10U))))
                                                     ? 0x61U
                                                     : 
                                                    ((0xd7U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                           << 0x10U) 
                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                             >> 0x10U))))
                                                      ? 0xeU
                                                      : 
                                                     ((0xd6U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                            << 0x10U) 
                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                              >> 0x10U))))
                                                       ? 0xf6U
                                                       : 
                                                      ((0xd5U 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                             << 0x10U) 
                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                               >> 0x10U))))
                                                        ? 3U
                                                        : 
                                                       ((0xd4U 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                              << 0x10U) 
                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                >> 0x10U))))
                                                         ? 0x48U
                                                         : 
                                                        ((0xd3U 
                                                          == 
                                                          (0xffU 
                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                               << 0x10U) 
                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                 >> 0x10U))))
                                                          ? 0x66U
                                                          : 
                                                         ((0xd2U 
                                                           == 
                                                           (0xffU 
                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                << 0x10U) 
                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                  >> 0x10U))))
                                                           ? 0xb5U
                                                           : 
                                                          ((0xd1U 
                                                            == 
                                                            (0xffU 
                                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                 << 0x10U) 
                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                   >> 0x10U))))
                                                            ? 0x3eU
                                                            : (IData)(this->__PVT___GEN_3536))))))))))))));
    this->__PVT___GEN_3805 = ((0xddU == (0xffU & ((
                                                   vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                   << 0x18U) 
                                                  | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                     >> 8U))))
                               ? 0xc1U : ((0xdcU == 
                                           (0xffU & 
                                            ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                              << 0x18U) 
                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                >> 8U))))
                                           ? 0x86U : 
                                          ((0xdbU == 
                                            (0xffU 
                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                 << 0x18U) 
                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                   >> 8U))))
                                            ? 0xb9U
                                            : ((0xdaU 
                                                == 
                                                (0xffU 
                                                 & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                     << 0x18U) 
                                                    | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                       >> 8U))))
                                                ? 0x57U
                                                : (
                                                   (0xd9U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                         << 0x18U) 
                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                           >> 8U))))
                                                    ? 0x35U
                                                    : 
                                                   ((0xd8U 
                                                     == 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                          << 0x18U) 
                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                            >> 8U))))
                                                     ? 0x61U
                                                     : 
                                                    ((0xd7U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                           << 0x18U) 
                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                             >> 8U))))
                                                      ? 0xeU
                                                      : 
                                                     ((0xd6U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                            << 0x18U) 
                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                              >> 8U))))
                                                       ? 0xf6U
                                                       : 
                                                      ((0xd5U 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                             << 0x18U) 
                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                               >> 8U))))
                                                        ? 3U
                                                        : 
                                                       ((0xd4U 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                              << 0x18U) 
                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                >> 8U))))
                                                         ? 0x48U
                                                         : 
                                                        ((0xd3U 
                                                          == 
                                                          (0xffU 
                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                               << 0x18U) 
                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                 >> 8U))))
                                                          ? 0x66U
                                                          : 
                                                         ((0xd2U 
                                                           == 
                                                           (0xffU 
                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                << 0x18U) 
                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                  >> 8U))))
                                                           ? 0xb5U
                                                           : 
                                                          ((0xd1U 
                                                            == 
                                                            (0xffU 
                                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                 << 0x18U) 
                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                   >> 8U))))
                                                            ? 0x3eU
                                                            : (IData)(this->__PVT___GEN_3792))))))))))))));
    this->__PVT___GEN_4061 = ((0xddU == (0xffU & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                               ? 0xc1U : ((0xdcU == 
                                           (0xffU & 
                                            vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                           ? 0x86U : 
                                          ((0xdbU == 
                                            (0xffU 
                                             & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                            ? 0xb9U
                                            : ((0xdaU 
                                                == 
                                                (0xffU 
                                                 & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                ? 0x57U
                                                : (
                                                   (0xd9U 
                                                    == 
                                                    (0xffU 
                                                     & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                    ? 0x35U
                                                    : 
                                                   ((0xd8U 
                                                     == 
                                                     (0xffU 
                                                      & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                     ? 0x61U
                                                     : 
                                                    ((0xd7U 
                                                      == 
                                                      (0xffU 
                                                       & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                      ? 0xeU
                                                      : 
                                                     ((0xd6U 
                                                       == 
                                                       (0xffU 
                                                        & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                       ? 0xf6U
                                                       : 
                                                      ((0xd5U 
                                                        == 
                                                        (0xffU 
                                                         & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                        ? 3U
                                                        : 
                                                       ((0xd4U 
                                                         == 
                                                         (0xffU 
                                                          & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                         ? 0x48U
                                                         : 
                                                        ((0xd3U 
                                                          == 
                                                          (0xffU 
                                                           & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                          ? 0x66U
                                                          : 
                                                         ((0xd2U 
                                                           == 
                                                           (0xffU 
                                                            & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                           ? 0xb5U
                                                           : 
                                                          ((0xd1U 
                                                            == 
                                                            (0xffU 
                                                             & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                            ? 0x3eU
                                                            : (IData)(this->__PVT___GEN_4048))))))))))))));
    this->__PVT___GEN_234 = ((0xeaU == (0xffU & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                 >> 0x18U)))
                              ? 0x87U : ((0xe9U == 
                                          (0xffU & 
                                           (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                            >> 0x18U)))
                                          ? 0x1eU : 
                                         ((0xe8U == 
                                           (0xffU & 
                                            (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                             >> 0x18U)))
                                           ? 0x9bU : 
                                          ((0xe7U == 
                                            (0xffU 
                                             & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                >> 0x18U)))
                                            ? 0x94U
                                            : ((0xe6U 
                                                == 
                                                (0xffU 
                                                 & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                    >> 0x18U)))
                                                ? 0x8eU
                                                : (
                                                   (0xe5U 
                                                    == 
                                                    (0xffU 
                                                     & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                        >> 0x18U)))
                                                    ? 0xd9U
                                                    : 
                                                   ((0xe4U 
                                                     == 
                                                     (0xffU 
                                                      & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                         >> 0x18U)))
                                                     ? 0x69U
                                                     : 
                                                    ((0xe3U 
                                                      == 
                                                      (0xffU 
                                                       & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                          >> 0x18U)))
                                                      ? 0x11U
                                                      : 
                                                     ((0xe2U 
                                                       == 
                                                       (0xffU 
                                                        & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                           >> 0x18U)))
                                                       ? 0x98U
                                                       : 
                                                      ((0xe1U 
                                                        == 
                                                        (0xffU 
                                                         & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                            >> 0x18U)))
                                                        ? 0xf8U
                                                        : 
                                                       ((0xe0U 
                                                         == 
                                                         (0xffU 
                                                          & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                             >> 0x18U)))
                                                         ? 0xe1U
                                                         : 
                                                        ((0xdfU 
                                                          == 
                                                          (0xffU 
                                                           & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                              >> 0x18U)))
                                                          ? 0x9eU
                                                          : 
                                                         ((0xdeU 
                                                           == 
                                                           (0xffU 
                                                            & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                               >> 0x18U)))
                                                           ? 0x1dU
                                                           : (IData)(this->__PVT___GEN_221))))))))))))));
    this->__PVT___GEN_490 = ((0xeaU == (0xffU & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                 >> 0x10U)))
                              ? 0x87U : ((0xe9U == 
                                          (0xffU & 
                                           (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                            >> 0x10U)))
                                          ? 0x1eU : 
                                         ((0xe8U == 
                                           (0xffU & 
                                            (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                             >> 0x10U)))
                                           ? 0x9bU : 
                                          ((0xe7U == 
                                            (0xffU 
                                             & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                >> 0x10U)))
                                            ? 0x94U
                                            : ((0xe6U 
                                                == 
                                                (0xffU 
                                                 & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                    >> 0x10U)))
                                                ? 0x8eU
                                                : (
                                                   (0xe5U 
                                                    == 
                                                    (0xffU 
                                                     & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                        >> 0x10U)))
                                                    ? 0xd9U
                                                    : 
                                                   ((0xe4U 
                                                     == 
                                                     (0xffU 
                                                      & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                         >> 0x10U)))
                                                     ? 0x69U
                                                     : 
                                                    ((0xe3U 
                                                      == 
                                                      (0xffU 
                                                       & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                          >> 0x10U)))
                                                      ? 0x11U
                                                      : 
                                                     ((0xe2U 
                                                       == 
                                                       (0xffU 
                                                        & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                           >> 0x10U)))
                                                       ? 0x98U
                                                       : 
                                                      ((0xe1U 
                                                        == 
                                                        (0xffU 
                                                         & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                            >> 0x10U)))
                                                        ? 0xf8U
                                                        : 
                                                       ((0xe0U 
                                                         == 
                                                         (0xffU 
                                                          & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                             >> 0x10U)))
                                                         ? 0xe1U
                                                         : 
                                                        ((0xdfU 
                                                          == 
                                                          (0xffU 
                                                           & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                              >> 0x10U)))
                                                          ? 0x9eU
                                                          : 
                                                         ((0xdeU 
                                                           == 
                                                           (0xffU 
                                                            & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                               >> 0x10U)))
                                                           ? 0x1dU
                                                           : (IData)(this->__PVT___GEN_477))))))))))))));
    this->__PVT___GEN_746 = ((0xeaU == (0xffU & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                 >> 8U)))
                              ? 0x87U : ((0xe9U == 
                                          (0xffU & 
                                           (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                            >> 8U)))
                                          ? 0x1eU : 
                                         ((0xe8U == 
                                           (0xffU & 
                                            (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                             >> 8U)))
                                           ? 0x9bU : 
                                          ((0xe7U == 
                                            (0xffU 
                                             & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                >> 8U)))
                                            ? 0x94U
                                            : ((0xe6U 
                                                == 
                                                (0xffU 
                                                 & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                    >> 8U)))
                                                ? 0x8eU
                                                : (
                                                   (0xe5U 
                                                    == 
                                                    (0xffU 
                                                     & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                        >> 8U)))
                                                    ? 0xd9U
                                                    : 
                                                   ((0xe4U 
                                                     == 
                                                     (0xffU 
                                                      & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                         >> 8U)))
                                                     ? 0x69U
                                                     : 
                                                    ((0xe3U 
                                                      == 
                                                      (0xffU 
                                                       & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                          >> 8U)))
                                                      ? 0x11U
                                                      : 
                                                     ((0xe2U 
                                                       == 
                                                       (0xffU 
                                                        & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                           >> 8U)))
                                                       ? 0x98U
                                                       : 
                                                      ((0xe1U 
                                                        == 
                                                        (0xffU 
                                                         & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                            >> 8U)))
                                                        ? 0xf8U
                                                        : 
                                                       ((0xe0U 
                                                         == 
                                                         (0xffU 
                                                          & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                             >> 8U)))
                                                         ? 0xe1U
                                                         : 
                                                        ((0xdfU 
                                                          == 
                                                          (0xffU 
                                                           & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                              >> 8U)))
                                                          ? 0x9eU
                                                          : 
                                                         ((0xdeU 
                                                           == 
                                                           (0xffU 
                                                            & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                               >> 8U)))
                                                           ? 0x1dU
                                                           : (IData)(this->__PVT___GEN_733))))))))))))));
    this->__PVT___GEN_1002 = ((0xeaU == (0xffU & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                               ? 0x87U : ((0xe9U == 
                                           (0xffU & 
                                            vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                           ? 0x1eU : 
                                          ((0xe8U == 
                                            (0xffU 
                                             & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                            ? 0x9bU
                                            : ((0xe7U 
                                                == 
                                                (0xffU 
                                                 & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                ? 0x94U
                                                : (
                                                   (0xe6U 
                                                    == 
                                                    (0xffU 
                                                     & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                    ? 0x8eU
                                                    : 
                                                   ((0xe5U 
                                                     == 
                                                     (0xffU 
                                                      & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                     ? 0xd9U
                                                     : 
                                                    ((0xe4U 
                                                      == 
                                                      (0xffU 
                                                       & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                      ? 0x69U
                                                      : 
                                                     ((0xe3U 
                                                       == 
                                                       (0xffU 
                                                        & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                       ? 0x11U
                                                       : 
                                                      ((0xe2U 
                                                        == 
                                                        (0xffU 
                                                         & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                        ? 0x98U
                                                        : 
                                                       ((0xe1U 
                                                         == 
                                                         (0xffU 
                                                          & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                         ? 0xf8U
                                                         : 
                                                        ((0xe0U 
                                                          == 
                                                          (0xffU 
                                                           & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                          ? 0xe1U
                                                          : 
                                                         ((0xdfU 
                                                           == 
                                                           (0xffU 
                                                            & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                           ? 0x9eU
                                                           : 
                                                          ((0xdeU 
                                                            == 
                                                            (0xffU 
                                                             & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                            ? 0x1dU
                                                            : (IData)(this->__PVT___GEN_989))))))))))))));
    this->__PVT___GEN_1258 = ((0xeaU == (0xffU & ((
                                                   vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                     >> 0x18U))))
                               ? 0x87U : ((0xe9U == 
                                           (0xffU & 
                                            ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                              << 8U) 
                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                >> 0x18U))))
                                           ? 0x1eU : 
                                          ((0xe8U == 
                                            (0xffU 
                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                   >> 0x18U))))
                                            ? 0x9bU
                                            : ((0xe7U 
                                                == 
                                                (0xffU 
                                                 & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                     << 8U) 
                                                    | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                       >> 0x18U))))
                                                ? 0x94U
                                                : (
                                                   (0xe6U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                         << 8U) 
                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                           >> 0x18U))))
                                                    ? 0x8eU
                                                    : 
                                                   ((0xe5U 
                                                     == 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                          << 8U) 
                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                            >> 0x18U))))
                                                     ? 0xd9U
                                                     : 
                                                    ((0xe4U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                           << 8U) 
                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                             >> 0x18U))))
                                                      ? 0x69U
                                                      : 
                                                     ((0xe3U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                            << 8U) 
                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                              >> 0x18U))))
                                                       ? 0x11U
                                                       : 
                                                      ((0xe2U 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                             << 8U) 
                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                               >> 0x18U))))
                                                        ? 0x98U
                                                        : 
                                                       ((0xe1U 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                              << 8U) 
                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                >> 0x18U))))
                                                         ? 0xf8U
                                                         : 
                                                        ((0xe0U 
                                                          == 
                                                          (0xffU 
                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                               << 8U) 
                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                 >> 0x18U))))
                                                          ? 0xe1U
                                                          : 
                                                         ((0xdfU 
                                                           == 
                                                           (0xffU 
                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                << 8U) 
                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                  >> 0x18U))))
                                                           ? 0x9eU
                                                           : 
                                                          ((0xdeU 
                                                            == 
                                                            (0xffU 
                                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                 << 8U) 
                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                   >> 0x18U))))
                                                            ? 0x1dU
                                                            : (IData)(this->__PVT___GEN_1245))))))))))))));
    this->__PVT___GEN_1514 = ((0xeaU == (0xffU & ((
                                                   vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                   << 0x10U) 
                                                  | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                     >> 0x10U))))
                               ? 0x87U : ((0xe9U == 
                                           (0xffU & 
                                            ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                              << 0x10U) 
                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                >> 0x10U))))
                                           ? 0x1eU : 
                                          ((0xe8U == 
                                            (0xffU 
                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                   >> 0x10U))))
                                            ? 0x9bU
                                            : ((0xe7U 
                                                == 
                                                (0xffU 
                                                 & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                     << 0x10U) 
                                                    | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                       >> 0x10U))))
                                                ? 0x94U
                                                : (
                                                   (0xe6U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                         << 0x10U) 
                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                           >> 0x10U))))
                                                    ? 0x8eU
                                                    : 
                                                   ((0xe5U 
                                                     == 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                          << 0x10U) 
                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                            >> 0x10U))))
                                                     ? 0xd9U
                                                     : 
                                                    ((0xe4U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                           << 0x10U) 
                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                             >> 0x10U))))
                                                      ? 0x69U
                                                      : 
                                                     ((0xe3U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                            << 0x10U) 
                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                              >> 0x10U))))
                                                       ? 0x11U
                                                       : 
                                                      ((0xe2U 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                             << 0x10U) 
                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                               >> 0x10U))))
                                                        ? 0x98U
                                                        : 
                                                       ((0xe1U 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                              << 0x10U) 
                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                >> 0x10U))))
                                                         ? 0xf8U
                                                         : 
                                                        ((0xe0U 
                                                          == 
                                                          (0xffU 
                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                               << 0x10U) 
                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                 >> 0x10U))))
                                                          ? 0xe1U
                                                          : 
                                                         ((0xdfU 
                                                           == 
                                                           (0xffU 
                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                << 0x10U) 
                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                  >> 0x10U))))
                                                           ? 0x9eU
                                                           : 
                                                          ((0xdeU 
                                                            == 
                                                            (0xffU 
                                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                 << 0x10U) 
                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                   >> 0x10U))))
                                                            ? 0x1dU
                                                            : (IData)(this->__PVT___GEN_1501))))))))))))));
    this->__PVT___GEN_1770 = ((0xeaU == (0xffU & ((
                                                   vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                   << 0x18U) 
                                                  | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                     >> 8U))))
                               ? 0x87U : ((0xe9U == 
                                           (0xffU & 
                                            ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                              << 0x18U) 
                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                >> 8U))))
                                           ? 0x1eU : 
                                          ((0xe8U == 
                                            (0xffU 
                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                 << 0x18U) 
                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                   >> 8U))))
                                            ? 0x9bU
                                            : ((0xe7U 
                                                == 
                                                (0xffU 
                                                 & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                     << 0x18U) 
                                                    | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                       >> 8U))))
                                                ? 0x94U
                                                : (
                                                   (0xe6U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                         << 0x18U) 
                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                           >> 8U))))
                                                    ? 0x8eU
                                                    : 
                                                   ((0xe5U 
                                                     == 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                          << 0x18U) 
                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                            >> 8U))))
                                                     ? 0xd9U
                                                     : 
                                                    ((0xe4U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                           << 0x18U) 
                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                             >> 8U))))
                                                      ? 0x69U
                                                      : 
                                                     ((0xe3U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                            << 0x18U) 
                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                              >> 8U))))
                                                       ? 0x11U
                                                       : 
                                                      ((0xe2U 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                             << 0x18U) 
                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                               >> 8U))))
                                                        ? 0x98U
                                                        : 
                                                       ((0xe1U 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                              << 0x18U) 
                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                >> 8U))))
                                                         ? 0xf8U
                                                         : 
                                                        ((0xe0U 
                                                          == 
                                                          (0xffU 
                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                               << 0x18U) 
                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                 >> 8U))))
                                                          ? 0xe1U
                                                          : 
                                                         ((0xdfU 
                                                           == 
                                                           (0xffU 
                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                << 0x18U) 
                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                  >> 8U))))
                                                           ? 0x9eU
                                                           : 
                                                          ((0xdeU 
                                                            == 
                                                            (0xffU 
                                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                 << 0x18U) 
                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                   >> 8U))))
                                                            ? 0x1dU
                                                            : (IData)(this->__PVT___GEN_1757))))))))))))));
    this->__PVT___GEN_2026 = ((0xeaU == (0xffU & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                               ? 0x87U : ((0xe9U == 
                                           (0xffU & 
                                            vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                           ? 0x1eU : 
                                          ((0xe8U == 
                                            (0xffU 
                                             & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                            ? 0x9bU
                                            : ((0xe7U 
                                                == 
                                                (0xffU 
                                                 & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                ? 0x94U
                                                : (
                                                   (0xe6U 
                                                    == 
                                                    (0xffU 
                                                     & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                    ? 0x8eU
                                                    : 
                                                   ((0xe5U 
                                                     == 
                                                     (0xffU 
                                                      & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                     ? 0xd9U
                                                     : 
                                                    ((0xe4U 
                                                      == 
                                                      (0xffU 
                                                       & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                      ? 0x69U
                                                      : 
                                                     ((0xe3U 
                                                       == 
                                                       (0xffU 
                                                        & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                       ? 0x11U
                                                       : 
                                                      ((0xe2U 
                                                        == 
                                                        (0xffU 
                                                         & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                        ? 0x98U
                                                        : 
                                                       ((0xe1U 
                                                         == 
                                                         (0xffU 
                                                          & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                         ? 0xf8U
                                                         : 
                                                        ((0xe0U 
                                                          == 
                                                          (0xffU 
                                                           & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                          ? 0xe1U
                                                          : 
                                                         ((0xdfU 
                                                           == 
                                                           (0xffU 
                                                            & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                           ? 0x9eU
                                                           : 
                                                          ((0xdeU 
                                                            == 
                                                            (0xffU 
                                                             & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                            ? 0x1dU
                                                            : (IData)(this->__PVT___GEN_2013))))))))))))));
    this->__PVT___GEN_2282 = ((0xeaU == (0xffU & ((
                                                   vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                     >> 0x18U))))
                               ? 0x87U : ((0xe9U == 
                                           (0xffU & 
                                            ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                              << 8U) 
                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                >> 0x18U))))
                                           ? 0x1eU : 
                                          ((0xe8U == 
                                            (0xffU 
                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                   >> 0x18U))))
                                            ? 0x9bU
                                            : ((0xe7U 
                                                == 
                                                (0xffU 
                                                 & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                     << 8U) 
                                                    | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                       >> 0x18U))))
                                                ? 0x94U
                                                : (
                                                   (0xe6U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                         << 8U) 
                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                           >> 0x18U))))
                                                    ? 0x8eU
                                                    : 
                                                   ((0xe5U 
                                                     == 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                          << 8U) 
                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                            >> 0x18U))))
                                                     ? 0xd9U
                                                     : 
                                                    ((0xe4U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                           << 8U) 
                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                             >> 0x18U))))
                                                      ? 0x69U
                                                      : 
                                                     ((0xe3U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                            << 8U) 
                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                              >> 0x18U))))
                                                       ? 0x11U
                                                       : 
                                                      ((0xe2U 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                             << 8U) 
                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                               >> 0x18U))))
                                                        ? 0x98U
                                                        : 
                                                       ((0xe1U 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                              << 8U) 
                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                >> 0x18U))))
                                                         ? 0xf8U
                                                         : 
                                                        ((0xe0U 
                                                          == 
                                                          (0xffU 
                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                               << 8U) 
                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                 >> 0x18U))))
                                                          ? 0xe1U
                                                          : 
                                                         ((0xdfU 
                                                           == 
                                                           (0xffU 
                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                << 8U) 
                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                  >> 0x18U))))
                                                           ? 0x9eU
                                                           : 
                                                          ((0xdeU 
                                                            == 
                                                            (0xffU 
                                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                 << 8U) 
                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                   >> 0x18U))))
                                                            ? 0x1dU
                                                            : (IData)(this->__PVT___GEN_2269))))))))))))));
    this->__PVT___GEN_2538 = ((0xeaU == (0xffU & ((
                                                   vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                   << 0x10U) 
                                                  | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                     >> 0x10U))))
                               ? 0x87U : ((0xe9U == 
                                           (0xffU & 
                                            ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                              << 0x10U) 
                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                >> 0x10U))))
                                           ? 0x1eU : 
                                          ((0xe8U == 
                                            (0xffU 
                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                   >> 0x10U))))
                                            ? 0x9bU
                                            : ((0xe7U 
                                                == 
                                                (0xffU 
                                                 & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                     << 0x10U) 
                                                    | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                       >> 0x10U))))
                                                ? 0x94U
                                                : (
                                                   (0xe6U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                         << 0x10U) 
                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                           >> 0x10U))))
                                                    ? 0x8eU
                                                    : 
                                                   ((0xe5U 
                                                     == 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                          << 0x10U) 
                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                            >> 0x10U))))
                                                     ? 0xd9U
                                                     : 
                                                    ((0xe4U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                           << 0x10U) 
                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                             >> 0x10U))))
                                                      ? 0x69U
                                                      : 
                                                     ((0xe3U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                            << 0x10U) 
                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                              >> 0x10U))))
                                                       ? 0x11U
                                                       : 
                                                      ((0xe2U 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                             << 0x10U) 
                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                               >> 0x10U))))
                                                        ? 0x98U
                                                        : 
                                                       ((0xe1U 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                              << 0x10U) 
                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                >> 0x10U))))
                                                         ? 0xf8U
                                                         : 
                                                        ((0xe0U 
                                                          == 
                                                          (0xffU 
                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                               << 0x10U) 
                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                 >> 0x10U))))
                                                          ? 0xe1U
                                                          : 
                                                         ((0xdfU 
                                                           == 
                                                           (0xffU 
                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                << 0x10U) 
                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                  >> 0x10U))))
                                                           ? 0x9eU
                                                           : 
                                                          ((0xdeU 
                                                            == 
                                                            (0xffU 
                                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                 << 0x10U) 
                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                   >> 0x10U))))
                                                            ? 0x1dU
                                                            : (IData)(this->__PVT___GEN_2525))))))))))))));
    this->__PVT___GEN_2794 = ((0xeaU == (0xffU & ((
                                                   vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                   << 0x18U) 
                                                  | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                     >> 8U))))
                               ? 0x87U : ((0xe9U == 
                                           (0xffU & 
                                            ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                              << 0x18U) 
                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                >> 8U))))
                                           ? 0x1eU : 
                                          ((0xe8U == 
                                            (0xffU 
                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                 << 0x18U) 
                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                   >> 8U))))
                                            ? 0x9bU
                                            : ((0xe7U 
                                                == 
                                                (0xffU 
                                                 & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                     << 0x18U) 
                                                    | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                       >> 8U))))
                                                ? 0x94U
                                                : (
                                                   (0xe6U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                         << 0x18U) 
                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                           >> 8U))))
                                                    ? 0x8eU
                                                    : 
                                                   ((0xe5U 
                                                     == 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                          << 0x18U) 
                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                            >> 8U))))
                                                     ? 0xd9U
                                                     : 
                                                    ((0xe4U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                           << 0x18U) 
                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                             >> 8U))))
                                                      ? 0x69U
                                                      : 
                                                     ((0xe3U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                            << 0x18U) 
                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                              >> 8U))))
                                                       ? 0x11U
                                                       : 
                                                      ((0xe2U 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                             << 0x18U) 
                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                               >> 8U))))
                                                        ? 0x98U
                                                        : 
                                                       ((0xe1U 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                              << 0x18U) 
                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                >> 8U))))
                                                         ? 0xf8U
                                                         : 
                                                        ((0xe0U 
                                                          == 
                                                          (0xffU 
                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                               << 0x18U) 
                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                 >> 8U))))
                                                          ? 0xe1U
                                                          : 
                                                         ((0xdfU 
                                                           == 
                                                           (0xffU 
                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                << 0x18U) 
                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                  >> 8U))))
                                                           ? 0x9eU
                                                           : 
                                                          ((0xdeU 
                                                            == 
                                                            (0xffU 
                                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                 << 0x18U) 
                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                   >> 8U))))
                                                            ? 0x1dU
                                                            : (IData)(this->__PVT___GEN_2781))))))))))))));
    this->__PVT___GEN_3050 = ((0xeaU == (0xffU & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                               ? 0x87U : ((0xe9U == 
                                           (0xffU & 
                                            vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                           ? 0x1eU : 
                                          ((0xe8U == 
                                            (0xffU 
                                             & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                            ? 0x9bU
                                            : ((0xe7U 
                                                == 
                                                (0xffU 
                                                 & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                ? 0x94U
                                                : (
                                                   (0xe6U 
                                                    == 
                                                    (0xffU 
                                                     & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                    ? 0x8eU
                                                    : 
                                                   ((0xe5U 
                                                     == 
                                                     (0xffU 
                                                      & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                     ? 0xd9U
                                                     : 
                                                    ((0xe4U 
                                                      == 
                                                      (0xffU 
                                                       & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                      ? 0x69U
                                                      : 
                                                     ((0xe3U 
                                                       == 
                                                       (0xffU 
                                                        & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                       ? 0x11U
                                                       : 
                                                      ((0xe2U 
                                                        == 
                                                        (0xffU 
                                                         & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                        ? 0x98U
                                                        : 
                                                       ((0xe1U 
                                                         == 
                                                         (0xffU 
                                                          & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                         ? 0xf8U
                                                         : 
                                                        ((0xe0U 
                                                          == 
                                                          (0xffU 
                                                           & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                          ? 0xe1U
                                                          : 
                                                         ((0xdfU 
                                                           == 
                                                           (0xffU 
                                                            & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                           ? 0x9eU
                                                           : 
                                                          ((0xdeU 
                                                            == 
                                                            (0xffU 
                                                             & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                            ? 0x1dU
                                                            : (IData)(this->__PVT___GEN_3037))))))))))))));
    this->__PVT___GEN_3306 = ((0xeaU == (0xffU & ((
                                                   vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                     >> 0x18U))))
                               ? 0x87U : ((0xe9U == 
                                           (0xffU & 
                                            ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                              << 8U) 
                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                >> 0x18U))))
                                           ? 0x1eU : 
                                          ((0xe8U == 
                                            (0xffU 
                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                   >> 0x18U))))
                                            ? 0x9bU
                                            : ((0xe7U 
                                                == 
                                                (0xffU 
                                                 & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                     << 8U) 
                                                    | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                       >> 0x18U))))
                                                ? 0x94U
                                                : (
                                                   (0xe6U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                         << 8U) 
                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                           >> 0x18U))))
                                                    ? 0x8eU
                                                    : 
                                                   ((0xe5U 
                                                     == 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                          << 8U) 
                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                            >> 0x18U))))
                                                     ? 0xd9U
                                                     : 
                                                    ((0xe4U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                           << 8U) 
                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                             >> 0x18U))))
                                                      ? 0x69U
                                                      : 
                                                     ((0xe3U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                            << 8U) 
                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                              >> 0x18U))))
                                                       ? 0x11U
                                                       : 
                                                      ((0xe2U 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                             << 8U) 
                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                               >> 0x18U))))
                                                        ? 0x98U
                                                        : 
                                                       ((0xe1U 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                              << 8U) 
                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                >> 0x18U))))
                                                         ? 0xf8U
                                                         : 
                                                        ((0xe0U 
                                                          == 
                                                          (0xffU 
                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                               << 8U) 
                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                 >> 0x18U))))
                                                          ? 0xe1U
                                                          : 
                                                         ((0xdfU 
                                                           == 
                                                           (0xffU 
                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                << 8U) 
                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                  >> 0x18U))))
                                                           ? 0x9eU
                                                           : 
                                                          ((0xdeU 
                                                            == 
                                                            (0xffU 
                                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                 << 8U) 
                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                   >> 0x18U))))
                                                            ? 0x1dU
                                                            : (IData)(this->__PVT___GEN_3293))))))))))))));
    this->__PVT___GEN_3562 = ((0xeaU == (0xffU & ((
                                                   vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                   << 0x10U) 
                                                  | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                     >> 0x10U))))
                               ? 0x87U : ((0xe9U == 
                                           (0xffU & 
                                            ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                              << 0x10U) 
                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                >> 0x10U))))
                                           ? 0x1eU : 
                                          ((0xe8U == 
                                            (0xffU 
                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                   >> 0x10U))))
                                            ? 0x9bU
                                            : ((0xe7U 
                                                == 
                                                (0xffU 
                                                 & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                     << 0x10U) 
                                                    | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                       >> 0x10U))))
                                                ? 0x94U
                                                : (
                                                   (0xe6U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                         << 0x10U) 
                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                           >> 0x10U))))
                                                    ? 0x8eU
                                                    : 
                                                   ((0xe5U 
                                                     == 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                          << 0x10U) 
                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                            >> 0x10U))))
                                                     ? 0xd9U
                                                     : 
                                                    ((0xe4U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                           << 0x10U) 
                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                             >> 0x10U))))
                                                      ? 0x69U
                                                      : 
                                                     ((0xe3U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                            << 0x10U) 
                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                              >> 0x10U))))
                                                       ? 0x11U
                                                       : 
                                                      ((0xe2U 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                             << 0x10U) 
                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                               >> 0x10U))))
                                                        ? 0x98U
                                                        : 
                                                       ((0xe1U 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                              << 0x10U) 
                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                >> 0x10U))))
                                                         ? 0xf8U
                                                         : 
                                                        ((0xe0U 
                                                          == 
                                                          (0xffU 
                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                               << 0x10U) 
                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                 >> 0x10U))))
                                                          ? 0xe1U
                                                          : 
                                                         ((0xdfU 
                                                           == 
                                                           (0xffU 
                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                << 0x10U) 
                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                  >> 0x10U))))
                                                           ? 0x9eU
                                                           : 
                                                          ((0xdeU 
                                                            == 
                                                            (0xffU 
                                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                 << 0x10U) 
                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                   >> 0x10U))))
                                                            ? 0x1dU
                                                            : (IData)(this->__PVT___GEN_3549))))))))))))));
    this->__PVT___GEN_3818 = ((0xeaU == (0xffU & ((
                                                   vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                   << 0x18U) 
                                                  | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                     >> 8U))))
                               ? 0x87U : ((0xe9U == 
                                           (0xffU & 
                                            ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                              << 0x18U) 
                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                >> 8U))))
                                           ? 0x1eU : 
                                          ((0xe8U == 
                                            (0xffU 
                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                 << 0x18U) 
                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                   >> 8U))))
                                            ? 0x9bU
                                            : ((0xe7U 
                                                == 
                                                (0xffU 
                                                 & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                     << 0x18U) 
                                                    | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                       >> 8U))))
                                                ? 0x94U
                                                : (
                                                   (0xe6U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                         << 0x18U) 
                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                           >> 8U))))
                                                    ? 0x8eU
                                                    : 
                                                   ((0xe5U 
                                                     == 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                          << 0x18U) 
                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                            >> 8U))))
                                                     ? 0xd9U
                                                     : 
                                                    ((0xe4U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                           << 0x18U) 
                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                             >> 8U))))
                                                      ? 0x69U
                                                      : 
                                                     ((0xe3U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                            << 0x18U) 
                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                              >> 8U))))
                                                       ? 0x11U
                                                       : 
                                                      ((0xe2U 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                             << 0x18U) 
                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                               >> 8U))))
                                                        ? 0x98U
                                                        : 
                                                       ((0xe1U 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                              << 0x18U) 
                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                >> 8U))))
                                                         ? 0xf8U
                                                         : 
                                                        ((0xe0U 
                                                          == 
                                                          (0xffU 
                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                               << 0x18U) 
                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                 >> 8U))))
                                                          ? 0xe1U
                                                          : 
                                                         ((0xdfU 
                                                           == 
                                                           (0xffU 
                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                << 0x18U) 
                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                  >> 8U))))
                                                           ? 0x9eU
                                                           : 
                                                          ((0xdeU 
                                                            == 
                                                            (0xffU 
                                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                 << 0x18U) 
                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                   >> 8U))))
                                                            ? 0x1dU
                                                            : (IData)(this->__PVT___GEN_3805))))))))))))));
    this->__PVT___GEN_4074 = ((0xeaU == (0xffU & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                               ? 0x87U : ((0xe9U == 
                                           (0xffU & 
                                            vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                           ? 0x1eU : 
                                          ((0xe8U == 
                                            (0xffU 
                                             & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                            ? 0x9bU
                                            : ((0xe7U 
                                                == 
                                                (0xffU 
                                                 & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                ? 0x94U
                                                : (
                                                   (0xe6U 
                                                    == 
                                                    (0xffU 
                                                     & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                    ? 0x8eU
                                                    : 
                                                   ((0xe5U 
                                                     == 
                                                     (0xffU 
                                                      & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                     ? 0xd9U
                                                     : 
                                                    ((0xe4U 
                                                      == 
                                                      (0xffU 
                                                       & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                      ? 0x69U
                                                      : 
                                                     ((0xe3U 
                                                       == 
                                                       (0xffU 
                                                        & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                       ? 0x11U
                                                       : 
                                                      ((0xe2U 
                                                        == 
                                                        (0xffU 
                                                         & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                        ? 0x98U
                                                        : 
                                                       ((0xe1U 
                                                         == 
                                                         (0xffU 
                                                          & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                         ? 0xf8U
                                                         : 
                                                        ((0xe0U 
                                                          == 
                                                          (0xffU 
                                                           & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                          ? 0xe1U
                                                          : 
                                                         ((0xdfU 
                                                           == 
                                                           (0xffU 
                                                            & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                           ? 0x9eU
                                                           : 
                                                          ((0xdeU 
                                                            == 
                                                            (0xffU 
                                                             & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                            ? 0x1dU
                                                            : (IData)(this->__PVT___GEN_4061))))))))))))));
    this->__PVT___GEN_247 = ((0xf7U == (0xffU & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                 >> 0x18U)))
                              ? 0x68U : ((0xf6U == 
                                          (0xffU & 
                                           (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                            >> 0x18U)))
                                          ? 0x42U : 
                                         ((0xf5U == 
                                           (0xffU & 
                                            (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                             >> 0x18U)))
                                           ? 0xe6U : 
                                          ((0xf4U == 
                                            (0xffU 
                                             & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                >> 0x18U)))
                                            ? 0xbfU
                                            : ((0xf3U 
                                                == 
                                                (0xffU 
                                                 & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                    >> 0x18U)))
                                                ? 0xdU
                                                : (
                                                   (0xf2U 
                                                    == 
                                                    (0xffU 
                                                     & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                        >> 0x18U)))
                                                    ? 0x89U
                                                    : 
                                                   ((0xf1U 
                                                     == 
                                                     (0xffU 
                                                      & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                         >> 0x18U)))
                                                     ? 0xa1U
                                                     : 
                                                    ((0xf0U 
                                                      == 
                                                      (0xffU 
                                                       & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                          >> 0x18U)))
                                                      ? 0x8cU
                                                      : 
                                                     ((0xefU 
                                                       == 
                                                       (0xffU 
                                                        & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                           >> 0x18U)))
                                                       ? 0xdfU
                                                       : 
                                                      ((0xeeU 
                                                        == 
                                                        (0xffU 
                                                         & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                            >> 0x18U)))
                                                        ? 0x28U
                                                        : 
                                                       ((0xedU 
                                                         == 
                                                         (0xffU 
                                                          & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                             >> 0x18U)))
                                                         ? 0x55U
                                                         : 
                                                        ((0xecU 
                                                          == 
                                                          (0xffU 
                                                           & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                              >> 0x18U)))
                                                          ? 0xceU
                                                          : 
                                                         ((0xebU 
                                                           == 
                                                           (0xffU 
                                                            & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                               >> 0x18U)))
                                                           ? 0xe9U
                                                           : (IData)(this->__PVT___GEN_234))))))))))))));
    this->__PVT___GEN_503 = ((0xf7U == (0xffU & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                 >> 0x10U)))
                              ? 0x68U : ((0xf6U == 
                                          (0xffU & 
                                           (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                            >> 0x10U)))
                                          ? 0x42U : 
                                         ((0xf5U == 
                                           (0xffU & 
                                            (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                             >> 0x10U)))
                                           ? 0xe6U : 
                                          ((0xf4U == 
                                            (0xffU 
                                             & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                >> 0x10U)))
                                            ? 0xbfU
                                            : ((0xf3U 
                                                == 
                                                (0xffU 
                                                 & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                    >> 0x10U)))
                                                ? 0xdU
                                                : (
                                                   (0xf2U 
                                                    == 
                                                    (0xffU 
                                                     & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                        >> 0x10U)))
                                                    ? 0x89U
                                                    : 
                                                   ((0xf1U 
                                                     == 
                                                     (0xffU 
                                                      & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                         >> 0x10U)))
                                                     ? 0xa1U
                                                     : 
                                                    ((0xf0U 
                                                      == 
                                                      (0xffU 
                                                       & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                          >> 0x10U)))
                                                      ? 0x8cU
                                                      : 
                                                     ((0xefU 
                                                       == 
                                                       (0xffU 
                                                        & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                           >> 0x10U)))
                                                       ? 0xdfU
                                                       : 
                                                      ((0xeeU 
                                                        == 
                                                        (0xffU 
                                                         & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                            >> 0x10U)))
                                                        ? 0x28U
                                                        : 
                                                       ((0xedU 
                                                         == 
                                                         (0xffU 
                                                          & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                             >> 0x10U)))
                                                         ? 0x55U
                                                         : 
                                                        ((0xecU 
                                                          == 
                                                          (0xffU 
                                                           & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                              >> 0x10U)))
                                                          ? 0xceU
                                                          : 
                                                         ((0xebU 
                                                           == 
                                                           (0xffU 
                                                            & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                               >> 0x10U)))
                                                           ? 0xe9U
                                                           : (IData)(this->__PVT___GEN_490))))))))))))));
    this->__PVT___GEN_759 = ((0xf7U == (0xffU & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                 >> 8U)))
                              ? 0x68U : ((0xf6U == 
                                          (0xffU & 
                                           (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                            >> 8U)))
                                          ? 0x42U : 
                                         ((0xf5U == 
                                           (0xffU & 
                                            (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                             >> 8U)))
                                           ? 0xe6U : 
                                          ((0xf4U == 
                                            (0xffU 
                                             & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                >> 8U)))
                                            ? 0xbfU
                                            : ((0xf3U 
                                                == 
                                                (0xffU 
                                                 & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                    >> 8U)))
                                                ? 0xdU
                                                : (
                                                   (0xf2U 
                                                    == 
                                                    (0xffU 
                                                     & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                        >> 8U)))
                                                    ? 0x89U
                                                    : 
                                                   ((0xf1U 
                                                     == 
                                                     (0xffU 
                                                      & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                         >> 8U)))
                                                     ? 0xa1U
                                                     : 
                                                    ((0xf0U 
                                                      == 
                                                      (0xffU 
                                                       & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                          >> 8U)))
                                                      ? 0x8cU
                                                      : 
                                                     ((0xefU 
                                                       == 
                                                       (0xffU 
                                                        & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                           >> 8U)))
                                                       ? 0xdfU
                                                       : 
                                                      ((0xeeU 
                                                        == 
                                                        (0xffU 
                                                         & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                            >> 8U)))
                                                        ? 0x28U
                                                        : 
                                                       ((0xedU 
                                                         == 
                                                         (0xffU 
                                                          & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                             >> 8U)))
                                                         ? 0x55U
                                                         : 
                                                        ((0xecU 
                                                          == 
                                                          (0xffU 
                                                           & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                              >> 8U)))
                                                          ? 0xceU
                                                          : 
                                                         ((0xebU 
                                                           == 
                                                           (0xffU 
                                                            & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                               >> 8U)))
                                                           ? 0xe9U
                                                           : (IData)(this->__PVT___GEN_746))))))))))))));
    this->__PVT___GEN_1015 = ((0xf7U == (0xffU & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                               ? 0x68U : ((0xf6U == 
                                           (0xffU & 
                                            vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                           ? 0x42U : 
                                          ((0xf5U == 
                                            (0xffU 
                                             & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                            ? 0xe6U
                                            : ((0xf4U 
                                                == 
                                                (0xffU 
                                                 & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                ? 0xbfU
                                                : (
                                                   (0xf3U 
                                                    == 
                                                    (0xffU 
                                                     & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                    ? 0xdU
                                                    : 
                                                   ((0xf2U 
                                                     == 
                                                     (0xffU 
                                                      & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                     ? 0x89U
                                                     : 
                                                    ((0xf1U 
                                                      == 
                                                      (0xffU 
                                                       & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                      ? 0xa1U
                                                      : 
                                                     ((0xf0U 
                                                       == 
                                                       (0xffU 
                                                        & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                       ? 0x8cU
                                                       : 
                                                      ((0xefU 
                                                        == 
                                                        (0xffU 
                                                         & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                        ? 0xdfU
                                                        : 
                                                       ((0xeeU 
                                                         == 
                                                         (0xffU 
                                                          & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                         ? 0x28U
                                                         : 
                                                        ((0xedU 
                                                          == 
                                                          (0xffU 
                                                           & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                          ? 0x55U
                                                          : 
                                                         ((0xecU 
                                                           == 
                                                           (0xffU 
                                                            & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                           ? 0xceU
                                                           : 
                                                          ((0xebU 
                                                            == 
                                                            (0xffU 
                                                             & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                            ? 0xe9U
                                                            : (IData)(this->__PVT___GEN_1002))))))))))))));
    this->__PVT___GEN_1271 = ((0xf7U == (0xffU & ((
                                                   vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                     >> 0x18U))))
                               ? 0x68U : ((0xf6U == 
                                           (0xffU & 
                                            ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                              << 8U) 
                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                >> 0x18U))))
                                           ? 0x42U : 
                                          ((0xf5U == 
                                            (0xffU 
                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                   >> 0x18U))))
                                            ? 0xe6U
                                            : ((0xf4U 
                                                == 
                                                (0xffU 
                                                 & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                     << 8U) 
                                                    | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                       >> 0x18U))))
                                                ? 0xbfU
                                                : (
                                                   (0xf3U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                         << 8U) 
                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                           >> 0x18U))))
                                                    ? 0xdU
                                                    : 
                                                   ((0xf2U 
                                                     == 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                          << 8U) 
                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                            >> 0x18U))))
                                                     ? 0x89U
                                                     : 
                                                    ((0xf1U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                           << 8U) 
                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                             >> 0x18U))))
                                                      ? 0xa1U
                                                      : 
                                                     ((0xf0U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                            << 8U) 
                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                              >> 0x18U))))
                                                       ? 0x8cU
                                                       : 
                                                      ((0xefU 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                             << 8U) 
                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                               >> 0x18U))))
                                                        ? 0xdfU
                                                        : 
                                                       ((0xeeU 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                              << 8U) 
                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                >> 0x18U))))
                                                         ? 0x28U
                                                         : 
                                                        ((0xedU 
                                                          == 
                                                          (0xffU 
                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                               << 8U) 
                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                 >> 0x18U))))
                                                          ? 0x55U
                                                          : 
                                                         ((0xecU 
                                                           == 
                                                           (0xffU 
                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                << 8U) 
                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                  >> 0x18U))))
                                                           ? 0xceU
                                                           : 
                                                          ((0xebU 
                                                            == 
                                                            (0xffU 
                                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                 << 8U) 
                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                   >> 0x18U))))
                                                            ? 0xe9U
                                                            : (IData)(this->__PVT___GEN_1258))))))))))))));
    this->__PVT___GEN_1527 = ((0xf7U == (0xffU & ((
                                                   vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                   << 0x10U) 
                                                  | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                     >> 0x10U))))
                               ? 0x68U : ((0xf6U == 
                                           (0xffU & 
                                            ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                              << 0x10U) 
                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                >> 0x10U))))
                                           ? 0x42U : 
                                          ((0xf5U == 
                                            (0xffU 
                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                   >> 0x10U))))
                                            ? 0xe6U
                                            : ((0xf4U 
                                                == 
                                                (0xffU 
                                                 & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                     << 0x10U) 
                                                    | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                       >> 0x10U))))
                                                ? 0xbfU
                                                : (
                                                   (0xf3U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                         << 0x10U) 
                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                           >> 0x10U))))
                                                    ? 0xdU
                                                    : 
                                                   ((0xf2U 
                                                     == 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                          << 0x10U) 
                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                            >> 0x10U))))
                                                     ? 0x89U
                                                     : 
                                                    ((0xf1U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                           << 0x10U) 
                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                             >> 0x10U))))
                                                      ? 0xa1U
                                                      : 
                                                     ((0xf0U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                            << 0x10U) 
                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                              >> 0x10U))))
                                                       ? 0x8cU
                                                       : 
                                                      ((0xefU 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                             << 0x10U) 
                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                               >> 0x10U))))
                                                        ? 0xdfU
                                                        : 
                                                       ((0xeeU 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                              << 0x10U) 
                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                >> 0x10U))))
                                                         ? 0x28U
                                                         : 
                                                        ((0xedU 
                                                          == 
                                                          (0xffU 
                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                               << 0x10U) 
                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                 >> 0x10U))))
                                                          ? 0x55U
                                                          : 
                                                         ((0xecU 
                                                           == 
                                                           (0xffU 
                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                << 0x10U) 
                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                  >> 0x10U))))
                                                           ? 0xceU
                                                           : 
                                                          ((0xebU 
                                                            == 
                                                            (0xffU 
                                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                 << 0x10U) 
                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                   >> 0x10U))))
                                                            ? 0xe9U
                                                            : (IData)(this->__PVT___GEN_1514))))))))))))));
    this->__PVT___GEN_1783 = ((0xf7U == (0xffU & ((
                                                   vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                   << 0x18U) 
                                                  | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                     >> 8U))))
                               ? 0x68U : ((0xf6U == 
                                           (0xffU & 
                                            ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                              << 0x18U) 
                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                >> 8U))))
                                           ? 0x42U : 
                                          ((0xf5U == 
                                            (0xffU 
                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                 << 0x18U) 
                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                   >> 8U))))
                                            ? 0xe6U
                                            : ((0xf4U 
                                                == 
                                                (0xffU 
                                                 & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                     << 0x18U) 
                                                    | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                       >> 8U))))
                                                ? 0xbfU
                                                : (
                                                   (0xf3U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                         << 0x18U) 
                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                           >> 8U))))
                                                    ? 0xdU
                                                    : 
                                                   ((0xf2U 
                                                     == 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                          << 0x18U) 
                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                            >> 8U))))
                                                     ? 0x89U
                                                     : 
                                                    ((0xf1U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                           << 0x18U) 
                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                             >> 8U))))
                                                      ? 0xa1U
                                                      : 
                                                     ((0xf0U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                            << 0x18U) 
                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                              >> 8U))))
                                                       ? 0x8cU
                                                       : 
                                                      ((0xefU 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                             << 0x18U) 
                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                               >> 8U))))
                                                        ? 0xdfU
                                                        : 
                                                       ((0xeeU 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                              << 0x18U) 
                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                >> 8U))))
                                                         ? 0x28U
                                                         : 
                                                        ((0xedU 
                                                          == 
                                                          (0xffU 
                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                               << 0x18U) 
                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                 >> 8U))))
                                                          ? 0x55U
                                                          : 
                                                         ((0xecU 
                                                           == 
                                                           (0xffU 
                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                << 0x18U) 
                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                  >> 8U))))
                                                           ? 0xceU
                                                           : 
                                                          ((0xebU 
                                                            == 
                                                            (0xffU 
                                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                 << 0x18U) 
                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                   >> 8U))))
                                                            ? 0xe9U
                                                            : (IData)(this->__PVT___GEN_1770))))))))))))));
    this->__PVT___GEN_2039 = ((0xf7U == (0xffU & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                               ? 0x68U : ((0xf6U == 
                                           (0xffU & 
                                            vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                           ? 0x42U : 
                                          ((0xf5U == 
                                            (0xffU 
                                             & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                            ? 0xe6U
                                            : ((0xf4U 
                                                == 
                                                (0xffU 
                                                 & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                ? 0xbfU
                                                : (
                                                   (0xf3U 
                                                    == 
                                                    (0xffU 
                                                     & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                    ? 0xdU
                                                    : 
                                                   ((0xf2U 
                                                     == 
                                                     (0xffU 
                                                      & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                     ? 0x89U
                                                     : 
                                                    ((0xf1U 
                                                      == 
                                                      (0xffU 
                                                       & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                      ? 0xa1U
                                                      : 
                                                     ((0xf0U 
                                                       == 
                                                       (0xffU 
                                                        & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                       ? 0x8cU
                                                       : 
                                                      ((0xefU 
                                                        == 
                                                        (0xffU 
                                                         & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                        ? 0xdfU
                                                        : 
                                                       ((0xeeU 
                                                         == 
                                                         (0xffU 
                                                          & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                         ? 0x28U
                                                         : 
                                                        ((0xedU 
                                                          == 
                                                          (0xffU 
                                                           & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                          ? 0x55U
                                                          : 
                                                         ((0xecU 
                                                           == 
                                                           (0xffU 
                                                            & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                           ? 0xceU
                                                           : 
                                                          ((0xebU 
                                                            == 
                                                            (0xffU 
                                                             & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                            ? 0xe9U
                                                            : (IData)(this->__PVT___GEN_2026))))))))))))));
    this->__PVT___GEN_2295 = ((0xf7U == (0xffU & ((
                                                   vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                     >> 0x18U))))
                               ? 0x68U : ((0xf6U == 
                                           (0xffU & 
                                            ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                              << 8U) 
                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                >> 0x18U))))
                                           ? 0x42U : 
                                          ((0xf5U == 
                                            (0xffU 
                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                   >> 0x18U))))
                                            ? 0xe6U
                                            : ((0xf4U 
                                                == 
                                                (0xffU 
                                                 & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                     << 8U) 
                                                    | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                       >> 0x18U))))
                                                ? 0xbfU
                                                : (
                                                   (0xf3U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                         << 8U) 
                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                           >> 0x18U))))
                                                    ? 0xdU
                                                    : 
                                                   ((0xf2U 
                                                     == 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                          << 8U) 
                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                            >> 0x18U))))
                                                     ? 0x89U
                                                     : 
                                                    ((0xf1U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                           << 8U) 
                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                             >> 0x18U))))
                                                      ? 0xa1U
                                                      : 
                                                     ((0xf0U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                            << 8U) 
                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                              >> 0x18U))))
                                                       ? 0x8cU
                                                       : 
                                                      ((0xefU 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                             << 8U) 
                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                               >> 0x18U))))
                                                        ? 0xdfU
                                                        : 
                                                       ((0xeeU 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                              << 8U) 
                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                >> 0x18U))))
                                                         ? 0x28U
                                                         : 
                                                        ((0xedU 
                                                          == 
                                                          (0xffU 
                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                               << 8U) 
                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                 >> 0x18U))))
                                                          ? 0x55U
                                                          : 
                                                         ((0xecU 
                                                           == 
                                                           (0xffU 
                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                << 8U) 
                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                  >> 0x18U))))
                                                           ? 0xceU
                                                           : 
                                                          ((0xebU 
                                                            == 
                                                            (0xffU 
                                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                 << 8U) 
                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                   >> 0x18U))))
                                                            ? 0xe9U
                                                            : (IData)(this->__PVT___GEN_2282))))))))))))));
    this->__PVT___GEN_2551 = ((0xf7U == (0xffU & ((
                                                   vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                   << 0x10U) 
                                                  | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                     >> 0x10U))))
                               ? 0x68U : ((0xf6U == 
                                           (0xffU & 
                                            ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                              << 0x10U) 
                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                >> 0x10U))))
                                           ? 0x42U : 
                                          ((0xf5U == 
                                            (0xffU 
                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                   >> 0x10U))))
                                            ? 0xe6U
                                            : ((0xf4U 
                                                == 
                                                (0xffU 
                                                 & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                     << 0x10U) 
                                                    | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                       >> 0x10U))))
                                                ? 0xbfU
                                                : (
                                                   (0xf3U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                         << 0x10U) 
                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                           >> 0x10U))))
                                                    ? 0xdU
                                                    : 
                                                   ((0xf2U 
                                                     == 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                          << 0x10U) 
                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                            >> 0x10U))))
                                                     ? 0x89U
                                                     : 
                                                    ((0xf1U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                           << 0x10U) 
                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                             >> 0x10U))))
                                                      ? 0xa1U
                                                      : 
                                                     ((0xf0U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                            << 0x10U) 
                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                              >> 0x10U))))
                                                       ? 0x8cU
                                                       : 
                                                      ((0xefU 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                             << 0x10U) 
                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                               >> 0x10U))))
                                                        ? 0xdfU
                                                        : 
                                                       ((0xeeU 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                              << 0x10U) 
                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                >> 0x10U))))
                                                         ? 0x28U
                                                         : 
                                                        ((0xedU 
                                                          == 
                                                          (0xffU 
                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                               << 0x10U) 
                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                 >> 0x10U))))
                                                          ? 0x55U
                                                          : 
                                                         ((0xecU 
                                                           == 
                                                           (0xffU 
                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                << 0x10U) 
                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                  >> 0x10U))))
                                                           ? 0xceU
                                                           : 
                                                          ((0xebU 
                                                            == 
                                                            (0xffU 
                                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                 << 0x10U) 
                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                   >> 0x10U))))
                                                            ? 0xe9U
                                                            : (IData)(this->__PVT___GEN_2538))))))))))))));
    this->__PVT___GEN_2807 = ((0xf7U == (0xffU & ((
                                                   vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                   << 0x18U) 
                                                  | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                     >> 8U))))
                               ? 0x68U : ((0xf6U == 
                                           (0xffU & 
                                            ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                              << 0x18U) 
                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                >> 8U))))
                                           ? 0x42U : 
                                          ((0xf5U == 
                                            (0xffU 
                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                 << 0x18U) 
                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                   >> 8U))))
                                            ? 0xe6U
                                            : ((0xf4U 
                                                == 
                                                (0xffU 
                                                 & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                     << 0x18U) 
                                                    | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                       >> 8U))))
                                                ? 0xbfU
                                                : (
                                                   (0xf3U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                         << 0x18U) 
                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                           >> 8U))))
                                                    ? 0xdU
                                                    : 
                                                   ((0xf2U 
                                                     == 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                          << 0x18U) 
                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                            >> 8U))))
                                                     ? 0x89U
                                                     : 
                                                    ((0xf1U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                           << 0x18U) 
                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                             >> 8U))))
                                                      ? 0xa1U
                                                      : 
                                                     ((0xf0U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                            << 0x18U) 
                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                              >> 8U))))
                                                       ? 0x8cU
                                                       : 
                                                      ((0xefU 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                             << 0x18U) 
                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                               >> 8U))))
                                                        ? 0xdfU
                                                        : 
                                                       ((0xeeU 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                              << 0x18U) 
                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                >> 8U))))
                                                         ? 0x28U
                                                         : 
                                                        ((0xedU 
                                                          == 
                                                          (0xffU 
                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                               << 0x18U) 
                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                 >> 8U))))
                                                          ? 0x55U
                                                          : 
                                                         ((0xecU 
                                                           == 
                                                           (0xffU 
                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                << 0x18U) 
                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                  >> 8U))))
                                                           ? 0xceU
                                                           : 
                                                          ((0xebU 
                                                            == 
                                                            (0xffU 
                                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                 << 0x18U) 
                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                   >> 8U))))
                                                            ? 0xe9U
                                                            : (IData)(this->__PVT___GEN_2794))))))))))))));
    this->__PVT___GEN_3063 = ((0xf7U == (0xffU & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                               ? 0x68U : ((0xf6U == 
                                           (0xffU & 
                                            vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                           ? 0x42U : 
                                          ((0xf5U == 
                                            (0xffU 
                                             & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                            ? 0xe6U
                                            : ((0xf4U 
                                                == 
                                                (0xffU 
                                                 & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                ? 0xbfU
                                                : (
                                                   (0xf3U 
                                                    == 
                                                    (0xffU 
                                                     & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                    ? 0xdU
                                                    : 
                                                   ((0xf2U 
                                                     == 
                                                     (0xffU 
                                                      & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                     ? 0x89U
                                                     : 
                                                    ((0xf1U 
                                                      == 
                                                      (0xffU 
                                                       & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                      ? 0xa1U
                                                      : 
                                                     ((0xf0U 
                                                       == 
                                                       (0xffU 
                                                        & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                       ? 0x8cU
                                                       : 
                                                      ((0xefU 
                                                        == 
                                                        (0xffU 
                                                         & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                        ? 0xdfU
                                                        : 
                                                       ((0xeeU 
                                                         == 
                                                         (0xffU 
                                                          & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                         ? 0x28U
                                                         : 
                                                        ((0xedU 
                                                          == 
                                                          (0xffU 
                                                           & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                          ? 0x55U
                                                          : 
                                                         ((0xecU 
                                                           == 
                                                           (0xffU 
                                                            & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                           ? 0xceU
                                                           : 
                                                          ((0xebU 
                                                            == 
                                                            (0xffU 
                                                             & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                            ? 0xe9U
                                                            : (IData)(this->__PVT___GEN_3050))))))))))))));
    this->__PVT___GEN_3319 = ((0xf7U == (0xffU & ((
                                                   vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                     >> 0x18U))))
                               ? 0x68U : ((0xf6U == 
                                           (0xffU & 
                                            ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                              << 8U) 
                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                >> 0x18U))))
                                           ? 0x42U : 
                                          ((0xf5U == 
                                            (0xffU 
                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                   >> 0x18U))))
                                            ? 0xe6U
                                            : ((0xf4U 
                                                == 
                                                (0xffU 
                                                 & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                     << 8U) 
                                                    | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                       >> 0x18U))))
                                                ? 0xbfU
                                                : (
                                                   (0xf3U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                         << 8U) 
                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                           >> 0x18U))))
                                                    ? 0xdU
                                                    : 
                                                   ((0xf2U 
                                                     == 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                          << 8U) 
                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                            >> 0x18U))))
                                                     ? 0x89U
                                                     : 
                                                    ((0xf1U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                           << 8U) 
                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                             >> 0x18U))))
                                                      ? 0xa1U
                                                      : 
                                                     ((0xf0U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                            << 8U) 
                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                              >> 0x18U))))
                                                       ? 0x8cU
                                                       : 
                                                      ((0xefU 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                             << 8U) 
                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                               >> 0x18U))))
                                                        ? 0xdfU
                                                        : 
                                                       ((0xeeU 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                              << 8U) 
                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                >> 0x18U))))
                                                         ? 0x28U
                                                         : 
                                                        ((0xedU 
                                                          == 
                                                          (0xffU 
                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                               << 8U) 
                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                 >> 0x18U))))
                                                          ? 0x55U
                                                          : 
                                                         ((0xecU 
                                                           == 
                                                           (0xffU 
                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                << 8U) 
                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                  >> 0x18U))))
                                                           ? 0xceU
                                                           : 
                                                          ((0xebU 
                                                            == 
                                                            (0xffU 
                                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                 << 8U) 
                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                   >> 0x18U))))
                                                            ? 0xe9U
                                                            : (IData)(this->__PVT___GEN_3306))))))))))))));
    this->__PVT___GEN_3575 = ((0xf7U == (0xffU & ((
                                                   vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                   << 0x10U) 
                                                  | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                     >> 0x10U))))
                               ? 0x68U : ((0xf6U == 
                                           (0xffU & 
                                            ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                              << 0x10U) 
                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                >> 0x10U))))
                                           ? 0x42U : 
                                          ((0xf5U == 
                                            (0xffU 
                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                 << 0x10U) 
                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                   >> 0x10U))))
                                            ? 0xe6U
                                            : ((0xf4U 
                                                == 
                                                (0xffU 
                                                 & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                     << 0x10U) 
                                                    | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                       >> 0x10U))))
                                                ? 0xbfU
                                                : (
                                                   (0xf3U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                         << 0x10U) 
                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                           >> 0x10U))))
                                                    ? 0xdU
                                                    : 
                                                   ((0xf2U 
                                                     == 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                          << 0x10U) 
                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                            >> 0x10U))))
                                                     ? 0x89U
                                                     : 
                                                    ((0xf1U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                           << 0x10U) 
                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                             >> 0x10U))))
                                                      ? 0xa1U
                                                      : 
                                                     ((0xf0U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                            << 0x10U) 
                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                              >> 0x10U))))
                                                       ? 0x8cU
                                                       : 
                                                      ((0xefU 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                             << 0x10U) 
                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                               >> 0x10U))))
                                                        ? 0xdfU
                                                        : 
                                                       ((0xeeU 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                              << 0x10U) 
                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                >> 0x10U))))
                                                         ? 0x28U
                                                         : 
                                                        ((0xedU 
                                                          == 
                                                          (0xffU 
                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                               << 0x10U) 
                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                 >> 0x10U))))
                                                          ? 0x55U
                                                          : 
                                                         ((0xecU 
                                                           == 
                                                           (0xffU 
                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                << 0x10U) 
                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                  >> 0x10U))))
                                                           ? 0xceU
                                                           : 
                                                          ((0xebU 
                                                            == 
                                                            (0xffU 
                                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                 << 0x10U) 
                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                   >> 0x10U))))
                                                            ? 0xe9U
                                                            : (IData)(this->__PVT___GEN_3562))))))))))))));
    this->__PVT___GEN_3831 = ((0xf7U == (0xffU & ((
                                                   vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                   << 0x18U) 
                                                  | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                     >> 8U))))
                               ? 0x68U : ((0xf6U == 
                                           (0xffU & 
                                            ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                              << 0x18U) 
                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                >> 8U))))
                                           ? 0x42U : 
                                          ((0xf5U == 
                                            (0xffU 
                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                 << 0x18U) 
                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                   >> 8U))))
                                            ? 0xe6U
                                            : ((0xf4U 
                                                == 
                                                (0xffU 
                                                 & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                     << 0x18U) 
                                                    | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                       >> 8U))))
                                                ? 0xbfU
                                                : (
                                                   (0xf3U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                         << 0x18U) 
                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                           >> 8U))))
                                                    ? 0xdU
                                                    : 
                                                   ((0xf2U 
                                                     == 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                          << 0x18U) 
                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                            >> 8U))))
                                                     ? 0x89U
                                                     : 
                                                    ((0xf1U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                           << 0x18U) 
                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                             >> 8U))))
                                                      ? 0xa1U
                                                      : 
                                                     ((0xf0U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                            << 0x18U) 
                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                              >> 8U))))
                                                       ? 0x8cU
                                                       : 
                                                      ((0xefU 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                             << 0x18U) 
                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                               >> 8U))))
                                                        ? 0xdfU
                                                        : 
                                                       ((0xeeU 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                              << 0x18U) 
                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                >> 8U))))
                                                         ? 0x28U
                                                         : 
                                                        ((0xedU 
                                                          == 
                                                          (0xffU 
                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                               << 0x18U) 
                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                 >> 8U))))
                                                          ? 0x55U
                                                          : 
                                                         ((0xecU 
                                                           == 
                                                           (0xffU 
                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                << 0x18U) 
                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                  >> 8U))))
                                                           ? 0xceU
                                                           : 
                                                          ((0xebU 
                                                            == 
                                                            (0xffU 
                                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                 << 0x18U) 
                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                   >> 8U))))
                                                            ? 0xe9U
                                                            : (IData)(this->__PVT___GEN_3818))))))))))))));
    this->__PVT___GEN_4087 = ((0xf7U == (0xffU & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                               ? 0x68U : ((0xf6U == 
                                           (0xffU & 
                                            vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                           ? 0x42U : 
                                          ((0xf5U == 
                                            (0xffU 
                                             & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                            ? 0xe6U
                                            : ((0xf4U 
                                                == 
                                                (0xffU 
                                                 & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                ? 0xbfU
                                                : (
                                                   (0xf3U 
                                                    == 
                                                    (0xffU 
                                                     & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                    ? 0xdU
                                                    : 
                                                   ((0xf2U 
                                                     == 
                                                     (0xffU 
                                                      & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                     ? 0x89U
                                                     : 
                                                    ((0xf1U 
                                                      == 
                                                      (0xffU 
                                                       & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                      ? 0xa1U
                                                      : 
                                                     ((0xf0U 
                                                       == 
                                                       (0xffU 
                                                        & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                       ? 0x8cU
                                                       : 
                                                      ((0xefU 
                                                        == 
                                                        (0xffU 
                                                         & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                        ? 0xdfU
                                                        : 
                                                       ((0xeeU 
                                                         == 
                                                         (0xffU 
                                                          & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                         ? 0x28U
                                                         : 
                                                        ((0xedU 
                                                          == 
                                                          (0xffU 
                                                           & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                          ? 0x55U
                                                          : 
                                                         ((0xecU 
                                                           == 
                                                           (0xffU 
                                                            & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                           ? 0xceU
                                                           : 
                                                          ((0xebU 
                                                            == 
                                                            (0xffU 
                                                             & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                            ? 0xe9U
                                                            : (IData)(this->__PVT___GEN_4074))))))))))))));
    this->__PVT__outWord_hi = (((QData)((IData)((((
                                                   (0xffU 
                                                    == 
                                                    (0xffU 
                                                     & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                        >> 0x18U)))
                                                    ? 0x16U
                                                    : 
                                                   ((0xfeU 
                                                     == 
                                                     (0xffU 
                                                      & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                         >> 0x18U)))
                                                     ? 0xbbU
                                                     : 
                                                    ((0xfdU 
                                                      == 
                                                      (0xffU 
                                                       & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                          >> 0x18U)))
                                                      ? 0x54U
                                                      : 
                                                     ((0xfcU 
                                                       == 
                                                       (0xffU 
                                                        & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                           >> 0x18U)))
                                                       ? 0xb0U
                                                       : 
                                                      ((0xfbU 
                                                        == 
                                                        (0xffU 
                                                         & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                            >> 0x18U)))
                                                        ? 0xfU
                                                        : 
                                                       ((0xfaU 
                                                         == 
                                                         (0xffU 
                                                          & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                             >> 0x18U)))
                                                         ? 0x2dU
                                                         : 
                                                        ((0xf9U 
                                                          == 
                                                          (0xffU 
                                                           & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                              >> 0x18U)))
                                                          ? 0x99U
                                                          : 
                                                         ((0xf8U 
                                                           == 
                                                           (0xffU 
                                                            & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                               >> 0x18U)))
                                                           ? 0x41U
                                                           : (IData)(this->__PVT___GEN_247))))))))) 
                                                  << 0x18U) 
                                                 | ((((0xffU 
                                                       == 
                                                       (0xffU 
                                                        & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                           >> 0x10U)))
                                                       ? 0x16U
                                                       : 
                                                      ((0xfeU 
                                                        == 
                                                        (0xffU 
                                                         & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                            >> 0x10U)))
                                                        ? 0xbbU
                                                        : 
                                                       ((0xfdU 
                                                         == 
                                                         (0xffU 
                                                          & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                             >> 0x10U)))
                                                         ? 0x54U
                                                         : 
                                                        ((0xfcU 
                                                          == 
                                                          (0xffU 
                                                           & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                              >> 0x10U)))
                                                          ? 0xb0U
                                                          : 
                                                         ((0xfbU 
                                                           == 
                                                           (0xffU 
                                                            & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                               >> 0x10U)))
                                                           ? 0xfU
                                                           : 
                                                          ((0xfaU 
                                                            == 
                                                            (0xffU 
                                                             & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                >> 0x10U)))
                                                            ? 0x2dU
                                                            : 
                                                           ((0xf9U 
                                                             == 
                                                             (0xffU 
                                                              & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                 >> 0x10U)))
                                                             ? 0x99U
                                                             : 
                                                            ((0xf8U 
                                                              == 
                                                              (0xffU 
                                                               & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                  >> 0x10U)))
                                                              ? 0x41U
                                                              : (IData)(this->__PVT___GEN_503))))))))) 
                                                     << 0x10U) 
                                                    | ((((0xffU 
                                                          == 
                                                          (0xffU 
                                                           & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                              >> 8U)))
                                                          ? 0x16U
                                                          : 
                                                         ((0xfeU 
                                                           == 
                                                           (0xffU 
                                                            & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                               >> 8U)))
                                                           ? 0xbbU
                                                           : 
                                                          ((0xfdU 
                                                            == 
                                                            (0xffU 
                                                             & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                >> 8U)))
                                                            ? 0x54U
                                                            : 
                                                           ((0xfcU 
                                                             == 
                                                             (0xffU 
                                                              & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                 >> 8U)))
                                                             ? 0xb0U
                                                             : 
                                                            ((0xfbU 
                                                              == 
                                                              (0xffU 
                                                               & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                  >> 8U)))
                                                              ? 0xfU
                                                              : 
                                                             ((0xfaU 
                                                               == 
                                                               (0xffU 
                                                                & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                   >> 8U)))
                                                               ? 0x2dU
                                                               : 
                                                              ((0xf9U 
                                                                == 
                                                                (0xffU 
                                                                 & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                    >> 8U)))
                                                                ? 0x99U
                                                                : 
                                                               ((0xf8U 
                                                                 == 
                                                                 (0xffU 
                                                                  & (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                     >> 8U)))
                                                                 ? 0x41U
                                                                 : (IData)(this->__PVT___GEN_759))))))))) 
                                                        << 8U) 
                                                       | ((0xffU 
                                                           == 
                                                           (0xffU 
                                                            & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                           ? 0x16U
                                                           : 
                                                          ((0xfeU 
                                                            == 
                                                            (0xffU 
                                                             & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                            ? 0xbbU
                                                            : 
                                                           ((0xfdU 
                                                             == 
                                                             (0xffU 
                                                              & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                             ? 0x54U
                                                             : 
                                                            ((0xfcU 
                                                              == 
                                                              (0xffU 
                                                               & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                              ? 0xb0U
                                                              : 
                                                             ((0xfbU 
                                                               == 
                                                               (0xffU 
                                                                & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                               ? 0xfU
                                                               : 
                                                              ((0xfaU 
                                                                == 
                                                                (0xffU 
                                                                 & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                                ? 0x2dU
                                                                : 
                                                               ((0xf9U 
                                                                 == 
                                                                 (0xffU 
                                                                  & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                                 ? 0x99U
                                                                 : 
                                                                ((0xf8U 
                                                                  == 
                                                                  (0xffU 
                                                                   & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U]))
                                                                  ? 0x41U
                                                                  : (IData)(this->__PVT___GEN_1015)))))))))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((((0xffU 
                                                                == 
                                                                (0xffU 
                                                                 & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                     << 8U) 
                                                                    | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                       >> 0x18U))))
                                                                ? 0x16U
                                                                : 
                                                               ((0xfeU 
                                                                 == 
                                                                 (0xffU 
                                                                  & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                      << 8U) 
                                                                     | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                        >> 0x18U))))
                                                                 ? 0xbbU
                                                                 : 
                                                                ((0xfdU 
                                                                  == 
                                                                  (0xffU 
                                                                   & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                       << 8U) 
                                                                      | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                         >> 0x18U))))
                                                                  ? 0x54U
                                                                  : 
                                                                 ((0xfcU 
                                                                   == 
                                                                   (0xffU 
                                                                    & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                        << 8U) 
                                                                       | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                          >> 0x18U))))
                                                                   ? 0xb0U
                                                                   : 
                                                                  ((0xfbU 
                                                                    == 
                                                                    (0xffU 
                                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                         << 8U) 
                                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                           >> 0x18U))))
                                                                    ? 0xfU
                                                                    : 
                                                                   ((0xfaU 
                                                                     == 
                                                                     (0xffU 
                                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                          << 8U) 
                                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                            >> 0x18U))))
                                                                     ? 0x2dU
                                                                     : 
                                                                    ((0xf9U 
                                                                      == 
                                                                      (0xffU 
                                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                           << 8U) 
                                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                             >> 0x18U))))
                                                                      ? 0x99U
                                                                      : 
                                                                     ((0xf8U 
                                                                       == 
                                                                       (0xffU 
                                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                            << 8U) 
                                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                              >> 0x18U))))
                                                                       ? 0x41U
                                                                       : (IData)(this->__PVT___GEN_1271))))))))) 
                                                              << 0x18U) 
                                                             | ((((0xffU 
                                                                   == 
                                                                   (0xffU 
                                                                    & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                        << 0x10U) 
                                                                       | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                          >> 0x10U))))
                                                                   ? 0x16U
                                                                   : 
                                                                  ((0xfeU 
                                                                    == 
                                                                    (0xffU 
                                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                         << 0x10U) 
                                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                           >> 0x10U))))
                                                                    ? 0xbbU
                                                                    : 
                                                                   ((0xfdU 
                                                                     == 
                                                                     (0xffU 
                                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                          << 0x10U) 
                                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                            >> 0x10U))))
                                                                     ? 0x54U
                                                                     : 
                                                                    ((0xfcU 
                                                                      == 
                                                                      (0xffU 
                                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                           << 0x10U) 
                                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                             >> 0x10U))))
                                                                      ? 0xb0U
                                                                      : 
                                                                     ((0xfbU 
                                                                       == 
                                                                       (0xffU 
                                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                            << 0x10U) 
                                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                              >> 0x10U))))
                                                                       ? 0xfU
                                                                       : 
                                                                      ((0xfaU 
                                                                        == 
                                                                        (0xffU 
                                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                             << 0x10U) 
                                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                               >> 0x10U))))
                                                                        ? 0x2dU
                                                                        : 
                                                                       ((0xf9U 
                                                                         == 
                                                                         (0xffU 
                                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                              << 0x10U) 
                                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                                >> 0x10U))))
                                                                         ? 0x99U
                                                                         : 
                                                                        ((0xf8U 
                                                                          == 
                                                                          (0xffU 
                                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                               << 0x10U) 
                                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                                >> 0x10U))))
                                                                          ? 0x41U
                                                                          : (IData)(this->__PVT___GEN_1527))))))))) 
                                                                 << 0x10U) 
                                                                | ((((0xffU 
                                                                      == 
                                                                      (0xffU 
                                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                           << 0x18U) 
                                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                             >> 8U))))
                                                                      ? 0x16U
                                                                      : 
                                                                     ((0xfeU 
                                                                       == 
                                                                       (0xffU 
                                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                            << 0x18U) 
                                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                              >> 8U))))
                                                                       ? 0xbbU
                                                                       : 
                                                                      ((0xfdU 
                                                                        == 
                                                                        (0xffU 
                                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                             << 0x18U) 
                                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                               >> 8U))))
                                                                        ? 0x54U
                                                                        : 
                                                                       ((0xfcU 
                                                                         == 
                                                                         (0xffU 
                                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                              << 0x18U) 
                                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                                >> 8U))))
                                                                         ? 0xb0U
                                                                         : 
                                                                        ((0xfbU 
                                                                          == 
                                                                          (0xffU 
                                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                               << 0x18U) 
                                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                                >> 8U))))
                                                                          ? 0xfU
                                                                          : 
                                                                         ((0xfaU 
                                                                           == 
                                                                           (0xffU 
                                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                                << 0x18U) 
                                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                                >> 8U))))
                                                                           ? 0x2dU
                                                                           : 
                                                                          ((0xf9U 
                                                                            == 
                                                                            (0xffU 
                                                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                                << 0x18U) 
                                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                                >> 8U))))
                                                                            ? 0x99U
                                                                            : 
                                                                           ((0xf8U 
                                                                             == 
                                                                             (0xffU 
                                                                              & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                                << 0x18U) 
                                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                                >> 8U))))
                                                                             ? 0x41U
                                                                             : (IData)(this->__PVT___GEN_1783))))))))) 
                                                                    << 8U) 
                                                                   | ((0xffU 
                                                                       == 
                                                                       (0xffU 
                                                                        & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                                       ? 0x16U
                                                                       : 
                                                                      ((0xfeU 
                                                                        == 
                                                                        (0xffU 
                                                                         & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                                        ? 0xbbU
                                                                        : 
                                                                       ((0xfdU 
                                                                         == 
                                                                         (0xffU 
                                                                          & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                                         ? 0x54U
                                                                         : 
                                                                        ((0xfcU 
                                                                          == 
                                                                          (0xffU 
                                                                           & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                                          ? 0xb0U
                                                                          : 
                                                                         ((0xfbU 
                                                                           == 
                                                                           (0xffU 
                                                                            & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                                           ? 0xfU
                                                                           : 
                                                                          ((0xfaU 
                                                                            == 
                                                                            (0xffU 
                                                                             & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                                            ? 0x2dU
                                                                            : 
                                                                           ((0xf9U 
                                                                             == 
                                                                             (0xffU 
                                                                              & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                                             ? 0x99U
                                                                             : 
                                                                            ((0xf8U 
                                                                              == 
                                                                              (0xffU 
                                                                               & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U]))
                                                                              ? 0x41U
                                                                              : (IData)(this->__PVT___GEN_2039)))))))))))))));
    this->__PVT__outWord_lo = (((QData)((IData)((((
                                                   (0xffU 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                         << 8U) 
                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                           >> 0x18U))))
                                                    ? 0x16U
                                                    : 
                                                   ((0xfeU 
                                                     == 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                          << 8U) 
                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                            >> 0x18U))))
                                                     ? 0xbbU
                                                     : 
                                                    ((0xfdU 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                           << 8U) 
                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                             >> 0x18U))))
                                                      ? 0x54U
                                                      : 
                                                     ((0xfcU 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                            << 8U) 
                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                              >> 0x18U))))
                                                       ? 0xb0U
                                                       : 
                                                      ((0xfbU 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                             << 8U) 
                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                               >> 0x18U))))
                                                        ? 0xfU
                                                        : 
                                                       ((0xfaU 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                              << 8U) 
                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                >> 0x18U))))
                                                         ? 0x2dU
                                                         : 
                                                        ((0xf9U 
                                                          == 
                                                          (0xffU 
                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                               << 8U) 
                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                 >> 0x18U))))
                                                          ? 0x99U
                                                          : 
                                                         ((0xf8U 
                                                           == 
                                                           (0xffU 
                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                << 8U) 
                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                  >> 0x18U))))
                                                           ? 0x41U
                                                           : (IData)(this->__PVT___GEN_2295))))))))) 
                                                  << 0x18U) 
                                                 | ((((0xffU 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                            << 0x10U) 
                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                              >> 0x10U))))
                                                       ? 0x16U
                                                       : 
                                                      ((0xfeU 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                             << 0x10U) 
                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                               >> 0x10U))))
                                                        ? 0xbbU
                                                        : 
                                                       ((0xfdU 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                              << 0x10U) 
                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                >> 0x10U))))
                                                         ? 0x54U
                                                         : 
                                                        ((0xfcU 
                                                          == 
                                                          (0xffU 
                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                               << 0x10U) 
                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                 >> 0x10U))))
                                                          ? 0xb0U
                                                          : 
                                                         ((0xfbU 
                                                           == 
                                                           (0xffU 
                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                << 0x10U) 
                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                  >> 0x10U))))
                                                           ? 0xfU
                                                           : 
                                                          ((0xfaU 
                                                            == 
                                                            (0xffU 
                                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                 << 0x10U) 
                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                   >> 0x10U))))
                                                            ? 0x2dU
                                                            : 
                                                           ((0xf9U 
                                                             == 
                                                             (0xffU 
                                                              & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                  << 0x10U) 
                                                                 | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                    >> 0x10U))))
                                                             ? 0x99U
                                                             : 
                                                            ((0xf8U 
                                                              == 
                                                              (0xffU 
                                                               & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                   << 0x10U) 
                                                                  | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                     >> 0x10U))))
                                                              ? 0x41U
                                                              : (IData)(this->__PVT___GEN_2551))))))))) 
                                                     << 0x10U) 
                                                    | ((((0xffU 
                                                          == 
                                                          (0xffU 
                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                               << 0x18U) 
                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                 >> 8U))))
                                                          ? 0x16U
                                                          : 
                                                         ((0xfeU 
                                                           == 
                                                           (0xffU 
                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                << 0x18U) 
                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                  >> 8U))))
                                                           ? 0xbbU
                                                           : 
                                                          ((0xfdU 
                                                            == 
                                                            (0xffU 
                                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                 << 0x18U) 
                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                   >> 8U))))
                                                            ? 0x54U
                                                            : 
                                                           ((0xfcU 
                                                             == 
                                                             (0xffU 
                                                              & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                  << 0x18U) 
                                                                 | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                    >> 8U))))
                                                             ? 0xb0U
                                                             : 
                                                            ((0xfbU 
                                                              == 
                                                              (0xffU 
                                                               & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                   << 0x18U) 
                                                                  | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                     >> 8U))))
                                                              ? 0xfU
                                                              : 
                                                             ((0xfaU 
                                                               == 
                                                               (0xffU 
                                                                & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                    << 0x18U) 
                                                                   | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                      >> 8U))))
                                                               ? 0x2dU
                                                               : 
                                                              ((0xf9U 
                                                                == 
                                                                (0xffU 
                                                                 & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                     << 0x18U) 
                                                                    | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                       >> 8U))))
                                                                ? 0x99U
                                                                : 
                                                               ((0xf8U 
                                                                 == 
                                                                 (0xffU 
                                                                  & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                      << 0x18U) 
                                                                     | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                        >> 8U))))
                                                                 ? 0x41U
                                                                 : (IData)(this->__PVT___GEN_2807))))))))) 
                                                        << 8U) 
                                                       | ((0xffU 
                                                           == 
                                                           (0xffU 
                                                            & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                           ? 0x16U
                                                           : 
                                                          ((0xfeU 
                                                            == 
                                                            (0xffU 
                                                             & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                            ? 0xbbU
                                                            : 
                                                           ((0xfdU 
                                                             == 
                                                             (0xffU 
                                                              & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                             ? 0x54U
                                                             : 
                                                            ((0xfcU 
                                                              == 
                                                              (0xffU 
                                                               & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                              ? 0xb0U
                                                              : 
                                                             ((0xfbU 
                                                               == 
                                                               (0xffU 
                                                                & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                               ? 0xfU
                                                               : 
                                                              ((0xfaU 
                                                                == 
                                                                (0xffU 
                                                                 & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                                ? 0x2dU
                                                                : 
                                                               ((0xf9U 
                                                                 == 
                                                                 (0xffU 
                                                                  & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                                 ? 0x99U
                                                                 : 
                                                                ((0xf8U 
                                                                  == 
                                                                  (0xffU 
                                                                   & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U]))
                                                                  ? 0x41U
                                                                  : (IData)(this->__PVT___GEN_3063)))))))))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((((0xffU 
                                                                == 
                                                                (0xffU 
                                                                 & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                     << 8U) 
                                                                    | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                       >> 0x18U))))
                                                                ? 0x16U
                                                                : 
                                                               ((0xfeU 
                                                                 == 
                                                                 (0xffU 
                                                                  & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                      << 8U) 
                                                                     | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                        >> 0x18U))))
                                                                 ? 0xbbU
                                                                 : 
                                                                ((0xfdU 
                                                                  == 
                                                                  (0xffU 
                                                                   & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                       << 8U) 
                                                                      | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                         >> 0x18U))))
                                                                  ? 0x54U
                                                                  : 
                                                                 ((0xfcU 
                                                                   == 
                                                                   (0xffU 
                                                                    & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                        << 8U) 
                                                                       | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                          >> 0x18U))))
                                                                   ? 0xb0U
                                                                   : 
                                                                  ((0xfbU 
                                                                    == 
                                                                    (0xffU 
                                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                         << 8U) 
                                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                           >> 0x18U))))
                                                                    ? 0xfU
                                                                    : 
                                                                   ((0xfaU 
                                                                     == 
                                                                     (0xffU 
                                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                          << 8U) 
                                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                            >> 0x18U))))
                                                                     ? 0x2dU
                                                                     : 
                                                                    ((0xf9U 
                                                                      == 
                                                                      (0xffU 
                                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                           << 8U) 
                                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                             >> 0x18U))))
                                                                      ? 0x99U
                                                                      : 
                                                                     ((0xf8U 
                                                                       == 
                                                                       (0xffU 
                                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                            << 8U) 
                                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                              >> 0x18U))))
                                                                       ? 0x41U
                                                                       : (IData)(this->__PVT___GEN_3319))))))))) 
                                                              << 0x18U) 
                                                             | ((((0xffU 
                                                                   == 
                                                                   (0xffU 
                                                                    & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                        << 0x10U) 
                                                                       | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                          >> 0x10U))))
                                                                   ? 0x16U
                                                                   : 
                                                                  ((0xfeU 
                                                                    == 
                                                                    (0xffU 
                                                                     & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                         << 0x10U) 
                                                                        | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                           >> 0x10U))))
                                                                    ? 0xbbU
                                                                    : 
                                                                   ((0xfdU 
                                                                     == 
                                                                     (0xffU 
                                                                      & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                          << 0x10U) 
                                                                         | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                            >> 0x10U))))
                                                                     ? 0x54U
                                                                     : 
                                                                    ((0xfcU 
                                                                      == 
                                                                      (0xffU 
                                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                           << 0x10U) 
                                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                             >> 0x10U))))
                                                                      ? 0xb0U
                                                                      : 
                                                                     ((0xfbU 
                                                                       == 
                                                                       (0xffU 
                                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                            << 0x10U) 
                                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                              >> 0x10U))))
                                                                       ? 0xfU
                                                                       : 
                                                                      ((0xfaU 
                                                                        == 
                                                                        (0xffU 
                                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                             << 0x10U) 
                                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                               >> 0x10U))))
                                                                        ? 0x2dU
                                                                        : 
                                                                       ((0xf9U 
                                                                         == 
                                                                         (0xffU 
                                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                              << 0x10U) 
                                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                                >> 0x10U))))
                                                                         ? 0x99U
                                                                         : 
                                                                        ((0xf8U 
                                                                          == 
                                                                          (0xffU 
                                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                               << 0x10U) 
                                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                                >> 0x10U))))
                                                                          ? 0x41U
                                                                          : (IData)(this->__PVT___GEN_3575))))))))) 
                                                                 << 0x10U) 
                                                                | ((((0xffU 
                                                                      == 
                                                                      (0xffU 
                                                                       & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                           << 0x18U) 
                                                                          | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                             >> 8U))))
                                                                      ? 0x16U
                                                                      : 
                                                                     ((0xfeU 
                                                                       == 
                                                                       (0xffU 
                                                                        & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                            << 0x18U) 
                                                                           | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                              >> 8U))))
                                                                       ? 0xbbU
                                                                       : 
                                                                      ((0xfdU 
                                                                        == 
                                                                        (0xffU 
                                                                         & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                             << 0x18U) 
                                                                            | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                               >> 8U))))
                                                                        ? 0x54U
                                                                        : 
                                                                       ((0xfcU 
                                                                         == 
                                                                         (0xffU 
                                                                          & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                              << 0x18U) 
                                                                             | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                                >> 8U))))
                                                                         ? 0xb0U
                                                                         : 
                                                                        ((0xfbU 
                                                                          == 
                                                                          (0xffU 
                                                                           & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                               << 0x18U) 
                                                                              | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                                >> 8U))))
                                                                          ? 0xfU
                                                                          : 
                                                                         ((0xfaU 
                                                                           == 
                                                                           (0xffU 
                                                                            & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                                << 0x18U) 
                                                                               | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                                >> 8U))))
                                                                           ? 0x2dU
                                                                           : 
                                                                          ((0xf9U 
                                                                            == 
                                                                            (0xffU 
                                                                             & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                                >> 8U))))
                                                                            ? 0x99U
                                                                            : 
                                                                           ((0xf8U 
                                                                             == 
                                                                             (0xffU 
                                                                              & ((vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                                >> 8U))))
                                                                             ? 0x41U
                                                                             : (IData)(this->__PVT___GEN_3831))))))))) 
                                                                    << 8U) 
                                                                   | ((0xffU 
                                                                       == 
                                                                       (0xffU 
                                                                        & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                                       ? 0x16U
                                                                       : 
                                                                      ((0xfeU 
                                                                        == 
                                                                        (0xffU 
                                                                         & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                                        ? 0xbbU
                                                                        : 
                                                                       ((0xfdU 
                                                                         == 
                                                                         (0xffU 
                                                                          & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                                         ? 0x54U
                                                                         : 
                                                                        ((0xfcU 
                                                                          == 
                                                                          (0xffU 
                                                                           & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                                          ? 0xb0U
                                                                          : 
                                                                         ((0xfbU 
                                                                           == 
                                                                           (0xffU 
                                                                            & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                                           ? 0xfU
                                                                           : 
                                                                          ((0xfaU 
                                                                            == 
                                                                            (0xffU 
                                                                             & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                                            ? 0x2dU
                                                                            : 
                                                                           ((0xf9U 
                                                                             == 
                                                                             (0xffU 
                                                                              & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                                             ? 0x99U
                                                                             : 
                                                                            ((0xf8U 
                                                                              == 
                                                                              (0xffU 
                                                                               & vlSymsp->TOP__Aes128Core__DOT__r7.__PVT__core__DOT__addk_io_out_bits_bits[0U]))
                                                                              ? 0x41U
                                                                              : (IData)(this->__PVT___GEN_4087)))))))))))))));
    this->io_out_bits_bits[0U] = (IData)(this->__PVT__outWord_lo);
    this->io_out_bits_bits[1U] = (IData)((this->__PVT__outWord_lo 
                                          >> 0x20U));
    this->io_out_bits_bits[2U] = (IData)(this->__PVT__outWord_hi);
    this->io_out_bits_bits[3U] = (IData)((this->__PVT__outWord_hi 
                                          >> 0x20U));
}
