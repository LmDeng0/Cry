// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAes128Core.h for the primary calling header

#include "VAes128Core.h"
#include "VAes128Core__Syms.h"

VL_INLINE_OPT void VAes128Core::_combo__TOP__5(VAes128Core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAes128Core::_combo__TOP__5\n"); );
    VAes128Core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Aes128Core__DOT__ks__DOT___GEN_9615 = (
                                                   (0x8fU 
                                                    == 
                                                    (0xffU 
                                                     & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                    ? 0x73U
                                                    : 
                                                   ((0x8eU 
                                                     == 
                                                     (0xffU 
                                                      & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                     ? 0x19U
                                                     : 
                                                    ((0x8dU 
                                                      == 
                                                      (0xffU 
                                                       & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                      ? 0x5dU
                                                      : 
                                                     ((0x8cU 
                                                       == 
                                                       (0xffU 
                                                        & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                       ? 0x64U
                                                       : 
                                                      ((0x8bU 
                                                        == 
                                                        (0xffU 
                                                         & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                        ? 0x3dU
                                                        : 
                                                       ((0x8aU 
                                                         == 
                                                         (0xffU 
                                                          & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                         ? 0x7eU
                                                         : 
                                                        ((0x89U 
                                                          == 
                                                          (0xffU 
                                                           & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                          ? 0xa7U
                                                          : 
                                                         ((0x88U 
                                                           == 
                                                           (0xffU 
                                                            & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                           ? 0xc4U
                                                           : 
                                                          ((0x87U 
                                                            == 
                                                            (0xffU 
                                                             & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                            ? 0x17U
                                                            : 
                                                           ((0x86U 
                                                             == 
                                                             (0xffU 
                                                              & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                             ? 0x44U
                                                             : 
                                                            ((0x85U 
                                                              == 
                                                              (0xffU 
                                                               & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                              ? 0x97U
                                                              : 
                                                             ((0x84U 
                                                               == 
                                                               (0xffU 
                                                                & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                               ? 0x5fU
                                                               : 
                                                              ((0x83U 
                                                                == 
                                                                (0xffU 
                                                                 & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                                ? 0xecU
                                                                : (IData)(vlTOPp->Aes128Core__DOT__ks__DOT___GEN_9602))))))))))))));
    vlTOPp->Aes128Core__DOT__ks__DOT___GEN_9871 = (
                                                   (0x8fU 
                                                    == 
                                                    (0xffU 
                                                     & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                        >> 0x18U)))
                                                    ? 0x73U
                                                    : 
                                                   ((0x8eU 
                                                     == 
                                                     (0xffU 
                                                      & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                         >> 0x18U)))
                                                     ? 0x19U
                                                     : 
                                                    ((0x8dU 
                                                      == 
                                                      (0xffU 
                                                       & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                          >> 0x18U)))
                                                      ? 0x5dU
                                                      : 
                                                     ((0x8cU 
                                                       == 
                                                       (0xffU 
                                                        & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                           >> 0x18U)))
                                                       ? 0x64U
                                                       : 
                                                      ((0x8bU 
                                                        == 
                                                        (0xffU 
                                                         & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                            >> 0x18U)))
                                                        ? 0x3dU
                                                        : 
                                                       ((0x8aU 
                                                         == 
                                                         (0xffU 
                                                          & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                             >> 0x18U)))
                                                         ? 0x7eU
                                                         : 
                                                        ((0x89U 
                                                          == 
                                                          (0xffU 
                                                           & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                              >> 0x18U)))
                                                          ? 0xa7U
                                                          : 
                                                         ((0x88U 
                                                           == 
                                                           (0xffU 
                                                            & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                               >> 0x18U)))
                                                           ? 0xc4U
                                                           : 
                                                          ((0x87U 
                                                            == 
                                                            (0xffU 
                                                             & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                >> 0x18U)))
                                                            ? 0x17U
                                                            : 
                                                           ((0x86U 
                                                             == 
                                                             (0xffU 
                                                              & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                 >> 0x18U)))
                                                             ? 0x44U
                                                             : 
                                                            ((0x85U 
                                                              == 
                                                              (0xffU 
                                                               & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                  >> 0x18U)))
                                                              ? 0x97U
                                                              : 
                                                             ((0x84U 
                                                               == 
                                                               (0xffU 
                                                                & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                   >> 0x18U)))
                                                               ? 0x5fU
                                                               : 
                                                              ((0x83U 
                                                                == 
                                                                (0xffU 
                                                                 & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                    >> 0x18U)))
                                                                ? 0xecU
                                                                : (IData)(vlTOPp->Aes128Core__DOT__ks__DOT___GEN_9858))))))))))))));
    vlTOPp->Aes128Core__DOT__ks__DOT___GEN_10127 = 
        ((0x8fU == (0xffU & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                             >> 0x10U))) ? 0x73U : 
         ((0x8eU == (0xffU & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                              >> 0x10U))) ? 0x19U : 
          ((0x8dU == (0xffU & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                               >> 0x10U))) ? 0x5dU : 
           ((0x8cU == (0xffU & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                >> 0x10U))) ? 0x64U
             : ((0x8bU == (0xffU & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                    >> 0x10U))) ? 0x3dU
                 : ((0x8aU == (0xffU & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                        >> 0x10U)))
                     ? 0x7eU : ((0x89U == (0xffU & 
                                           (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                            >> 0x10U)))
                                 ? 0xa7U : ((0x88U 
                                             == (0xffU 
                                                 & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                    >> 0x10U)))
                                             ? 0xc4U
                                             : ((0x87U 
                                                 == 
                                                 (0xffU 
                                                  & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                     >> 0x10U)))
                                                 ? 0x17U
                                                 : 
                                                ((0x86U 
                                                  == 
                                                  (0xffU 
                                                   & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                      >> 0x10U)))
                                                  ? 0x44U
                                                  : 
                                                 ((0x85U 
                                                   == 
                                                   (0xffU 
                                                    & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                       >> 0x10U)))
                                                   ? 0x97U
                                                   : 
                                                  ((0x84U 
                                                    == 
                                                    (0xffU 
                                                     & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                        >> 0x10U)))
                                                    ? 0x5fU
                                                    : 
                                                   ((0x83U 
                                                     == 
                                                     (0xffU 
                                                      & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                         >> 0x10U)))
                                                     ? 0xecU
                                                     : (IData)(vlTOPp->Aes128Core__DOT__ks__DOT___GEN_10114))))))))))))));
    vlTOPp->Aes128Core__DOT__ks__DOT___GEN_9372 = (
                                                   (0x9cU 
                                                    == 
                                                    (0xffU 
                                                     & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                        >> 8U)))
                                                    ? 0xdeU
                                                    : 
                                                   ((0x9bU 
                                                     == 
                                                     (0xffU 
                                                      & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                         >> 8U)))
                                                     ? 0x14U
                                                     : 
                                                    ((0x9aU 
                                                      == 
                                                      (0xffU 
                                                       & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                          >> 8U)))
                                                      ? 0xb8U
                                                      : 
                                                     ((0x99U 
                                                       == 
                                                       (0xffU 
                                                        & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                           >> 8U)))
                                                       ? 0xeeU
                                                       : 
                                                      ((0x98U 
                                                        == 
                                                        (0xffU 
                                                         & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                            >> 8U)))
                                                        ? 0x46U
                                                        : 
                                                       ((0x97U 
                                                         == 
                                                         (0xffU 
                                                          & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                             >> 8U)))
                                                         ? 0x88U
                                                         : 
                                                        ((0x96U 
                                                          == 
                                                          (0xffU 
                                                           & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                              >> 8U)))
                                                          ? 0x90U
                                                          : 
                                                         ((0x95U 
                                                           == 
                                                           (0xffU 
                                                            & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                               >> 8U)))
                                                           ? 0x2aU
                                                           : 
                                                          ((0x94U 
                                                            == 
                                                            (0xffU 
                                                             & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                >> 8U)))
                                                            ? 0x22U
                                                            : 
                                                           ((0x93U 
                                                             == 
                                                             (0xffU 
                                                              & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                 >> 8U)))
                                                             ? 0xdcU
                                                             : 
                                                            ((0x92U 
                                                              == 
                                                              (0xffU 
                                                               & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                  >> 8U)))
                                                              ? 0x4fU
                                                              : 
                                                             ((0x91U 
                                                               == 
                                                               (0xffU 
                                                                & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                   >> 8U)))
                                                               ? 0x81U
                                                               : 
                                                              ((0x90U 
                                                                == 
                                                                (0xffU 
                                                                 & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                    >> 8U)))
                                                                ? 0x60U
                                                                : (IData)(vlTOPp->Aes128Core__DOT__ks__DOT___GEN_9359))))))))))))));
    vlTOPp->Aes128Core__DOT__ks__DOT___GEN_9628 = (
                                                   (0x9cU 
                                                    == 
                                                    (0xffU 
                                                     & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                    ? 0xdeU
                                                    : 
                                                   ((0x9bU 
                                                     == 
                                                     (0xffU 
                                                      & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                     ? 0x14U
                                                     : 
                                                    ((0x9aU 
                                                      == 
                                                      (0xffU 
                                                       & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                      ? 0xb8U
                                                      : 
                                                     ((0x99U 
                                                       == 
                                                       (0xffU 
                                                        & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                       ? 0xeeU
                                                       : 
                                                      ((0x98U 
                                                        == 
                                                        (0xffU 
                                                         & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                        ? 0x46U
                                                        : 
                                                       ((0x97U 
                                                         == 
                                                         (0xffU 
                                                          & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                         ? 0x88U
                                                         : 
                                                        ((0x96U 
                                                          == 
                                                          (0xffU 
                                                           & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                          ? 0x90U
                                                          : 
                                                         ((0x95U 
                                                           == 
                                                           (0xffU 
                                                            & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                           ? 0x2aU
                                                           : 
                                                          ((0x94U 
                                                            == 
                                                            (0xffU 
                                                             & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                            ? 0x22U
                                                            : 
                                                           ((0x93U 
                                                             == 
                                                             (0xffU 
                                                              & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                             ? 0xdcU
                                                             : 
                                                            ((0x92U 
                                                              == 
                                                              (0xffU 
                                                               & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                              ? 0x4fU
                                                              : 
                                                             ((0x91U 
                                                               == 
                                                               (0xffU 
                                                                & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                               ? 0x81U
                                                               : 
                                                              ((0x90U 
                                                                == 
                                                                (0xffU 
                                                                 & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                                ? 0x60U
                                                                : (IData)(vlTOPp->Aes128Core__DOT__ks__DOT___GEN_9615))))))))))))));
    vlTOPp->Aes128Core__DOT__ks__DOT___GEN_9884 = (
                                                   (0x9cU 
                                                    == 
                                                    (0xffU 
                                                     & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                        >> 0x18U)))
                                                    ? 0xdeU
                                                    : 
                                                   ((0x9bU 
                                                     == 
                                                     (0xffU 
                                                      & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                         >> 0x18U)))
                                                     ? 0x14U
                                                     : 
                                                    ((0x9aU 
                                                      == 
                                                      (0xffU 
                                                       & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                          >> 0x18U)))
                                                      ? 0xb8U
                                                      : 
                                                     ((0x99U 
                                                       == 
                                                       (0xffU 
                                                        & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                           >> 0x18U)))
                                                       ? 0xeeU
                                                       : 
                                                      ((0x98U 
                                                        == 
                                                        (0xffU 
                                                         & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                            >> 0x18U)))
                                                        ? 0x46U
                                                        : 
                                                       ((0x97U 
                                                         == 
                                                         (0xffU 
                                                          & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                             >> 0x18U)))
                                                         ? 0x88U
                                                         : 
                                                        ((0x96U 
                                                          == 
                                                          (0xffU 
                                                           & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                              >> 0x18U)))
                                                          ? 0x90U
                                                          : 
                                                         ((0x95U 
                                                           == 
                                                           (0xffU 
                                                            & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                               >> 0x18U)))
                                                           ? 0x2aU
                                                           : 
                                                          ((0x94U 
                                                            == 
                                                            (0xffU 
                                                             & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                >> 0x18U)))
                                                            ? 0x22U
                                                            : 
                                                           ((0x93U 
                                                             == 
                                                             (0xffU 
                                                              & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                 >> 0x18U)))
                                                             ? 0xdcU
                                                             : 
                                                            ((0x92U 
                                                              == 
                                                              (0xffU 
                                                               & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                  >> 0x18U)))
                                                              ? 0x4fU
                                                              : 
                                                             ((0x91U 
                                                               == 
                                                               (0xffU 
                                                                & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                   >> 0x18U)))
                                                               ? 0x81U
                                                               : 
                                                              ((0x90U 
                                                                == 
                                                                (0xffU 
                                                                 & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                    >> 0x18U)))
                                                                ? 0x60U
                                                                : (IData)(vlTOPp->Aes128Core__DOT__ks__DOT___GEN_9871))))))))))))));
    vlTOPp->Aes128Core__DOT__ks__DOT___GEN_10140 = 
        ((0x9cU == (0xffU & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                             >> 0x10U))) ? 0xdeU : 
         ((0x9bU == (0xffU & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                              >> 0x10U))) ? 0x14U : 
          ((0x9aU == (0xffU & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                               >> 0x10U))) ? 0xb8U : 
           ((0x99U == (0xffU & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                >> 0x10U))) ? 0xeeU
             : ((0x98U == (0xffU & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                    >> 0x10U))) ? 0x46U
                 : ((0x97U == (0xffU & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                        >> 0x10U)))
                     ? 0x88U : ((0x96U == (0xffU & 
                                           (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                            >> 0x10U)))
                                 ? 0x90U : ((0x95U 
                                             == (0xffU 
                                                 & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                    >> 0x10U)))
                                             ? 0x2aU
                                             : ((0x94U 
                                                 == 
                                                 (0xffU 
                                                  & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                     >> 0x10U)))
                                                 ? 0x22U
                                                 : 
                                                ((0x93U 
                                                  == 
                                                  (0xffU 
                                                   & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                      >> 0x10U)))
                                                  ? 0xdcU
                                                  : 
                                                 ((0x92U 
                                                   == 
                                                   (0xffU 
                                                    & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                       >> 0x10U)))
                                                   ? 0x4fU
                                                   : 
                                                  ((0x91U 
                                                    == 
                                                    (0xffU 
                                                     & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                        >> 0x10U)))
                                                    ? 0x81U
                                                    : 
                                                   ((0x90U 
                                                     == 
                                                     (0xffU 
                                                      & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                         >> 0x10U)))
                                                     ? 0x60U
                                                     : (IData)(vlTOPp->Aes128Core__DOT__ks__DOT___GEN_10127))))))))))))));
    vlTOPp->Aes128Core__DOT__ks__DOT___GEN_9385 = (
                                                   (0xa9U 
                                                    == 
                                                    (0xffU 
                                                     & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                        >> 8U)))
                                                    ? 0xd3U
                                                    : 
                                                   ((0xa8U 
                                                     == 
                                                     (0xffU 
                                                      & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                         >> 8U)))
                                                     ? 0xc2U
                                                     : 
                                                    ((0xa7U 
                                                      == 
                                                      (0xffU 
                                                       & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                          >> 8U)))
                                                      ? 0x5cU
                                                      : 
                                                     ((0xa6U 
                                                       == 
                                                       (0xffU 
                                                        & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                           >> 8U)))
                                                       ? 0x24U
                                                       : 
                                                      ((0xa5U 
                                                        == 
                                                        (0xffU 
                                                         & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                            >> 8U)))
                                                        ? 6U
                                                        : 
                                                       ((0xa4U 
                                                         == 
                                                         (0xffU 
                                                          & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                             >> 8U)))
                                                         ? 0x49U
                                                         : 
                                                        ((0xa3U 
                                                          == 
                                                          (0xffU 
                                                           & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                              >> 8U)))
                                                          ? 0xaU
                                                          : 
                                                         ((0xa2U 
                                                           == 
                                                           (0xffU 
                                                            & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                               >> 8U)))
                                                           ? 0x3aU
                                                           : 
                                                          ((0xa1U 
                                                            == 
                                                            (0xffU 
                                                             & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                >> 8U)))
                                                            ? 0x32U
                                                            : 
                                                           ((0xa0U 
                                                             == 
                                                             (0xffU 
                                                              & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                 >> 8U)))
                                                             ? 0xe0U
                                                             : 
                                                            ((0x9fU 
                                                              == 
                                                              (0xffU 
                                                               & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                  >> 8U)))
                                                              ? 0xdbU
                                                              : 
                                                             ((0x9eU 
                                                               == 
                                                               (0xffU 
                                                                & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                   >> 8U)))
                                                               ? 0xbU
                                                               : 
                                                              ((0x9dU 
                                                                == 
                                                                (0xffU 
                                                                 & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                    >> 8U)))
                                                                ? 0x5eU
                                                                : (IData)(vlTOPp->Aes128Core__DOT__ks__DOT___GEN_9372))))))))))))));
    vlTOPp->Aes128Core__DOT__ks__DOT___GEN_9641 = (
                                                   (0xa9U 
                                                    == 
                                                    (0xffU 
                                                     & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                    ? 0xd3U
                                                    : 
                                                   ((0xa8U 
                                                     == 
                                                     (0xffU 
                                                      & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                     ? 0xc2U
                                                     : 
                                                    ((0xa7U 
                                                      == 
                                                      (0xffU 
                                                       & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                      ? 0x5cU
                                                      : 
                                                     ((0xa6U 
                                                       == 
                                                       (0xffU 
                                                        & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                       ? 0x24U
                                                       : 
                                                      ((0xa5U 
                                                        == 
                                                        (0xffU 
                                                         & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                        ? 6U
                                                        : 
                                                       ((0xa4U 
                                                         == 
                                                         (0xffU 
                                                          & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                         ? 0x49U
                                                         : 
                                                        ((0xa3U 
                                                          == 
                                                          (0xffU 
                                                           & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                          ? 0xaU
                                                          : 
                                                         ((0xa2U 
                                                           == 
                                                           (0xffU 
                                                            & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                           ? 0x3aU
                                                           : 
                                                          ((0xa1U 
                                                            == 
                                                            (0xffU 
                                                             & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                            ? 0x32U
                                                            : 
                                                           ((0xa0U 
                                                             == 
                                                             (0xffU 
                                                              & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                             ? 0xe0U
                                                             : 
                                                            ((0x9fU 
                                                              == 
                                                              (0xffU 
                                                               & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                              ? 0xdbU
                                                              : 
                                                             ((0x9eU 
                                                               == 
                                                               (0xffU 
                                                                & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                               ? 0xbU
                                                               : 
                                                              ((0x9dU 
                                                                == 
                                                                (0xffU 
                                                                 & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                                ? 0x5eU
                                                                : (IData)(vlTOPp->Aes128Core__DOT__ks__DOT___GEN_9628))))))))))))));
    vlTOPp->Aes128Core__DOT__ks__DOT___GEN_9897 = (
                                                   (0xa9U 
                                                    == 
                                                    (0xffU 
                                                     & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                        >> 0x18U)))
                                                    ? 0xd3U
                                                    : 
                                                   ((0xa8U 
                                                     == 
                                                     (0xffU 
                                                      & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                         >> 0x18U)))
                                                     ? 0xc2U
                                                     : 
                                                    ((0xa7U 
                                                      == 
                                                      (0xffU 
                                                       & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                          >> 0x18U)))
                                                      ? 0x5cU
                                                      : 
                                                     ((0xa6U 
                                                       == 
                                                       (0xffU 
                                                        & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                           >> 0x18U)))
                                                       ? 0x24U
                                                       : 
                                                      ((0xa5U 
                                                        == 
                                                        (0xffU 
                                                         & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                            >> 0x18U)))
                                                        ? 6U
                                                        : 
                                                       ((0xa4U 
                                                         == 
                                                         (0xffU 
                                                          & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                             >> 0x18U)))
                                                         ? 0x49U
                                                         : 
                                                        ((0xa3U 
                                                          == 
                                                          (0xffU 
                                                           & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                              >> 0x18U)))
                                                          ? 0xaU
                                                          : 
                                                         ((0xa2U 
                                                           == 
                                                           (0xffU 
                                                            & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                               >> 0x18U)))
                                                           ? 0x3aU
                                                           : 
                                                          ((0xa1U 
                                                            == 
                                                            (0xffU 
                                                             & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                >> 0x18U)))
                                                            ? 0x32U
                                                            : 
                                                           ((0xa0U 
                                                             == 
                                                             (0xffU 
                                                              & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                 >> 0x18U)))
                                                             ? 0xe0U
                                                             : 
                                                            ((0x9fU 
                                                              == 
                                                              (0xffU 
                                                               & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                  >> 0x18U)))
                                                              ? 0xdbU
                                                              : 
                                                             ((0x9eU 
                                                               == 
                                                               (0xffU 
                                                                & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                   >> 0x18U)))
                                                               ? 0xbU
                                                               : 
                                                              ((0x9dU 
                                                                == 
                                                                (0xffU 
                                                                 & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                    >> 0x18U)))
                                                                ? 0x5eU
                                                                : (IData)(vlTOPp->Aes128Core__DOT__ks__DOT___GEN_9884))))))))))))));
    vlTOPp->Aes128Core__DOT__ks__DOT___GEN_10153 = 
        ((0xa9U == (0xffU & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                             >> 0x10U))) ? 0xd3U : 
         ((0xa8U == (0xffU & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                              >> 0x10U))) ? 0xc2U : 
          ((0xa7U == (0xffU & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                               >> 0x10U))) ? 0x5cU : 
           ((0xa6U == (0xffU & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                >> 0x10U))) ? 0x24U
             : ((0xa5U == (0xffU & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                    >> 0x10U))) ? 6U
                 : ((0xa4U == (0xffU & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                        >> 0x10U)))
                     ? 0x49U : ((0xa3U == (0xffU & 
                                           (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                            >> 0x10U)))
                                 ? 0xaU : ((0xa2U == 
                                            (0xffU 
                                             & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                >> 0x10U)))
                                            ? 0x3aU
                                            : ((0xa1U 
                                                == 
                                                (0xffU 
                                                 & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                    >> 0x10U)))
                                                ? 0x32U
                                                : (
                                                   (0xa0U 
                                                    == 
                                                    (0xffU 
                                                     & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                        >> 0x10U)))
                                                    ? 0xe0U
                                                    : 
                                                   ((0x9fU 
                                                     == 
                                                     (0xffU 
                                                      & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                         >> 0x10U)))
                                                     ? 0xdbU
                                                     : 
                                                    ((0x9eU 
                                                      == 
                                                      (0xffU 
                                                       & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                          >> 0x10U)))
                                                      ? 0xbU
                                                      : 
                                                     ((0x9dU 
                                                       == 
                                                       (0xffU 
                                                        & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                           >> 0x10U)))
                                                       ? 0x5eU
                                                       : (IData)(vlTOPp->Aes128Core__DOT__ks__DOT___GEN_10140))))))))))))));
    vlTOPp->Aes128Core__DOT__ks__DOT___GEN_9398 = (
                                                   (0xb6U 
                                                    == 
                                                    (0xffU 
                                                     & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                        >> 8U)))
                                                    ? 0x4eU
                                                    : 
                                                   ((0xb5U 
                                                     == 
                                                     (0xffU 
                                                      & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                         >> 8U)))
                                                     ? 0xd5U
                                                     : 
                                                    ((0xb4U 
                                                      == 
                                                      (0xffU 
                                                       & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                          >> 8U)))
                                                      ? 0x8dU
                                                      : 
                                                     ((0xb3U 
                                                       == 
                                                       (0xffU 
                                                        & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                           >> 8U)))
                                                       ? 0x6dU
                                                       : 
                                                      ((0xb2U 
                                                        == 
                                                        (0xffU 
                                                         & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                            >> 8U)))
                                                        ? 0x37U
                                                        : 
                                                       ((0xb1U 
                                                         == 
                                                         (0xffU 
                                                          & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                             >> 8U)))
                                                         ? 0xc8U
                                                         : 
                                                        ((0xb0U 
                                                          == 
                                                          (0xffU 
                                                           & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                              >> 8U)))
                                                          ? 0xe7U
                                                          : 
                                                         ((0xafU 
                                                           == 
                                                           (0xffU 
                                                            & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                               >> 8U)))
                                                           ? 0x79U
                                                           : 
                                                          ((0xaeU 
                                                            == 
                                                            (0xffU 
                                                             & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                >> 8U)))
                                                            ? 0xe4U
                                                            : 
                                                           ((0xadU 
                                                             == 
                                                             (0xffU 
                                                              & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                 >> 8U)))
                                                             ? 0x95U
                                                             : 
                                                            ((0xacU 
                                                              == 
                                                              (0xffU 
                                                               & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                  >> 8U)))
                                                              ? 0x91U
                                                              : 
                                                             ((0xabU 
                                                               == 
                                                               (0xffU 
                                                                & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                   >> 8U)))
                                                               ? 0x62U
                                                               : 
                                                              ((0xaaU 
                                                                == 
                                                                (0xffU 
                                                                 & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                    >> 8U)))
                                                                ? 0xacU
                                                                : (IData)(vlTOPp->Aes128Core__DOT__ks__DOT___GEN_9385))))))))))))));
    vlTOPp->Aes128Core__DOT__ks__DOT___GEN_9654 = (
                                                   (0xb6U 
                                                    == 
                                                    (0xffU 
                                                     & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                    ? 0x4eU
                                                    : 
                                                   ((0xb5U 
                                                     == 
                                                     (0xffU 
                                                      & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                     ? 0xd5U
                                                     : 
                                                    ((0xb4U 
                                                      == 
                                                      (0xffU 
                                                       & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                      ? 0x8dU
                                                      : 
                                                     ((0xb3U 
                                                       == 
                                                       (0xffU 
                                                        & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                       ? 0x6dU
                                                       : 
                                                      ((0xb2U 
                                                        == 
                                                        (0xffU 
                                                         & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                        ? 0x37U
                                                        : 
                                                       ((0xb1U 
                                                         == 
                                                         (0xffU 
                                                          & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                         ? 0xc8U
                                                         : 
                                                        ((0xb0U 
                                                          == 
                                                          (0xffU 
                                                           & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                          ? 0xe7U
                                                          : 
                                                         ((0xafU 
                                                           == 
                                                           (0xffU 
                                                            & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                           ? 0x79U
                                                           : 
                                                          ((0xaeU 
                                                            == 
                                                            (0xffU 
                                                             & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                            ? 0xe4U
                                                            : 
                                                           ((0xadU 
                                                             == 
                                                             (0xffU 
                                                              & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                             ? 0x95U
                                                             : 
                                                            ((0xacU 
                                                              == 
                                                              (0xffU 
                                                               & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                              ? 0x91U
                                                              : 
                                                             ((0xabU 
                                                               == 
                                                               (0xffU 
                                                                & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                               ? 0x62U
                                                               : 
                                                              ((0xaaU 
                                                                == 
                                                                (0xffU 
                                                                 & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                                ? 0xacU
                                                                : (IData)(vlTOPp->Aes128Core__DOT__ks__DOT___GEN_9641))))))))))))));
    vlTOPp->Aes128Core__DOT__ks__DOT___GEN_9910 = (
                                                   (0xb6U 
                                                    == 
                                                    (0xffU 
                                                     & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                        >> 0x18U)))
                                                    ? 0x4eU
                                                    : 
                                                   ((0xb5U 
                                                     == 
                                                     (0xffU 
                                                      & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                         >> 0x18U)))
                                                     ? 0xd5U
                                                     : 
                                                    ((0xb4U 
                                                      == 
                                                      (0xffU 
                                                       & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                          >> 0x18U)))
                                                      ? 0x8dU
                                                      : 
                                                     ((0xb3U 
                                                       == 
                                                       (0xffU 
                                                        & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                           >> 0x18U)))
                                                       ? 0x6dU
                                                       : 
                                                      ((0xb2U 
                                                        == 
                                                        (0xffU 
                                                         & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                            >> 0x18U)))
                                                        ? 0x37U
                                                        : 
                                                       ((0xb1U 
                                                         == 
                                                         (0xffU 
                                                          & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                             >> 0x18U)))
                                                         ? 0xc8U
                                                         : 
                                                        ((0xb0U 
                                                          == 
                                                          (0xffU 
                                                           & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                              >> 0x18U)))
                                                          ? 0xe7U
                                                          : 
                                                         ((0xafU 
                                                           == 
                                                           (0xffU 
                                                            & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                               >> 0x18U)))
                                                           ? 0x79U
                                                           : 
                                                          ((0xaeU 
                                                            == 
                                                            (0xffU 
                                                             & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                >> 0x18U)))
                                                            ? 0xe4U
                                                            : 
                                                           ((0xadU 
                                                             == 
                                                             (0xffU 
                                                              & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                 >> 0x18U)))
                                                             ? 0x95U
                                                             : 
                                                            ((0xacU 
                                                              == 
                                                              (0xffU 
                                                               & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                  >> 0x18U)))
                                                              ? 0x91U
                                                              : 
                                                             ((0xabU 
                                                               == 
                                                               (0xffU 
                                                                & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                   >> 0x18U)))
                                                               ? 0x62U
                                                               : 
                                                              ((0xaaU 
                                                                == 
                                                                (0xffU 
                                                                 & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                    >> 0x18U)))
                                                                ? 0xacU
                                                                : (IData)(vlTOPp->Aes128Core__DOT__ks__DOT___GEN_9897))))))))))))));
    vlTOPp->Aes128Core__DOT__ks__DOT___GEN_10166 = 
        ((0xb6U == (0xffU & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                             >> 0x10U))) ? 0x4eU : 
         ((0xb5U == (0xffU & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                              >> 0x10U))) ? 0xd5U : 
          ((0xb4U == (0xffU & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                               >> 0x10U))) ? 0x8dU : 
           ((0xb3U == (0xffU & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                >> 0x10U))) ? 0x6dU
             : ((0xb2U == (0xffU & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                    >> 0x10U))) ? 0x37U
                 : ((0xb1U == (0xffU & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                        >> 0x10U)))
                     ? 0xc8U : ((0xb0U == (0xffU & 
                                           (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                            >> 0x10U)))
                                 ? 0xe7U : ((0xafU 
                                             == (0xffU 
                                                 & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                    >> 0x10U)))
                                             ? 0x79U
                                             : ((0xaeU 
                                                 == 
                                                 (0xffU 
                                                  & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                     >> 0x10U)))
                                                 ? 0xe4U
                                                 : 
                                                ((0xadU 
                                                  == 
                                                  (0xffU 
                                                   & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                      >> 0x10U)))
                                                  ? 0x95U
                                                  : 
                                                 ((0xacU 
                                                   == 
                                                   (0xffU 
                                                    & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                       >> 0x10U)))
                                                   ? 0x91U
                                                   : 
                                                  ((0xabU 
                                                    == 
                                                    (0xffU 
                                                     & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                        >> 0x10U)))
                                                    ? 0x62U
                                                    : 
                                                   ((0xaaU 
                                                     == 
                                                     (0xffU 
                                                      & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                         >> 0x10U)))
                                                     ? 0xacU
                                                     : (IData)(vlTOPp->Aes128Core__DOT__ks__DOT___GEN_10153))))))))))))));
    vlTOPp->Aes128Core__DOT__ks__DOT___GEN_9411 = (
                                                   (0xc3U 
                                                    == 
                                                    (0xffU 
                                                     & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                        >> 8U)))
                                                    ? 0x2eU
                                                    : 
                                                   ((0xc2U 
                                                     == 
                                                     (0xffU 
                                                      & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                         >> 8U)))
                                                     ? 0x25U
                                                     : 
                                                    ((0xc1U 
                                                      == 
                                                      (0xffU 
                                                       & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                          >> 8U)))
                                                      ? 0x78U
                                                      : 
                                                     ((0xc0U 
                                                       == 
                                                       (0xffU 
                                                        & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                           >> 8U)))
                                                       ? 0xbaU
                                                       : 
                                                      ((0xbfU 
                                                        == 
                                                        (0xffU 
                                                         & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                            >> 8U)))
                                                        ? 8U
                                                        : 
                                                       ((0xbeU 
                                                         == 
                                                         (0xffU 
                                                          & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                             >> 8U)))
                                                         ? 0xaeU
                                                         : 
                                                        ((0xbdU 
                                                          == 
                                                          (0xffU 
                                                           & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                              >> 8U)))
                                                          ? 0x7aU
                                                          : 
                                                         ((0xbcU 
                                                           == 
                                                           (0xffU 
                                                            & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                               >> 8U)))
                                                           ? 0x65U
                                                           : 
                                                          ((0xbbU 
                                                            == 
                                                            (0xffU 
                                                             & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                >> 8U)))
                                                            ? 0xeaU
                                                            : 
                                                           ((0xbaU 
                                                             == 
                                                             (0xffU 
                                                              & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                 >> 8U)))
                                                             ? 0xf4U
                                                             : 
                                                            ((0xb9U 
                                                              == 
                                                              (0xffU 
                                                               & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                  >> 8U)))
                                                              ? 0x56U
                                                              : 
                                                             ((0xb8U 
                                                               == 
                                                               (0xffU 
                                                                & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                   >> 8U)))
                                                               ? 0x6cU
                                                               : 
                                                              ((0xb7U 
                                                                == 
                                                                (0xffU 
                                                                 & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                    >> 8U)))
                                                                ? 0xa9U
                                                                : (IData)(vlTOPp->Aes128Core__DOT__ks__DOT___GEN_9398))))))))))))));
    vlTOPp->Aes128Core__DOT__ks__DOT___GEN_9667 = (
                                                   (0xc3U 
                                                    == 
                                                    (0xffU 
                                                     & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                    ? 0x2eU
                                                    : 
                                                   ((0xc2U 
                                                     == 
                                                     (0xffU 
                                                      & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                     ? 0x25U
                                                     : 
                                                    ((0xc1U 
                                                      == 
                                                      (0xffU 
                                                       & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                      ? 0x78U
                                                      : 
                                                     ((0xc0U 
                                                       == 
                                                       (0xffU 
                                                        & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                       ? 0xbaU
                                                       : 
                                                      ((0xbfU 
                                                        == 
                                                        (0xffU 
                                                         & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                        ? 8U
                                                        : 
                                                       ((0xbeU 
                                                         == 
                                                         (0xffU 
                                                          & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                         ? 0xaeU
                                                         : 
                                                        ((0xbdU 
                                                          == 
                                                          (0xffU 
                                                           & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                          ? 0x7aU
                                                          : 
                                                         ((0xbcU 
                                                           == 
                                                           (0xffU 
                                                            & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                           ? 0x65U
                                                           : 
                                                          ((0xbbU 
                                                            == 
                                                            (0xffU 
                                                             & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                            ? 0xeaU
                                                            : 
                                                           ((0xbaU 
                                                             == 
                                                             (0xffU 
                                                              & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                             ? 0xf4U
                                                             : 
                                                            ((0xb9U 
                                                              == 
                                                              (0xffU 
                                                               & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                              ? 0x56U
                                                              : 
                                                             ((0xb8U 
                                                               == 
                                                               (0xffU 
                                                                & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                               ? 0x6cU
                                                               : 
                                                              ((0xb7U 
                                                                == 
                                                                (0xffU 
                                                                 & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                                ? 0xa9U
                                                                : (IData)(vlTOPp->Aes128Core__DOT__ks__DOT___GEN_9654))))))))))))));
    vlTOPp->Aes128Core__DOT__ks__DOT___GEN_9923 = (
                                                   (0xc3U 
                                                    == 
                                                    (0xffU 
                                                     & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                        >> 0x18U)))
                                                    ? 0x2eU
                                                    : 
                                                   ((0xc2U 
                                                     == 
                                                     (0xffU 
                                                      & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                         >> 0x18U)))
                                                     ? 0x25U
                                                     : 
                                                    ((0xc1U 
                                                      == 
                                                      (0xffU 
                                                       & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                          >> 0x18U)))
                                                      ? 0x78U
                                                      : 
                                                     ((0xc0U 
                                                       == 
                                                       (0xffU 
                                                        & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                           >> 0x18U)))
                                                       ? 0xbaU
                                                       : 
                                                      ((0xbfU 
                                                        == 
                                                        (0xffU 
                                                         & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                            >> 0x18U)))
                                                        ? 8U
                                                        : 
                                                       ((0xbeU 
                                                         == 
                                                         (0xffU 
                                                          & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                             >> 0x18U)))
                                                         ? 0xaeU
                                                         : 
                                                        ((0xbdU 
                                                          == 
                                                          (0xffU 
                                                           & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                              >> 0x18U)))
                                                          ? 0x7aU
                                                          : 
                                                         ((0xbcU 
                                                           == 
                                                           (0xffU 
                                                            & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                               >> 0x18U)))
                                                           ? 0x65U
                                                           : 
                                                          ((0xbbU 
                                                            == 
                                                            (0xffU 
                                                             & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                >> 0x18U)))
                                                            ? 0xeaU
                                                            : 
                                                           ((0xbaU 
                                                             == 
                                                             (0xffU 
                                                              & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                 >> 0x18U)))
                                                             ? 0xf4U
                                                             : 
                                                            ((0xb9U 
                                                              == 
                                                              (0xffU 
                                                               & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                  >> 0x18U)))
                                                              ? 0x56U
                                                              : 
                                                             ((0xb8U 
                                                               == 
                                                               (0xffU 
                                                                & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                   >> 0x18U)))
                                                               ? 0x6cU
                                                               : 
                                                              ((0xb7U 
                                                                == 
                                                                (0xffU 
                                                                 & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                    >> 0x18U)))
                                                                ? 0xa9U
                                                                : (IData)(vlTOPp->Aes128Core__DOT__ks__DOT___GEN_9910))))))))))))));
    vlTOPp->Aes128Core__DOT__ks__DOT___GEN_10179 = 
        ((0xc3U == (0xffU & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                             >> 0x10U))) ? 0x2eU : 
         ((0xc2U == (0xffU & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                              >> 0x10U))) ? 0x25U : 
          ((0xc1U == (0xffU & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                               >> 0x10U))) ? 0x78U : 
           ((0xc0U == (0xffU & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                >> 0x10U))) ? 0xbaU
             : ((0xbfU == (0xffU & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                    >> 0x10U))) ? 8U
                 : ((0xbeU == (0xffU & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                        >> 0x10U)))
                     ? 0xaeU : ((0xbdU == (0xffU & 
                                           (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                            >> 0x10U)))
                                 ? 0x7aU : ((0xbcU 
                                             == (0xffU 
                                                 & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                    >> 0x10U)))
                                             ? 0x65U
                                             : ((0xbbU 
                                                 == 
                                                 (0xffU 
                                                  & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                     >> 0x10U)))
                                                 ? 0xeaU
                                                 : 
                                                ((0xbaU 
                                                  == 
                                                  (0xffU 
                                                   & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                      >> 0x10U)))
                                                  ? 0xf4U
                                                  : 
                                                 ((0xb9U 
                                                   == 
                                                   (0xffU 
                                                    & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                       >> 0x10U)))
                                                   ? 0x56U
                                                   : 
                                                  ((0xb8U 
                                                    == 
                                                    (0xffU 
                                                     & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                        >> 0x10U)))
                                                    ? 0x6cU
                                                    : 
                                                   ((0xb7U 
                                                     == 
                                                     (0xffU 
                                                      & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                         >> 0x10U)))
                                                     ? 0xa9U
                                                     : (IData)(vlTOPp->Aes128Core__DOT__ks__DOT___GEN_10166))))))))))))));
    vlTOPp->Aes128Core__DOT__ks__DOT___GEN_9424 = (
                                                   (0xd0U 
                                                    == 
                                                    (0xffU 
                                                     & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                        >> 8U)))
                                                    ? 0x70U
                                                    : 
                                                   ((0xcfU 
                                                     == 
                                                     (0xffU 
                                                      & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                         >> 8U)))
                                                     ? 0x8aU
                                                     : 
                                                    ((0xceU 
                                                      == 
                                                      (0xffU 
                                                       & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                          >> 8U)))
                                                      ? 0x8bU
                                                      : 
                                                     ((0xcdU 
                                                       == 
                                                       (0xffU 
                                                        & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                           >> 8U)))
                                                       ? 0xbdU
                                                       : 
                                                      ((0xccU 
                                                        == 
                                                        (0xffU 
                                                         & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                            >> 8U)))
                                                        ? 0x4bU
                                                        : 
                                                       ((0xcbU 
                                                         == 
                                                         (0xffU 
                                                          & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                             >> 8U)))
                                                         ? 0x1fU
                                                         : 
                                                        ((0xcaU 
                                                          == 
                                                          (0xffU 
                                                           & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                              >> 8U)))
                                                          ? 0x74U
                                                          : 
                                                         ((0xc9U 
                                                           == 
                                                           (0xffU 
                                                            & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                               >> 8U)))
                                                           ? 0xddU
                                                           : 
                                                          ((0xc8U 
                                                            == 
                                                            (0xffU 
                                                             & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                >> 8U)))
                                                            ? 0xe8U
                                                            : 
                                                           ((0xc7U 
                                                             == 
                                                             (0xffU 
                                                              & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                 >> 8U)))
                                                             ? 0xc6U
                                                             : 
                                                            ((0xc6U 
                                                              == 
                                                              (0xffU 
                                                               & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                  >> 8U)))
                                                              ? 0xb4U
                                                              : 
                                                             ((0xc5U 
                                                               == 
                                                               (0xffU 
                                                                & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                   >> 8U)))
                                                               ? 0xa6U
                                                               : 
                                                              ((0xc4U 
                                                                == 
                                                                (0xffU 
                                                                 & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                    >> 8U)))
                                                                ? 0x1cU
                                                                : (IData)(vlTOPp->Aes128Core__DOT__ks__DOT___GEN_9411))))))))))))));
    vlTOPp->Aes128Core__DOT__ks__DOT___GEN_9680 = (
                                                   (0xd0U 
                                                    == 
                                                    (0xffU 
                                                     & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                    ? 0x70U
                                                    : 
                                                   ((0xcfU 
                                                     == 
                                                     (0xffU 
                                                      & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                     ? 0x8aU
                                                     : 
                                                    ((0xceU 
                                                      == 
                                                      (0xffU 
                                                       & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                      ? 0x8bU
                                                      : 
                                                     ((0xcdU 
                                                       == 
                                                       (0xffU 
                                                        & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                       ? 0xbdU
                                                       : 
                                                      ((0xccU 
                                                        == 
                                                        (0xffU 
                                                         & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                        ? 0x4bU
                                                        : 
                                                       ((0xcbU 
                                                         == 
                                                         (0xffU 
                                                          & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                         ? 0x1fU
                                                         : 
                                                        ((0xcaU 
                                                          == 
                                                          (0xffU 
                                                           & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                          ? 0x74U
                                                          : 
                                                         ((0xc9U 
                                                           == 
                                                           (0xffU 
                                                            & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                           ? 0xddU
                                                           : 
                                                          ((0xc8U 
                                                            == 
                                                            (0xffU 
                                                             & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                            ? 0xe8U
                                                            : 
                                                           ((0xc7U 
                                                             == 
                                                             (0xffU 
                                                              & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                             ? 0xc6U
                                                             : 
                                                            ((0xc6U 
                                                              == 
                                                              (0xffU 
                                                               & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                              ? 0xb4U
                                                              : 
                                                             ((0xc5U 
                                                               == 
                                                               (0xffU 
                                                                & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                               ? 0xa6U
                                                               : 
                                                              ((0xc4U 
                                                                == 
                                                                (0xffU 
                                                                 & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                                ? 0x1cU
                                                                : (IData)(vlTOPp->Aes128Core__DOT__ks__DOT___GEN_9667))))))))))))));
    vlTOPp->Aes128Core__DOT__ks__DOT___GEN_9936 = (
                                                   (0xd0U 
                                                    == 
                                                    (0xffU 
                                                     & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                        >> 0x18U)))
                                                    ? 0x70U
                                                    : 
                                                   ((0xcfU 
                                                     == 
                                                     (0xffU 
                                                      & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                         >> 0x18U)))
                                                     ? 0x8aU
                                                     : 
                                                    ((0xceU 
                                                      == 
                                                      (0xffU 
                                                       & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                          >> 0x18U)))
                                                      ? 0x8bU
                                                      : 
                                                     ((0xcdU 
                                                       == 
                                                       (0xffU 
                                                        & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                           >> 0x18U)))
                                                       ? 0xbdU
                                                       : 
                                                      ((0xccU 
                                                        == 
                                                        (0xffU 
                                                         & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                            >> 0x18U)))
                                                        ? 0x4bU
                                                        : 
                                                       ((0xcbU 
                                                         == 
                                                         (0xffU 
                                                          & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                             >> 0x18U)))
                                                         ? 0x1fU
                                                         : 
                                                        ((0xcaU 
                                                          == 
                                                          (0xffU 
                                                           & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                              >> 0x18U)))
                                                          ? 0x74U
                                                          : 
                                                         ((0xc9U 
                                                           == 
                                                           (0xffU 
                                                            & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                               >> 0x18U)))
                                                           ? 0xddU
                                                           : 
                                                          ((0xc8U 
                                                            == 
                                                            (0xffU 
                                                             & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                >> 0x18U)))
                                                            ? 0xe8U
                                                            : 
                                                           ((0xc7U 
                                                             == 
                                                             (0xffU 
                                                              & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                 >> 0x18U)))
                                                             ? 0xc6U
                                                             : 
                                                            ((0xc6U 
                                                              == 
                                                              (0xffU 
                                                               & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                  >> 0x18U)))
                                                              ? 0xb4U
                                                              : 
                                                             ((0xc5U 
                                                               == 
                                                               (0xffU 
                                                                & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                   >> 0x18U)))
                                                               ? 0xa6U
                                                               : 
                                                              ((0xc4U 
                                                                == 
                                                                (0xffU 
                                                                 & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                    >> 0x18U)))
                                                                ? 0x1cU
                                                                : (IData)(vlTOPp->Aes128Core__DOT__ks__DOT___GEN_9923))))))))))))));
    vlTOPp->Aes128Core__DOT__ks__DOT___GEN_10192 = 
        ((0xd0U == (0xffU & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                             >> 0x10U))) ? 0x70U : 
         ((0xcfU == (0xffU & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                              >> 0x10U))) ? 0x8aU : 
          ((0xceU == (0xffU & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                               >> 0x10U))) ? 0x8bU : 
           ((0xcdU == (0xffU & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                >> 0x10U))) ? 0xbdU
             : ((0xccU == (0xffU & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                    >> 0x10U))) ? 0x4bU
                 : ((0xcbU == (0xffU & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                        >> 0x10U)))
                     ? 0x1fU : ((0xcaU == (0xffU & 
                                           (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                            >> 0x10U)))
                                 ? 0x74U : ((0xc9U 
                                             == (0xffU 
                                                 & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                    >> 0x10U)))
                                             ? 0xddU
                                             : ((0xc8U 
                                                 == 
                                                 (0xffU 
                                                  & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                     >> 0x10U)))
                                                 ? 0xe8U
                                                 : 
                                                ((0xc7U 
                                                  == 
                                                  (0xffU 
                                                   & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                      >> 0x10U)))
                                                  ? 0xc6U
                                                  : 
                                                 ((0xc6U 
                                                   == 
                                                   (0xffU 
                                                    & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                       >> 0x10U)))
                                                   ? 0xb4U
                                                   : 
                                                  ((0xc5U 
                                                    == 
                                                    (0xffU 
                                                     & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                        >> 0x10U)))
                                                    ? 0xa6U
                                                    : 
                                                   ((0xc4U 
                                                     == 
                                                     (0xffU 
                                                      & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                         >> 0x10U)))
                                                     ? 0x1cU
                                                     : (IData)(vlTOPp->Aes128Core__DOT__ks__DOT___GEN_10179))))))))))))));
    vlTOPp->Aes128Core__DOT__ks__DOT___GEN_9437 = (
                                                   (0xddU 
                                                    == 
                                                    (0xffU 
                                                     & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                        >> 8U)))
                                                    ? 0xc1U
                                                    : 
                                                   ((0xdcU 
                                                     == 
                                                     (0xffU 
                                                      & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                         >> 8U)))
                                                     ? 0x86U
                                                     : 
                                                    ((0xdbU 
                                                      == 
                                                      (0xffU 
                                                       & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                          >> 8U)))
                                                      ? 0xb9U
                                                      : 
                                                     ((0xdaU 
                                                       == 
                                                       (0xffU 
                                                        & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                           >> 8U)))
                                                       ? 0x57U
                                                       : 
                                                      ((0xd9U 
                                                        == 
                                                        (0xffU 
                                                         & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                            >> 8U)))
                                                        ? 0x35U
                                                        : 
                                                       ((0xd8U 
                                                         == 
                                                         (0xffU 
                                                          & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                             >> 8U)))
                                                         ? 0x61U
                                                         : 
                                                        ((0xd7U 
                                                          == 
                                                          (0xffU 
                                                           & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                              >> 8U)))
                                                          ? 0xeU
                                                          : 
                                                         ((0xd6U 
                                                           == 
                                                           (0xffU 
                                                            & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                               >> 8U)))
                                                           ? 0xf6U
                                                           : 
                                                          ((0xd5U 
                                                            == 
                                                            (0xffU 
                                                             & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                >> 8U)))
                                                            ? 3U
                                                            : 
                                                           ((0xd4U 
                                                             == 
                                                             (0xffU 
                                                              & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                 >> 8U)))
                                                             ? 0x48U
                                                             : 
                                                            ((0xd3U 
                                                              == 
                                                              (0xffU 
                                                               & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                  >> 8U)))
                                                              ? 0x66U
                                                              : 
                                                             ((0xd2U 
                                                               == 
                                                               (0xffU 
                                                                & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                   >> 8U)))
                                                               ? 0xb5U
                                                               : 
                                                              ((0xd1U 
                                                                == 
                                                                (0xffU 
                                                                 & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                    >> 8U)))
                                                                ? 0x3eU
                                                                : (IData)(vlTOPp->Aes128Core__DOT__ks__DOT___GEN_9424))))))))))))));
    vlTOPp->Aes128Core__DOT__ks__DOT___GEN_9693 = (
                                                   (0xddU 
                                                    == 
                                                    (0xffU 
                                                     & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                    ? 0xc1U
                                                    : 
                                                   ((0xdcU 
                                                     == 
                                                     (0xffU 
                                                      & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                     ? 0x86U
                                                     : 
                                                    ((0xdbU 
                                                      == 
                                                      (0xffU 
                                                       & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                      ? 0xb9U
                                                      : 
                                                     ((0xdaU 
                                                       == 
                                                       (0xffU 
                                                        & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                       ? 0x57U
                                                       : 
                                                      ((0xd9U 
                                                        == 
                                                        (0xffU 
                                                         & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                        ? 0x35U
                                                        : 
                                                       ((0xd8U 
                                                         == 
                                                         (0xffU 
                                                          & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                         ? 0x61U
                                                         : 
                                                        ((0xd7U 
                                                          == 
                                                          (0xffU 
                                                           & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                          ? 0xeU
                                                          : 
                                                         ((0xd6U 
                                                           == 
                                                           (0xffU 
                                                            & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                           ? 0xf6U
                                                           : 
                                                          ((0xd5U 
                                                            == 
                                                            (0xffU 
                                                             & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                            ? 3U
                                                            : 
                                                           ((0xd4U 
                                                             == 
                                                             (0xffU 
                                                              & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                             ? 0x48U
                                                             : 
                                                            ((0xd3U 
                                                              == 
                                                              (0xffU 
                                                               & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                              ? 0x66U
                                                              : 
                                                             ((0xd2U 
                                                               == 
                                                               (0xffU 
                                                                & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                               ? 0xb5U
                                                               : 
                                                              ((0xd1U 
                                                                == 
                                                                (0xffU 
                                                                 & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                                ? 0x3eU
                                                                : (IData)(vlTOPp->Aes128Core__DOT__ks__DOT___GEN_9680))))))))))))));
    vlTOPp->Aes128Core__DOT__ks__DOT___GEN_9949 = (
                                                   (0xddU 
                                                    == 
                                                    (0xffU 
                                                     & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                        >> 0x18U)))
                                                    ? 0xc1U
                                                    : 
                                                   ((0xdcU 
                                                     == 
                                                     (0xffU 
                                                      & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                         >> 0x18U)))
                                                     ? 0x86U
                                                     : 
                                                    ((0xdbU 
                                                      == 
                                                      (0xffU 
                                                       & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                          >> 0x18U)))
                                                      ? 0xb9U
                                                      : 
                                                     ((0xdaU 
                                                       == 
                                                       (0xffU 
                                                        & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                           >> 0x18U)))
                                                       ? 0x57U
                                                       : 
                                                      ((0xd9U 
                                                        == 
                                                        (0xffU 
                                                         & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                            >> 0x18U)))
                                                        ? 0x35U
                                                        : 
                                                       ((0xd8U 
                                                         == 
                                                         (0xffU 
                                                          & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                             >> 0x18U)))
                                                         ? 0x61U
                                                         : 
                                                        ((0xd7U 
                                                          == 
                                                          (0xffU 
                                                           & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                              >> 0x18U)))
                                                          ? 0xeU
                                                          : 
                                                         ((0xd6U 
                                                           == 
                                                           (0xffU 
                                                            & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                               >> 0x18U)))
                                                           ? 0xf6U
                                                           : 
                                                          ((0xd5U 
                                                            == 
                                                            (0xffU 
                                                             & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                >> 0x18U)))
                                                            ? 3U
                                                            : 
                                                           ((0xd4U 
                                                             == 
                                                             (0xffU 
                                                              & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                 >> 0x18U)))
                                                             ? 0x48U
                                                             : 
                                                            ((0xd3U 
                                                              == 
                                                              (0xffU 
                                                               & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                  >> 0x18U)))
                                                              ? 0x66U
                                                              : 
                                                             ((0xd2U 
                                                               == 
                                                               (0xffU 
                                                                & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                   >> 0x18U)))
                                                               ? 0xb5U
                                                               : 
                                                              ((0xd1U 
                                                                == 
                                                                (0xffU 
                                                                 & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                    >> 0x18U)))
                                                                ? 0x3eU
                                                                : (IData)(vlTOPp->Aes128Core__DOT__ks__DOT___GEN_9936))))))))))))));
    vlTOPp->Aes128Core__DOT__ks__DOT___GEN_10205 = 
        ((0xddU == (0xffU & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                             >> 0x10U))) ? 0xc1U : 
         ((0xdcU == (0xffU & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                              >> 0x10U))) ? 0x86U : 
          ((0xdbU == (0xffU & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                               >> 0x10U))) ? 0xb9U : 
           ((0xdaU == (0xffU & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                >> 0x10U))) ? 0x57U
             : ((0xd9U == (0xffU & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                    >> 0x10U))) ? 0x35U
                 : ((0xd8U == (0xffU & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                        >> 0x10U)))
                     ? 0x61U : ((0xd7U == (0xffU & 
                                           (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                            >> 0x10U)))
                                 ? 0xeU : ((0xd6U == 
                                            (0xffU 
                                             & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                >> 0x10U)))
                                            ? 0xf6U
                                            : ((0xd5U 
                                                == 
                                                (0xffU 
                                                 & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                    >> 0x10U)))
                                                ? 3U
                                                : (
                                                   (0xd4U 
                                                    == 
                                                    (0xffU 
                                                     & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                        >> 0x10U)))
                                                    ? 0x48U
                                                    : 
                                                   ((0xd3U 
                                                     == 
                                                     (0xffU 
                                                      & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                         >> 0x10U)))
                                                     ? 0x66U
                                                     : 
                                                    ((0xd2U 
                                                      == 
                                                      (0xffU 
                                                       & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                          >> 0x10U)))
                                                      ? 0xb5U
                                                      : 
                                                     ((0xd1U 
                                                       == 
                                                       (0xffU 
                                                        & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                           >> 0x10U)))
                                                       ? 0x3eU
                                                       : (IData)(vlTOPp->Aes128Core__DOT__ks__DOT___GEN_10192))))))))))))));
    vlTOPp->Aes128Core__DOT__ks__DOT___GEN_9450 = (
                                                   (0xeaU 
                                                    == 
                                                    (0xffU 
                                                     & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                        >> 8U)))
                                                    ? 0x87U
                                                    : 
                                                   ((0xe9U 
                                                     == 
                                                     (0xffU 
                                                      & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                         >> 8U)))
                                                     ? 0x1eU
                                                     : 
                                                    ((0xe8U 
                                                      == 
                                                      (0xffU 
                                                       & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                          >> 8U)))
                                                      ? 0x9bU
                                                      : 
                                                     ((0xe7U 
                                                       == 
                                                       (0xffU 
                                                        & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                           >> 8U)))
                                                       ? 0x94U
                                                       : 
                                                      ((0xe6U 
                                                        == 
                                                        (0xffU 
                                                         & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                            >> 8U)))
                                                        ? 0x8eU
                                                        : 
                                                       ((0xe5U 
                                                         == 
                                                         (0xffU 
                                                          & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                             >> 8U)))
                                                         ? 0xd9U
                                                         : 
                                                        ((0xe4U 
                                                          == 
                                                          (0xffU 
                                                           & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                              >> 8U)))
                                                          ? 0x69U
                                                          : 
                                                         ((0xe3U 
                                                           == 
                                                           (0xffU 
                                                            & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                               >> 8U)))
                                                           ? 0x11U
                                                           : 
                                                          ((0xe2U 
                                                            == 
                                                            (0xffU 
                                                             & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                >> 8U)))
                                                            ? 0x98U
                                                            : 
                                                           ((0xe1U 
                                                             == 
                                                             (0xffU 
                                                              & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                 >> 8U)))
                                                             ? 0xf8U
                                                             : 
                                                            ((0xe0U 
                                                              == 
                                                              (0xffU 
                                                               & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                  >> 8U)))
                                                              ? 0xe1U
                                                              : 
                                                             ((0xdfU 
                                                               == 
                                                               (0xffU 
                                                                & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                   >> 8U)))
                                                               ? 0x9eU
                                                               : 
                                                              ((0xdeU 
                                                                == 
                                                                (0xffU 
                                                                 & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                    >> 8U)))
                                                                ? 0x1dU
                                                                : (IData)(vlTOPp->Aes128Core__DOT__ks__DOT___GEN_9437))))))))))))));
    vlTOPp->Aes128Core__DOT__ks__DOT___GEN_9706 = (
                                                   (0xeaU 
                                                    == 
                                                    (0xffU 
                                                     & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                    ? 0x87U
                                                    : 
                                                   ((0xe9U 
                                                     == 
                                                     (0xffU 
                                                      & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                     ? 0x1eU
                                                     : 
                                                    ((0xe8U 
                                                      == 
                                                      (0xffU 
                                                       & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                      ? 0x9bU
                                                      : 
                                                     ((0xe7U 
                                                       == 
                                                       (0xffU 
                                                        & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                       ? 0x94U
                                                       : 
                                                      ((0xe6U 
                                                        == 
                                                        (0xffU 
                                                         & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                        ? 0x8eU
                                                        : 
                                                       ((0xe5U 
                                                         == 
                                                         (0xffU 
                                                          & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                         ? 0xd9U
                                                         : 
                                                        ((0xe4U 
                                                          == 
                                                          (0xffU 
                                                           & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                          ? 0x69U
                                                          : 
                                                         ((0xe3U 
                                                           == 
                                                           (0xffU 
                                                            & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                           ? 0x11U
                                                           : 
                                                          ((0xe2U 
                                                            == 
                                                            (0xffU 
                                                             & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                            ? 0x98U
                                                            : 
                                                           ((0xe1U 
                                                             == 
                                                             (0xffU 
                                                              & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                             ? 0xf8U
                                                             : 
                                                            ((0xe0U 
                                                              == 
                                                              (0xffU 
                                                               & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                              ? 0xe1U
                                                              : 
                                                             ((0xdfU 
                                                               == 
                                                               (0xffU 
                                                                & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                               ? 0x9eU
                                                               : 
                                                              ((0xdeU 
                                                                == 
                                                                (0xffU 
                                                                 & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                                ? 0x1dU
                                                                : (IData)(vlTOPp->Aes128Core__DOT__ks__DOT___GEN_9693))))))))))))));
    vlTOPp->Aes128Core__DOT__ks__DOT___GEN_9962 = (
                                                   (0xeaU 
                                                    == 
                                                    (0xffU 
                                                     & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                        >> 0x18U)))
                                                    ? 0x87U
                                                    : 
                                                   ((0xe9U 
                                                     == 
                                                     (0xffU 
                                                      & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                         >> 0x18U)))
                                                     ? 0x1eU
                                                     : 
                                                    ((0xe8U 
                                                      == 
                                                      (0xffU 
                                                       & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                          >> 0x18U)))
                                                      ? 0x9bU
                                                      : 
                                                     ((0xe7U 
                                                       == 
                                                       (0xffU 
                                                        & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                           >> 0x18U)))
                                                       ? 0x94U
                                                       : 
                                                      ((0xe6U 
                                                        == 
                                                        (0xffU 
                                                         & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                            >> 0x18U)))
                                                        ? 0x8eU
                                                        : 
                                                       ((0xe5U 
                                                         == 
                                                         (0xffU 
                                                          & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                             >> 0x18U)))
                                                         ? 0xd9U
                                                         : 
                                                        ((0xe4U 
                                                          == 
                                                          (0xffU 
                                                           & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                              >> 0x18U)))
                                                          ? 0x69U
                                                          : 
                                                         ((0xe3U 
                                                           == 
                                                           (0xffU 
                                                            & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                               >> 0x18U)))
                                                           ? 0x11U
                                                           : 
                                                          ((0xe2U 
                                                            == 
                                                            (0xffU 
                                                             & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                >> 0x18U)))
                                                            ? 0x98U
                                                            : 
                                                           ((0xe1U 
                                                             == 
                                                             (0xffU 
                                                              & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                 >> 0x18U)))
                                                             ? 0xf8U
                                                             : 
                                                            ((0xe0U 
                                                              == 
                                                              (0xffU 
                                                               & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                  >> 0x18U)))
                                                              ? 0xe1U
                                                              : 
                                                             ((0xdfU 
                                                               == 
                                                               (0xffU 
                                                                & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                   >> 0x18U)))
                                                               ? 0x9eU
                                                               : 
                                                              ((0xdeU 
                                                                == 
                                                                (0xffU 
                                                                 & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                    >> 0x18U)))
                                                                ? 0x1dU
                                                                : (IData)(vlTOPp->Aes128Core__DOT__ks__DOT___GEN_9949))))))))))))));
    vlTOPp->Aes128Core__DOT__ks__DOT___GEN_10218 = 
        ((0xeaU == (0xffU & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                             >> 0x10U))) ? 0x87U : 
         ((0xe9U == (0xffU & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                              >> 0x10U))) ? 0x1eU : 
          ((0xe8U == (0xffU & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                               >> 0x10U))) ? 0x9bU : 
           ((0xe7U == (0xffU & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                >> 0x10U))) ? 0x94U
             : ((0xe6U == (0xffU & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                    >> 0x10U))) ? 0x8eU
                 : ((0xe5U == (0xffU & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                        >> 0x10U)))
                     ? 0xd9U : ((0xe4U == (0xffU & 
                                           (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                            >> 0x10U)))
                                 ? 0x69U : ((0xe3U 
                                             == (0xffU 
                                                 & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                    >> 0x10U)))
                                             ? 0x11U
                                             : ((0xe2U 
                                                 == 
                                                 (0xffU 
                                                  & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                     >> 0x10U)))
                                                 ? 0x98U
                                                 : 
                                                ((0xe1U 
                                                  == 
                                                  (0xffU 
                                                   & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                      >> 0x10U)))
                                                  ? 0xf8U
                                                  : 
                                                 ((0xe0U 
                                                   == 
                                                   (0xffU 
                                                    & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                       >> 0x10U)))
                                                   ? 0xe1U
                                                   : 
                                                  ((0xdfU 
                                                    == 
                                                    (0xffU 
                                                     & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                        >> 0x10U)))
                                                    ? 0x9eU
                                                    : 
                                                   ((0xdeU 
                                                     == 
                                                     (0xffU 
                                                      & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                         >> 0x10U)))
                                                     ? 0x1dU
                                                     : (IData)(vlTOPp->Aes128Core__DOT__ks__DOT___GEN_10205))))))))))))));
    vlTOPp->Aes128Core__DOT__ks__DOT___GEN_9463 = (
                                                   (0xf7U 
                                                    == 
                                                    (0xffU 
                                                     & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                        >> 8U)))
                                                    ? 0x68U
                                                    : 
                                                   ((0xf6U 
                                                     == 
                                                     (0xffU 
                                                      & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                         >> 8U)))
                                                     ? 0x42U
                                                     : 
                                                    ((0xf5U 
                                                      == 
                                                      (0xffU 
                                                       & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                          >> 8U)))
                                                      ? 0xe6U
                                                      : 
                                                     ((0xf4U 
                                                       == 
                                                       (0xffU 
                                                        & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                           >> 8U)))
                                                       ? 0xbfU
                                                       : 
                                                      ((0xf3U 
                                                        == 
                                                        (0xffU 
                                                         & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                            >> 8U)))
                                                        ? 0xdU
                                                        : 
                                                       ((0xf2U 
                                                         == 
                                                         (0xffU 
                                                          & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                             >> 8U)))
                                                         ? 0x89U
                                                         : 
                                                        ((0xf1U 
                                                          == 
                                                          (0xffU 
                                                           & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                              >> 8U)))
                                                          ? 0xa1U
                                                          : 
                                                         ((0xf0U 
                                                           == 
                                                           (0xffU 
                                                            & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                               >> 8U)))
                                                           ? 0x8cU
                                                           : 
                                                          ((0xefU 
                                                            == 
                                                            (0xffU 
                                                             & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                >> 8U)))
                                                            ? 0xdfU
                                                            : 
                                                           ((0xeeU 
                                                             == 
                                                             (0xffU 
                                                              & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                 >> 8U)))
                                                             ? 0x28U
                                                             : 
                                                            ((0xedU 
                                                              == 
                                                              (0xffU 
                                                               & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                  >> 8U)))
                                                              ? 0x55U
                                                              : 
                                                             ((0xecU 
                                                               == 
                                                               (0xffU 
                                                                & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                   >> 8U)))
                                                               ? 0xceU
                                                               : 
                                                              ((0xebU 
                                                                == 
                                                                (0xffU 
                                                                 & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                    >> 8U)))
                                                                ? 0xe9U
                                                                : (IData)(vlTOPp->Aes128Core__DOT__ks__DOT___GEN_9450))))))))))))));
    vlTOPp->Aes128Core__DOT__ks__DOT___GEN_9719 = (
                                                   (0xf7U 
                                                    == 
                                                    (0xffU 
                                                     & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                    ? 0x68U
                                                    : 
                                                   ((0xf6U 
                                                     == 
                                                     (0xffU 
                                                      & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                     ? 0x42U
                                                     : 
                                                    ((0xf5U 
                                                      == 
                                                      (0xffU 
                                                       & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                      ? 0xe6U
                                                      : 
                                                     ((0xf4U 
                                                       == 
                                                       (0xffU 
                                                        & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                       ? 0xbfU
                                                       : 
                                                      ((0xf3U 
                                                        == 
                                                        (0xffU 
                                                         & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                        ? 0xdU
                                                        : 
                                                       ((0xf2U 
                                                         == 
                                                         (0xffU 
                                                          & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                         ? 0x89U
                                                         : 
                                                        ((0xf1U 
                                                          == 
                                                          (0xffU 
                                                           & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                          ? 0xa1U
                                                          : 
                                                         ((0xf0U 
                                                           == 
                                                           (0xffU 
                                                            & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                           ? 0x8cU
                                                           : 
                                                          ((0xefU 
                                                            == 
                                                            (0xffU 
                                                             & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                            ? 0xdfU
                                                            : 
                                                           ((0xeeU 
                                                             == 
                                                             (0xffU 
                                                              & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                             ? 0x28U
                                                             : 
                                                            ((0xedU 
                                                              == 
                                                              (0xffU 
                                                               & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                              ? 0x55U
                                                              : 
                                                             ((0xecU 
                                                               == 
                                                               (0xffU 
                                                                & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                               ? 0xceU
                                                               : 
                                                              ((0xebU 
                                                                == 
                                                                (0xffU 
                                                                 & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                                ? 0xe9U
                                                                : (IData)(vlTOPp->Aes128Core__DOT__ks__DOT___GEN_9706))))))))))))));
    vlTOPp->Aes128Core__DOT__ks__DOT___GEN_9975 = (
                                                   (0xf7U 
                                                    == 
                                                    (0xffU 
                                                     & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                        >> 0x18U)))
                                                    ? 0x68U
                                                    : 
                                                   ((0xf6U 
                                                     == 
                                                     (0xffU 
                                                      & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                         >> 0x18U)))
                                                     ? 0x42U
                                                     : 
                                                    ((0xf5U 
                                                      == 
                                                      (0xffU 
                                                       & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                          >> 0x18U)))
                                                      ? 0xe6U
                                                      : 
                                                     ((0xf4U 
                                                       == 
                                                       (0xffU 
                                                        & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                           >> 0x18U)))
                                                       ? 0xbfU
                                                       : 
                                                      ((0xf3U 
                                                        == 
                                                        (0xffU 
                                                         & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                            >> 0x18U)))
                                                        ? 0xdU
                                                        : 
                                                       ((0xf2U 
                                                         == 
                                                         (0xffU 
                                                          & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                             >> 0x18U)))
                                                         ? 0x89U
                                                         : 
                                                        ((0xf1U 
                                                          == 
                                                          (0xffU 
                                                           & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                              >> 0x18U)))
                                                          ? 0xa1U
                                                          : 
                                                         ((0xf0U 
                                                           == 
                                                           (0xffU 
                                                            & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                               >> 0x18U)))
                                                           ? 0x8cU
                                                           : 
                                                          ((0xefU 
                                                            == 
                                                            (0xffU 
                                                             & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                >> 0x18U)))
                                                            ? 0xdfU
                                                            : 
                                                           ((0xeeU 
                                                             == 
                                                             (0xffU 
                                                              & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                 >> 0x18U)))
                                                             ? 0x28U
                                                             : 
                                                            ((0xedU 
                                                              == 
                                                              (0xffU 
                                                               & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                  >> 0x18U)))
                                                              ? 0x55U
                                                              : 
                                                             ((0xecU 
                                                               == 
                                                               (0xffU 
                                                                & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                   >> 0x18U)))
                                                               ? 0xceU
                                                               : 
                                                              ((0xebU 
                                                                == 
                                                                (0xffU 
                                                                 & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                    >> 0x18U)))
                                                                ? 0xe9U
                                                                : (IData)(vlTOPp->Aes128Core__DOT__ks__DOT___GEN_9962))))))))))))));
    vlTOPp->Aes128Core__DOT__ks__DOT___GEN_10231 = 
        ((0xf7U == (0xffU & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                             >> 0x10U))) ? 0x68U : 
         ((0xf6U == (0xffU & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                              >> 0x10U))) ? 0x42U : 
          ((0xf5U == (0xffU & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                               >> 0x10U))) ? 0xe6U : 
           ((0xf4U == (0xffU & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                >> 0x10U))) ? 0xbfU
             : ((0xf3U == (0xffU & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                    >> 0x10U))) ? 0xdU
                 : ((0xf2U == (0xffU & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                        >> 0x10U)))
                     ? 0x89U : ((0xf1U == (0xffU & 
                                           (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                            >> 0x10U)))
                                 ? 0xa1U : ((0xf0U 
                                             == (0xffU 
                                                 & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                    >> 0x10U)))
                                             ? 0x8cU
                                             : ((0xefU 
                                                 == 
                                                 (0xffU 
                                                  & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                     >> 0x10U)))
                                                 ? 0xdfU
                                                 : 
                                                ((0xeeU 
                                                  == 
                                                  (0xffU 
                                                   & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                      >> 0x10U)))
                                                  ? 0x28U
                                                  : 
                                                 ((0xedU 
                                                   == 
                                                   (0xffU 
                                                    & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                       >> 0x10U)))
                                                   ? 0x55U
                                                   : 
                                                  ((0xecU 
                                                    == 
                                                    (0xffU 
                                                     & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                        >> 0x10U)))
                                                    ? 0xceU
                                                    : 
                                                   ((0xebU 
                                                     == 
                                                     (0xffU 
                                                      & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                         >> 0x10U)))
                                                     ? 0xe9U
                                                     : (IData)(vlTOPp->Aes128Core__DOT__ks__DOT___GEN_10218))))))))))))));
    vlTOPp->Aes128Core__DOT__ks__DOT___t_T_79 = (((
                                                   (0xffU 
                                                    == 
                                                    (0xffU 
                                                     & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                        >> 0x18U)))
                                                    ? 0x16U
                                                    : 
                                                   ((0xfeU 
                                                     == 
                                                     (0xffU 
                                                      & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                         >> 0x18U)))
                                                     ? 0xbbU
                                                     : 
                                                    ((0xfdU 
                                                      == 
                                                      (0xffU 
                                                       & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                          >> 0x18U)))
                                                      ? 0x54U
                                                      : 
                                                     ((0xfcU 
                                                       == 
                                                       (0xffU 
                                                        & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                           >> 0x18U)))
                                                       ? 0xb0U
                                                       : 
                                                      ((0xfbU 
                                                        == 
                                                        (0xffU 
                                                         & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                            >> 0x18U)))
                                                        ? 0xfU
                                                        : 
                                                       ((0xfaU 
                                                         == 
                                                         (0xffU 
                                                          & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                             >> 0x18U)))
                                                         ? 0x2dU
                                                         : 
                                                        ((0xf9U 
                                                          == 
                                                          (0xffU 
                                                           & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                              >> 0x18U)))
                                                          ? 0x99U
                                                          : 
                                                         ((0xf8U 
                                                           == 
                                                           (0xffU 
                                                            & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                               >> 0x18U)))
                                                           ? 0x41U
                                                           : (IData)(vlTOPp->Aes128Core__DOT__ks__DOT___GEN_9975))))))))) 
                                                  << 0x18U) 
                                                 | ((((0xffU 
                                                       == 
                                                       (0xffU 
                                                        & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                           >> 0x10U)))
                                                       ? 0x16U
                                                       : 
                                                      ((0xfeU 
                                                        == 
                                                        (0xffU 
                                                         & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                            >> 0x10U)))
                                                        ? 0xbbU
                                                        : 
                                                       ((0xfdU 
                                                         == 
                                                         (0xffU 
                                                          & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                             >> 0x10U)))
                                                         ? 0x54U
                                                         : 
                                                        ((0xfcU 
                                                          == 
                                                          (0xffU 
                                                           & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                              >> 0x10U)))
                                                          ? 0xb0U
                                                          : 
                                                         ((0xfbU 
                                                           == 
                                                           (0xffU 
                                                            & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                               >> 0x10U)))
                                                           ? 0xfU
                                                           : 
                                                          ((0xfaU 
                                                            == 
                                                            (0xffU 
                                                             & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                >> 0x10U)))
                                                            ? 0x2dU
                                                            : 
                                                           ((0xf9U 
                                                             == 
                                                             (0xffU 
                                                              & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                 >> 0x10U)))
                                                             ? 0x99U
                                                             : 
                                                            ((0xf8U 
                                                              == 
                                                              (0xffU 
                                                               & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                  >> 0x10U)))
                                                              ? 0x41U
                                                              : (IData)(vlTOPp->Aes128Core__DOT__ks__DOT___GEN_10231))))))))) 
                                                     << 0x10U) 
                                                    | ((((0xffU 
                                                          == 
                                                          (0xffU 
                                                           & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                              >> 8U)))
                                                          ? 0x16U
                                                          : 
                                                         ((0xfeU 
                                                           == 
                                                           (0xffU 
                                                            & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                               >> 8U)))
                                                           ? 0xbbU
                                                           : 
                                                          ((0xfdU 
                                                            == 
                                                            (0xffU 
                                                             & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                >> 8U)))
                                                            ? 0x54U
                                                            : 
                                                           ((0xfcU 
                                                             == 
                                                             (0xffU 
                                                              & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                 >> 8U)))
                                                             ? 0xb0U
                                                             : 
                                                            ((0xfbU 
                                                              == 
                                                              (0xffU 
                                                               & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                  >> 8U)))
                                                              ? 0xfU
                                                              : 
                                                             ((0xfaU 
                                                               == 
                                                               (0xffU 
                                                                & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                   >> 8U)))
                                                               ? 0x2dU
                                                               : 
                                                              ((0xf9U 
                                                                == 
                                                                (0xffU 
                                                                 & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                    >> 8U)))
                                                                ? 0x99U
                                                                : 
                                                               ((0xf8U 
                                                                 == 
                                                                 (0xffU 
                                                                  & (vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74 
                                                                     >> 8U)))
                                                                 ? 0x41U
                                                                 : (IData)(vlTOPp->Aes128Core__DOT__ks__DOT___GEN_9463))))))))) 
                                                        << 8U) 
                                                       | ((0xffU 
                                                           == 
                                                           (0xffU 
                                                            & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                           ? 0x16U
                                                           : 
                                                          ((0xfeU 
                                                            == 
                                                            (0xffU 
                                                             & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                            ? 0xbbU
                                                            : 
                                                           ((0xfdU 
                                                             == 
                                                             (0xffU 
                                                              & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                             ? 0x54U
                                                             : 
                                                            ((0xfcU 
                                                              == 
                                                              (0xffU 
                                                               & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                              ? 0xb0U
                                                              : 
                                                             ((0xfbU 
                                                               == 
                                                               (0xffU 
                                                                & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                               ? 0xfU
                                                               : 
                                                              ((0xfaU 
                                                                == 
                                                                (0xffU 
                                                                 & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                                ? 0x2dU
                                                                : 
                                                               ((0xf9U 
                                                                 == 
                                                                 (0xffU 
                                                                  & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                                 ? 0x99U
                                                                 : 
                                                                ((0xf8U 
                                                                  == 
                                                                  (0xffU 
                                                                   & vlTOPp->Aes128Core__DOT__ks__DOT___t_T_74))
                                                                  ? 0x41U
                                                                  : (IData)(vlTOPp->Aes128Core__DOT__ks__DOT___GEN_9719))))))))))));
    vlTOPp->Aes128Core__DOT__ks__DOT__w_40 = (0x36000000U 
                                              ^ (vlTOPp->Aes128Core__DOT__ks__DOT__w_36 
                                                 ^ vlTOPp->Aes128Core__DOT__ks__DOT___t_T_79));
    vlTOPp->Aes128Core__DOT__ks__DOT__w_41 = (vlTOPp->Aes128Core__DOT__ks__DOT__w_37 
                                              ^ vlTOPp->Aes128Core__DOT__ks__DOT__w_40);
    vlTOPp->Aes128Core__DOT__ks__DOT__w_42 = (vlTOPp->Aes128Core__DOT__ks__DOT__w_38 
                                              ^ vlTOPp->Aes128Core__DOT__ks__DOT__w_41);
}

VL_INLINE_OPT void VAes128Core::_combo__TOP__6(VAes128Core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAes128Core::_combo__TOP__6\n"); );
    VAes128Core* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->io_out_bits_bits[0U] = (((0xff000000U & 
                                      vlSymsp->TOP__Aes128Core__DOT__finalR__DOT__core__DOT__sub.io_out_bits_bits[0U]) 
                                     | ((0xff0000U 
                                         & vlSymsp->TOP__Aes128Core__DOT__finalR__DOT__core__DOT__sub.io_out_bits_bits[3U]) 
                                        | ((0xff00U 
                                            & vlSymsp->TOP__Aes128Core__DOT__finalR__DOT__core__DOT__sub.io_out_bits_bits[2U]) 
                                           | (0xffU 
                                              & vlSymsp->TOP__Aes128Core__DOT__finalR__DOT__core__DOT__sub.io_out_bits_bits[1U])))) 
                                    ^ (vlTOPp->Aes128Core__DOT__ks__DOT__w_39 
                                       ^ vlTOPp->Aes128Core__DOT__ks__DOT__w_42));
    vlTOPp->io_out_bits_bits[1U] = (((0xff000000U & 
                                      vlSymsp->TOP__Aes128Core__DOT__finalR__DOT__core__DOT__sub.io_out_bits_bits[1U]) 
                                     | ((0xff0000U 
                                         & vlSymsp->TOP__Aes128Core__DOT__finalR__DOT__core__DOT__sub.io_out_bits_bits[0U]) 
                                        | ((0xff00U 
                                            & vlSymsp->TOP__Aes128Core__DOT__finalR__DOT__core__DOT__sub.io_out_bits_bits[3U]) 
                                           | (0xffU 
                                              & vlSymsp->TOP__Aes128Core__DOT__finalR__DOT__core__DOT__sub.io_out_bits_bits[2U])))) 
                                    ^ vlTOPp->Aes128Core__DOT__ks__DOT__w_42);
    vlTOPp->io_out_bits_bits[2U] = ((IData)((((QData)((IData)(
                                                              ((0xff000000U 
                                                                & vlSymsp->TOP__Aes128Core__DOT__finalR__DOT__core__DOT__sub.io_out_bits_bits[3U]) 
                                                               | ((0xff0000U 
                                                                   & vlSymsp->TOP__Aes128Core__DOT__finalR__DOT__core__DOT__sub.io_out_bits_bits[2U]) 
                                                                  | ((0xff00U 
                                                                      & vlSymsp->TOP__Aes128Core__DOT__finalR__DOT__core__DOT__sub.io_out_bits_bits[1U]) 
                                                                     | (0xffU 
                                                                        & vlSymsp->TOP__Aes128Core__DOT__finalR__DOT__core__DOT__sub.io_out_bits_bits[0U])))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               ((0xff000000U 
                                                                 & vlSymsp->TOP__Aes128Core__DOT__finalR__DOT__core__DOT__sub.io_out_bits_bits[2U]) 
                                                                | ((0xff0000U 
                                                                    & vlSymsp->TOP__Aes128Core__DOT__finalR__DOT__core__DOT__sub.io_out_bits_bits[1U]) 
                                                                   | ((0xff00U 
                                                                       & vlSymsp->TOP__Aes128Core__DOT__finalR__DOT__core__DOT__sub.io_out_bits_bits[0U]) 
                                                                      | (0xffU 
                                                                         & vlSymsp->TOP__Aes128Core__DOT__finalR__DOT__core__DOT__sub.io_out_bits_bits[3U])))))))) 
                                    ^ (IData)((((QData)((IData)(vlTOPp->Aes128Core__DOT__ks__DOT__w_40)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlTOPp->Aes128Core__DOT__ks__DOT__w_41)))));
    vlTOPp->io_out_bits_bits[3U] = ((IData)(((((QData)((IData)(
                                                               ((0xff000000U 
                                                                 & vlSymsp->TOP__Aes128Core__DOT__finalR__DOT__core__DOT__sub.io_out_bits_bits[3U]) 
                                                                | ((0xff0000U 
                                                                    & vlSymsp->TOP__Aes128Core__DOT__finalR__DOT__core__DOT__sub.io_out_bits_bits[2U]) 
                                                                   | ((0xff00U 
                                                                       & vlSymsp->TOP__Aes128Core__DOT__finalR__DOT__core__DOT__sub.io_out_bits_bits[1U]) 
                                                                      | (0xffU 
                                                                         & vlSymsp->TOP__Aes128Core__DOT__finalR__DOT__core__DOT__sub.io_out_bits_bits[0U])))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                ((0xff000000U 
                                                                  & vlSymsp->TOP__Aes128Core__DOT__finalR__DOT__core__DOT__sub.io_out_bits_bits[2U]) 
                                                                 | ((0xff0000U 
                                                                     & vlSymsp->TOP__Aes128Core__DOT__finalR__DOT__core__DOT__sub.io_out_bits_bits[1U]) 
                                                                    | ((0xff00U 
                                                                        & vlSymsp->TOP__Aes128Core__DOT__finalR__DOT__core__DOT__sub.io_out_bits_bits[0U]) 
                                                                       | (0xffU 
                                                                          & vlSymsp->TOP__Aes128Core__DOT__finalR__DOT__core__DOT__sub.io_out_bits_bits[3U]))))))) 
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
    vlSymsp->TOP__Aes128Core__DOT__r1__core__DOT__sub._combo__TOP__Aes128Core__DOT__r1__core__DOT__sub__1(vlSymsp);
    vlSymsp->TOP__Aes128Core__DOT__r1__core__DOT__sub._combo__TOP__Aes128Core__DOT__r1__core__DOT__sub__2(vlSymsp);
    vlSymsp->TOP__Aes128Core__DOT__r1._combo__TOP__Aes128Core__DOT__r1__1(vlSymsp);
    vlSymsp->TOP__Aes128Core__DOT__r2__core__DOT__sub._combo__TOP__Aes128Core__DOT__r2__core__DOT__sub__3(vlSymsp);
    vlSymsp->TOP__Aes128Core__DOT__r2__core__DOT__sub._combo__TOP__Aes128Core__DOT__r2__core__DOT__sub__4(vlSymsp);
    vlSymsp->TOP__Aes128Core__DOT__r2._combo__TOP__Aes128Core__DOT__r2__2(vlSymsp);
    vlSymsp->TOP__Aes128Core__DOT__r3__core__DOT__sub._combo__TOP__Aes128Core__DOT__r3__core__DOT__sub__5(vlSymsp);
    vlSymsp->TOP__Aes128Core__DOT__r3__core__DOT__sub._combo__TOP__Aes128Core__DOT__r3__core__DOT__sub__6(vlSymsp);
    vlSymsp->TOP__Aes128Core__DOT__r3._combo__TOP__Aes128Core__DOT__r3__3(vlSymsp);
    vlSymsp->TOP__Aes128Core__DOT__r4__core__DOT__sub._combo__TOP__Aes128Core__DOT__r4__core__DOT__sub__7(vlSymsp);
    vlSymsp->TOP__Aes128Core__DOT__r4__core__DOT__sub._combo__TOP__Aes128Core__DOT__r4__core__DOT__sub__8(vlSymsp);
    vlSymsp->TOP__Aes128Core__DOT__r4._combo__TOP__Aes128Core__DOT__r4__4(vlSymsp);
    vlSymsp->TOP__Aes128Core__DOT__r5__core__DOT__sub._combo__TOP__Aes128Core__DOT__r5__core__DOT__sub__9(vlSymsp);
    vlSymsp->TOP__Aes128Core__DOT__r5__core__DOT__sub._combo__TOP__Aes128Core__DOT__r5__core__DOT__sub__10(vlSymsp);
    vlSymsp->TOP__Aes128Core__DOT__r5._combo__TOP__Aes128Core__DOT__r5__5(vlSymsp);
    vlSymsp->TOP__Aes128Core__DOT__r6__core__DOT__sub._combo__TOP__Aes128Core__DOT__r6__core__DOT__sub__11(vlSymsp);
    vlSymsp->TOP__Aes128Core__DOT__r6__core__DOT__sub._combo__TOP__Aes128Core__DOT__r6__core__DOT__sub__12(vlSymsp);
    vlSymsp->TOP__Aes128Core__DOT__r6._combo__TOP__Aes128Core__DOT__r6__6(vlSymsp);
    vlSymsp->TOP__Aes128Core__DOT__r7__core__DOT__sub._combo__TOP__Aes128Core__DOT__r7__core__DOT__sub__13(vlSymsp);
    vlSymsp->TOP__Aes128Core__DOT__r7__core__DOT__sub._combo__TOP__Aes128Core__DOT__r7__core__DOT__sub__14(vlSymsp);
    vlSymsp->TOP__Aes128Core__DOT__r7._combo__TOP__Aes128Core__DOT__r7__7(vlSymsp);
    vlSymsp->TOP__Aes128Core__DOT__r8__core__DOT__sub._combo__TOP__Aes128Core__DOT__r8__core__DOT__sub__15(vlSymsp);
    vlSymsp->TOP__Aes128Core__DOT__r8__core__DOT__sub._combo__TOP__Aes128Core__DOT__r8__core__DOT__sub__16(vlSymsp);
    vlSymsp->TOP__Aes128Core__DOT__r8._combo__TOP__Aes128Core__DOT__r8__8(vlSymsp);
    vlSymsp->TOP__Aes128Core__DOT__r9__core__DOT__sub._combo__TOP__Aes128Core__DOT__r9__core__DOT__sub__17(vlSymsp);
    vlSymsp->TOP__Aes128Core__DOT__r9__core__DOT__sub._combo__TOP__Aes128Core__DOT__r9__core__DOT__sub__18(vlSymsp);
    vlSymsp->TOP__Aes128Core__DOT__r9._combo__TOP__Aes128Core__DOT__r9__9(vlSymsp);
    vlSymsp->TOP__Aes128Core__DOT__finalR__DOT__core__DOT__sub._combo__TOP__Aes128Core__DOT__finalR__DOT__core__DOT__sub__19(vlSymsp);
    vlSymsp->TOP__Aes128Core__DOT__finalR__DOT__core__DOT__sub._combo__TOP__Aes128Core__DOT__finalR__DOT__core__DOT__sub__20(vlSymsp);
    vlTOPp->_combo__TOP__6(vlSymsp);
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
