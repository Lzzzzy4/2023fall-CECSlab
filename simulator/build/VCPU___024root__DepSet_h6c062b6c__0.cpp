// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VCPU__Syms.h"
#include "VCPU__Syms.h"
#include "VCPU___024root.h"

extern "C" void set_gpr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void VCPU___024root____Vdpiimwrap_CPU__DOT__Regfile_inst__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<IData/*31:0*/, 32> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root____Vdpiimwrap_CPU__DOT__Regfile_inst__DOT__set_gpr_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {31, 0};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT32, VLVD_IN, VerilatedVarProps::Packed(), 31, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_gpr_ptr(&a__Vopenarray);
}

extern "C" void set_csr_ptr(const svOpenArrayHandle m1, const svOpenArrayHandle m2, const svOpenArrayHandle m3, const svOpenArrayHandle m4);

VL_INLINE_OPT void VCPU___024root____Vdpiimwrap_CPU__DOT__CSR_inst__DOT__set_csr_ptr__Vdpioc2_TOP(const IData/*31:0*/ &m1, const IData/*31:0*/ &m2, const IData/*31:0*/ &m3, const IData/*31:0*/ &m4) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root____Vdpiimwrap_CPU__DOT__CSR_inst__DOT__set_csr_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const VerilatedVarProps m1__Vopenprops(VLVT_UINT32, VLVD_IN, VerilatedVarProps::Packed(), 31, 0);
    VerilatedDpiOpenVar m1__Vopenarray (&m1__Vopenprops, &m1);
    static const VerilatedVarProps m2__Vopenprops(VLVT_UINT32, VLVD_IN, VerilatedVarProps::Packed(), 31, 0);
    VerilatedDpiOpenVar m2__Vopenarray (&m2__Vopenprops, &m2);
    static const VerilatedVarProps m3__Vopenprops(VLVT_UINT32, VLVD_IN, VerilatedVarProps::Packed(), 31, 0);
    VerilatedDpiOpenVar m3__Vopenarray (&m3__Vopenprops, &m3);
    static const VerilatedVarProps m4__Vopenprops(VLVT_UINT32, VLVD_IN, VerilatedVarProps::Packed(), 31, 0);
    VerilatedDpiOpenVar m4__Vopenarray (&m4__Vopenprops, &m4);
    set_csr_ptr(&m1__Vopenarray, &m2__Vopenarray, &m3__Vopenarray, &m4__Vopenarray);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCPU___024root___dump_triggers__ico(VCPU___024root* vlSelf);
#endif  // VL_DEBUG

void VCPU___024root___eval_triggers__ico(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (0U == vlSelf->__VicoIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VCPU___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCPU___024root___dump_triggers__act(VCPU___024root* vlSelf);
#endif  // VL_DEBUG

void VCPU___024root___eval_triggers__act(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VCPU___024root___dump_triggers__act(vlSelf);
    }
#endif
}
