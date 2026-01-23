// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vep.h for the primary calling header

#include "Vep__pch.h"

void Vep___024root___ctor_var_reset(Vep___024root* vlSelf);

Vep___024root::Vep___024root(Vep__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vep___024root___ctor_var_reset(this);
}

void Vep___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vep___024root::~Vep___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
