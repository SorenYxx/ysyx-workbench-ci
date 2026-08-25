// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_26010027.h for the primary calling header

#ifndef VERILATED_VYSYX_26010027_YSYX_26010027_ICACHE_H_
#define VERILATED_VYSYX_26010027_YSYX_26010027_ICACHE_H_  // guard

#include "verilated.h"


class Vysyx_26010027__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vysyx_26010027_ysyx_26010027_icache final {
public:
VL_IN8(__PVT__clock,0,0);
VL_IN8(__PVT__reset,0,0);
VL_IN8(__PVT__flush_i,0,0);
VL_IN8(__PVT__ifu_arvalid,0,0);
VL_OUT8(__PVT__ifu_arready,0,0);
VL_OUT8(__PVT__ifu_rvalid,0,0);
VL_IN8(__PVT__ifu_rready,0,0);
VL_OUT8(__PVT__arb_arvalid,0,0);
VL_IN8(__PVT__arb_arready,0,0);
VL_IN8(__PVT__arb_rvalid,0,0);
VL_OUT8(__PVT__arb_rready,0,0);
VL_OUT8(__PVT__arb_arlen,7,0);
VL_OUT8(__PVT__arb_arsize,2,0);
VL_IN(__PVT__ifu_araddr,31,0);
VL_OUT(__PVT__ifu_rdata,31,0);
VL_OUT(__PVT__arb_araddr,31,0);
VL_IN(__PVT__arb_rdata,31,0);
VL_OUT(__PVT__hit_count,31,0);
VL_OUT(__PVT__miss_count,31,0);
VL_OUT(__PVT__miss_latency,31,0);
Vysyx_26010027__Syms* vlSymsp;
const char* vlNamep;
Vysyx_26010027_ysyx_26010027_icache() = default;
~Vysyx_26010027_ysyx_26010027_icache() = default;
void ctor(Vysyx_26010027__Syms* symsp, const char* namep);
void dtor();
VL_UNCOPYABLE(Vysyx_26010027_ysyx_26010027_icache);
void __Vconfigure(bool first);
};


#endif  // guard
