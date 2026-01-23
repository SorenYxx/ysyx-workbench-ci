// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vep__pch.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

Vep::Vep(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vep__Syms(contextp(), _vcname__, this)}
    , x{vlSymsp->TOP.x}
    , en{vlSymsp->TOP.en}
    , y{vlSymsp->TOP.y}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vep::Vep(const char* _vcname__)
    : Vep(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vep::~Vep() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vep___024root___eval_debug_assertions(Vep___024root* vlSelf);
#endif  // VL_DEBUG
void Vep___024root___eval_static(Vep___024root* vlSelf);
void Vep___024root___eval_initial(Vep___024root* vlSelf);
void Vep___024root___eval_settle(Vep___024root* vlSelf);
void Vep___024root___eval(Vep___024root* vlSelf);

void Vep::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vep::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vep___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vep___024root___eval_static(&(vlSymsp->TOP));
        Vep___024root___eval_initial(&(vlSymsp->TOP));
        Vep___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vep___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vep::eventsPending() { return false; }

uint64_t Vep::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vep::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vep___024root___eval_final(Vep___024root* vlSelf);

VL_ATTR_COLD void Vep::final() {
    Vep___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vep::hierName() const { return vlSymsp->name(); }
const char* Vep::modelName() const { return "Vep"; }
unsigned Vep::threads() const { return 1; }
void Vep::prepareClone() const { contextp()->prepareClone(); }
void Vep::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vep::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vep___024root__trace_decl_types(VerilatedFst* tracep);

void Vep___024root__trace_init_top(Vep___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vep___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vep___024root*>(voidSelf);
    Vep__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vep___024root__trace_decl_types(tracep);
    Vep___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vep___024root__trace_register(Vep___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vep::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedFstC* const stfp = dynamic_cast<VerilatedFstC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vep::trace()' called on non-VerilatedFstC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vep___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
