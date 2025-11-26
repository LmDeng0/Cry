// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VAES128CORE__SYMS_H_
#define _VAES128CORE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VAes128Core.h"
#include "VAes128Core_StdRoundGen.h"
#include "VAes128Core_SubBytes.h"

// SYMS CLASS
class VAes128Core__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VAes128Core*                   TOPp;
    VAes128Core_SubBytes           TOP__Aes128Core__DOT__finalR__DOT__core__DOT__sub;
    VAes128Core_StdRoundGen        TOP__Aes128Core__DOT__r1;
    VAes128Core_SubBytes           TOP__Aes128Core__DOT__r1__core__DOT__sub;
    VAes128Core_StdRoundGen        TOP__Aes128Core__DOT__r2;
    VAes128Core_SubBytes           TOP__Aes128Core__DOT__r2__core__DOT__sub;
    VAes128Core_StdRoundGen        TOP__Aes128Core__DOT__r3;
    VAes128Core_SubBytes           TOP__Aes128Core__DOT__r3__core__DOT__sub;
    VAes128Core_StdRoundGen        TOP__Aes128Core__DOT__r4;
    VAes128Core_SubBytes           TOP__Aes128Core__DOT__r4__core__DOT__sub;
    VAes128Core_StdRoundGen        TOP__Aes128Core__DOT__r5;
    VAes128Core_SubBytes           TOP__Aes128Core__DOT__r5__core__DOT__sub;
    VAes128Core_StdRoundGen        TOP__Aes128Core__DOT__r6;
    VAes128Core_SubBytes           TOP__Aes128Core__DOT__r6__core__DOT__sub;
    VAes128Core_StdRoundGen        TOP__Aes128Core__DOT__r7;
    VAes128Core_SubBytes           TOP__Aes128Core__DOT__r7__core__DOT__sub;
    VAes128Core_StdRoundGen        TOP__Aes128Core__DOT__r8;
    VAes128Core_SubBytes           TOP__Aes128Core__DOT__r8__core__DOT__sub;
    VAes128Core_StdRoundGen        TOP__Aes128Core__DOT__r9;
    VAes128Core_SubBytes           TOP__Aes128Core__DOT__r9__core__DOT__sub;
    
    // CREATORS
    VAes128Core__Syms(VAes128Core* topp, const char* namep);
    ~VAes128Core__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
