// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_26010027.h for the primary calling header

#include "Vysyx_26010027__pch.h"


void Vysyx_26010027_ysyx_26010027_icache___ctor_var_reset(Vysyx_26010027_ysyx_26010027_icache* vlSelf);

void Vysyx_26010027_ysyx_26010027_icache::ctor(Vysyx_26010027__Syms* symsp, const char* namep) {
vlSymsp = symsp;
vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
Vysyx_26010027_ysyx_26010027_icache___ctor_var_reset(this);
}

void Vysyx_26010027_ysyx_26010027_icache::__Vconfigure(bool first) {
(void)first;  // Prevent unused variable warning
}

void Vysyx_26010027_ysyx_26010027_icache::dtor() {
VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
