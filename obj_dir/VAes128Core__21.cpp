// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAes128Core.h for the primary calling header

#include "VAes128Core.h"
#include "VAes128Core__Syms.h"

VL_INLINE_OPT void VAes128Core::_combo__TOP__22(VAes128Core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAes128Core::_combo__TOP__22\n"); );
    VAes128Core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_3549 
        = ((0xddU == (0xffU & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                << 0x10U) | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                             >> 0x10U))))
            ? 0xc1U : ((0xdcU == (0xffU & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                            << 0x10U) 
                                           | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                              >> 0x10U))))
                        ? 0x86U : ((0xdbU == (0xffU 
                                              & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                    >> 0x10U))))
                                    ? 0xb9U : ((0xdaU 
                                                == 
                                                (0xffU 
                                                 & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                       >> 0x10U))))
                                                ? 0x57U
                                                : (
                                                   (0xd9U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                         << 0x10U) 
                                                        | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                           >> 0x10U))))
                                                    ? 0x35U
                                                    : 
                                                   ((0xd8U 
                                                     == 
                                                     (0xffU 
                                                      & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                          << 0x10U) 
                                                         | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                            >> 0x10U))))
                                                     ? 0x61U
                                                     : 
                                                    ((0xd7U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                           << 0x10U) 
                                                          | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                             >> 0x10U))))
                                                      ? 0xeU
                                                      : 
                                                     ((0xd6U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                            << 0x10U) 
                                                           | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                              >> 0x10U))))
                                                       ? 0xf6U
                                                       : 
                                                      ((0xd5U 
                                                        == 
                                                        (0xffU 
                                                         & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                             << 0x10U) 
                                                            | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                               >> 0x10U))))
                                                        ? 3U
                                                        : 
                                                       ((0xd4U 
                                                         == 
                                                         (0xffU 
                                                          & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                              << 0x10U) 
                                                             | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                >> 0x10U))))
                                                         ? 0x48U
                                                         : 
                                                        ((0xd3U 
                                                          == 
                                                          (0xffU 
                                                           & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                               << 0x10U) 
                                                              | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                 >> 0x10U))))
                                                          ? 0x66U
                                                          : 
                                                         ((0xd2U 
                                                           == 
                                                           (0xffU 
                                                            & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                << 0x10U) 
                                                               | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                  >> 0x10U))))
                                                           ? 0xb5U
                                                           : 
                                                          ((0xd1U 
                                                            == 
                                                            (0xffU 
                                                             & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                 << 0x10U) 
                                                                | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                   >> 0x10U))))
                                                            ? 0x3eU
                                                            : (IData)(vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_3536))))))))))))));
    vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_3805 
        = ((0xddU == (0xffU & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                << 0x18U) | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                             >> 8U))))
            ? 0xc1U : ((0xdcU == (0xffU & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                            << 0x18U) 
                                           | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                              >> 8U))))
                        ? 0x86U : ((0xdbU == (0xffU 
                                              & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                    >> 8U))))
                                    ? 0xb9U : ((0xdaU 
                                                == 
                                                (0xffU 
                                                 & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                     << 0x18U) 
                                                    | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                       >> 8U))))
                                                ? 0x57U
                                                : (
                                                   (0xd9U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                         << 0x18U) 
                                                        | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                           >> 8U))))
                                                    ? 0x35U
                                                    : 
                                                   ((0xd8U 
                                                     == 
                                                     (0xffU 
                                                      & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                          << 0x18U) 
                                                         | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                            >> 8U))))
                                                     ? 0x61U
                                                     : 
                                                    ((0xd7U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                           << 0x18U) 
                                                          | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                             >> 8U))))
                                                      ? 0xeU
                                                      : 
                                                     ((0xd6U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                            << 0x18U) 
                                                           | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                              >> 8U))))
                                                       ? 0xf6U
                                                       : 
                                                      ((0xd5U 
                                                        == 
                                                        (0xffU 
                                                         & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                             << 0x18U) 
                                                            | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                               >> 8U))))
                                                        ? 3U
                                                        : 
                                                       ((0xd4U 
                                                         == 
                                                         (0xffU 
                                                          & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                              << 0x18U) 
                                                             | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                >> 8U))))
                                                         ? 0x48U
                                                         : 
                                                        ((0xd3U 
                                                          == 
                                                          (0xffU 
                                                           & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                               << 0x18U) 
                                                              | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                 >> 8U))))
                                                          ? 0x66U
                                                          : 
                                                         ((0xd2U 
                                                           == 
                                                           (0xffU 
                                                            & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                << 0x18U) 
                                                               | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                  >> 8U))))
                                                           ? 0xb5U
                                                           : 
                                                          ((0xd1U 
                                                            == 
                                                            (0xffU 
                                                             & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                 << 0x18U) 
                                                                | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                   >> 8U))))
                                                            ? 0x3eU
                                                            : (IData)(vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_3792))))))))))))));
    vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_4061 
        = ((0xddU == (0xffU & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U]))
            ? 0xc1U : ((0xdcU == (0xffU & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U]))
                        ? 0x86U : ((0xdbU == (0xffU 
                                              & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U]))
                                    ? 0xb9U : ((0xdaU 
                                                == 
                                                (0xffU 
                                                 & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U]))
                                                ? 0x57U
                                                : (
                                                   (0xd9U 
                                                    == 
                                                    (0xffU 
                                                     & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U]))
                                                    ? 0x35U
                                                    : 
                                                   ((0xd8U 
                                                     == 
                                                     (0xffU 
                                                      & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U]))
                                                     ? 0x61U
                                                     : 
                                                    ((0xd7U 
                                                      == 
                                                      (0xffU 
                                                       & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U]))
                                                      ? 0xeU
                                                      : 
                                                     ((0xd6U 
                                                       == 
                                                       (0xffU 
                                                        & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U]))
                                                       ? 0xf6U
                                                       : 
                                                      ((0xd5U 
                                                        == 
                                                        (0xffU 
                                                         & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U]))
                                                        ? 3U
                                                        : 
                                                       ((0xd4U 
                                                         == 
                                                         (0xffU 
                                                          & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U]))
                                                         ? 0x48U
                                                         : 
                                                        ((0xd3U 
                                                          == 
                                                          (0xffU 
                                                           & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U]))
                                                          ? 0x66U
                                                          : 
                                                         ((0xd2U 
                                                           == 
                                                           (0xffU 
                                                            & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U]))
                                                           ? 0xb5U
                                                           : 
                                                          ((0xd1U 
                                                            == 
                                                            (0xffU 
                                                             & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U]))
                                                            ? 0x3eU
                                                            : (IData)(vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_4048))))))))))))));
    vlTOPp->Aes128Core__DOT__ks__DOT___GEN_9450 = (
                                                   (0xeaU 
                                                    == 
                                                    (0xffU 
                                                     & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                        >> 8U)))
                                                    ? 0x87U
                                                    : 
                                                   ((0xe9U 
                                                     == 
                                                     (0xffU 
                                                      & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                         >> 8U)))
                                                     ? 0x1eU
                                                     : 
                                                    ((0xe8U 
                                                      == 
                                                      (0xffU 
                                                       & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                          >> 8U)))
                                                      ? 0x9bU
                                                      : 
                                                     ((0xe7U 
                                                       == 
                                                       (0xffU 
                                                        & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                           >> 8U)))
                                                       ? 0x94U
                                                       : 
                                                      ((0xe6U 
                                                        == 
                                                        (0xffU 
                                                         & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                            >> 8U)))
                                                        ? 0x8eU
                                                        : 
                                                       ((0xe5U 
                                                         == 
                                                         (0xffU 
                                                          & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                             >> 8U)))
                                                         ? 0xd9U
                                                         : 
                                                        ((0xe4U 
                                                          == 
                                                          (0xffU 
                                                           & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                              >> 8U)))
                                                          ? 0x69U
                                                          : 
                                                         ((0xe3U 
                                                           == 
                                                           (0xffU 
                                                            & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                               >> 8U)))
                                                           ? 0x11U
                                                           : 
                                                          ((0xe2U 
                                                            == 
                                                            (0xffU 
                                                             & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                                >> 8U)))
                                                            ? 0x98U
                                                            : 
                                                           ((0xe1U 
                                                             == 
                                                             (0xffU 
                                                              & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                                 >> 8U)))
                                                             ? 0xf8U
                                                             : 
                                                            ((0xe0U 
                                                              == 
                                                              (0xffU 
                                                               & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                                  >> 8U)))
                                                              ? 0xe1U
                                                              : 
                                                             ((0xdfU 
                                                               == 
                                                               (0xffU 
                                                                & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                                   >> 8U)))
                                                               ? 0x9eU
                                                               : 
                                                              ((0xdeU 
                                                                == 
                                                                (0xffU 
                                                                 & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                                    >> 8U)))
                                                                ? 0x1dU
                                                                : (IData)(vlTOPp->Aes128Core__DOT__ks__DOT___GEN_9437))))))))))))));
    vlTOPp->Aes128Core__DOT__ks__DOT___GEN_9706 = (
                                                   (0xeaU 
                                                    == 
                                                    (0xffU 
                                                     & vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38))
                                                    ? 0x87U
                                                    : 
                                                   ((0xe9U 
                                                     == 
                                                     (0xffU 
                                                      & vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38))
                                                     ? 0x1eU
                                                     : 
                                                    ((0xe8U 
                                                      == 
                                                      (0xffU 
                                                       & vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38))
                                                      ? 0x9bU
                                                      : 
                                                     ((0xe7U 
                                                       == 
                                                       (0xffU 
                                                        & vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38))
                                                       ? 0x94U
                                                       : 
                                                      ((0xe6U 
                                                        == 
                                                        (0xffU 
                                                         & vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38))
                                                        ? 0x8eU
                                                        : 
                                                       ((0xe5U 
                                                         == 
                                                         (0xffU 
                                                          & vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38))
                                                         ? 0xd9U
                                                         : 
                                                        ((0xe4U 
                                                          == 
                                                          (0xffU 
                                                           & vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38))
                                                          ? 0x69U
                                                          : 
                                                         ((0xe3U 
                                                           == 
                                                           (0xffU 
                                                            & vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38))
                                                           ? 0x11U
                                                           : 
                                                          ((0xe2U 
                                                            == 
                                                            (0xffU 
                                                             & vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38))
                                                            ? 0x98U
                                                            : 
                                                           ((0xe1U 
                                                             == 
                                                             (0xffU 
                                                              & vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38))
                                                             ? 0xf8U
                                                             : 
                                                            ((0xe0U 
                                                              == 
                                                              (0xffU 
                                                               & vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38))
                                                              ? 0xe1U
                                                              : 
                                                             ((0xdfU 
                                                               == 
                                                               (0xffU 
                                                                & vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38))
                                                               ? 0x9eU
                                                               : 
                                                              ((0xdeU 
                                                                == 
                                                                (0xffU 
                                                                 & vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38))
                                                                ? 0x1dU
                                                                : (IData)(vlTOPp->Aes128Core__DOT__ks__DOT___GEN_9693))))))))))))));
    vlTOPp->Aes128Core__DOT__ks__DOT___GEN_9962 = (
                                                   (0xeaU 
                                                    == 
                                                    (0xffU 
                                                     & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                        >> 0x18U)))
                                                    ? 0x87U
                                                    : 
                                                   ((0xe9U 
                                                     == 
                                                     (0xffU 
                                                      & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                         >> 0x18U)))
                                                     ? 0x1eU
                                                     : 
                                                    ((0xe8U 
                                                      == 
                                                      (0xffU 
                                                       & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                          >> 0x18U)))
                                                      ? 0x9bU
                                                      : 
                                                     ((0xe7U 
                                                       == 
                                                       (0xffU 
                                                        & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                           >> 0x18U)))
                                                       ? 0x94U
                                                       : 
                                                      ((0xe6U 
                                                        == 
                                                        (0xffU 
                                                         & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                            >> 0x18U)))
                                                        ? 0x8eU
                                                        : 
                                                       ((0xe5U 
                                                         == 
                                                         (0xffU 
                                                          & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                             >> 0x18U)))
                                                         ? 0xd9U
                                                         : 
                                                        ((0xe4U 
                                                          == 
                                                          (0xffU 
                                                           & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                              >> 0x18U)))
                                                          ? 0x69U
                                                          : 
                                                         ((0xe3U 
                                                           == 
                                                           (0xffU 
                                                            & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                               >> 0x18U)))
                                                           ? 0x11U
                                                           : 
                                                          ((0xe2U 
                                                            == 
                                                            (0xffU 
                                                             & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                                >> 0x18U)))
                                                            ? 0x98U
                                                            : 
                                                           ((0xe1U 
                                                             == 
                                                             (0xffU 
                                                              & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                                 >> 0x18U)))
                                                             ? 0xf8U
                                                             : 
                                                            ((0xe0U 
                                                              == 
                                                              (0xffU 
                                                               & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                                  >> 0x18U)))
                                                              ? 0xe1U
                                                              : 
                                                             ((0xdfU 
                                                               == 
                                                               (0xffU 
                                                                & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                                   >> 0x18U)))
                                                               ? 0x9eU
                                                               : 
                                                              ((0xdeU 
                                                                == 
                                                                (0xffU 
                                                                 & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                                    >> 0x18U)))
                                                                ? 0x1dU
                                                                : (IData)(vlTOPp->Aes128Core__DOT__ks__DOT___GEN_9949))))))))))))));
    vlTOPp->Aes128Core__DOT__ks__DOT___GEN_10218 = 
        ((0xeaU == (0xffU & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                             >> 0x10U))) ? 0x87U : 
         ((0xe9U == (0xffU & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                              >> 0x10U))) ? 0x1eU : 
          ((0xe8U == (0xffU & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                               >> 0x10U))) ? 0x9bU : 
           ((0xe7U == (0xffU & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                >> 0x10U))) ? 0x94U
             : ((0xe6U == (0xffU & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                    >> 0x10U))) ? 0x8eU
                 : ((0xe5U == (0xffU & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                        >> 0x10U)))
                     ? 0xd9U : ((0xe4U == (0xffU & 
                                           (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                            >> 0x10U)))
                                 ? 0x69U : ((0xe3U 
                                             == (0xffU 
                                                 & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                    >> 0x10U)))
                                             ? 0x11U
                                             : ((0xe2U 
                                                 == 
                                                 (0xffU 
                                                  & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                     >> 0x10U)))
                                                 ? 0x98U
                                                 : 
                                                ((0xe1U 
                                                  == 
                                                  (0xffU 
                                                   & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                      >> 0x10U)))
                                                  ? 0xf8U
                                                  : 
                                                 ((0xe0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                       >> 0x10U)))
                                                   ? 0xe1U
                                                   : 
                                                  ((0xdfU 
                                                    == 
                                                    (0xffU 
                                                     & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                        >> 0x10U)))
                                                    ? 0x9eU
                                                    : 
                                                   ((0xdeU 
                                                     == 
                                                     (0xffU 
                                                      & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                         >> 0x10U)))
                                                     ? 0x1dU
                                                     : (IData)(vlTOPp->Aes128Core__DOT__ks__DOT___GEN_10205))))))))))))));
    vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_234 
        = ((0xeaU == (0xffU & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                               >> 0x18U))) ? 0x87U : 
           ((0xe9U == (0xffU & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                >> 0x18U))) ? 0x1eU
             : ((0xe8U == (0xffU & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                    >> 0x18U))) ? 0x9bU
                 : ((0xe7U == (0xffU & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                        >> 0x18U)))
                     ? 0x94U : ((0xe6U == (0xffU & 
                                           (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                            >> 0x18U)))
                                 ? 0x8eU : ((0xe5U 
                                             == (0xffU 
                                                 & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                    >> 0x18U)))
                                             ? 0xd9U
                                             : ((0xe4U 
                                                 == 
                                                 (0xffU 
                                                  & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                     >> 0x18U)))
                                                 ? 0x69U
                                                 : 
                                                ((0xe3U 
                                                  == 
                                                  (0xffU 
                                                   & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                      >> 0x18U)))
                                                  ? 0x11U
                                                  : 
                                                 ((0xe2U 
                                                   == 
                                                   (0xffU 
                                                    & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                       >> 0x18U)))
                                                   ? 0x98U
                                                   : 
                                                  ((0xe1U 
                                                    == 
                                                    (0xffU 
                                                     & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                        >> 0x18U)))
                                                    ? 0xf8U
                                                    : 
                                                   ((0xe0U 
                                                     == 
                                                     (0xffU 
                                                      & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                         >> 0x18U)))
                                                     ? 0xe1U
                                                     : 
                                                    ((0xdfU 
                                                      == 
                                                      (0xffU 
                                                       & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                          >> 0x18U)))
                                                      ? 0x9eU
                                                      : 
                                                     ((0xdeU 
                                                       == 
                                                       (0xffU 
                                                        & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                           >> 0x18U)))
                                                       ? 0x1dU
                                                       : (IData)(vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_221))))))))))))));
    vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_490 
        = ((0xeaU == (0xffU & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                               >> 0x10U))) ? 0x87U : 
           ((0xe9U == (0xffU & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                >> 0x10U))) ? 0x1eU
             : ((0xe8U == (0xffU & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                    >> 0x10U))) ? 0x9bU
                 : ((0xe7U == (0xffU & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                        >> 0x10U)))
                     ? 0x94U : ((0xe6U == (0xffU & 
                                           (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                            >> 0x10U)))
                                 ? 0x8eU : ((0xe5U 
                                             == (0xffU 
                                                 & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                    >> 0x10U)))
                                             ? 0xd9U
                                             : ((0xe4U 
                                                 == 
                                                 (0xffU 
                                                  & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                     >> 0x10U)))
                                                 ? 0x69U
                                                 : 
                                                ((0xe3U 
                                                  == 
                                                  (0xffU 
                                                   & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                      >> 0x10U)))
                                                  ? 0x11U
                                                  : 
                                                 ((0xe2U 
                                                   == 
                                                   (0xffU 
                                                    & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                       >> 0x10U)))
                                                   ? 0x98U
                                                   : 
                                                  ((0xe1U 
                                                    == 
                                                    (0xffU 
                                                     & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                        >> 0x10U)))
                                                    ? 0xf8U
                                                    : 
                                                   ((0xe0U 
                                                     == 
                                                     (0xffU 
                                                      & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                         >> 0x10U)))
                                                     ? 0xe1U
                                                     : 
                                                    ((0xdfU 
                                                      == 
                                                      (0xffU 
                                                       & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                          >> 0x10U)))
                                                      ? 0x9eU
                                                      : 
                                                     ((0xdeU 
                                                       == 
                                                       (0xffU 
                                                        & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                           >> 0x10U)))
                                                       ? 0x1dU
                                                       : (IData)(vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_477))))))))))))));
    vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_746 
        = ((0xeaU == (0xffU & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                               >> 8U))) ? 0x87U : (
                                                   (0xe9U 
                                                    == 
                                                    (0xffU 
                                                     & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                        >> 8U)))
                                                    ? 0x1eU
                                                    : 
                                                   ((0xe8U 
                                                     == 
                                                     (0xffU 
                                                      & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                         >> 8U)))
                                                     ? 0x9bU
                                                     : 
                                                    ((0xe7U 
                                                      == 
                                                      (0xffU 
                                                       & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                          >> 8U)))
                                                      ? 0x94U
                                                      : 
                                                     ((0xe6U 
                                                       == 
                                                       (0xffU 
                                                        & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                           >> 8U)))
                                                       ? 0x8eU
                                                       : 
                                                      ((0xe5U 
                                                        == 
                                                        (0xffU 
                                                         & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                            >> 8U)))
                                                        ? 0xd9U
                                                        : 
                                                       ((0xe4U 
                                                         == 
                                                         (0xffU 
                                                          & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                             >> 8U)))
                                                         ? 0x69U
                                                         : 
                                                        ((0xe3U 
                                                          == 
                                                          (0xffU 
                                                           & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                              >> 8U)))
                                                          ? 0x11U
                                                          : 
                                                         ((0xe2U 
                                                           == 
                                                           (0xffU 
                                                            & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                               >> 8U)))
                                                           ? 0x98U
                                                           : 
                                                          ((0xe1U 
                                                            == 
                                                            (0xffU 
                                                             & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                >> 8U)))
                                                            ? 0xf8U
                                                            : 
                                                           ((0xe0U 
                                                             == 
                                                             (0xffU 
                                                              & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                 >> 8U)))
                                                             ? 0xe1U
                                                             : 
                                                            ((0xdfU 
                                                              == 
                                                              (0xffU 
                                                               & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                  >> 8U)))
                                                              ? 0x9eU
                                                              : 
                                                             ((0xdeU 
                                                               == 
                                                               (0xffU 
                                                                & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                   >> 8U)))
                                                               ? 0x1dU
                                                               : (IData)(vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_733))))))))))))));
    vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_1002 
        = ((0xeaU == (0xffU & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U]))
            ? 0x87U : ((0xe9U == (0xffU & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U]))
                        ? 0x1eU : ((0xe8U == (0xffU 
                                              & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U]))
                                    ? 0x9bU : ((0xe7U 
                                                == 
                                                (0xffU 
                                                 & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U]))
                                                ? 0x94U
                                                : (
                                                   (0xe6U 
                                                    == 
                                                    (0xffU 
                                                     & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U]))
                                                    ? 0x8eU
                                                    : 
                                                   ((0xe5U 
                                                     == 
                                                     (0xffU 
                                                      & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U]))
                                                     ? 0xd9U
                                                     : 
                                                    ((0xe4U 
                                                      == 
                                                      (0xffU 
                                                       & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U]))
                                                      ? 0x69U
                                                      : 
                                                     ((0xe3U 
                                                       == 
                                                       (0xffU 
                                                        & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U]))
                                                       ? 0x11U
                                                       : 
                                                      ((0xe2U 
                                                        == 
                                                        (0xffU 
                                                         & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U]))
                                                        ? 0x98U
                                                        : 
                                                       ((0xe1U 
                                                         == 
                                                         (0xffU 
                                                          & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U]))
                                                         ? 0xf8U
                                                         : 
                                                        ((0xe0U 
                                                          == 
                                                          (0xffU 
                                                           & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U]))
                                                          ? 0xe1U
                                                          : 
                                                         ((0xdfU 
                                                           == 
                                                           (0xffU 
                                                            & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U]))
                                                           ? 0x9eU
                                                           : 
                                                          ((0xdeU 
                                                            == 
                                                            (0xffU 
                                                             & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U]))
                                                            ? 0x1dU
                                                            : (IData)(vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_989))))))))))))));
    vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_1258 
        = ((0xeaU == (0xffU & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                << 8U) | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                          >> 0x18U))))
            ? 0x87U : ((0xe9U == (0xffU & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                            << 8U) 
                                           | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                              >> 0x18U))))
                        ? 0x1eU : ((0xe8U == (0xffU 
                                              & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                  << 8U) 
                                                 | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                    >> 0x18U))))
                                    ? 0x9bU : ((0xe7U 
                                                == 
                                                (0xffU 
                                                 & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                     << 8U) 
                                                    | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                       >> 0x18U))))
                                                ? 0x94U
                                                : (
                                                   (0xe6U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                         << 8U) 
                                                        | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                           >> 0x18U))))
                                                    ? 0x8eU
                                                    : 
                                                   ((0xe5U 
                                                     == 
                                                     (0xffU 
                                                      & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                          << 8U) 
                                                         | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                            >> 0x18U))))
                                                     ? 0xd9U
                                                     : 
                                                    ((0xe4U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                           << 8U) 
                                                          | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                             >> 0x18U))))
                                                      ? 0x69U
                                                      : 
                                                     ((0xe3U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                            << 8U) 
                                                           | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                              >> 0x18U))))
                                                       ? 0x11U
                                                       : 
                                                      ((0xe2U 
                                                        == 
                                                        (0xffU 
                                                         & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                             << 8U) 
                                                            | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                               >> 0x18U))))
                                                        ? 0x98U
                                                        : 
                                                       ((0xe1U 
                                                         == 
                                                         (0xffU 
                                                          & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                              << 8U) 
                                                             | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                >> 0x18U))))
                                                         ? 0xf8U
                                                         : 
                                                        ((0xe0U 
                                                          == 
                                                          (0xffU 
                                                           & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                               << 8U) 
                                                              | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                 >> 0x18U))))
                                                          ? 0xe1U
                                                          : 
                                                         ((0xdfU 
                                                           == 
                                                           (0xffU 
                                                            & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                << 8U) 
                                                               | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                  >> 0x18U))))
                                                           ? 0x9eU
                                                           : 
                                                          ((0xdeU 
                                                            == 
                                                            (0xffU 
                                                             & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                 << 8U) 
                                                                | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                   >> 0x18U))))
                                                            ? 0x1dU
                                                            : (IData)(vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_1245))))))))))))));
    vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_1514 
        = ((0xeaU == (0xffU & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                << 0x10U) | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                             >> 0x10U))))
            ? 0x87U : ((0xe9U == (0xffU & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                            << 0x10U) 
                                           | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                              >> 0x10U))))
                        ? 0x1eU : ((0xe8U == (0xffU 
                                              & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                    >> 0x10U))))
                                    ? 0x9bU : ((0xe7U 
                                                == 
                                                (0xffU 
                                                 & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                       >> 0x10U))))
                                                ? 0x94U
                                                : (
                                                   (0xe6U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                         << 0x10U) 
                                                        | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                           >> 0x10U))))
                                                    ? 0x8eU
                                                    : 
                                                   ((0xe5U 
                                                     == 
                                                     (0xffU 
                                                      & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                          << 0x10U) 
                                                         | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                            >> 0x10U))))
                                                     ? 0xd9U
                                                     : 
                                                    ((0xe4U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                           << 0x10U) 
                                                          | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                             >> 0x10U))))
                                                      ? 0x69U
                                                      : 
                                                     ((0xe3U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                            << 0x10U) 
                                                           | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                              >> 0x10U))))
                                                       ? 0x11U
                                                       : 
                                                      ((0xe2U 
                                                        == 
                                                        (0xffU 
                                                         & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                             << 0x10U) 
                                                            | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                               >> 0x10U))))
                                                        ? 0x98U
                                                        : 
                                                       ((0xe1U 
                                                         == 
                                                         (0xffU 
                                                          & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                              << 0x10U) 
                                                             | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                >> 0x10U))))
                                                         ? 0xf8U
                                                         : 
                                                        ((0xe0U 
                                                          == 
                                                          (0xffU 
                                                           & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                               << 0x10U) 
                                                              | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                 >> 0x10U))))
                                                          ? 0xe1U
                                                          : 
                                                         ((0xdfU 
                                                           == 
                                                           (0xffU 
                                                            & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                << 0x10U) 
                                                               | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                  >> 0x10U))))
                                                           ? 0x9eU
                                                           : 
                                                          ((0xdeU 
                                                            == 
                                                            (0xffU 
                                                             & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                 << 0x10U) 
                                                                | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                   >> 0x10U))))
                                                            ? 0x1dU
                                                            : (IData)(vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_1501))))))))))))));
    vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_1770 
        = ((0xeaU == (0xffU & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                << 0x18U) | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                             >> 8U))))
            ? 0x87U : ((0xe9U == (0xffU & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                            << 0x18U) 
                                           | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                              >> 8U))))
                        ? 0x1eU : ((0xe8U == (0xffU 
                                              & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                    >> 8U))))
                                    ? 0x9bU : ((0xe7U 
                                                == 
                                                (0xffU 
                                                 & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                     << 0x18U) 
                                                    | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                       >> 8U))))
                                                ? 0x94U
                                                : (
                                                   (0xe6U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                         << 0x18U) 
                                                        | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                           >> 8U))))
                                                    ? 0x8eU
                                                    : 
                                                   ((0xe5U 
                                                     == 
                                                     (0xffU 
                                                      & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                          << 0x18U) 
                                                         | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                            >> 8U))))
                                                     ? 0xd9U
                                                     : 
                                                    ((0xe4U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                           << 0x18U) 
                                                          | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                             >> 8U))))
                                                      ? 0x69U
                                                      : 
                                                     ((0xe3U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                            << 0x18U) 
                                                           | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                              >> 8U))))
                                                       ? 0x11U
                                                       : 
                                                      ((0xe2U 
                                                        == 
                                                        (0xffU 
                                                         & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                             << 0x18U) 
                                                            | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                               >> 8U))))
                                                        ? 0x98U
                                                        : 
                                                       ((0xe1U 
                                                         == 
                                                         (0xffU 
                                                          & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                              << 0x18U) 
                                                             | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                >> 8U))))
                                                         ? 0xf8U
                                                         : 
                                                        ((0xe0U 
                                                          == 
                                                          (0xffU 
                                                           & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                               << 0x18U) 
                                                              | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                 >> 8U))))
                                                          ? 0xe1U
                                                          : 
                                                         ((0xdfU 
                                                           == 
                                                           (0xffU 
                                                            & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                << 0x18U) 
                                                               | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                  >> 8U))))
                                                           ? 0x9eU
                                                           : 
                                                          ((0xdeU 
                                                            == 
                                                            (0xffU 
                                                             & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                 << 0x18U) 
                                                                | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                   >> 8U))))
                                                            ? 0x1dU
                                                            : (IData)(vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_1757))))))))))))));
    vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_2026 
        = ((0xeaU == (0xffU & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U]))
            ? 0x87U : ((0xe9U == (0xffU & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U]))
                        ? 0x1eU : ((0xe8U == (0xffU 
                                              & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U]))
                                    ? 0x9bU : ((0xe7U 
                                                == 
                                                (0xffU 
                                                 & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U]))
                                                ? 0x94U
                                                : (
                                                   (0xe6U 
                                                    == 
                                                    (0xffU 
                                                     & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U]))
                                                    ? 0x8eU
                                                    : 
                                                   ((0xe5U 
                                                     == 
                                                     (0xffU 
                                                      & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U]))
                                                     ? 0xd9U
                                                     : 
                                                    ((0xe4U 
                                                      == 
                                                      (0xffU 
                                                       & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U]))
                                                      ? 0x69U
                                                      : 
                                                     ((0xe3U 
                                                       == 
                                                       (0xffU 
                                                        & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U]))
                                                       ? 0x11U
                                                       : 
                                                      ((0xe2U 
                                                        == 
                                                        (0xffU 
                                                         & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U]))
                                                        ? 0x98U
                                                        : 
                                                       ((0xe1U 
                                                         == 
                                                         (0xffU 
                                                          & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U]))
                                                         ? 0xf8U
                                                         : 
                                                        ((0xe0U 
                                                          == 
                                                          (0xffU 
                                                           & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U]))
                                                          ? 0xe1U
                                                          : 
                                                         ((0xdfU 
                                                           == 
                                                           (0xffU 
                                                            & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U]))
                                                           ? 0x9eU
                                                           : 
                                                          ((0xdeU 
                                                            == 
                                                            (0xffU 
                                                             & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U]))
                                                            ? 0x1dU
                                                            : (IData)(vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_2013))))))))))))));
    vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_2282 
        = ((0xeaU == (0xffU & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                << 8U) | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                          >> 0x18U))))
            ? 0x87U : ((0xe9U == (0xffU & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                            << 8U) 
                                           | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                              >> 0x18U))))
                        ? 0x1eU : ((0xe8U == (0xffU 
                                              & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                  << 8U) 
                                                 | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                    >> 0x18U))))
                                    ? 0x9bU : ((0xe7U 
                                                == 
                                                (0xffU 
                                                 & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                     << 8U) 
                                                    | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                       >> 0x18U))))
                                                ? 0x94U
                                                : (
                                                   (0xe6U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                         << 8U) 
                                                        | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                           >> 0x18U))))
                                                    ? 0x8eU
                                                    : 
                                                   ((0xe5U 
                                                     == 
                                                     (0xffU 
                                                      & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                          << 8U) 
                                                         | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                            >> 0x18U))))
                                                     ? 0xd9U
                                                     : 
                                                    ((0xe4U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                           << 8U) 
                                                          | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                             >> 0x18U))))
                                                      ? 0x69U
                                                      : 
                                                     ((0xe3U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                            << 8U) 
                                                           | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                              >> 0x18U))))
                                                       ? 0x11U
                                                       : 
                                                      ((0xe2U 
                                                        == 
                                                        (0xffU 
                                                         & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                             << 8U) 
                                                            | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                               >> 0x18U))))
                                                        ? 0x98U
                                                        : 
                                                       ((0xe1U 
                                                         == 
                                                         (0xffU 
                                                          & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                              << 8U) 
                                                             | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                >> 0x18U))))
                                                         ? 0xf8U
                                                         : 
                                                        ((0xe0U 
                                                          == 
                                                          (0xffU 
                                                           & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                               << 8U) 
                                                              | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                 >> 0x18U))))
                                                          ? 0xe1U
                                                          : 
                                                         ((0xdfU 
                                                           == 
                                                           (0xffU 
                                                            & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                << 8U) 
                                                               | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                  >> 0x18U))))
                                                           ? 0x9eU
                                                           : 
                                                          ((0xdeU 
                                                            == 
                                                            (0xffU 
                                                             & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                 << 8U) 
                                                                | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                   >> 0x18U))))
                                                            ? 0x1dU
                                                            : (IData)(vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_2269))))))))))))));
    vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_2538 
        = ((0xeaU == (0xffU & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                << 0x10U) | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                             >> 0x10U))))
            ? 0x87U : ((0xe9U == (0xffU & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                            << 0x10U) 
                                           | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                              >> 0x10U))))
                        ? 0x1eU : ((0xe8U == (0xffU 
                                              & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                    >> 0x10U))))
                                    ? 0x9bU : ((0xe7U 
                                                == 
                                                (0xffU 
                                                 & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                       >> 0x10U))))
                                                ? 0x94U
                                                : (
                                                   (0xe6U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                         << 0x10U) 
                                                        | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                           >> 0x10U))))
                                                    ? 0x8eU
                                                    : 
                                                   ((0xe5U 
                                                     == 
                                                     (0xffU 
                                                      & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                          << 0x10U) 
                                                         | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                            >> 0x10U))))
                                                     ? 0xd9U
                                                     : 
                                                    ((0xe4U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                           << 0x10U) 
                                                          | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                             >> 0x10U))))
                                                      ? 0x69U
                                                      : 
                                                     ((0xe3U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                            << 0x10U) 
                                                           | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                              >> 0x10U))))
                                                       ? 0x11U
                                                       : 
                                                      ((0xe2U 
                                                        == 
                                                        (0xffU 
                                                         & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                             << 0x10U) 
                                                            | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                               >> 0x10U))))
                                                        ? 0x98U
                                                        : 
                                                       ((0xe1U 
                                                         == 
                                                         (0xffU 
                                                          & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                              << 0x10U) 
                                                             | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                >> 0x10U))))
                                                         ? 0xf8U
                                                         : 
                                                        ((0xe0U 
                                                          == 
                                                          (0xffU 
                                                           & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                               << 0x10U) 
                                                              | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                 >> 0x10U))))
                                                          ? 0xe1U
                                                          : 
                                                         ((0xdfU 
                                                           == 
                                                           (0xffU 
                                                            & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                << 0x10U) 
                                                               | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                  >> 0x10U))))
                                                           ? 0x9eU
                                                           : 
                                                          ((0xdeU 
                                                            == 
                                                            (0xffU 
                                                             & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                 << 0x10U) 
                                                                | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                   >> 0x10U))))
                                                            ? 0x1dU
                                                            : (IData)(vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_2525))))))))))))));
    vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_2794 
        = ((0xeaU == (0xffU & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                << 0x18U) | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                             >> 8U))))
            ? 0x87U : ((0xe9U == (0xffU & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                            << 0x18U) 
                                           | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                              >> 8U))))
                        ? 0x1eU : ((0xe8U == (0xffU 
                                              & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                    >> 8U))))
                                    ? 0x9bU : ((0xe7U 
                                                == 
                                                (0xffU 
                                                 & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                     << 0x18U) 
                                                    | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                       >> 8U))))
                                                ? 0x94U
                                                : (
                                                   (0xe6U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                         << 0x18U) 
                                                        | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                           >> 8U))))
                                                    ? 0x8eU
                                                    : 
                                                   ((0xe5U 
                                                     == 
                                                     (0xffU 
                                                      & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                          << 0x18U) 
                                                         | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                            >> 8U))))
                                                     ? 0xd9U
                                                     : 
                                                    ((0xe4U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                           << 0x18U) 
                                                          | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                             >> 8U))))
                                                      ? 0x69U
                                                      : 
                                                     ((0xe3U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                            << 0x18U) 
                                                           | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                              >> 8U))))
                                                       ? 0x11U
                                                       : 
                                                      ((0xe2U 
                                                        == 
                                                        (0xffU 
                                                         & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                             << 0x18U) 
                                                            | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                               >> 8U))))
                                                        ? 0x98U
                                                        : 
                                                       ((0xe1U 
                                                         == 
                                                         (0xffU 
                                                          & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                              << 0x18U) 
                                                             | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                >> 8U))))
                                                         ? 0xf8U
                                                         : 
                                                        ((0xe0U 
                                                          == 
                                                          (0xffU 
                                                           & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                               << 0x18U) 
                                                              | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                 >> 8U))))
                                                          ? 0xe1U
                                                          : 
                                                         ((0xdfU 
                                                           == 
                                                           (0xffU 
                                                            & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                << 0x18U) 
                                                               | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                  >> 8U))))
                                                           ? 0x9eU
                                                           : 
                                                          ((0xdeU 
                                                            == 
                                                            (0xffU 
                                                             & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                 << 0x18U) 
                                                                | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                   >> 8U))))
                                                            ? 0x1dU
                                                            : (IData)(vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_2781))))))))))))));
    vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_3050 
        = ((0xeaU == (0xffU & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U]))
            ? 0x87U : ((0xe9U == (0xffU & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U]))
                        ? 0x1eU : ((0xe8U == (0xffU 
                                              & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U]))
                                    ? 0x9bU : ((0xe7U 
                                                == 
                                                (0xffU 
                                                 & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U]))
                                                ? 0x94U
                                                : (
                                                   (0xe6U 
                                                    == 
                                                    (0xffU 
                                                     & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U]))
                                                    ? 0x8eU
                                                    : 
                                                   ((0xe5U 
                                                     == 
                                                     (0xffU 
                                                      & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U]))
                                                     ? 0xd9U
                                                     : 
                                                    ((0xe4U 
                                                      == 
                                                      (0xffU 
                                                       & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U]))
                                                      ? 0x69U
                                                      : 
                                                     ((0xe3U 
                                                       == 
                                                       (0xffU 
                                                        & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U]))
                                                       ? 0x11U
                                                       : 
                                                      ((0xe2U 
                                                        == 
                                                        (0xffU 
                                                         & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U]))
                                                        ? 0x98U
                                                        : 
                                                       ((0xe1U 
                                                         == 
                                                         (0xffU 
                                                          & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U]))
                                                         ? 0xf8U
                                                         : 
                                                        ((0xe0U 
                                                          == 
                                                          (0xffU 
                                                           & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U]))
                                                          ? 0xe1U
                                                          : 
                                                         ((0xdfU 
                                                           == 
                                                           (0xffU 
                                                            & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U]))
                                                           ? 0x9eU
                                                           : 
                                                          ((0xdeU 
                                                            == 
                                                            (0xffU 
                                                             & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U]))
                                                            ? 0x1dU
                                                            : (IData)(vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_3037))))))))))))));
    vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_3306 
        = ((0xeaU == (0xffU & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                << 8U) | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                          >> 0x18U))))
            ? 0x87U : ((0xe9U == (0xffU & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                            << 8U) 
                                           | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                              >> 0x18U))))
                        ? 0x1eU : ((0xe8U == (0xffU 
                                              & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                  << 8U) 
                                                 | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                    >> 0x18U))))
                                    ? 0x9bU : ((0xe7U 
                                                == 
                                                (0xffU 
                                                 & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                     << 8U) 
                                                    | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                       >> 0x18U))))
                                                ? 0x94U
                                                : (
                                                   (0xe6U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                         << 8U) 
                                                        | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                           >> 0x18U))))
                                                    ? 0x8eU
                                                    : 
                                                   ((0xe5U 
                                                     == 
                                                     (0xffU 
                                                      & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                          << 8U) 
                                                         | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                            >> 0x18U))))
                                                     ? 0xd9U
                                                     : 
                                                    ((0xe4U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                           << 8U) 
                                                          | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                             >> 0x18U))))
                                                      ? 0x69U
                                                      : 
                                                     ((0xe3U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                            << 8U) 
                                                           | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                              >> 0x18U))))
                                                       ? 0x11U
                                                       : 
                                                      ((0xe2U 
                                                        == 
                                                        (0xffU 
                                                         & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                             << 8U) 
                                                            | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                               >> 0x18U))))
                                                        ? 0x98U
                                                        : 
                                                       ((0xe1U 
                                                         == 
                                                         (0xffU 
                                                          & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                              << 8U) 
                                                             | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                >> 0x18U))))
                                                         ? 0xf8U
                                                         : 
                                                        ((0xe0U 
                                                          == 
                                                          (0xffU 
                                                           & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                               << 8U) 
                                                              | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                 >> 0x18U))))
                                                          ? 0xe1U
                                                          : 
                                                         ((0xdfU 
                                                           == 
                                                           (0xffU 
                                                            & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                << 8U) 
                                                               | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                  >> 0x18U))))
                                                           ? 0x9eU
                                                           : 
                                                          ((0xdeU 
                                                            == 
                                                            (0xffU 
                                                             & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                 << 8U) 
                                                                | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                   >> 0x18U))))
                                                            ? 0x1dU
                                                            : (IData)(vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_3293))))))))))))));
    vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_3562 
        = ((0xeaU == (0xffU & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                << 0x10U) | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                             >> 0x10U))))
            ? 0x87U : ((0xe9U == (0xffU & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                            << 0x10U) 
                                           | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                              >> 0x10U))))
                        ? 0x1eU : ((0xe8U == (0xffU 
                                              & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                    >> 0x10U))))
                                    ? 0x9bU : ((0xe7U 
                                                == 
                                                (0xffU 
                                                 & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                       >> 0x10U))))
                                                ? 0x94U
                                                : (
                                                   (0xe6U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                         << 0x10U) 
                                                        | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                           >> 0x10U))))
                                                    ? 0x8eU
                                                    : 
                                                   ((0xe5U 
                                                     == 
                                                     (0xffU 
                                                      & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                          << 0x10U) 
                                                         | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                            >> 0x10U))))
                                                     ? 0xd9U
                                                     : 
                                                    ((0xe4U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                           << 0x10U) 
                                                          | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                             >> 0x10U))))
                                                      ? 0x69U
                                                      : 
                                                     ((0xe3U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                            << 0x10U) 
                                                           | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                              >> 0x10U))))
                                                       ? 0x11U
                                                       : 
                                                      ((0xe2U 
                                                        == 
                                                        (0xffU 
                                                         & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                             << 0x10U) 
                                                            | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                               >> 0x10U))))
                                                        ? 0x98U
                                                        : 
                                                       ((0xe1U 
                                                         == 
                                                         (0xffU 
                                                          & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                              << 0x10U) 
                                                             | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                >> 0x10U))))
                                                         ? 0xf8U
                                                         : 
                                                        ((0xe0U 
                                                          == 
                                                          (0xffU 
                                                           & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                               << 0x10U) 
                                                              | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                 >> 0x10U))))
                                                          ? 0xe1U
                                                          : 
                                                         ((0xdfU 
                                                           == 
                                                           (0xffU 
                                                            & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                << 0x10U) 
                                                               | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                  >> 0x10U))))
                                                           ? 0x9eU
                                                           : 
                                                          ((0xdeU 
                                                            == 
                                                            (0xffU 
                                                             & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                 << 0x10U) 
                                                                | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                   >> 0x10U))))
                                                            ? 0x1dU
                                                            : (IData)(vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_3549))))))))))))));
    vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_3818 
        = ((0xeaU == (0xffU & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                << 0x18U) | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                             >> 8U))))
            ? 0x87U : ((0xe9U == (0xffU & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                            << 0x18U) 
                                           | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                              >> 8U))))
                        ? 0x1eU : ((0xe8U == (0xffU 
                                              & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                    >> 8U))))
                                    ? 0x9bU : ((0xe7U 
                                                == 
                                                (0xffU 
                                                 & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                     << 0x18U) 
                                                    | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                       >> 8U))))
                                                ? 0x94U
                                                : (
                                                   (0xe6U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                         << 0x18U) 
                                                        | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                           >> 8U))))
                                                    ? 0x8eU
                                                    : 
                                                   ((0xe5U 
                                                     == 
                                                     (0xffU 
                                                      & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                          << 0x18U) 
                                                         | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                            >> 8U))))
                                                     ? 0xd9U
                                                     : 
                                                    ((0xe4U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                           << 0x18U) 
                                                          | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                             >> 8U))))
                                                      ? 0x69U
                                                      : 
                                                     ((0xe3U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                            << 0x18U) 
                                                           | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                              >> 8U))))
                                                       ? 0x11U
                                                       : 
                                                      ((0xe2U 
                                                        == 
                                                        (0xffU 
                                                         & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                             << 0x18U) 
                                                            | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                               >> 8U))))
                                                        ? 0x98U
                                                        : 
                                                       ((0xe1U 
                                                         == 
                                                         (0xffU 
                                                          & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                              << 0x18U) 
                                                             | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                >> 8U))))
                                                         ? 0xf8U
                                                         : 
                                                        ((0xe0U 
                                                          == 
                                                          (0xffU 
                                                           & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                               << 0x18U) 
                                                              | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                 >> 8U))))
                                                          ? 0xe1U
                                                          : 
                                                         ((0xdfU 
                                                           == 
                                                           (0xffU 
                                                            & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                << 0x18U) 
                                                               | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                  >> 8U))))
                                                           ? 0x9eU
                                                           : 
                                                          ((0xdeU 
                                                            == 
                                                            (0xffU 
                                                             & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                 << 0x18U) 
                                                                | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                   >> 8U))))
                                                            ? 0x1dU
                                                            : (IData)(vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_3805))))))))))))));
    vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_4074 
        = ((0xeaU == (0xffU & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U]))
            ? 0x87U : ((0xe9U == (0xffU & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U]))
                        ? 0x1eU : ((0xe8U == (0xffU 
                                              & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U]))
                                    ? 0x9bU : ((0xe7U 
                                                == 
                                                (0xffU 
                                                 & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U]))
                                                ? 0x94U
                                                : (
                                                   (0xe6U 
                                                    == 
                                                    (0xffU 
                                                     & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U]))
                                                    ? 0x8eU
                                                    : 
                                                   ((0xe5U 
                                                     == 
                                                     (0xffU 
                                                      & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U]))
                                                     ? 0xd9U
                                                     : 
                                                    ((0xe4U 
                                                      == 
                                                      (0xffU 
                                                       & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U]))
                                                      ? 0x69U
                                                      : 
                                                     ((0xe3U 
                                                       == 
                                                       (0xffU 
                                                        & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U]))
                                                       ? 0x11U
                                                       : 
                                                      ((0xe2U 
                                                        == 
                                                        (0xffU 
                                                         & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U]))
                                                        ? 0x98U
                                                        : 
                                                       ((0xe1U 
                                                         == 
                                                         (0xffU 
                                                          & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U]))
                                                         ? 0xf8U
                                                         : 
                                                        ((0xe0U 
                                                          == 
                                                          (0xffU 
                                                           & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U]))
                                                          ? 0xe1U
                                                          : 
                                                         ((0xdfU 
                                                           == 
                                                           (0xffU 
                                                            & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U]))
                                                           ? 0x9eU
                                                           : 
                                                          ((0xdeU 
                                                            == 
                                                            (0xffU 
                                                             & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U]))
                                                            ? 0x1dU
                                                            : (IData)(vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_4061))))))))))))));
    vlTOPp->Aes128Core__DOT__ks__DOT___GEN_9463 = (
                                                   (0xf7U 
                                                    == 
                                                    (0xffU 
                                                     & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                        >> 8U)))
                                                    ? 0x68U
                                                    : 
                                                   ((0xf6U 
                                                     == 
                                                     (0xffU 
                                                      & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                         >> 8U)))
                                                     ? 0x42U
                                                     : 
                                                    ((0xf5U 
                                                      == 
                                                      (0xffU 
                                                       & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                          >> 8U)))
                                                      ? 0xe6U
                                                      : 
                                                     ((0xf4U 
                                                       == 
                                                       (0xffU 
                                                        & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                           >> 8U)))
                                                       ? 0xbfU
                                                       : 
                                                      ((0xf3U 
                                                        == 
                                                        (0xffU 
                                                         & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                            >> 8U)))
                                                        ? 0xdU
                                                        : 
                                                       ((0xf2U 
                                                         == 
                                                         (0xffU 
                                                          & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                             >> 8U)))
                                                         ? 0x89U
                                                         : 
                                                        ((0xf1U 
                                                          == 
                                                          (0xffU 
                                                           & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                              >> 8U)))
                                                          ? 0xa1U
                                                          : 
                                                         ((0xf0U 
                                                           == 
                                                           (0xffU 
                                                            & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                               >> 8U)))
                                                           ? 0x8cU
                                                           : 
                                                          ((0xefU 
                                                            == 
                                                            (0xffU 
                                                             & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                                >> 8U)))
                                                            ? 0xdfU
                                                            : 
                                                           ((0xeeU 
                                                             == 
                                                             (0xffU 
                                                              & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                                 >> 8U)))
                                                             ? 0x28U
                                                             : 
                                                            ((0xedU 
                                                              == 
                                                              (0xffU 
                                                               & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                                  >> 8U)))
                                                              ? 0x55U
                                                              : 
                                                             ((0xecU 
                                                               == 
                                                               (0xffU 
                                                                & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                                   >> 8U)))
                                                               ? 0xceU
                                                               : 
                                                              ((0xebU 
                                                                == 
                                                                (0xffU 
                                                                 & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                                    >> 8U)))
                                                                ? 0xe9U
                                                                : (IData)(vlTOPp->Aes128Core__DOT__ks__DOT___GEN_9450))))))))))))));
    vlTOPp->Aes128Core__DOT__ks__DOT___GEN_9719 = (
                                                   (0xf7U 
                                                    == 
                                                    (0xffU 
                                                     & vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38))
                                                    ? 0x68U
                                                    : 
                                                   ((0xf6U 
                                                     == 
                                                     (0xffU 
                                                      & vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38))
                                                     ? 0x42U
                                                     : 
                                                    ((0xf5U 
                                                      == 
                                                      (0xffU 
                                                       & vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38))
                                                      ? 0xe6U
                                                      : 
                                                     ((0xf4U 
                                                       == 
                                                       (0xffU 
                                                        & vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38))
                                                       ? 0xbfU
                                                       : 
                                                      ((0xf3U 
                                                        == 
                                                        (0xffU 
                                                         & vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38))
                                                        ? 0xdU
                                                        : 
                                                       ((0xf2U 
                                                         == 
                                                         (0xffU 
                                                          & vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38))
                                                         ? 0x89U
                                                         : 
                                                        ((0xf1U 
                                                          == 
                                                          (0xffU 
                                                           & vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38))
                                                          ? 0xa1U
                                                          : 
                                                         ((0xf0U 
                                                           == 
                                                           (0xffU 
                                                            & vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38))
                                                           ? 0x8cU
                                                           : 
                                                          ((0xefU 
                                                            == 
                                                            (0xffU 
                                                             & vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38))
                                                            ? 0xdfU
                                                            : 
                                                           ((0xeeU 
                                                             == 
                                                             (0xffU 
                                                              & vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38))
                                                             ? 0x28U
                                                             : 
                                                            ((0xedU 
                                                              == 
                                                              (0xffU 
                                                               & vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38))
                                                              ? 0x55U
                                                              : 
                                                             ((0xecU 
                                                               == 
                                                               (0xffU 
                                                                & vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38))
                                                               ? 0xceU
                                                               : 
                                                              ((0xebU 
                                                                == 
                                                                (0xffU 
                                                                 & vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38))
                                                                ? 0xe9U
                                                                : (IData)(vlTOPp->Aes128Core__DOT__ks__DOT___GEN_9706))))))))))))));
    vlTOPp->Aes128Core__DOT__ks__DOT___GEN_9975 = (
                                                   (0xf7U 
                                                    == 
                                                    (0xffU 
                                                     & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                        >> 0x18U)))
                                                    ? 0x68U
                                                    : 
                                                   ((0xf6U 
                                                     == 
                                                     (0xffU 
                                                      & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                         >> 0x18U)))
                                                     ? 0x42U
                                                     : 
                                                    ((0xf5U 
                                                      == 
                                                      (0xffU 
                                                       & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                          >> 0x18U)))
                                                      ? 0xe6U
                                                      : 
                                                     ((0xf4U 
                                                       == 
                                                       (0xffU 
                                                        & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                           >> 0x18U)))
                                                       ? 0xbfU
                                                       : 
                                                      ((0xf3U 
                                                        == 
                                                        (0xffU 
                                                         & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                            >> 0x18U)))
                                                        ? 0xdU
                                                        : 
                                                       ((0xf2U 
                                                         == 
                                                         (0xffU 
                                                          & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                             >> 0x18U)))
                                                         ? 0x89U
                                                         : 
                                                        ((0xf1U 
                                                          == 
                                                          (0xffU 
                                                           & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                              >> 0x18U)))
                                                          ? 0xa1U
                                                          : 
                                                         ((0xf0U 
                                                           == 
                                                           (0xffU 
                                                            & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                               >> 0x18U)))
                                                           ? 0x8cU
                                                           : 
                                                          ((0xefU 
                                                            == 
                                                            (0xffU 
                                                             & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                                >> 0x18U)))
                                                            ? 0xdfU
                                                            : 
                                                           ((0xeeU 
                                                             == 
                                                             (0xffU 
                                                              & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                                 >> 0x18U)))
                                                             ? 0x28U
                                                             : 
                                                            ((0xedU 
                                                              == 
                                                              (0xffU 
                                                               & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                                  >> 0x18U)))
                                                              ? 0x55U
                                                              : 
                                                             ((0xecU 
                                                               == 
                                                               (0xffU 
                                                                & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                                   >> 0x18U)))
                                                               ? 0xceU
                                                               : 
                                                              ((0xebU 
                                                                == 
                                                                (0xffU 
                                                                 & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                                    >> 0x18U)))
                                                                ? 0xe9U
                                                                : (IData)(vlTOPp->Aes128Core__DOT__ks__DOT___GEN_9962))))))))))))));
    vlTOPp->Aes128Core__DOT__ks__DOT___GEN_10231 = 
        ((0xf7U == (0xffU & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                             >> 0x10U))) ? 0x68U : 
         ((0xf6U == (0xffU & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                              >> 0x10U))) ? 0x42U : 
          ((0xf5U == (0xffU & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                               >> 0x10U))) ? 0xe6U : 
           ((0xf4U == (0xffU & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                >> 0x10U))) ? 0xbfU
             : ((0xf3U == (0xffU & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                    >> 0x10U))) ? 0xdU
                 : ((0xf2U == (0xffU & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                        >> 0x10U)))
                     ? 0x89U : ((0xf1U == (0xffU & 
                                           (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                            >> 0x10U)))
                                 ? 0xa1U : ((0xf0U 
                                             == (0xffU 
                                                 & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                    >> 0x10U)))
                                             ? 0x8cU
                                             : ((0xefU 
                                                 == 
                                                 (0xffU 
                                                  & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                     >> 0x10U)))
                                                 ? 0xdfU
                                                 : 
                                                ((0xeeU 
                                                  == 
                                                  (0xffU 
                                                   & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                      >> 0x10U)))
                                                  ? 0x28U
                                                  : 
                                                 ((0xedU 
                                                   == 
                                                   (0xffU 
                                                    & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                       >> 0x10U)))
                                                   ? 0x55U
                                                   : 
                                                  ((0xecU 
                                                    == 
                                                    (0xffU 
                                                     & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                        >> 0x10U)))
                                                    ? 0xceU
                                                    : 
                                                   ((0xebU 
                                                     == 
                                                     (0xffU 
                                                      & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                         >> 0x10U)))
                                                     ? 0xe9U
                                                     : (IData)(vlTOPp->Aes128Core__DOT__ks__DOT___GEN_10218))))))))))))));
    vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_247 
        = ((0xf7U == (0xffU & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                               >> 0x18U))) ? 0x68U : 
           ((0xf6U == (0xffU & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                >> 0x18U))) ? 0x42U
             : ((0xf5U == (0xffU & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                    >> 0x18U))) ? 0xe6U
                 : ((0xf4U == (0xffU & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                        >> 0x18U)))
                     ? 0xbfU : ((0xf3U == (0xffU & 
                                           (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                            >> 0x18U)))
                                 ? 0xdU : ((0xf2U == 
                                            (0xffU 
                                             & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                >> 0x18U)))
                                            ? 0x89U
                                            : ((0xf1U 
                                                == 
                                                (0xffU 
                                                 & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                    >> 0x18U)))
                                                ? 0xa1U
                                                : (
                                                   (0xf0U 
                                                    == 
                                                    (0xffU 
                                                     & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                        >> 0x18U)))
                                                    ? 0x8cU
                                                    : 
                                                   ((0xefU 
                                                     == 
                                                     (0xffU 
                                                      & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                         >> 0x18U)))
                                                     ? 0xdfU
                                                     : 
                                                    ((0xeeU 
                                                      == 
                                                      (0xffU 
                                                       & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                          >> 0x18U)))
                                                      ? 0x28U
                                                      : 
                                                     ((0xedU 
                                                       == 
                                                       (0xffU 
                                                        & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                           >> 0x18U)))
                                                       ? 0x55U
                                                       : 
                                                      ((0xecU 
                                                        == 
                                                        (0xffU 
                                                         & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                            >> 0x18U)))
                                                        ? 0xceU
                                                        : 
                                                       ((0xebU 
                                                         == 
                                                         (0xffU 
                                                          & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                             >> 0x18U)))
                                                         ? 0xe9U
                                                         : (IData)(vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_234))))))))))))));
    vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_503 
        = ((0xf7U == (0xffU & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                               >> 0x10U))) ? 0x68U : 
           ((0xf6U == (0xffU & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                >> 0x10U))) ? 0x42U
             : ((0xf5U == (0xffU & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                    >> 0x10U))) ? 0xe6U
                 : ((0xf4U == (0xffU & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                        >> 0x10U)))
                     ? 0xbfU : ((0xf3U == (0xffU & 
                                           (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                            >> 0x10U)))
                                 ? 0xdU : ((0xf2U == 
                                            (0xffU 
                                             & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                >> 0x10U)))
                                            ? 0x89U
                                            : ((0xf1U 
                                                == 
                                                (0xffU 
                                                 & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                    >> 0x10U)))
                                                ? 0xa1U
                                                : (
                                                   (0xf0U 
                                                    == 
                                                    (0xffU 
                                                     & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                        >> 0x10U)))
                                                    ? 0x8cU
                                                    : 
                                                   ((0xefU 
                                                     == 
                                                     (0xffU 
                                                      & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                         >> 0x10U)))
                                                     ? 0xdfU
                                                     : 
                                                    ((0xeeU 
                                                      == 
                                                      (0xffU 
                                                       & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                          >> 0x10U)))
                                                      ? 0x28U
                                                      : 
                                                     ((0xedU 
                                                       == 
                                                       (0xffU 
                                                        & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                           >> 0x10U)))
                                                       ? 0x55U
                                                       : 
                                                      ((0xecU 
                                                        == 
                                                        (0xffU 
                                                         & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                            >> 0x10U)))
                                                        ? 0xceU
                                                        : 
                                                       ((0xebU 
                                                         == 
                                                         (0xffU 
                                                          & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                             >> 0x10U)))
                                                         ? 0xe9U
                                                         : (IData)(vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_490))))))))))))));
    vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_759 
        = ((0xf7U == (0xffU & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                               >> 8U))) ? 0x68U : (
                                                   (0xf6U 
                                                    == 
                                                    (0xffU 
                                                     & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                        >> 8U)))
                                                    ? 0x42U
                                                    : 
                                                   ((0xf5U 
                                                     == 
                                                     (0xffU 
                                                      & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                         >> 8U)))
                                                     ? 0xe6U
                                                     : 
                                                    ((0xf4U 
                                                      == 
                                                      (0xffU 
                                                       & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                          >> 8U)))
                                                      ? 0xbfU
                                                      : 
                                                     ((0xf3U 
                                                       == 
                                                       (0xffU 
                                                        & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                           >> 8U)))
                                                       ? 0xdU
                                                       : 
                                                      ((0xf2U 
                                                        == 
                                                        (0xffU 
                                                         & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                            >> 8U)))
                                                        ? 0x89U
                                                        : 
                                                       ((0xf1U 
                                                         == 
                                                         (0xffU 
                                                          & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                             >> 8U)))
                                                         ? 0xa1U
                                                         : 
                                                        ((0xf0U 
                                                          == 
                                                          (0xffU 
                                                           & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                              >> 8U)))
                                                          ? 0x8cU
                                                          : 
                                                         ((0xefU 
                                                           == 
                                                           (0xffU 
                                                            & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                               >> 8U)))
                                                           ? 0xdfU
                                                           : 
                                                          ((0xeeU 
                                                            == 
                                                            (0xffU 
                                                             & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                >> 8U)))
                                                            ? 0x28U
                                                            : 
                                                           ((0xedU 
                                                             == 
                                                             (0xffU 
                                                              & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                 >> 8U)))
                                                             ? 0x55U
                                                             : 
                                                            ((0xecU 
                                                              == 
                                                              (0xffU 
                                                               & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                  >> 8U)))
                                                              ? 0xceU
                                                              : 
                                                             ((0xebU 
                                                               == 
                                                               (0xffU 
                                                                & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                   >> 8U)))
                                                               ? 0xe9U
                                                               : (IData)(vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_746))))))))))))));
    vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_1015 
        = ((0xf7U == (0xffU & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U]))
            ? 0x68U : ((0xf6U == (0xffU & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U]))
                        ? 0x42U : ((0xf5U == (0xffU 
                                              & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U]))
                                    ? 0xe6U : ((0xf4U 
                                                == 
                                                (0xffU 
                                                 & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U]))
                                                ? 0xbfU
                                                : (
                                                   (0xf3U 
                                                    == 
                                                    (0xffU 
                                                     & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U]))
                                                    ? 0xdU
                                                    : 
                                                   ((0xf2U 
                                                     == 
                                                     (0xffU 
                                                      & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U]))
                                                     ? 0x89U
                                                     : 
                                                    ((0xf1U 
                                                      == 
                                                      (0xffU 
                                                       & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U]))
                                                      ? 0xa1U
                                                      : 
                                                     ((0xf0U 
                                                       == 
                                                       (0xffU 
                                                        & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U]))
                                                       ? 0x8cU
                                                       : 
                                                      ((0xefU 
                                                        == 
                                                        (0xffU 
                                                         & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U]))
                                                        ? 0xdfU
                                                        : 
                                                       ((0xeeU 
                                                         == 
                                                         (0xffU 
                                                          & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U]))
                                                         ? 0x28U
                                                         : 
                                                        ((0xedU 
                                                          == 
                                                          (0xffU 
                                                           & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U]))
                                                          ? 0x55U
                                                          : 
                                                         ((0xecU 
                                                           == 
                                                           (0xffU 
                                                            & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U]))
                                                           ? 0xceU
                                                           : 
                                                          ((0xebU 
                                                            == 
                                                            (0xffU 
                                                             & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U]))
                                                            ? 0xe9U
                                                            : (IData)(vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_1002))))))))))))));
    vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_1271 
        = ((0xf7U == (0xffU & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                << 8U) | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                          >> 0x18U))))
            ? 0x68U : ((0xf6U == (0xffU & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                            << 8U) 
                                           | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                              >> 0x18U))))
                        ? 0x42U : ((0xf5U == (0xffU 
                                              & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                  << 8U) 
                                                 | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                    >> 0x18U))))
                                    ? 0xe6U : ((0xf4U 
                                                == 
                                                (0xffU 
                                                 & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                     << 8U) 
                                                    | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                       >> 0x18U))))
                                                ? 0xbfU
                                                : (
                                                   (0xf3U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                         << 8U) 
                                                        | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                           >> 0x18U))))
                                                    ? 0xdU
                                                    : 
                                                   ((0xf2U 
                                                     == 
                                                     (0xffU 
                                                      & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                          << 8U) 
                                                         | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                            >> 0x18U))))
                                                     ? 0x89U
                                                     : 
                                                    ((0xf1U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                           << 8U) 
                                                          | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                             >> 0x18U))))
                                                      ? 0xa1U
                                                      : 
                                                     ((0xf0U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                            << 8U) 
                                                           | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                              >> 0x18U))))
                                                       ? 0x8cU
                                                       : 
                                                      ((0xefU 
                                                        == 
                                                        (0xffU 
                                                         & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                             << 8U) 
                                                            | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                               >> 0x18U))))
                                                        ? 0xdfU
                                                        : 
                                                       ((0xeeU 
                                                         == 
                                                         (0xffU 
                                                          & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                              << 8U) 
                                                             | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                >> 0x18U))))
                                                         ? 0x28U
                                                         : 
                                                        ((0xedU 
                                                          == 
                                                          (0xffU 
                                                           & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                               << 8U) 
                                                              | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                 >> 0x18U))))
                                                          ? 0x55U
                                                          : 
                                                         ((0xecU 
                                                           == 
                                                           (0xffU 
                                                            & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                << 8U) 
                                                               | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                  >> 0x18U))))
                                                           ? 0xceU
                                                           : 
                                                          ((0xebU 
                                                            == 
                                                            (0xffU 
                                                             & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                 << 8U) 
                                                                | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                   >> 0x18U))))
                                                            ? 0xe9U
                                                            : (IData)(vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_1258))))))))))))));
    vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_1527 
        = ((0xf7U == (0xffU & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                << 0x10U) | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                             >> 0x10U))))
            ? 0x68U : ((0xf6U == (0xffU & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                            << 0x10U) 
                                           | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                              >> 0x10U))))
                        ? 0x42U : ((0xf5U == (0xffU 
                                              & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                    >> 0x10U))))
                                    ? 0xe6U : ((0xf4U 
                                                == 
                                                (0xffU 
                                                 & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                       >> 0x10U))))
                                                ? 0xbfU
                                                : (
                                                   (0xf3U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                         << 0x10U) 
                                                        | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                           >> 0x10U))))
                                                    ? 0xdU
                                                    : 
                                                   ((0xf2U 
                                                     == 
                                                     (0xffU 
                                                      & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                          << 0x10U) 
                                                         | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                            >> 0x10U))))
                                                     ? 0x89U
                                                     : 
                                                    ((0xf1U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                           << 0x10U) 
                                                          | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                             >> 0x10U))))
                                                      ? 0xa1U
                                                      : 
                                                     ((0xf0U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                            << 0x10U) 
                                                           | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                              >> 0x10U))))
                                                       ? 0x8cU
                                                       : 
                                                      ((0xefU 
                                                        == 
                                                        (0xffU 
                                                         & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                             << 0x10U) 
                                                            | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                               >> 0x10U))))
                                                        ? 0xdfU
                                                        : 
                                                       ((0xeeU 
                                                         == 
                                                         (0xffU 
                                                          & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                              << 0x10U) 
                                                             | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                >> 0x10U))))
                                                         ? 0x28U
                                                         : 
                                                        ((0xedU 
                                                          == 
                                                          (0xffU 
                                                           & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                               << 0x10U) 
                                                              | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                 >> 0x10U))))
                                                          ? 0x55U
                                                          : 
                                                         ((0xecU 
                                                           == 
                                                           (0xffU 
                                                            & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                << 0x10U) 
                                                               | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                  >> 0x10U))))
                                                           ? 0xceU
                                                           : 
                                                          ((0xebU 
                                                            == 
                                                            (0xffU 
                                                             & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                 << 0x10U) 
                                                                | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                   >> 0x10U))))
                                                            ? 0xe9U
                                                            : (IData)(vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_1514))))))))))))));
    vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_1783 
        = ((0xf7U == (0xffU & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                << 0x18U) | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                             >> 8U))))
            ? 0x68U : ((0xf6U == (0xffU & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                            << 0x18U) 
                                           | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                              >> 8U))))
                        ? 0x42U : ((0xf5U == (0xffU 
                                              & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                    >> 8U))))
                                    ? 0xe6U : ((0xf4U 
                                                == 
                                                (0xffU 
                                                 & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                     << 0x18U) 
                                                    | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                       >> 8U))))
                                                ? 0xbfU
                                                : (
                                                   (0xf3U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                         << 0x18U) 
                                                        | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                           >> 8U))))
                                                    ? 0xdU
                                                    : 
                                                   ((0xf2U 
                                                     == 
                                                     (0xffU 
                                                      & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                          << 0x18U) 
                                                         | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                            >> 8U))))
                                                     ? 0x89U
                                                     : 
                                                    ((0xf1U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                           << 0x18U) 
                                                          | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                             >> 8U))))
                                                      ? 0xa1U
                                                      : 
                                                     ((0xf0U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                            << 0x18U) 
                                                           | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                              >> 8U))))
                                                       ? 0x8cU
                                                       : 
                                                      ((0xefU 
                                                        == 
                                                        (0xffU 
                                                         & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                             << 0x18U) 
                                                            | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                               >> 8U))))
                                                        ? 0xdfU
                                                        : 
                                                       ((0xeeU 
                                                         == 
                                                         (0xffU 
                                                          & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                              << 0x18U) 
                                                             | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                >> 8U))))
                                                         ? 0x28U
                                                         : 
                                                        ((0xedU 
                                                          == 
                                                          (0xffU 
                                                           & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                               << 0x18U) 
                                                              | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                 >> 8U))))
                                                          ? 0x55U
                                                          : 
                                                         ((0xecU 
                                                           == 
                                                           (0xffU 
                                                            & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                << 0x18U) 
                                                               | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                  >> 8U))))
                                                           ? 0xceU
                                                           : 
                                                          ((0xebU 
                                                            == 
                                                            (0xffU 
                                                             & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                                 << 0x18U) 
                                                                | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                   >> 8U))))
                                                            ? 0xe9U
                                                            : (IData)(vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_1770))))))))))))));
    vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_2039 
        = ((0xf7U == (0xffU & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U]))
            ? 0x68U : ((0xf6U == (0xffU & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U]))
                        ? 0x42U : ((0xf5U == (0xffU 
                                              & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U]))
                                    ? 0xe6U : ((0xf4U 
                                                == 
                                                (0xffU 
                                                 & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U]))
                                                ? 0xbfU
                                                : (
                                                   (0xf3U 
                                                    == 
                                                    (0xffU 
                                                     & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U]))
                                                    ? 0xdU
                                                    : 
                                                   ((0xf2U 
                                                     == 
                                                     (0xffU 
                                                      & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U]))
                                                     ? 0x89U
                                                     : 
                                                    ((0xf1U 
                                                      == 
                                                      (0xffU 
                                                       & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U]))
                                                      ? 0xa1U
                                                      : 
                                                     ((0xf0U 
                                                       == 
                                                       (0xffU 
                                                        & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U]))
                                                       ? 0x8cU
                                                       : 
                                                      ((0xefU 
                                                        == 
                                                        (0xffU 
                                                         & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U]))
                                                        ? 0xdfU
                                                        : 
                                                       ((0xeeU 
                                                         == 
                                                         (0xffU 
                                                          & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U]))
                                                         ? 0x28U
                                                         : 
                                                        ((0xedU 
                                                          == 
                                                          (0xffU 
                                                           & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U]))
                                                          ? 0x55U
                                                          : 
                                                         ((0xecU 
                                                           == 
                                                           (0xffU 
                                                            & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U]))
                                                           ? 0xceU
                                                           : 
                                                          ((0xebU 
                                                            == 
                                                            (0xffU 
                                                             & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U]))
                                                            ? 0xe9U
                                                            : (IData)(vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_2026))))))))))))));
    vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_2295 
        = ((0xf7U == (0xffU & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                << 8U) | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                          >> 0x18U))))
            ? 0x68U : ((0xf6U == (0xffU & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                            << 8U) 
                                           | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                              >> 0x18U))))
                        ? 0x42U : ((0xf5U == (0xffU 
                                              & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                  << 8U) 
                                                 | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                    >> 0x18U))))
                                    ? 0xe6U : ((0xf4U 
                                                == 
                                                (0xffU 
                                                 & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                     << 8U) 
                                                    | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                       >> 0x18U))))
                                                ? 0xbfU
                                                : (
                                                   (0xf3U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                         << 8U) 
                                                        | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                           >> 0x18U))))
                                                    ? 0xdU
                                                    : 
                                                   ((0xf2U 
                                                     == 
                                                     (0xffU 
                                                      & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                          << 8U) 
                                                         | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                            >> 0x18U))))
                                                     ? 0x89U
                                                     : 
                                                    ((0xf1U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                           << 8U) 
                                                          | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                             >> 0x18U))))
                                                      ? 0xa1U
                                                      : 
                                                     ((0xf0U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                            << 8U) 
                                                           | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                              >> 0x18U))))
                                                       ? 0x8cU
                                                       : 
                                                      ((0xefU 
                                                        == 
                                                        (0xffU 
                                                         & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                             << 8U) 
                                                            | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                               >> 0x18U))))
                                                        ? 0xdfU
                                                        : 
                                                       ((0xeeU 
                                                         == 
                                                         (0xffU 
                                                          & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                              << 8U) 
                                                             | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                >> 0x18U))))
                                                         ? 0x28U
                                                         : 
                                                        ((0xedU 
                                                          == 
                                                          (0xffU 
                                                           & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                               << 8U) 
                                                              | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                 >> 0x18U))))
                                                          ? 0x55U
                                                          : 
                                                         ((0xecU 
                                                           == 
                                                           (0xffU 
                                                            & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                << 8U) 
                                                               | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                  >> 0x18U))))
                                                           ? 0xceU
                                                           : 
                                                          ((0xebU 
                                                            == 
                                                            (0xffU 
                                                             & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                 << 8U) 
                                                                | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                   >> 0x18U))))
                                                            ? 0xe9U
                                                            : (IData)(vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_2282))))))))))))));
    vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_2551 
        = ((0xf7U == (0xffU & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                << 0x10U) | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                             >> 0x10U))))
            ? 0x68U : ((0xf6U == (0xffU & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                            << 0x10U) 
                                           | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                              >> 0x10U))))
                        ? 0x42U : ((0xf5U == (0xffU 
                                              & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                    >> 0x10U))))
                                    ? 0xe6U : ((0xf4U 
                                                == 
                                                (0xffU 
                                                 & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                       >> 0x10U))))
                                                ? 0xbfU
                                                : (
                                                   (0xf3U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                         << 0x10U) 
                                                        | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                           >> 0x10U))))
                                                    ? 0xdU
                                                    : 
                                                   ((0xf2U 
                                                     == 
                                                     (0xffU 
                                                      & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                          << 0x10U) 
                                                         | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                            >> 0x10U))))
                                                     ? 0x89U
                                                     : 
                                                    ((0xf1U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                           << 0x10U) 
                                                          | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                             >> 0x10U))))
                                                      ? 0xa1U
                                                      : 
                                                     ((0xf0U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                            << 0x10U) 
                                                           | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                              >> 0x10U))))
                                                       ? 0x8cU
                                                       : 
                                                      ((0xefU 
                                                        == 
                                                        (0xffU 
                                                         & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                             << 0x10U) 
                                                            | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                               >> 0x10U))))
                                                        ? 0xdfU
                                                        : 
                                                       ((0xeeU 
                                                         == 
                                                         (0xffU 
                                                          & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                              << 0x10U) 
                                                             | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                >> 0x10U))))
                                                         ? 0x28U
                                                         : 
                                                        ((0xedU 
                                                          == 
                                                          (0xffU 
                                                           & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                               << 0x10U) 
                                                              | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                 >> 0x10U))))
                                                          ? 0x55U
                                                          : 
                                                         ((0xecU 
                                                           == 
                                                           (0xffU 
                                                            & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                << 0x10U) 
                                                               | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                  >> 0x10U))))
                                                           ? 0xceU
                                                           : 
                                                          ((0xebU 
                                                            == 
                                                            (0xffU 
                                                             & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                 << 0x10U) 
                                                                | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                   >> 0x10U))))
                                                            ? 0xe9U
                                                            : (IData)(vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_2538))))))))))))));
    vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_2807 
        = ((0xf7U == (0xffU & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                << 0x18U) | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                             >> 8U))))
            ? 0x68U : ((0xf6U == (0xffU & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                            << 0x18U) 
                                           | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                              >> 8U))))
                        ? 0x42U : ((0xf5U == (0xffU 
                                              & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                    >> 8U))))
                                    ? 0xe6U : ((0xf4U 
                                                == 
                                                (0xffU 
                                                 & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                     << 0x18U) 
                                                    | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                       >> 8U))))
                                                ? 0xbfU
                                                : (
                                                   (0xf3U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                         << 0x18U) 
                                                        | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                           >> 8U))))
                                                    ? 0xdU
                                                    : 
                                                   ((0xf2U 
                                                     == 
                                                     (0xffU 
                                                      & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                          << 0x18U) 
                                                         | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                            >> 8U))))
                                                     ? 0x89U
                                                     : 
                                                    ((0xf1U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                           << 0x18U) 
                                                          | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                             >> 8U))))
                                                      ? 0xa1U
                                                      : 
                                                     ((0xf0U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                            << 0x18U) 
                                                           | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                              >> 8U))))
                                                       ? 0x8cU
                                                       : 
                                                      ((0xefU 
                                                        == 
                                                        (0xffU 
                                                         & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                             << 0x18U) 
                                                            | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                               >> 8U))))
                                                        ? 0xdfU
                                                        : 
                                                       ((0xeeU 
                                                         == 
                                                         (0xffU 
                                                          & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                              << 0x18U) 
                                                             | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                >> 8U))))
                                                         ? 0x28U
                                                         : 
                                                        ((0xedU 
                                                          == 
                                                          (0xffU 
                                                           & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                               << 0x18U) 
                                                              | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                 >> 8U))))
                                                          ? 0x55U
                                                          : 
                                                         ((0xecU 
                                                           == 
                                                           (0xffU 
                                                            & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                << 0x18U) 
                                                               | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                  >> 8U))))
                                                           ? 0xceU
                                                           : 
                                                          ((0xebU 
                                                            == 
                                                            (0xffU 
                                                             & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                 << 0x18U) 
                                                                | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                   >> 8U))))
                                                            ? 0xe9U
                                                            : (IData)(vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_2794))))))))))))));
    vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_3063 
        = ((0xf7U == (0xffU & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U]))
            ? 0x68U : ((0xf6U == (0xffU & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U]))
                        ? 0x42U : ((0xf5U == (0xffU 
                                              & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U]))
                                    ? 0xe6U : ((0xf4U 
                                                == 
                                                (0xffU 
                                                 & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U]))
                                                ? 0xbfU
                                                : (
                                                   (0xf3U 
                                                    == 
                                                    (0xffU 
                                                     & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U]))
                                                    ? 0xdU
                                                    : 
                                                   ((0xf2U 
                                                     == 
                                                     (0xffU 
                                                      & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U]))
                                                     ? 0x89U
                                                     : 
                                                    ((0xf1U 
                                                      == 
                                                      (0xffU 
                                                       & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U]))
                                                      ? 0xa1U
                                                      : 
                                                     ((0xf0U 
                                                       == 
                                                       (0xffU 
                                                        & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U]))
                                                       ? 0x8cU
                                                       : 
                                                      ((0xefU 
                                                        == 
                                                        (0xffU 
                                                         & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U]))
                                                        ? 0xdfU
                                                        : 
                                                       ((0xeeU 
                                                         == 
                                                         (0xffU 
                                                          & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U]))
                                                         ? 0x28U
                                                         : 
                                                        ((0xedU 
                                                          == 
                                                          (0xffU 
                                                           & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U]))
                                                          ? 0x55U
                                                          : 
                                                         ((0xecU 
                                                           == 
                                                           (0xffU 
                                                            & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U]))
                                                           ? 0xceU
                                                           : 
                                                          ((0xebU 
                                                            == 
                                                            (0xffU 
                                                             & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U]))
                                                            ? 0xe9U
                                                            : (IData)(vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_3050))))))))))))));
    vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_3319 
        = ((0xf7U == (0xffU & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                << 8U) | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                          >> 0x18U))))
            ? 0x68U : ((0xf6U == (0xffU & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                            << 8U) 
                                           | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                              >> 0x18U))))
                        ? 0x42U : ((0xf5U == (0xffU 
                                              & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                  << 8U) 
                                                 | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                    >> 0x18U))))
                                    ? 0xe6U : ((0xf4U 
                                                == 
                                                (0xffU 
                                                 & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                     << 8U) 
                                                    | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                       >> 0x18U))))
                                                ? 0xbfU
                                                : (
                                                   (0xf3U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                         << 8U) 
                                                        | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                           >> 0x18U))))
                                                    ? 0xdU
                                                    : 
                                                   ((0xf2U 
                                                     == 
                                                     (0xffU 
                                                      & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                          << 8U) 
                                                         | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                            >> 0x18U))))
                                                     ? 0x89U
                                                     : 
                                                    ((0xf1U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                           << 8U) 
                                                          | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                             >> 0x18U))))
                                                      ? 0xa1U
                                                      : 
                                                     ((0xf0U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                            << 8U) 
                                                           | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                              >> 0x18U))))
                                                       ? 0x8cU
                                                       : 
                                                      ((0xefU 
                                                        == 
                                                        (0xffU 
                                                         & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                             << 8U) 
                                                            | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                               >> 0x18U))))
                                                        ? 0xdfU
                                                        : 
                                                       ((0xeeU 
                                                         == 
                                                         (0xffU 
                                                          & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                              << 8U) 
                                                             | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                >> 0x18U))))
                                                         ? 0x28U
                                                         : 
                                                        ((0xedU 
                                                          == 
                                                          (0xffU 
                                                           & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                               << 8U) 
                                                              | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                 >> 0x18U))))
                                                          ? 0x55U
                                                          : 
                                                         ((0xecU 
                                                           == 
                                                           (0xffU 
                                                            & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                << 8U) 
                                                               | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                  >> 0x18U))))
                                                           ? 0xceU
                                                           : 
                                                          ((0xebU 
                                                            == 
                                                            (0xffU 
                                                             & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                 << 8U) 
                                                                | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                   >> 0x18U))))
                                                            ? 0xe9U
                                                            : (IData)(vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_3306))))))))))))));
    vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_3575 
        = ((0xf7U == (0xffU & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                << 0x10U) | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                             >> 0x10U))))
            ? 0x68U : ((0xf6U == (0xffU & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                            << 0x10U) 
                                           | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                              >> 0x10U))))
                        ? 0x42U : ((0xf5U == (0xffU 
                                              & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                  << 0x10U) 
                                                 | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                    >> 0x10U))))
                                    ? 0xe6U : ((0xf4U 
                                                == 
                                                (0xffU 
                                                 & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                       >> 0x10U))))
                                                ? 0xbfU
                                                : (
                                                   (0xf3U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                         << 0x10U) 
                                                        | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                           >> 0x10U))))
                                                    ? 0xdU
                                                    : 
                                                   ((0xf2U 
                                                     == 
                                                     (0xffU 
                                                      & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                          << 0x10U) 
                                                         | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                            >> 0x10U))))
                                                     ? 0x89U
                                                     : 
                                                    ((0xf1U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                           << 0x10U) 
                                                          | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                             >> 0x10U))))
                                                      ? 0xa1U
                                                      : 
                                                     ((0xf0U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                            << 0x10U) 
                                                           | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                              >> 0x10U))))
                                                       ? 0x8cU
                                                       : 
                                                      ((0xefU 
                                                        == 
                                                        (0xffU 
                                                         & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                             << 0x10U) 
                                                            | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                               >> 0x10U))))
                                                        ? 0xdfU
                                                        : 
                                                       ((0xeeU 
                                                         == 
                                                         (0xffU 
                                                          & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                              << 0x10U) 
                                                             | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                >> 0x10U))))
                                                         ? 0x28U
                                                         : 
                                                        ((0xedU 
                                                          == 
                                                          (0xffU 
                                                           & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                               << 0x10U) 
                                                              | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                 >> 0x10U))))
                                                          ? 0x55U
                                                          : 
                                                         ((0xecU 
                                                           == 
                                                           (0xffU 
                                                            & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                << 0x10U) 
                                                               | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                  >> 0x10U))))
                                                           ? 0xceU
                                                           : 
                                                          ((0xebU 
                                                            == 
                                                            (0xffU 
                                                             & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                 << 0x10U) 
                                                                | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                   >> 0x10U))))
                                                            ? 0xe9U
                                                            : (IData)(vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_3562))))))))))))));
    vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_3831 
        = ((0xf7U == (0xffU & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                << 0x18U) | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                             >> 8U))))
            ? 0x68U : ((0xf6U == (0xffU & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                            << 0x18U) 
                                           | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                              >> 8U))))
                        ? 0x42U : ((0xf5U == (0xffU 
                                              & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                  << 0x18U) 
                                                 | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                    >> 8U))))
                                    ? 0xe6U : ((0xf4U 
                                                == 
                                                (0xffU 
                                                 & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                     << 0x18U) 
                                                    | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                       >> 8U))))
                                                ? 0xbfU
                                                : (
                                                   (0xf3U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                         << 0x18U) 
                                                        | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                           >> 8U))))
                                                    ? 0xdU
                                                    : 
                                                   ((0xf2U 
                                                     == 
                                                     (0xffU 
                                                      & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                          << 0x18U) 
                                                         | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                            >> 8U))))
                                                     ? 0x89U
                                                     : 
                                                    ((0xf1U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                           << 0x18U) 
                                                          | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                             >> 8U))))
                                                      ? 0xa1U
                                                      : 
                                                     ((0xf0U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                            << 0x18U) 
                                                           | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                              >> 8U))))
                                                       ? 0x8cU
                                                       : 
                                                      ((0xefU 
                                                        == 
                                                        (0xffU 
                                                         & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                             << 0x18U) 
                                                            | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                               >> 8U))))
                                                        ? 0xdfU
                                                        : 
                                                       ((0xeeU 
                                                         == 
                                                         (0xffU 
                                                          & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                              << 0x18U) 
                                                             | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                >> 8U))))
                                                         ? 0x28U
                                                         : 
                                                        ((0xedU 
                                                          == 
                                                          (0xffU 
                                                           & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                               << 0x18U) 
                                                              | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                 >> 8U))))
                                                          ? 0x55U
                                                          : 
                                                         ((0xecU 
                                                           == 
                                                           (0xffU 
                                                            & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                << 0x18U) 
                                                               | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                  >> 8U))))
                                                           ? 0xceU
                                                           : 
                                                          ((0xebU 
                                                            == 
                                                            (0xffU 
                                                             & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                                 << 0x18U) 
                                                                | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                   >> 8U))))
                                                            ? 0xe9U
                                                            : (IData)(vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_3818))))))))))))));
    vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_4087 
        = ((0xf7U == (0xffU & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U]))
            ? 0x68U : ((0xf6U == (0xffU & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U]))
                        ? 0x42U : ((0xf5U == (0xffU 
                                              & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U]))
                                    ? 0xe6U : ((0xf4U 
                                                == 
                                                (0xffU 
                                                 & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U]))
                                                ? 0xbfU
                                                : (
                                                   (0xf3U 
                                                    == 
                                                    (0xffU 
                                                     & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U]))
                                                    ? 0xdU
                                                    : 
                                                   ((0xf2U 
                                                     == 
                                                     (0xffU 
                                                      & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U]))
                                                     ? 0x89U
                                                     : 
                                                    ((0xf1U 
                                                      == 
                                                      (0xffU 
                                                       & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U]))
                                                      ? 0xa1U
                                                      : 
                                                     ((0xf0U 
                                                       == 
                                                       (0xffU 
                                                        & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U]))
                                                       ? 0x8cU
                                                       : 
                                                      ((0xefU 
                                                        == 
                                                        (0xffU 
                                                         & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U]))
                                                        ? 0xdfU
                                                        : 
                                                       ((0xeeU 
                                                         == 
                                                         (0xffU 
                                                          & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U]))
                                                         ? 0x28U
                                                         : 
                                                        ((0xedU 
                                                          == 
                                                          (0xffU 
                                                           & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U]))
                                                          ? 0x55U
                                                          : 
                                                         ((0xecU 
                                                           == 
                                                           (0xffU 
                                                            & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U]))
                                                           ? 0xceU
                                                           : 
                                                          ((0xebU 
                                                            == 
                                                            (0xffU 
                                                             & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U]))
                                                            ? 0xe9U
                                                            : (IData)(vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_4074))))))))))))));
    vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_39 = ((
                                                   ((0xffU 
                                                     == 
                                                     (0xffU 
                                                      & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                         >> 0x18U)))
                                                     ? 0x16U
                                                     : 
                                                    ((0xfeU 
                                                      == 
                                                      (0xffU 
                                                       & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                          >> 0x18U)))
                                                      ? 0xbbU
                                                      : 
                                                     ((0xfdU 
                                                       == 
                                                       (0xffU 
                                                        & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                           >> 0x18U)))
                                                       ? 0x54U
                                                       : 
                                                      ((0xfcU 
                                                        == 
                                                        (0xffU 
                                                         & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                            >> 0x18U)))
                                                        ? 0xb0U
                                                        : 
                                                       ((0xfbU 
                                                         == 
                                                         (0xffU 
                                                          & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                             >> 0x18U)))
                                                         ? 0xfU
                                                         : 
                                                        ((0xfaU 
                                                          == 
                                                          (0xffU 
                                                           & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                              >> 0x18U)))
                                                          ? 0x2dU
                                                          : 
                                                         ((0xf9U 
                                                           == 
                                                           (0xffU 
                                                            & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                               >> 0x18U)))
                                                           ? 0x99U
                                                           : 
                                                          ((0xf8U 
                                                            == 
                                                            (0xffU 
                                                             & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                                >> 0x18U)))
                                                            ? 0x41U
                                                            : (IData)(vlTOPp->Aes128Core__DOT__ks__DOT___GEN_9975))))))))) 
                                                   << 0x18U) 
                                                  | ((((0xffU 
                                                        == 
                                                        (0xffU 
                                                         & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                            >> 0x10U)))
                                                        ? 0x16U
                                                        : 
                                                       ((0xfeU 
                                                         == 
                                                         (0xffU 
                                                          & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                             >> 0x10U)))
                                                         ? 0xbbU
                                                         : 
                                                        ((0xfdU 
                                                          == 
                                                          (0xffU 
                                                           & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                              >> 0x10U)))
                                                          ? 0x54U
                                                          : 
                                                         ((0xfcU 
                                                           == 
                                                           (0xffU 
                                                            & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                               >> 0x10U)))
                                                           ? 0xb0U
                                                           : 
                                                          ((0xfbU 
                                                            == 
                                                            (0xffU 
                                                             & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                                >> 0x10U)))
                                                            ? 0xfU
                                                            : 
                                                           ((0xfaU 
                                                             == 
                                                             (0xffU 
                                                              & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                                 >> 0x10U)))
                                                             ? 0x2dU
                                                             : 
                                                            ((0xf9U 
                                                              == 
                                                              (0xffU 
                                                               & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                                  >> 0x10U)))
                                                              ? 0x99U
                                                              : 
                                                             ((0xf8U 
                                                               == 
                                                               (0xffU 
                                                                & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                                   >> 0x10U)))
                                                               ? 0x41U
                                                               : (IData)(vlTOPp->Aes128Core__DOT__ks__DOT___GEN_10231))))))))) 
                                                      << 0x10U) 
                                                     | ((((0xffU 
                                                           == 
                                                           (0xffU 
                                                            & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                               >> 8U)))
                                                           ? 0x16U
                                                           : 
                                                          ((0xfeU 
                                                            == 
                                                            (0xffU 
                                                             & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                                >> 8U)))
                                                            ? 0xbbU
                                                            : 
                                                           ((0xfdU 
                                                             == 
                                                             (0xffU 
                                                              & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                                 >> 8U)))
                                                             ? 0x54U
                                                             : 
                                                            ((0xfcU 
                                                              == 
                                                              (0xffU 
                                                               & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                                  >> 8U)))
                                                              ? 0xb0U
                                                              : 
                                                             ((0xfbU 
                                                               == 
                                                               (0xffU 
                                                                & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                                   >> 8U)))
                                                               ? 0xfU
                                                               : 
                                                              ((0xfaU 
                                                                == 
                                                                (0xffU 
                                                                 & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                                    >> 8U)))
                                                                ? 0x2dU
                                                                : 
                                                               ((0xf9U 
                                                                 == 
                                                                 (0xffU 
                                                                  & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                                     >> 8U)))
                                                                 ? 0x99U
                                                                 : 
                                                                ((0xf8U 
                                                                  == 
                                                                  (0xffU 
                                                                   & (vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38 
                                                                      >> 8U)))
                                                                  ? 0x41U
                                                                  : (IData)(vlTOPp->Aes128Core__DOT__ks__DOT___GEN_9463))))))))) 
                                                         << 8U) 
                                                        | ((0xffU 
                                                            == 
                                                            (0xffU 
                                                             & vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38))
                                                            ? 0x16U
                                                            : 
                                                           ((0xfeU 
                                                             == 
                                                             (0xffU 
                                                              & vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38))
                                                             ? 0xbbU
                                                             : 
                                                            ((0xfdU 
                                                              == 
                                                              (0xffU 
                                                               & vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38))
                                                              ? 0x54U
                                                              : 
                                                             ((0xfcU 
                                                               == 
                                                               (0xffU 
                                                                & vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38))
                                                               ? 0xb0U
                                                               : 
                                                              ((0xfbU 
                                                                == 
                                                                (0xffU 
                                                                 & vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38))
                                                                ? 0xfU
                                                                : 
                                                               ((0xfaU 
                                                                 == 
                                                                 (0xffU 
                                                                  & vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38))
                                                                 ? 0x2dU
                                                                 : 
                                                                ((0xf9U 
                                                                  == 
                                                                  (0xffU 
                                                                   & vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38))
                                                                  ? 0x99U
                                                                  : 
                                                                 ((0xf8U 
                                                                   == 
                                                                   (0xffU 
                                                                    & vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_38))
                                                                   ? 0x41U
                                                                   : (IData)(vlTOPp->Aes128Core__DOT__ks__DOT___GEN_9719))))))))))));
    vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT__outWord_hi 
        = (((QData)((IData)(((((0xffU == (0xffU & (
                                                   vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                   >> 0x18U)))
                                ? 0x16U : ((0xfeU == 
                                            (0xffU 
                                             & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                >> 0x18U)))
                                            ? 0xbbU
                                            : ((0xfdU 
                                                == 
                                                (0xffU 
                                                 & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                    >> 0x18U)))
                                                ? 0x54U
                                                : (
                                                   (0xfcU 
                                                    == 
                                                    (0xffU 
                                                     & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                        >> 0x18U)))
                                                    ? 0xb0U
                                                    : 
                                                   ((0xfbU 
                                                     == 
                                                     (0xffU 
                                                      & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                         >> 0x18U)))
                                                     ? 0xfU
                                                     : 
                                                    ((0xfaU 
                                                      == 
                                                      (0xffU 
                                                       & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                          >> 0x18U)))
                                                      ? 0x2dU
                                                      : 
                                                     ((0xf9U 
                                                       == 
                                                       (0xffU 
                                                        & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                           >> 0x18U)))
                                                       ? 0x99U
                                                       : 
                                                      ((0xf8U 
                                                        == 
                                                        (0xffU 
                                                         & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                            >> 0x18U)))
                                                        ? 0x41U
                                                        : (IData)(vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_247))))))))) 
                              << 0x18U) | ((((0xffU 
                                              == (0xffU 
                                                  & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                     >> 0x10U)))
                                              ? 0x16U
                                              : ((0xfeU 
                                                  == 
                                                  (0xffU 
                                                   & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                      >> 0x10U)))
                                                  ? 0xbbU
                                                  : 
                                                 ((0xfdU 
                                                   == 
                                                   (0xffU 
                                                    & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                       >> 0x10U)))
                                                   ? 0x54U
                                                   : 
                                                  ((0xfcU 
                                                    == 
                                                    (0xffU 
                                                     & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                        >> 0x10U)))
                                                    ? 0xb0U
                                                    : 
                                                   ((0xfbU 
                                                     == 
                                                     (0xffU 
                                                      & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                         >> 0x10U)))
                                                     ? 0xfU
                                                     : 
                                                    ((0xfaU 
                                                      == 
                                                      (0xffU 
                                                       & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                          >> 0x10U)))
                                                      ? 0x2dU
                                                      : 
                                                     ((0xf9U 
                                                       == 
                                                       (0xffU 
                                                        & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                           >> 0x10U)))
                                                       ? 0x99U
                                                       : 
                                                      ((0xf8U 
                                                        == 
                                                        (0xffU 
                                                         & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                            >> 0x10U)))
                                                        ? 0x41U
                                                        : (IData)(vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_503))))))))) 
                                            << 0x10U) 
                                           | ((((0xffU 
                                                 == 
                                                 (0xffU 
                                                  & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                     >> 8U)))
                                                 ? 0x16U
                                                 : 
                                                ((0xfeU 
                                                  == 
                                                  (0xffU 
                                                   & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                      >> 8U)))
                                                  ? 0xbbU
                                                  : 
                                                 ((0xfdU 
                                                   == 
                                                   (0xffU 
                                                    & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                       >> 8U)))
                                                   ? 0x54U
                                                   : 
                                                  ((0xfcU 
                                                    == 
                                                    (0xffU 
                                                     & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                        >> 8U)))
                                                    ? 0xb0U
                                                    : 
                                                   ((0xfbU 
                                                     == 
                                                     (0xffU 
                                                      & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                         >> 8U)))
                                                     ? 0xfU
                                                     : 
                                                    ((0xfaU 
                                                      == 
                                                      (0xffU 
                                                       & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                          >> 8U)))
                                                      ? 0x2dU
                                                      : 
                                                     ((0xf9U 
                                                       == 
                                                       (0xffU 
                                                        & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                           >> 8U)))
                                                       ? 0x99U
                                                       : 
                                                      ((0xf8U 
                                                        == 
                                                        (0xffU 
                                                         & (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                            >> 8U)))
                                                        ? 0x41U
                                                        : (IData)(vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_759))))))))) 
                                               << 8U) 
                                              | ((0xffU 
                                                  == 
                                                  (0xffU 
                                                   & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U]))
                                                  ? 0x16U
                                                  : 
                                                 ((0xfeU 
                                                   == 
                                                   (0xffU 
                                                    & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U]))
                                                   ? 0xbbU
                                                   : 
                                                  ((0xfdU 
                                                    == 
                                                    (0xffU 
                                                     & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U]))
                                                    ? 0x54U
                                                    : 
                                                   ((0xfcU 
                                                     == 
                                                     (0xffU 
                                                      & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U]))
                                                     ? 0xb0U
                                                     : 
                                                    ((0xfbU 
                                                      == 
                                                      (0xffU 
                                                       & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U]))
                                                      ? 0xfU
                                                      : 
                                                     ((0xfaU 
                                                       == 
                                                       (0xffU 
                                                        & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U]))
                                                       ? 0x2dU
                                                       : 
                                                      ((0xf9U 
                                                        == 
                                                        (0xffU 
                                                         & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U]))
                                                        ? 0x99U
                                                        : 
                                                       ((0xf8U 
                                                         == 
                                                         (0xffU 
                                                          & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U]))
                                                         ? 0x41U
                                                         : (IData)(vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_1015)))))))))))))) 
            << 0x20U) | (QData)((IData)(((((0xffU == 
                                            (0xffU 
                                             & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                 << 8U) 
                                                | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                   >> 0x18U))))
                                            ? 0x16U
                                            : ((0xfeU 
                                                == 
                                                (0xffU 
                                                 & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                     << 8U) 
                                                    | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                       >> 0x18U))))
                                                ? 0xbbU
                                                : (
                                                   (0xfdU 
                                                    == 
                                                    (0xffU 
                                                     & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                         << 8U) 
                                                        | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                           >> 0x18U))))
                                                    ? 0x54U
                                                    : 
                                                   ((0xfcU 
                                                     == 
                                                     (0xffU 
                                                      & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                          << 8U) 
                                                         | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                            >> 0x18U))))
                                                     ? 0xb0U
                                                     : 
                                                    ((0xfbU 
                                                      == 
                                                      (0xffU 
                                                       & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                           << 8U) 
                                                          | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                             >> 0x18U))))
                                                      ? 0xfU
                                                      : 
                                                     ((0xfaU 
                                                       == 
                                                       (0xffU 
                                                        & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                            << 8U) 
                                                           | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                              >> 0x18U))))
                                                       ? 0x2dU
                                                       : 
                                                      ((0xf9U 
                                                        == 
                                                        (0xffU 
                                                         & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                             << 8U) 
                                                            | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                               >> 0x18U))))
                                                        ? 0x99U
                                                        : 
                                                       ((0xf8U 
                                                         == 
                                                         (0xffU 
                                                          & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                              << 8U) 
                                                             | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                >> 0x18U))))
                                                         ? 0x41U
                                                         : (IData)(vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_1271))))))))) 
                                          << 0x18U) 
                                         | ((((0xffU 
                                               == (0xffU 
                                                   & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                         >> 0x10U))))
                                               ? 0x16U
                                               : ((0xfeU 
                                                   == 
                                                   (0xffU 
                                                    & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                        << 0x10U) 
                                                       | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                          >> 0x10U))))
                                                   ? 0xbbU
                                                   : 
                                                  ((0xfdU 
                                                    == 
                                                    (0xffU 
                                                     & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                         << 0x10U) 
                                                        | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                           >> 0x10U))))
                                                    ? 0x54U
                                                    : 
                                                   ((0xfcU 
                                                     == 
                                                     (0xffU 
                                                      & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                          << 0x10U) 
                                                         | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                            >> 0x10U))))
                                                     ? 0xb0U
                                                     : 
                                                    ((0xfbU 
                                                      == 
                                                      (0xffU 
                                                       & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                           << 0x10U) 
                                                          | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                             >> 0x10U))))
                                                      ? 0xfU
                                                      : 
                                                     ((0xfaU 
                                                       == 
                                                       (0xffU 
                                                        & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                            << 0x10U) 
                                                           | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                              >> 0x10U))))
                                                       ? 0x2dU
                                                       : 
                                                      ((0xf9U 
                                                        == 
                                                        (0xffU 
                                                         & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                             << 0x10U) 
                                                            | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                               >> 0x10U))))
                                                        ? 0x99U
                                                        : 
                                                       ((0xf8U 
                                                         == 
                                                         (0xffU 
                                                          & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                              << 0x10U) 
                                                             | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                >> 0x10U))))
                                                         ? 0x41U
                                                         : (IData)(vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_1527))))))))) 
                                             << 0x10U) 
                                            | ((((0xffU 
                                                  == 
                                                  (0xffU 
                                                   & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                       << 0x18U) 
                                                      | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                         >> 8U))))
                                                  ? 0x16U
                                                  : 
                                                 ((0xfeU 
                                                   == 
                                                   (0xffU 
                                                    & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                        << 0x18U) 
                                                       | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                          >> 8U))))
                                                   ? 0xbbU
                                                   : 
                                                  ((0xfdU 
                                                    == 
                                                    (0xffU 
                                                     & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                         << 0x18U) 
                                                        | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                           >> 8U))))
                                                    ? 0x54U
                                                    : 
                                                   ((0xfcU 
                                                     == 
                                                     (0xffU 
                                                      & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                          << 0x18U) 
                                                         | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                            >> 8U))))
                                                     ? 0xb0U
                                                     : 
                                                    ((0xfbU 
                                                      == 
                                                      (0xffU 
                                                       & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                           << 0x18U) 
                                                          | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                             >> 8U))))
                                                      ? 0xfU
                                                      : 
                                                     ((0xfaU 
                                                       == 
                                                       (0xffU 
                                                        & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                            << 0x18U) 
                                                           | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                              >> 8U))))
                                                       ? 0x2dU
                                                       : 
                                                      ((0xf9U 
                                                        == 
                                                        (0xffU 
                                                         & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                             << 0x18U) 
                                                            | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                               >> 8U))))
                                                        ? 0x99U
                                                        : 
                                                       ((0xf8U 
                                                         == 
                                                         (0xffU 
                                                          & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[3U] 
                                                              << 0x18U) 
                                                             | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                                >> 8U))))
                                                         ? 0x41U
                                                         : (IData)(vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_1783))))))))) 
                                                << 8U) 
                                               | ((0xffU 
                                                   == 
                                                   (0xffU 
                                                    & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U]))
                                                   ? 0x16U
                                                   : 
                                                  ((0xfeU 
                                                    == 
                                                    (0xffU 
                                                     & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U]))
                                                    ? 0xbbU
                                                    : 
                                                   ((0xfdU 
                                                     == 
                                                     (0xffU 
                                                      & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U]))
                                                     ? 0x54U
                                                     : 
                                                    ((0xfcU 
                                                      == 
                                                      (0xffU 
                                                       & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U]))
                                                      ? 0xb0U
                                                      : 
                                                     ((0xfbU 
                                                       == 
                                                       (0xffU 
                                                        & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U]))
                                                       ? 0xfU
                                                       : 
                                                      ((0xfaU 
                                                        == 
                                                        (0xffU 
                                                         & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U]))
                                                        ? 0x2dU
                                                        : 
                                                       ((0xf9U 
                                                         == 
                                                         (0xffU 
                                                          & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U]))
                                                         ? 0x99U
                                                         : 
                                                        ((0xf8U 
                                                          == 
                                                          (0xffU 
                                                           & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U]))
                                                          ? 0x41U
                                                          : (IData)(vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_2039)))))))))))))));
    vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT__outWord_lo 
        = (((QData)((IData)(((((0xffU == (0xffU & (
                                                   (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                    << 8U) 
                                                   | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                      >> 0x18U))))
                                ? 0x16U : ((0xfeU == 
                                            (0xffU 
                                             & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                 << 8U) 
                                                | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                   >> 0x18U))))
                                            ? 0xbbU
                                            : ((0xfdU 
                                                == 
                                                (0xffU 
                                                 & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                     << 8U) 
                                                    | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                       >> 0x18U))))
                                                ? 0x54U
                                                : (
                                                   (0xfcU 
                                                    == 
                                                    (0xffU 
                                                     & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                         << 8U) 
                                                        | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                           >> 0x18U))))
                                                    ? 0xb0U
                                                    : 
                                                   ((0xfbU 
                                                     == 
                                                     (0xffU 
                                                      & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                          << 8U) 
                                                         | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                            >> 0x18U))))
                                                     ? 0xfU
                                                     : 
                                                    ((0xfaU 
                                                      == 
                                                      (0xffU 
                                                       & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                           << 8U) 
                                                          | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                             >> 0x18U))))
                                                      ? 0x2dU
                                                      : 
                                                     ((0xf9U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                            << 8U) 
                                                           | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                              >> 0x18U))))
                                                       ? 0x99U
                                                       : 
                                                      ((0xf8U 
                                                        == 
                                                        (0xffU 
                                                         & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                             << 8U) 
                                                            | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                               >> 0x18U))))
                                                        ? 0x41U
                                                        : (IData)(vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_2295))))))))) 
                              << 0x18U) | ((((0xffU 
                                              == (0xffU 
                                                  & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                      << 0x10U) 
                                                     | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                        >> 0x10U))))
                                              ? 0x16U
                                              : ((0xfeU 
                                                  == 
                                                  (0xffU 
                                                   & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                         >> 0x10U))))
                                                  ? 0xbbU
                                                  : 
                                                 ((0xfdU 
                                                   == 
                                                   (0xffU 
                                                    & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                        << 0x10U) 
                                                       | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                          >> 0x10U))))
                                                   ? 0x54U
                                                   : 
                                                  ((0xfcU 
                                                    == 
                                                    (0xffU 
                                                     & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                         << 0x10U) 
                                                        | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                           >> 0x10U))))
                                                    ? 0xb0U
                                                    : 
                                                   ((0xfbU 
                                                     == 
                                                     (0xffU 
                                                      & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                          << 0x10U) 
                                                         | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                            >> 0x10U))))
                                                     ? 0xfU
                                                     : 
                                                    ((0xfaU 
                                                      == 
                                                      (0xffU 
                                                       & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                           << 0x10U) 
                                                          | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                             >> 0x10U))))
                                                      ? 0x2dU
                                                      : 
                                                     ((0xf9U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                            << 0x10U) 
                                                           | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                              >> 0x10U))))
                                                       ? 0x99U
                                                       : 
                                                      ((0xf8U 
                                                        == 
                                                        (0xffU 
                                                         & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                             << 0x10U) 
                                                            | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                               >> 0x10U))))
                                                        ? 0x41U
                                                        : (IData)(vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_2551))))))))) 
                                            << 0x10U) 
                                           | ((((0xffU 
                                                 == 
                                                 (0xffU 
                                                  & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                      << 0x18U) 
                                                     | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                        >> 8U))))
                                                 ? 0x16U
                                                 : 
                                                ((0xfeU 
                                                  == 
                                                  (0xffU 
                                                   & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                       << 0x18U) 
                                                      | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                         >> 8U))))
                                                  ? 0xbbU
                                                  : 
                                                 ((0xfdU 
                                                   == 
                                                   (0xffU 
                                                    & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                        << 0x18U) 
                                                       | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                          >> 8U))))
                                                   ? 0x54U
                                                   : 
                                                  ((0xfcU 
                                                    == 
                                                    (0xffU 
                                                     & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                         << 0x18U) 
                                                        | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                           >> 8U))))
                                                    ? 0xb0U
                                                    : 
                                                   ((0xfbU 
                                                     == 
                                                     (0xffU 
                                                      & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                          << 0x18U) 
                                                         | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                            >> 8U))))
                                                     ? 0xfU
                                                     : 
                                                    ((0xfaU 
                                                      == 
                                                      (0xffU 
                                                       & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                           << 0x18U) 
                                                          | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                             >> 8U))))
                                                      ? 0x2dU
                                                      : 
                                                     ((0xf9U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                            << 0x18U) 
                                                           | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                              >> 8U))))
                                                       ? 0x99U
                                                       : 
                                                      ((0xf8U 
                                                        == 
                                                        (0xffU 
                                                         & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[2U] 
                                                             << 0x18U) 
                                                            | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                               >> 8U))))
                                                        ? 0x41U
                                                        : (IData)(vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_2807))))))))) 
                                               << 8U) 
                                              | ((0xffU 
                                                  == 
                                                  (0xffU 
                                                   & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U]))
                                                  ? 0x16U
                                                  : 
                                                 ((0xfeU 
                                                   == 
                                                   (0xffU 
                                                    & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U]))
                                                   ? 0xbbU
                                                   : 
                                                  ((0xfdU 
                                                    == 
                                                    (0xffU 
                                                     & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U]))
                                                    ? 0x54U
                                                    : 
                                                   ((0xfcU 
                                                     == 
                                                     (0xffU 
                                                      & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U]))
                                                     ? 0xb0U
                                                     : 
                                                    ((0xfbU 
                                                      == 
                                                      (0xffU 
                                                       & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U]))
                                                      ? 0xfU
                                                      : 
                                                     ((0xfaU 
                                                       == 
                                                       (0xffU 
                                                        & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U]))
                                                       ? 0x2dU
                                                       : 
                                                      ((0xf9U 
                                                        == 
                                                        (0xffU 
                                                         & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U]))
                                                        ? 0x99U
                                                        : 
                                                       ((0xf8U 
                                                         == 
                                                         (0xffU 
                                                          & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U]))
                                                         ? 0x41U
                                                         : (IData)(vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_3063)))))))))))))) 
            << 0x20U) | (QData)((IData)(((((0xffU == 
                                            (0xffU 
                                             & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                 << 8U) 
                                                | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                   >> 0x18U))))
                                            ? 0x16U
                                            : ((0xfeU 
                                                == 
                                                (0xffU 
                                                 & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                     << 8U) 
                                                    | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                       >> 0x18U))))
                                                ? 0xbbU
                                                : (
                                                   (0xfdU 
                                                    == 
                                                    (0xffU 
                                                     & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                         << 8U) 
                                                        | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                           >> 0x18U))))
                                                    ? 0x54U
                                                    : 
                                                   ((0xfcU 
                                                     == 
                                                     (0xffU 
                                                      & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                          << 8U) 
                                                         | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                            >> 0x18U))))
                                                     ? 0xb0U
                                                     : 
                                                    ((0xfbU 
                                                      == 
                                                      (0xffU 
                                                       & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                           << 8U) 
                                                          | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                             >> 0x18U))))
                                                      ? 0xfU
                                                      : 
                                                     ((0xfaU 
                                                       == 
                                                       (0xffU 
                                                        & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                            << 8U) 
                                                           | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                              >> 0x18U))))
                                                       ? 0x2dU
                                                       : 
                                                      ((0xf9U 
                                                        == 
                                                        (0xffU 
                                                         & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                             << 8U) 
                                                            | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                               >> 0x18U))))
                                                        ? 0x99U
                                                        : 
                                                       ((0xf8U 
                                                         == 
                                                         (0xffU 
                                                          & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                              << 8U) 
                                                             | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                >> 0x18U))))
                                                         ? 0x41U
                                                         : (IData)(vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_3319))))))))) 
                                          << 0x18U) 
                                         | ((((0xffU 
                                               == (0xffU 
                                                   & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                       << 0x10U) 
                                                      | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                         >> 0x10U))))
                                               ? 0x16U
                                               : ((0xfeU 
                                                   == 
                                                   (0xffU 
                                                    & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                        << 0x10U) 
                                                       | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                          >> 0x10U))))
                                                   ? 0xbbU
                                                   : 
                                                  ((0xfdU 
                                                    == 
                                                    (0xffU 
                                                     & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                         << 0x10U) 
                                                        | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                           >> 0x10U))))
                                                    ? 0x54U
                                                    : 
                                                   ((0xfcU 
                                                     == 
                                                     (0xffU 
                                                      & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                          << 0x10U) 
                                                         | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                            >> 0x10U))))
                                                     ? 0xb0U
                                                     : 
                                                    ((0xfbU 
                                                      == 
                                                      (0xffU 
                                                       & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                           << 0x10U) 
                                                          | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                             >> 0x10U))))
                                                      ? 0xfU
                                                      : 
                                                     ((0xfaU 
                                                       == 
                                                       (0xffU 
                                                        & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                            << 0x10U) 
                                                           | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                              >> 0x10U))))
                                                       ? 0x2dU
                                                       : 
                                                      ((0xf9U 
                                                        == 
                                                        (0xffU 
                                                         & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                             << 0x10U) 
                                                            | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                               >> 0x10U))))
                                                        ? 0x99U
                                                        : 
                                                       ((0xf8U 
                                                         == 
                                                         (0xffU 
                                                          & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                              << 0x10U) 
                                                             | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                >> 0x10U))))
                                                         ? 0x41U
                                                         : (IData)(vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_3575))))))))) 
                                             << 0x10U) 
                                            | ((((0xffU 
                                                  == 
                                                  (0xffU 
                                                   & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                       << 0x18U) 
                                                      | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                         >> 8U))))
                                                  ? 0x16U
                                                  : 
                                                 ((0xfeU 
                                                   == 
                                                   (0xffU 
                                                    & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                        << 0x18U) 
                                                       | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                          >> 8U))))
                                                   ? 0xbbU
                                                   : 
                                                  ((0xfdU 
                                                    == 
                                                    (0xffU 
                                                     & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                         << 0x18U) 
                                                        | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                           >> 8U))))
                                                    ? 0x54U
                                                    : 
                                                   ((0xfcU 
                                                     == 
                                                     (0xffU 
                                                      & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                          << 0x18U) 
                                                         | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                            >> 8U))))
                                                     ? 0xb0U
                                                     : 
                                                    ((0xfbU 
                                                      == 
                                                      (0xffU 
                                                       & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                           << 0x18U) 
                                                          | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                             >> 8U))))
                                                      ? 0xfU
                                                      : 
                                                     ((0xfaU 
                                                       == 
                                                       (0xffU 
                                                        & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                            << 0x18U) 
                                                           | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                              >> 8U))))
                                                       ? 0x2dU
                                                       : 
                                                      ((0xf9U 
                                                        == 
                                                        (0xffU 
                                                         & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                             << 0x18U) 
                                                            | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                               >> 8U))))
                                                        ? 0x99U
                                                        : 
                                                       ((0xf8U 
                                                         == 
                                                         (0xffU 
                                                          & ((vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[1U] 
                                                              << 0x18U) 
                                                             | (vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U] 
                                                                >> 8U))))
                                                         ? 0x41U
                                                         : (IData)(vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_3831))))))))) 
                                                << 8U) 
                                               | ((0xffU 
                                                   == 
                                                   (0xffU 
                                                    & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U]))
                                                   ? 0x16U
                                                   : 
                                                  ((0xfeU 
                                                    == 
                                                    (0xffU 
                                                     & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U]))
                                                    ? 0xbbU
                                                    : 
                                                   ((0xfdU 
                                                     == 
                                                     (0xffU 
                                                      & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U]))
                                                     ? 0x54U
                                                     : 
                                                    ((0xfcU 
                                                      == 
                                                      (0xffU 
                                                       & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U]))
                                                      ? 0xb0U
                                                      : 
                                                     ((0xfbU 
                                                       == 
                                                       (0xffU 
                                                        & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U]))
                                                       ? 0xfU
                                                       : 
                                                      ((0xfaU 
                                                        == 
                                                        (0xffU 
                                                         & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U]))
                                                        ? 0x2dU
                                                        : 
                                                       ((0xf9U 
                                                         == 
                                                         (0xffU 
                                                          & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U]))
                                                         ? 0x99U
                                                         : 
                                                        ((0xf8U 
                                                          == 
                                                          (0xffU 
                                                           & vlTOPp->Aes128Core__DOT__r9__DOT__core__DOT__addk_io_out_bits_bits[0U]))
                                                          ? 0x41U
                                                          : (IData)(vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT___GEN_4087)))))))))))))));
    vlTOPp->Aes128Core__DOT__ks__DOT__w_40 = (0x36000000U 
                                              ^ (vlTOPp->Aes128Core__DOT__ks__DOT__w_36 
                                                 ^ vlTOPp->Aes128Core__DOT__ks__DOT___t1_T_39));
    vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub_io_out_bits_bits[0U] 
        = (IData)(vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT__outWord_lo);
    vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub_io_out_bits_bits[1U] 
        = (IData)((vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT__outWord_lo 
                   >> 0x20U));
    vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub_io_out_bits_bits[2U] 
        = (IData)(vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT__outWord_hi);
    vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub_io_out_bits_bits[3U] 
        = (IData)((vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub__DOT__outWord_hi 
                   >> 0x20U));
    vlTOPp->Aes128Core__DOT__ks__DOT__w_41 = (vlTOPp->Aes128Core__DOT__ks__DOT__w_37 
                                              ^ vlTOPp->Aes128Core__DOT__ks__DOT__w_40);
    vlTOPp->Aes128Core__DOT__ks__DOT__w_42 = (vlTOPp->Aes128Core__DOT__ks__DOT__w_38 
                                              ^ vlTOPp->Aes128Core__DOT__ks__DOT__w_41);
    vlTOPp->io_out_bits_bits[0U] = (((0xff000000U & 
                                      vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub_io_out_bits_bits[0U]) 
                                     | ((0xff0000U 
                                         & vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub_io_out_bits_bits[3U]) 
                                        | ((0xff00U 
                                            & vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub_io_out_bits_bits[2U]) 
                                           | (0xffU 
                                              & vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub_io_out_bits_bits[1U])))) 
                                    ^ (vlTOPp->Aes128Core__DOT__ks__DOT__w_39 
                                       ^ vlTOPp->Aes128Core__DOT__ks__DOT__w_42));
    vlTOPp->io_out_bits_bits[1U] = (((0xff000000U & 
                                      vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub_io_out_bits_bits[1U]) 
                                     | ((0xff0000U 
                                         & vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub_io_out_bits_bits[0U]) 
                                        | ((0xff00U 
                                            & vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub_io_out_bits_bits[3U]) 
                                           | (0xffU 
                                              & vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub_io_out_bits_bits[2U])))) 
                                    ^ vlTOPp->Aes128Core__DOT__ks__DOT__w_42);
    vlTOPp->io_out_bits_bits[2U] = ((IData)((((QData)((IData)(
                                                              ((0xff000000U 
                                                                & vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub_io_out_bits_bits[3U]) 
                                                               | ((0xff0000U 
                                                                   & vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub_io_out_bits_bits[2U]) 
                                                                  | ((0xff00U 
                                                                      & vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub_io_out_bits_bits[1U]) 
                                                                     | (0xffU 
                                                                        & vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub_io_out_bits_bits[0U])))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               ((0xff000000U 
                                                                 & vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub_io_out_bits_bits[2U]) 
                                                                | ((0xff0000U 
                                                                    & vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub_io_out_bits_bits[1U]) 
                                                                   | ((0xff00U 
                                                                       & vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub_io_out_bits_bits[0U]) 
                                                                      | (0xffU 
                                                                         & vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub_io_out_bits_bits[3U])))))))) 
                                    ^ (IData)((((QData)((IData)(vlTOPp->Aes128Core__DOT__ks__DOT__w_40)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlTOPp->Aes128Core__DOT__ks__DOT__w_41)))));
    vlTOPp->io_out_bits_bits[3U] = ((IData)(((((QData)((IData)(
                                                               ((0xff000000U 
                                                                 & vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub_io_out_bits_bits[3U]) 
                                                                | ((0xff0000U 
                                                                    & vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub_io_out_bits_bits[2U]) 
                                                                   | ((0xff00U 
                                                                       & vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub_io_out_bits_bits[1U]) 
                                                                      | (0xffU 
                                                                         & vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub_io_out_bits_bits[0U])))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                ((0xff000000U 
                                                                  & vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub_io_out_bits_bits[2U]) 
                                                                 | ((0xff0000U 
                                                                     & vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub_io_out_bits_bits[1U]) 
                                                                    | ((0xff00U 
                                                                        & vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub_io_out_bits_bits[0U]) 
                                                                       | (0xffU 
                                                                          & vlTOPp->Aes128Core__DOT__finalR__DOT__core__DOT__sub_io_out_bits_bits[3U]))))))) 
                                             >> 0x20U)) 
                                    ^ (IData)(((((QData)((IData)(vlTOPp->Aes128Core__DOT__ks__DOT__w_40)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlTOPp->Aes128Core__DOT__ks__DOT__w_41))) 
                                               >> 0x20U)));
}

void VAes128Core::_eval(VAes128Core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAes128Core::_eval\n"); );
    VAes128Core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    vlTOPp->_combo__TOP__2(vlSymsp);
    vlTOPp->_combo__TOP__3(vlSymsp);
    vlTOPp->_combo__TOP__4(vlSymsp);
    vlTOPp->_combo__TOP__5(vlSymsp);
    vlTOPp->_combo__TOP__6(vlSymsp);
    vlTOPp->_combo__TOP__7(vlSymsp);
    vlTOPp->_combo__TOP__8(vlSymsp);
    vlTOPp->_combo__TOP__9(vlSymsp);
    vlTOPp->_combo__TOP__10(vlSymsp);
    vlTOPp->_combo__TOP__11(vlSymsp);
    vlTOPp->_combo__TOP__12(vlSymsp);
    vlTOPp->_combo__TOP__13(vlSymsp);
    vlTOPp->_combo__TOP__14(vlSymsp);
    vlTOPp->_combo__TOP__15(vlSymsp);
    vlTOPp->_combo__TOP__16(vlSymsp);
    vlTOPp->_combo__TOP__17(vlSymsp);
    vlTOPp->_combo__TOP__18(vlSymsp);
    vlTOPp->_combo__TOP__19(vlSymsp);
    vlTOPp->_combo__TOP__20(vlSymsp);
    vlTOPp->_combo__TOP__21(vlSymsp);
    vlTOPp->_combo__TOP__22(vlSymsp);
}

VL_INLINE_OPT QData VAes128Core::_change_request(VAes128Core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAes128Core::_change_request\n"); );
    VAes128Core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VAes128Core::_change_request_1(VAes128Core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAes128Core::_change_request_1\n"); );
    VAes128Core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VAes128Core::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAes128Core::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((io_in_valid & 0xfeU))) {
        Verilated::overWidthError("io_in_valid");}
    if (VL_UNLIKELY((io_out_ready & 0xfeU))) {
        Verilated::overWidthError("io_out_ready");}
}
#endif  // VL_DEBUG
