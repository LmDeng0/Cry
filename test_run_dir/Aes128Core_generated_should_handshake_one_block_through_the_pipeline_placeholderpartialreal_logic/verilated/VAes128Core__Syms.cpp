// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VAes128Core__Syms.h"
#include "VAes128Core.h"
#include "VAes128Core_StdRoundGen.h"
#include "VAes128Core_SubBytes.h"



// FUNCTIONS
VAes128Core__Syms::VAes128Core__Syms(VAes128Core* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_didInit(false)
    // Setup submodule names
    , TOP__Aes128Core__DOT__finalR__DOT__core__DOT__sub(Verilated::catName(topp->name(), "Aes128Core.finalR.core.sub"))
    , TOP__Aes128Core__DOT__r1(Verilated::catName(topp->name(), "Aes128Core.r1"))
    , TOP__Aes128Core__DOT__r1__core__DOT__sub(Verilated::catName(topp->name(), "Aes128Core.r1.core.sub"))
    , TOP__Aes128Core__DOT__r2(Verilated::catName(topp->name(), "Aes128Core.r2"))
    , TOP__Aes128Core__DOT__r2__core__DOT__sub(Verilated::catName(topp->name(), "Aes128Core.r2.core.sub"))
    , TOP__Aes128Core__DOT__r3(Verilated::catName(topp->name(), "Aes128Core.r3"))
    , TOP__Aes128Core__DOT__r3__core__DOT__sub(Verilated::catName(topp->name(), "Aes128Core.r3.core.sub"))
    , TOP__Aes128Core__DOT__r4(Verilated::catName(topp->name(), "Aes128Core.r4"))
    , TOP__Aes128Core__DOT__r4__core__DOT__sub(Verilated::catName(topp->name(), "Aes128Core.r4.core.sub"))
    , TOP__Aes128Core__DOT__r5(Verilated::catName(topp->name(), "Aes128Core.r5"))
    , TOP__Aes128Core__DOT__r5__core__DOT__sub(Verilated::catName(topp->name(), "Aes128Core.r5.core.sub"))
    , TOP__Aes128Core__DOT__r6(Verilated::catName(topp->name(), "Aes128Core.r6"))
    , TOP__Aes128Core__DOT__r6__core__DOT__sub(Verilated::catName(topp->name(), "Aes128Core.r6.core.sub"))
    , TOP__Aes128Core__DOT__r7(Verilated::catName(topp->name(), "Aes128Core.r7"))
    , TOP__Aes128Core__DOT__r7__core__DOT__sub(Verilated::catName(topp->name(), "Aes128Core.r7.core.sub"))
    , TOP__Aes128Core__DOT__r8(Verilated::catName(topp->name(), "Aes128Core.r8"))
    , TOP__Aes128Core__DOT__r8__core__DOT__sub(Verilated::catName(topp->name(), "Aes128Core.r8.core.sub"))
    , TOP__Aes128Core__DOT__r9(Verilated::catName(topp->name(), "Aes128Core.r9"))
    , TOP__Aes128Core__DOT__r9__core__DOT__sub(Verilated::catName(topp->name(), "Aes128Core.r9.core.sub"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->__PVT__Aes128Core__DOT__finalR__DOT__core__DOT__sub = &TOP__Aes128Core__DOT__finalR__DOT__core__DOT__sub;
    TOPp->__PVT__Aes128Core__DOT__r1 = &TOP__Aes128Core__DOT__r1;
    TOPp->__PVT__Aes128Core__DOT__r1->__PVT__core__DOT__sub = &TOP__Aes128Core__DOT__r1__core__DOT__sub;
    TOPp->__PVT__Aes128Core__DOT__r2 = &TOP__Aes128Core__DOT__r2;
    TOPp->__PVT__Aes128Core__DOT__r2->__PVT__core__DOT__sub = &TOP__Aes128Core__DOT__r2__core__DOT__sub;
    TOPp->__PVT__Aes128Core__DOT__r3 = &TOP__Aes128Core__DOT__r3;
    TOPp->__PVT__Aes128Core__DOT__r3->__PVT__core__DOT__sub = &TOP__Aes128Core__DOT__r3__core__DOT__sub;
    TOPp->__PVT__Aes128Core__DOT__r4 = &TOP__Aes128Core__DOT__r4;
    TOPp->__PVT__Aes128Core__DOT__r4->__PVT__core__DOT__sub = &TOP__Aes128Core__DOT__r4__core__DOT__sub;
    TOPp->__PVT__Aes128Core__DOT__r5 = &TOP__Aes128Core__DOT__r5;
    TOPp->__PVT__Aes128Core__DOT__r5->__PVT__core__DOT__sub = &TOP__Aes128Core__DOT__r5__core__DOT__sub;
    TOPp->__PVT__Aes128Core__DOT__r6 = &TOP__Aes128Core__DOT__r6;
    TOPp->__PVT__Aes128Core__DOT__r6->__PVT__core__DOT__sub = &TOP__Aes128Core__DOT__r6__core__DOT__sub;
    TOPp->__PVT__Aes128Core__DOT__r7 = &TOP__Aes128Core__DOT__r7;
    TOPp->__PVT__Aes128Core__DOT__r7->__PVT__core__DOT__sub = &TOP__Aes128Core__DOT__r7__core__DOT__sub;
    TOPp->__PVT__Aes128Core__DOT__r8 = &TOP__Aes128Core__DOT__r8;
    TOPp->__PVT__Aes128Core__DOT__r8->__PVT__core__DOT__sub = &TOP__Aes128Core__DOT__r8__core__DOT__sub;
    TOPp->__PVT__Aes128Core__DOT__r9 = &TOP__Aes128Core__DOT__r9;
    TOPp->__PVT__Aes128Core__DOT__r9->__PVT__core__DOT__sub = &TOP__Aes128Core__DOT__r9__core__DOT__sub;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP__Aes128Core__DOT__finalR__DOT__core__DOT__sub.__Vconfigure(this, true);
    TOP__Aes128Core__DOT__r1.__Vconfigure(this, true);
    TOP__Aes128Core__DOT__r1__core__DOT__sub.__Vconfigure(this, false);
    TOP__Aes128Core__DOT__r2.__Vconfigure(this, false);
    TOP__Aes128Core__DOT__r2__core__DOT__sub.__Vconfigure(this, false);
    TOP__Aes128Core__DOT__r3.__Vconfigure(this, false);
    TOP__Aes128Core__DOT__r3__core__DOT__sub.__Vconfigure(this, false);
    TOP__Aes128Core__DOT__r4.__Vconfigure(this, false);
    TOP__Aes128Core__DOT__r4__core__DOT__sub.__Vconfigure(this, false);
    TOP__Aes128Core__DOT__r5.__Vconfigure(this, false);
    TOP__Aes128Core__DOT__r5__core__DOT__sub.__Vconfigure(this, false);
    TOP__Aes128Core__DOT__r6.__Vconfigure(this, false);
    TOP__Aes128Core__DOT__r6__core__DOT__sub.__Vconfigure(this, false);
    TOP__Aes128Core__DOT__r7.__Vconfigure(this, false);
    TOP__Aes128Core__DOT__r7__core__DOT__sub.__Vconfigure(this, false);
    TOP__Aes128Core__DOT__r8.__Vconfigure(this, false);
    TOP__Aes128Core__DOT__r8__core__DOT__sub.__Vconfigure(this, false);
    TOP__Aes128Core__DOT__r9.__Vconfigure(this, false);
    TOP__Aes128Core__DOT__r9__core__DOT__sub.__Vconfigure(this, false);
}
