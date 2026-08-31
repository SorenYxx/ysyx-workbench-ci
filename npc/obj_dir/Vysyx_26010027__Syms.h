// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VYSYX_26010027__SYMS_H_
#define VERILATED_VYSYX_26010027__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vysyx_26010027.h"

// INCLUDE MODULE CLASSES
#include "Vysyx_26010027___024root.h"
#include "Vysyx_26010027___024unit.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vysyx_26010027__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vysyx_26010027* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vysyx_26010027___024root       TOP;
    Vysyx_26010027___024unit       TOP____024unit;

    // SCOPE NAMES
    VerilatedScope* __Vscopep_ysyx_26010027;
    VerilatedScope* __Vscopep_ysyx_26010027__my_EXU;
    VerilatedScope* __Vscopep_ysyx_26010027__my_IFU;
    VerilatedScope* __Vscopep_ysyx_26010027__my_WBU__my_csr;

    // CONSTRUCTORS
    Vysyx_26010027__Syms(VerilatedContext* contextp, const char* namep, Vysyx_26010027* modelp);
    ~Vysyx_26010027__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
