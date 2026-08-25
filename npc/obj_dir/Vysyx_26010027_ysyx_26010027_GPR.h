// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_26010027.h for the primary calling header

#ifndef VERILATED_VYSYX_26010027_YSYX_26010027_GPR_H_
#define VERILATED_VYSYX_26010027_YSYX_26010027_GPR_H_  // guard

#include "verilated.h"


class Vysyx_26010027__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vysyx_26010027_ysyx_26010027_GPR final {
public:
VL_IN8(__PVT__clock,0,0);
VL_IN8(__PVT__reset,0,0);
VL_IN8(__PVT__waddr,4,0);
VL_IN8(__PVT__wen,0,0);
VL_IN8(__PVT__raddr1,4,0);
VL_IN8(__PVT__raddr2,4,0);
CData/*0:0*/ __VdlySet__rf__v0;
CData/*0:0*/ __VdlySet__rf__v1;
CData/*0:0*/ __VdlySet__rf__v2;
CData/*0:0*/ __VdlySet__rf__v3;
CData/*0:0*/ __VdlySet__rf__v4;
CData/*0:0*/ __VdlySet__rf__v5;
CData/*0:0*/ __VdlySet__rf__v6;
CData/*0:0*/ __VdlySet__rf__v7;
CData/*0:0*/ __VdlySet__rf__v8;
CData/*0:0*/ __VdlySet__rf__v9;
CData/*0:0*/ __VdlySet__rf__v10;
CData/*0:0*/ __VdlySet__rf__v11;
CData/*0:0*/ __VdlySet__rf__v12;
CData/*0:0*/ __VdlySet__rf__v13;
CData/*0:0*/ __VdlySet__rf__v14;
CData/*0:0*/ __VdlySet__rf__v15;
CData/*3:0*/ __VdlyDim0__rf__v16;
CData/*0:0*/ __VdlySet__rf__v16;
VL_IN(__PVT__wdata,31,0);
VL_OUT(__PVT__rdata1,31,0);
VL_OUT(__PVT__rdata2,31,0);
IData/*31:0*/ __PVT__i;
IData/*31:0*/ __VdlyVal__rf__v16;
VlUnpacked<IData/*31:0*/, 16> __PVT__rf;
Vysyx_26010027__Syms* vlSymsp;
const char* vlNamep;
Vysyx_26010027_ysyx_26010027_GPR() = default;
~Vysyx_26010027_ysyx_26010027_GPR() = default;
void ctor(Vysyx_26010027__Syms* symsp, const char* namep);
void dtor();
VL_UNCOPYABLE(Vysyx_26010027_ysyx_26010027_GPR);
void __Vconfigure(bool first);
};


#endif  // guard
