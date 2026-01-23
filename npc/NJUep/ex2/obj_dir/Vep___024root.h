// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vep.h for the primary calling header

#ifndef VERILATED_VEP___024ROOT_H_
#define VERILATED_VEP___024ROOT_H_  // guard

#include "verilated.h"


class Vep__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vep___024root final {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(x,1,0);
    VL_IN8(en,0,0);
    VL_OUT8(y,3,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;

    // INTERNAL VARIABLES
    Vep__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vep___024root(Vep__Syms* symsp, const char* namep);
    ~Vep___024root();
    VL_UNCOPYABLE(Vep___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
