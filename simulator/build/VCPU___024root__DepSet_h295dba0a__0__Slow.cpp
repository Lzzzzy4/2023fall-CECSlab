// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VCPU__Syms.h"
#include "VCPU___024root.h"

VL_ATTR_COLD void VCPU___024root___eval_static(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_static\n"); );
}

VL_ATTR_COLD void VCPU___024root___eval_initial__TOP(VCPU___024root* vlSelf);

VL_ATTR_COLD void VCPU___024root___eval_initial(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_initial\n"); );
    // Body
    VCPU___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
}

void VCPU___024root____Vdpiimwrap_CPU__DOT__Regfile_inst__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<IData/*31:0*/, 32> &a);
void VCPU___024root____Vdpiimwrap_CPU__DOT__CSR_inst__DOT__set_csr_ptr__Vdpioc2_TOP(const IData/*31:0*/ &m1, const IData/*31:0*/ &m2, const IData/*31:0*/ &m3, const IData/*31:0*/ &m4);

VL_ATTR_COLD void VCPU___024root___eval_initial__TOP(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->awsize = 2U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[0U][0U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[0U][1U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[0U][2U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[0U][3U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[1U][0U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[1U][1U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[1U][2U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[1U][3U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[2U][0U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[2U][1U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[2U][2U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[2U][3U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[3U][0U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[3U][1U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[3U][2U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[3U][3U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[4U][0U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[4U][1U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[4U][2U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[4U][3U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[5U][0U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[5U][1U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[5U][2U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[5U][3U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[6U][0U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[6U][1U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[6U][2U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[6U][3U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[7U][0U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[7U][1U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[7U][2U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[7U][3U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[8U][0U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[8U][1U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[8U][2U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[8U][3U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[9U][0U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[9U][1U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[9U][2U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[9U][3U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[0xaU][0U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[0xaU][1U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[0xaU][2U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[0xaU][3U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[0xbU][0U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[0xbU][1U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[0xbU][2U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[0xbU][3U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[0xcU][0U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[0xcU][1U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[0xcU][2U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[0xcU][3U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[0xdU][0U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[0xdU][1U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[0xdU][2U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[0xdU][3U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[0xeU][0U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[0xeU][1U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[0xeU][2U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[0xeU][3U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[0xfU][0U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[0xfU][1U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[0xfU][2U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[0xfU][3U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__i = 0x10U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[0U][0U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[0U][1U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[0U][2U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[0U][3U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[1U][0U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[1U][1U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[1U][2U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[1U][3U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[2U][0U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[2U][1U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[2U][2U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[2U][3U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[3U][0U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[3U][1U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[3U][2U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[3U][3U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[4U][0U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[4U][1U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[4U][2U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[4U][3U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[5U][0U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[5U][1U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[5U][2U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[5U][3U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[6U][0U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[6U][1U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[6U][2U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[6U][3U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[7U][0U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[7U][1U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[7U][2U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[7U][3U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[8U][0U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[8U][1U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[8U][2U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[8U][3U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[9U][0U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[9U][1U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[9U][2U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[9U][3U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[0xaU][0U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[0xaU][1U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[0xaU][2U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[0xaU][3U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[0xbU][0U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[0xbU][1U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[0xbU][2U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[0xbU][3U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[0xcU][0U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[0xcU][1U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[0xcU][2U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[0xcU][3U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[0xdU][0U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[0xdU][1U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[0xdU][2U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[0xdU][3U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[0xeU][0U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[0xeU][1U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[0xeU][2U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[0xeU][3U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[0xfU][0U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[0xfU][1U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[0xfU][2U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[0xfU][3U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__i = 0x10U;
    vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[0U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[1U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[2U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[3U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[4U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[5U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[6U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[7U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[8U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[9U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[0xaU] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[0xbU] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[0xcU] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[0xdU] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[0xeU] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[0xfU] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__i = 0x10U;
    vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[0U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[1U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[2U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[3U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[4U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[5U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[6U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[7U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[8U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[9U] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[0xaU] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[0xbU] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[0xcU] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[0xdU] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[0xeU] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[0xfU] = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__i = 0x10U;
    VCPU___024root____Vdpiimwrap_CPU__DOT__Regfile_inst__DOT__set_gpr_ptr__Vdpioc2_TOP(vlSelf->CPU__DOT__Regfile_inst__DOT__rf);
    vlSelf->CPU__DOT__Regfile_inst__DOT__rf[0U] = 0U;
    vlSelf->CPU__DOT__Regfile_inst__DOT__rf[1U] = 0U;
    vlSelf->CPU__DOT__Regfile_inst__DOT__rf[2U] = 0U;
    vlSelf->CPU__DOT__Regfile_inst__DOT__rf[3U] = 0U;
    vlSelf->CPU__DOT__Regfile_inst__DOT__rf[4U] = 0U;
    vlSelf->CPU__DOT__Regfile_inst__DOT__rf[5U] = 0U;
    vlSelf->CPU__DOT__Regfile_inst__DOT__rf[6U] = 0U;
    vlSelf->CPU__DOT__Regfile_inst__DOT__rf[7U] = 0U;
    vlSelf->CPU__DOT__Regfile_inst__DOT__rf[8U] = 0U;
    vlSelf->CPU__DOT__Regfile_inst__DOT__rf[9U] = 0U;
    vlSelf->CPU__DOT__Regfile_inst__DOT__rf[0xaU] = 0U;
    vlSelf->CPU__DOT__Regfile_inst__DOT__rf[0xbU] = 0U;
    vlSelf->CPU__DOT__Regfile_inst__DOT__rf[0xcU] = 0U;
    vlSelf->CPU__DOT__Regfile_inst__DOT__rf[0xdU] = 0U;
    vlSelf->CPU__DOT__Regfile_inst__DOT__rf[0xeU] = 0U;
    vlSelf->CPU__DOT__Regfile_inst__DOT__rf[0xfU] = 0U;
    vlSelf->CPU__DOT__Regfile_inst__DOT__rf[0x10U] = 0U;
    vlSelf->CPU__DOT__Regfile_inst__DOT__rf[0x11U] = 0U;
    vlSelf->CPU__DOT__Regfile_inst__DOT__rf[0x12U] = 0U;
    vlSelf->CPU__DOT__Regfile_inst__DOT__rf[0x13U] = 0U;
    vlSelf->CPU__DOT__Regfile_inst__DOT__rf[0x14U] = 0U;
    vlSelf->CPU__DOT__Regfile_inst__DOT__rf[0x15U] = 0U;
    vlSelf->CPU__DOT__Regfile_inst__DOT__rf[0x16U] = 0U;
    vlSelf->CPU__DOT__Regfile_inst__DOT__rf[0x17U] = 0U;
    vlSelf->CPU__DOT__Regfile_inst__DOT__rf[0x18U] = 0U;
    vlSelf->CPU__DOT__Regfile_inst__DOT__rf[0x19U] = 0U;
    vlSelf->CPU__DOT__Regfile_inst__DOT__rf[0x1aU] = 0U;
    vlSelf->CPU__DOT__Regfile_inst__DOT__rf[0x1bU] = 0U;
    vlSelf->CPU__DOT__Regfile_inst__DOT__rf[0x1cU] = 0U;
    vlSelf->CPU__DOT__Regfile_inst__DOT__rf[0x1dU] = 0U;
    vlSelf->CPU__DOT__Regfile_inst__DOT__rf[0x1eU] = 0U;
    vlSelf->CPU__DOT__Regfile_inst__DOT__rf[0x1fU] = 0U;
    vlSelf->CPU__DOT__Regfile_inst__DOT__unnamedblk1__DOT__i = 0x20U;
    VCPU___024root____Vdpiimwrap_CPU__DOT__CSR_inst__DOT__set_csr_ptr__Vdpioc2_TOP(vlSelf->CPU__DOT__CSR_inst__DOT__mstatus, vlSelf->CPU__DOT__CSR_inst__DOT__mtvec, vlSelf->CPU__DOT__CSR_inst__DOT__mepc, vlSelf->CPU__DOT__CSR_inst__DOT__mcause);
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[0U][0U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[0U][1U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[0U][2U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[0U][3U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[1U][0U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[1U][1U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[1U][2U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[1U][3U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[2U][0U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[2U][1U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[2U][2U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[2U][3U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[3U][0U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[3U][1U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[3U][2U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[3U][3U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[4U][0U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[4U][1U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[4U][2U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[4U][3U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[5U][0U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[5U][1U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[5U][2U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[5U][3U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[6U][0U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[6U][1U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[6U][2U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[6U][3U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[7U][0U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[7U][1U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[7U][2U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[7U][3U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[8U][0U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[8U][1U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[8U][2U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[8U][3U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[9U][0U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[9U][1U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[9U][2U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[9U][3U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[0xaU][0U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[0xaU][1U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[0xaU][2U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[0xaU][3U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[0xbU][0U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[0xbU][1U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[0xbU][2U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[0xbU][3U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[0xcU][0U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[0xcU][1U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[0xcU][2U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[0xcU][3U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[0xdU][0U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[0xdU][1U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[0xdU][2U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[0xdU][3U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[0xeU][0U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[0xeU][1U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[0xeU][2U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[0xeU][3U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[0xfU][0U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[0xfU][1U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[0xfU][2U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[0xfU][3U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__j = 0x10U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[0U][0U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[0U][1U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[0U][2U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[0U][3U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[1U][0U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[1U][1U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[1U][2U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[1U][3U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[2U][0U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[2U][1U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[2U][2U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[2U][3U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[3U][0U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[3U][1U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[3U][2U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[3U][3U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[4U][0U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[4U][1U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[4U][2U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[4U][3U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[5U][0U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[5U][1U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[5U][2U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[5U][3U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[6U][0U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[6U][1U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[6U][2U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[6U][3U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[7U][0U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[7U][1U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[7U][2U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[7U][3U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[8U][0U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[8U][1U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[8U][2U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[8U][3U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[9U][0U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[9U][1U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[9U][2U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[9U][3U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[0xaU][0U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[0xaU][1U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[0xaU][2U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[0xaU][3U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[0xbU][0U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[0xbU][1U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[0xbU][2U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[0xbU][3U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[0xcU][0U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[0xcU][1U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[0xcU][2U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[0xcU][3U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[0xdU][0U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[0xdU][1U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[0xdU][2U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[0xdU][3U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[0xeU][0U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[0xeU][1U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[0xeU][2U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[0xeU][3U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[0xfU][0U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[0xfU][1U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[0xfU][2U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[0xfU][3U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__j = 0x10U;
    vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[0U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[1U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[2U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[3U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[4U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[5U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[6U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[7U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[8U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[9U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[0xaU] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[0xbU] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[0xcU] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[0xdU] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[0xeU] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[0xfU] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__i = 0x10U;
    vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[0U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[1U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[2U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[3U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[4U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[5U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[6U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[7U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[8U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[9U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[0xaU] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[0xbU] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[0xcU] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[0xdU] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[0xeU] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[0xfU] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__i = 0x10U;
    vlSelf->arburst = 1U;
    vlSelf->awburst = 1U;
}

VL_ATTR_COLD void VCPU___024root___eval_final(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_final\n"); );
}

VL_ATTR_COLD void VCPU___024root___eval_triggers__stl(VCPU___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VCPU___024root___dump_triggers__stl(VCPU___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VCPU___024root___eval_stl(VCPU___024root* vlSelf);

VL_ATTR_COLD void VCPU___024root___eval_settle(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        VCPU___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                VCPU___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/user/cpu/2023fall-CECSlab/simulator/IP/mycpu/CPU.sv", 3, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            VCPU___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCPU___024root___dump_triggers__stl(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*1:0*/, 128> VCPU__ConstPool__TABLE_hf616aee3_0;
extern const VlUnpacked<CData/*0:0*/, 64> VCPU__ConstPool__TABLE_h547d70dc_0;
extern const VlUnpacked<CData/*0:0*/, 64> VCPU__ConstPool__TABLE_h8900deca_0;
extern const VlUnpacked<CData/*0:0*/, 64> VCPU__ConstPool__TABLE_h3f1e26a2_0;
extern const VlUnpacked<CData/*0:0*/, 64> VCPU__ConstPool__TABLE_h07d257b7_0;
extern const VlUnpacked<CData/*0:0*/, 64> VCPU__ConstPool__TABLE_h8a061d4b_0;
extern const VlUnpacked<CData/*0:0*/, 64> VCPU__ConstPool__TABLE_h02f04120_0;
extern const VlUnpacked<CData/*1:0*/, 64> VCPU__ConstPool__TABLE_h6fe32423_0;
extern const VlUnpacked<CData/*1:0*/, 512> VCPU__ConstPool__TABLE_h0c337be4_0;
extern const VlUnpacked<CData/*0:0*/, 128> VCPU__ConstPool__TABLE_hb84233db_0;
extern const VlUnpacked<CData/*0:0*/, 128> VCPU__ConstPool__TABLE_h57739968_0;
extern const VlUnpacked<CData/*1:0*/, 128> VCPU__ConstPool__TABLE_he1c44a55_0;
extern const VlUnpacked<CData/*0:0*/, 128> VCPU__ConstPool__TABLE_h27544bbf_0;
extern const VlUnpacked<CData/*0:0*/, 128> VCPU__ConstPool__TABLE_hf63d9f85_0;
extern const VlUnpacked<CData/*0:0*/, 128> VCPU__ConstPool__TABLE_hed1d605a_0;
extern const VlUnpacked<CData/*0:0*/, 128> VCPU__ConstPool__TABLE_h8dd2850e_0;
extern const VlUnpacked<CData/*2:0*/, 256> VCPU__ConstPool__TABLE_h66fd1b2c_0;

VL_ATTR_COLD void VCPU___024root___stl_sequent__TOP__0(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___stl_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ CPU__DOT__ALU_inst__DOT____VdfgTmp_h08f9e919__0;
    CPU__DOT__ALU_inst__DOT____VdfgTmp_h08f9e919__0 = 0;
    IData/*31:0*/ CPU__DOT__ALU_inst__DOT____VdfgTmp_h065b4e26__0;
    CPU__DOT__ALU_inst__DOT____VdfgTmp_h065b4e26__0 = 0;
    CData/*0:0*/ CPU__DOT__Hazard_inst__DOT____VdfgTmp_hfe9ab642__0;
    CPU__DOT__Hazard_inst__DOT____VdfgTmp_hfe9ab642__0 = 0;
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    SData/*8:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*7:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*6:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*5:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    VlWide<4>/*127:0*/ __Vtemp_h5338566c__0;
    VlWide<4>/*127:0*/ __Vtemp_hea33821c__0;
    VlWide<4>/*127:0*/ __Vtemp_hfd92b8e8__0;
    VlWide<4>/*127:0*/ __Vtemp_h9291c2cc__0;
    VlWide<4>/*127:0*/ __Vtemp_hab5a02e1__0;
    VlWide<4>/*127:0*/ __Vtemp_h9b694aeb__0;
    VlWide<4>/*127:0*/ __Vtemp_hd40e0d09__0;
    VlWide<4>/*127:0*/ __Vtemp_h4fc542b6__0;
    // Body
    if (((((((((0x37U == (0x7fU & vlSelf->CPU__DOT__inst_id)) 
               | (0x17U == (0x7fU & vlSelf->CPU__DOT__inst_id))) 
              | (0x6fU == (0x7fU & vlSelf->CPU__DOT__inst_id))) 
             | (0x67U == (0x7fU & vlSelf->CPU__DOT__inst_id))) 
            | (0x63U == (0x7fU & vlSelf->CPU__DOT__inst_id))) 
           | (3U == (0x7fU & vlSelf->CPU__DOT__inst_id))) 
          | (0x23U == (0x7fU & vlSelf->CPU__DOT__inst_id))) 
         | (0x13U == (0x7fU & vlSelf->CPU__DOT__inst_id)))) {
        if ((0x37U == (0x7fU & vlSelf->CPU__DOT__inst_id))) {
            vlSelf->CPU__DOT__alu_rs1_sel_id = 2U;
            vlSelf->CPU__DOT__rf_we_id = (0U != (0x1fU 
                                                 & (vlSelf->CPU__DOT__inst_id 
                                                    >> 7U)));
            vlSelf->CPU__DOT__br_type_id = (7U & (vlSelf->CPU__DOT__inst_id 
                                                  >> 0xcU));
            vlSelf->CPU__DOT__alu_op_id = 0U;
            vlSelf->CPU__DOT__mem_access_id = 0U;
            vlSelf->CPU__DOT__alu_rs2_sel_id = 1U;
            vlSelf->CPU__DOT__imm_id = (0xfffff000U 
                                        & vlSelf->CPU__DOT__inst_id);
        } else if ((0x17U == (0x7fU & vlSelf->CPU__DOT__inst_id))) {
            vlSelf->CPU__DOT__alu_rs1_sel_id = 1U;
            vlSelf->CPU__DOT__rf_we_id = (0U != (0x1fU 
                                                 & (vlSelf->CPU__DOT__inst_id 
                                                    >> 7U)));
            vlSelf->CPU__DOT__br_type_id = ((8U & (vlSelf->CPU__DOT__inst_id 
                                                   << 1U)) 
                                            | (7U & 
                                               (vlSelf->CPU__DOT__inst_id 
                                                >> 0xcU)));
            vlSelf->CPU__DOT__alu_op_id = 0U;
            vlSelf->CPU__DOT__mem_access_id = 0U;
            vlSelf->CPU__DOT__alu_rs2_sel_id = 1U;
            vlSelf->CPU__DOT__imm_id = (0xfffff000U 
                                        & vlSelf->CPU__DOT__inst_id);
        } else if ((0x6fU == (0x7fU & vlSelf->CPU__DOT__inst_id))) {
            vlSelf->CPU__DOT__alu_rs1_sel_id = 1U;
            vlSelf->CPU__DOT__rf_we_id = (0U != (0x1fU 
                                                 & (vlSelf->CPU__DOT__inst_id 
                                                    >> 7U)));
            vlSelf->CPU__DOT__br_type_id = (0x10U | 
                                            ((8U & 
                                              (vlSelf->CPU__DOT__inst_id 
                                               << 1U)) 
                                             | ((4U 
                                                 & (vlSelf->CPU__DOT__inst_id 
                                                    >> 1U)) 
                                                | (3U 
                                                   & vlSelf->CPU__DOT__inst_id))));
            vlSelf->CPU__DOT__alu_op_id = 0U;
            vlSelf->CPU__DOT__mem_access_id = 0U;
            vlSelf->CPU__DOT__alu_rs2_sel_id = 2U;
            vlSelf->CPU__DOT__imm_id = (((- (IData)(
                                                    (vlSelf->CPU__DOT__inst_id 
                                                     >> 0x1fU))) 
                                         << 0x14U) 
                                        | ((0xff000U 
                                            & vlSelf->CPU__DOT__inst_id) 
                                           | ((0x800U 
                                               & (vlSelf->CPU__DOT__inst_id 
                                                  >> 9U)) 
                                              | (0x7feU 
                                                 & (vlSelf->CPU__DOT__inst_id 
                                                    >> 0x14U)))));
        } else if ((0x67U == (0x7fU & vlSelf->CPU__DOT__inst_id))) {
            vlSelf->CPU__DOT__alu_rs1_sel_id = 1U;
            vlSelf->CPU__DOT__rf_we_id = (0U != (0x1fU 
                                                 & (vlSelf->CPU__DOT__inst_id 
                                                    >> 7U)));
            vlSelf->CPU__DOT__br_type_id = (0x10U | 
                                            ((8U & 
                                              (vlSelf->CPU__DOT__inst_id 
                                               << 1U)) 
                                             | ((4U 
                                                 & (vlSelf->CPU__DOT__inst_id 
                                                    >> 1U)) 
                                                | (3U 
                                                   & vlSelf->CPU__DOT__inst_id))));
            vlSelf->CPU__DOT__alu_op_id = 0U;
            vlSelf->CPU__DOT__mem_access_id = 0U;
            vlSelf->CPU__DOT__alu_rs2_sel_id = 2U;
            vlSelf->CPU__DOT__imm_id = (((- (IData)(
                                                    (vlSelf->CPU__DOT__inst_id 
                                                     >> 0x1fU))) 
                                         << 0xcU) | 
                                        (vlSelf->CPU__DOT__inst_id 
                                         >> 0x14U));
        } else {
            vlSelf->CPU__DOT__alu_rs1_sel_id = 0U;
            vlSelf->CPU__DOT__rf_we_id = ((0x63U != 
                                           (0x7fU & vlSelf->CPU__DOT__inst_id)) 
                                          & ((3U == 
                                              (0x7fU 
                                               & vlSelf->CPU__DOT__inst_id))
                                              ? (0U 
                                                 != 
                                                 (0x1fU 
                                                  & (vlSelf->CPU__DOT__inst_id 
                                                     >> 7U)))
                                              : ((0x23U 
                                                  != 
                                                  (0x7fU 
                                                   & vlSelf->CPU__DOT__inst_id)) 
                                                 & (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSelf->CPU__DOT__inst_id 
                                                        >> 7U))))));
            if ((0x63U == (0x7fU & vlSelf->CPU__DOT__inst_id))) {
                vlSelf->CPU__DOT__br_type_id = (0x10U 
                                                | ((8U 
                                                    & (vlSelf->CPU__DOT__inst_id 
                                                       << 1U)) 
                                                   | (7U 
                                                      & (vlSelf->CPU__DOT__inst_id 
                                                         >> 0xcU))));
                vlSelf->CPU__DOT__alu_op_id = 0U;
                vlSelf->CPU__DOT__mem_access_id = 0U;
                vlSelf->CPU__DOT__alu_rs2_sel_id = 0U;
                vlSelf->CPU__DOT__imm_id = (((- (IData)(
                                                        (vlSelf->CPU__DOT__inst_id 
                                                         >> 0x1fU))) 
                                             << 0xcU) 
                                            | ((0x800U 
                                                & (vlSelf->CPU__DOT__inst_id 
                                                   << 4U)) 
                                               | ((0x7e0U 
                                                   & (vlSelf->CPU__DOT__inst_id 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSelf->CPU__DOT__inst_id 
                                                        >> 7U)))));
            } else {
                if ((3U == (0x7fU & vlSelf->CPU__DOT__inst_id))) {
                    vlSelf->CPU__DOT__br_type_id = 
                        ((8U & (vlSelf->CPU__DOT__inst_id 
                                << 1U)) | (7U & (vlSelf->CPU__DOT__inst_id 
                                                 >> 0xcU)));
                    vlSelf->CPU__DOT__alu_op_id = 0U;
                    vlSelf->CPU__DOT__mem_access_id 
                        = (8U | (7U & (vlSelf->CPU__DOT__inst_id 
                                       >> 0xcU)));
                    vlSelf->CPU__DOT__imm_id = (((- (IData)(
                                                            (vlSelf->CPU__DOT__inst_id 
                                                             >> 0x1fU))) 
                                                 << 0xcU) 
                                                | (vlSelf->CPU__DOT__inst_id 
                                                   >> 0x14U));
                } else if ((0x23U == (0x7fU & vlSelf->CPU__DOT__inst_id))) {
                    vlSelf->CPU__DOT__br_type_id = 
                        ((8U & (vlSelf->CPU__DOT__inst_id 
                                << 1U)) | (7U & (vlSelf->CPU__DOT__inst_id 
                                                 >> 0xcU)));
                    vlSelf->CPU__DOT__alu_op_id = 0U;
                    vlSelf->CPU__DOT__mem_access_id 
                        = (0x10U | (7U & (vlSelf->CPU__DOT__inst_id 
                                          >> 0xcU)));
                    vlSelf->CPU__DOT__imm_id = (((- (IData)(
                                                            (vlSelf->CPU__DOT__inst_id 
                                                             >> 0x1fU))) 
                                                 << 0xcU) 
                                                | ((0xfe0U 
                                                    & (vlSelf->CPU__DOT__inst_id 
                                                       >> 0x14U)) 
                                                   | (0x1fU 
                                                      & (vlSelf->CPU__DOT__inst_id 
                                                         >> 7U))));
                } else {
                    vlSelf->CPU__DOT__br_type_id = 
                        ((8U & (vlSelf->CPU__DOT__inst_id 
                                << 1U)) | (7U & (vlSelf->CPU__DOT__inst_id 
                                                 >> 0xcU)));
                    vlSelf->CPU__DOT__alu_op_id = (
                                                   ((IData)(
                                                            (0x40005000U 
                                                             == 
                                                             (0x40007000U 
                                                              & vlSelf->CPU__DOT__inst_id))) 
                                                    << 4U) 
                                                   | (7U 
                                                      & (vlSelf->CPU__DOT__inst_id 
                                                         >> 0xcU)));
                    vlSelf->CPU__DOT__mem_access_id = 0U;
                    vlSelf->CPU__DOT__imm_id = (((- (IData)(
                                                            (vlSelf->CPU__DOT__inst_id 
                                                             >> 0x1fU))) 
                                                 << 0xcU) 
                                                | (vlSelf->CPU__DOT__inst_id 
                                                   >> 0x14U));
                }
                vlSelf->CPU__DOT__alu_rs2_sel_id = 1U;
            }
        }
        vlSelf->CPU__DOT__wb_rf_sel_id = ((0x37U != 
                                           (0x7fU & vlSelf->CPU__DOT__inst_id)) 
                                          & ((0x17U 
                                              != (0x7fU 
                                                  & vlSelf->CPU__DOT__inst_id)) 
                                             & ((0x6fU 
                                                 != 
                                                 (0x7fU 
                                                  & vlSelf->CPU__DOT__inst_id)) 
                                                & ((0x67U 
                                                    != 
                                                    (0x7fU 
                                                     & vlSelf->CPU__DOT__inst_id)) 
                                                   & ((0x63U 
                                                       != 
                                                       (0x7fU 
                                                        & vlSelf->CPU__DOT__inst_id)) 
                                                      & (3U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->CPU__DOT__inst_id)))))));
    } else {
        if ((0x33U == (0x7fU & vlSelf->CPU__DOT__inst_id))) {
            vlSelf->CPU__DOT__alu_rs1_sel_id = 0U;
            vlSelf->CPU__DOT__rf_we_id = (0U != (0x1fU 
                                                 & (vlSelf->CPU__DOT__inst_id 
                                                    >> 7U)));
            vlSelf->CPU__DOT__br_type_id = ((8U & (vlSelf->CPU__DOT__inst_id 
                                                   << 1U)) 
                                            | (7U & 
                                               (vlSelf->CPU__DOT__inst_id 
                                                >> 0xcU)));
            vlSelf->CPU__DOT__alu_op_id = ((0x10U & 
                                            (vlSelf->CPU__DOT__inst_id 
                                             >> 0x1aU)) 
                                           | ((8U & 
                                               (vlSelf->CPU__DOT__inst_id 
                                                >> 0x16U)) 
                                              | (7U 
                                                 & (vlSelf->CPU__DOT__inst_id 
                                                    >> 0xcU))));
            vlSelf->CPU__DOT__alu_rs2_sel_id = 0U;
        } else {
            if ((0x73U == (0x7fU & vlSelf->CPU__DOT__inst_id))) {
                vlSelf->CPU__DOT__alu_rs1_sel_id = 2U;
                vlSelf->CPU__DOT__br_type_id = ((8U 
                                                 & (vlSelf->CPU__DOT__inst_id 
                                                    << 1U)) 
                                                | (7U 
                                                   & (vlSelf->CPU__DOT__inst_id 
                                                      >> 0xcU)));
                vlSelf->CPU__DOT__alu_rs2_sel_id = 3U;
                vlSelf->CPU__DOT__rf_we_id = ((0U != 
                                               (0x1fU 
                                                & (vlSelf->CPU__DOT__inst_id 
                                                   >> 7U))) 
                                              & (0U 
                                                 != 
                                                 (7U 
                                                  & (vlSelf->CPU__DOT__inst_id 
                                                     >> 0xcU))));
            } else {
                vlSelf->CPU__DOT__alu_rs1_sel_id = 0U;
                vlSelf->CPU__DOT__br_type_id = 0U;
                vlSelf->CPU__DOT__alu_rs2_sel_id = 0U;
                vlSelf->CPU__DOT__rf_we_id = 0U;
            }
            vlSelf->CPU__DOT__alu_op_id = 0U;
        }
        vlSelf->CPU__DOT__mem_access_id = 0U;
        vlSelf->CPU__DOT__imm_id = 0U;
        vlSelf->CPU__DOT__wb_rf_sel_id = 0U;
    }
    vlSelf->CPU__DOT__DCache_inst__DOT__lru_refill_update = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__dirty_refill = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__write_counter_reset = 0U;
    if ((0U == (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__wfsm_state))) {
        vlSelf->CPU__DOT__DCache_inst__DOT__write_counter_reset = 1U;
    }
    vlSelf->rready = 0U;
    vlSelf->arvalid = 0U;
    vlSelf->awaddr = vlSelf->CPU__DOT__DCache_inst__DOT__maddr_buf;
    vlSelf->wdata = vlSelf->CPU__DOT__DCache_inst__DOT__wbuf[0U];
    vlSelf->inst = vlSelf->CPU__DOT__inst_wb;
    vlSelf->CPU__DOT__Decode_inst__DOT____VdfgTmp_haf50822f__0 
        = (IData)((0x73U == (0x707fU & vlSelf->CPU__DOT__inst_id)));
    vlSelf->pc_cur = vlSelf->CPU__DOT__pc_wb;
    vlSelf->CPU__DOT__DCache_inst__DOT__addr_cnt_add = 0U;
    if (vlSelf->CPU__DOT__DCache_inst__DOT__uncache) {
        vlSelf->wstrb = vlSelf->CPU__DOT__DCache_inst__DOT__wstrb_pipe;
        vlSelf->awlen = 0U;
    } else {
        vlSelf->wstrb = 0xfU;
        vlSelf->awlen = 3U;
    }
    vlSelf->arsize = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__mem_rdata[0U][0U] 
        = vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram
        [vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__addr_r][0U];
    vlSelf->CPU__DOT__ICache_inst__DOT__mem_rdata[0U][1U] 
        = vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram
        [vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__addr_r][1U];
    vlSelf->CPU__DOT__ICache_inst__DOT__mem_rdata[0U][2U] 
        = vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram
        [vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__addr_r][2U];
    vlSelf->CPU__DOT__ICache_inst__DOT__mem_rdata[0U][3U] 
        = vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram
        [vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__addr_r][3U];
    vlSelf->CPU__DOT__ICache_inst__DOT__mem_rdata[1U][0U] 
        = vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram
        [vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__addr_r][0U];
    vlSelf->CPU__DOT__ICache_inst__DOT__mem_rdata[1U][1U] 
        = vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram
        [vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__addr_r][1U];
    vlSelf->CPU__DOT__ICache_inst__DOT__mem_rdata[1U][2U] 
        = vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram
        [vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__addr_r][2U];
    vlSelf->CPU__DOT__ICache_inst__DOT__mem_rdata[1U][3U] 
        = vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram
        [vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__addr_r][3U];
    vlSelf->CPU__DOT__DCache_inst__DOT__tag_rdata[0U] 
        = vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram
        [vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__addr_r];
    vlSelf->CPU__DOT__DCache_inst__DOT__tag_rdata[1U] 
        = vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram
        [vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__addr_r];
    vlSelf->araddr = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__wdata_from_pipe = 1U;
    __Vtemp_h5338566c__0[0U] = vlSelf->CPU__DOT__DCache_inst__DOT__wdata_pipe;
    __Vtemp_h5338566c__0[1U] = 0U;
    __Vtemp_h5338566c__0[2U] = 0U;
    __Vtemp_h5338566c__0[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hea33821c__0, __Vtemp_h5338566c__0, 
                  (0x60U & (vlSelf->CPU__DOT__DCache_inst__DOT__addr_pipe 
                            << 3U)));
    vlSelf->CPU__DOT__DCache_inst__DOT__wdata_pipe_512[0U] 
        = __Vtemp_hea33821c__0[0U];
    vlSelf->CPU__DOT__DCache_inst__DOT__wdata_pipe_512[1U] 
        = __Vtemp_hea33821c__0[1U];
    vlSelf->CPU__DOT__DCache_inst__DOT__wdata_pipe_512[2U] 
        = __Vtemp_hea33821c__0[2U];
    vlSelf->CPU__DOT__DCache_inst__DOT__wdata_pipe_512[3U] 
        = __Vtemp_hea33821c__0[3U];
    __Vtemp_hfd92b8e8__0[0U] = (((- (IData)((1U & ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__wstrb_pipe) 
                                                   >> 3U)))) 
                                 << 0x18U) | ((0xff0000U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__wstrb_pipe) 
                                                                 >> 2U)))) 
                                                  << 0x10U)) 
                                              | ((0xff00U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__wstrb_pipe) 
                                                                    >> 1U)))) 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__wstrb_pipe))))))));
    __Vtemp_hfd92b8e8__0[1U] = 0U;
    __Vtemp_hfd92b8e8__0[2U] = 0U;
    __Vtemp_hfd92b8e8__0[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h9291c2cc__0, __Vtemp_hfd92b8e8__0, 
                  (0x60U & (vlSelf->CPU__DOT__DCache_inst__DOT__addr_pipe 
                            << 3U)));
    vlSelf->CPU__DOT__DCache_inst__DOT__wstrb_pipe_512[0U] 
        = __Vtemp_h9291c2cc__0[0U];
    vlSelf->CPU__DOT__DCache_inst__DOT__wstrb_pipe_512[1U] 
        = __Vtemp_h9291c2cc__0[1U];
    vlSelf->CPU__DOT__DCache_inst__DOT__wstrb_pipe_512[2U] 
        = __Vtemp_h9291c2cc__0[2U];
    vlSelf->CPU__DOT__DCache_inst__DOT__wstrb_pipe_512[3U] 
        = __Vtemp_h9291c2cc__0[3U];
    vlSelf->CPU__DOT__Hazard_inst__DOT__flush_by_load_use = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_from_mem = 1U;
    vlSelf->CPU__DOT__i_rlast = 0U;
    vlSelf->CPU__DOT__i_rready = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__mem_rdata[0U][0U] 
        = vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram
        [vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__addr_r][0U];
    vlSelf->CPU__DOT__DCache_inst__DOT__mem_rdata[0U][1U] 
        = vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram
        [vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__addr_r][1U];
    vlSelf->CPU__DOT__DCache_inst__DOT__mem_rdata[0U][2U] 
        = vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram
        [vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__addr_r][2U];
    vlSelf->CPU__DOT__DCache_inst__DOT__mem_rdata[0U][3U] 
        = vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram
        [vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__addr_r][3U];
    vlSelf->CPU__DOT__DCache_inst__DOT__mem_rdata[1U][0U] 
        = vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram
        [vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__addr_r][0U];
    vlSelf->CPU__DOT__DCache_inst__DOT__mem_rdata[1U][1U] 
        = vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram
        [vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__addr_r][1U];
    vlSelf->CPU__DOT__DCache_inst__DOT__mem_rdata[1U][2U] 
        = vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram
        [vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__addr_r][2U];
    vlSelf->CPU__DOT__DCache_inst__DOT__mem_rdata[1U][3U] 
        = vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram
        [vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__addr_r][3U];
    vlSelf->CPU__DOT__d_rvalid = 0U;
    vlSelf->CPU__DOT__d_wvalid = 0U;
    vlSelf->CPU__DOT__d_rready = 0U;
    vlSelf->CPU__DOT__d_rlast = 0U;
    if ((4U & (IData)(vlSelf->CPU__DOT__axi_arbiter_inst__DOT__r_crt))) {
        if ((1U & (~ ((IData)(vlSelf->CPU__DOT__axi_arbiter_inst__DOT__r_crt) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->CPU__DOT__axi_arbiter_inst__DOT__r_crt)))) {
                vlSelf->rready = 1U;
                vlSelf->CPU__DOT__d_rready = vlSelf->rvalid;
                vlSelf->CPU__DOT__d_rlast = vlSelf->rlast;
            }
        }
    } else if ((2U & (IData)(vlSelf->CPU__DOT__axi_arbiter_inst__DOT__r_crt))) {
        if ((1U & (~ (IData)(vlSelf->CPU__DOT__axi_arbiter_inst__DOT__r_crt)))) {
            vlSelf->rready = 1U;
        }
    }
    vlSelf->CPU__DOT__DCache_inst__DOT__wfsm_reset = 0U;
    vlSelf->CPU__DOT__mcause_global = 0U;
    if ((2U & (IData)(vlSelf->CPU__DOT__priv_vec_wb))) {
        vlSelf->CPU__DOT__mcause_global = 0xbU;
    }
    vlSelf->CPU__DOT__d_bready = 0U;
    vlSelf->CPU__DOT__d_wlast = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__read_from_cnt 
        = ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__fence_valid_pipe) 
           | (0U != (0x18U & (IData)(vlSelf->CPU__DOT__priv_vec_ex))));
    vlSelf->CPU__DOT__Hazard_inst__DOT__stall_by_load_use = 0U;
    if ((((IData)(vlSelf->CPU__DOT__mem_access_ex) 
          >> 3U) & (((0x1fU & (vlSelf->CPU__DOT__inst_ex 
                               >> 7U)) == (0x1fU & 
                                           (vlSelf->CPU__DOT__inst_id 
                                            >> 0xfU))) 
                    | ((0x1fU & (vlSelf->CPU__DOT__inst_ex 
                                 >> 7U)) == (0x1fU 
                                             & (vlSelf->CPU__DOT__inst_id 
                                                >> 0x14U)))))) {
        vlSelf->CPU__DOT__Hazard_inst__DOT__flush_by_load_use = 1U;
        vlSelf->CPU__DOT__Hazard_inst__DOT__stall_by_load_use = 1U;
    }
    vlSelf->CPU__DOT__Branch_inst__DOT____VdfgTmp_h8a7e5af4__0 
        = (IData)((0x18U == (0x18U & (IData)(vlSelf->CPU__DOT__br_type_ex))));
    vlSelf->CPU__DOT__DCache_inst__DOT__wrt_finish = 0U;
    vlSelf->CPU__DOT__ICache_inst__DOT__tag_rdata[0U] 
        = ((0x1000000U & vlSelf->CPU__DOT__ICache_inst__DOT__tag_rdata
            [0U]) | vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram
           [vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__addr_r]);
    vlSelf->CPU__DOT__ICache_inst__DOT__tag_rdata[1U] 
        = ((0x1000000U & vlSelf->CPU__DOT__ICache_inst__DOT__tag_rdata
            [1U]) | vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram
           [vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__addr_r]);
    vlSelf->CPU__DOT__DCache_inst__DOT____VdfgTmp_ha6d4d8ec__0 
        = (vlSelf->CPU__DOT__DCache_inst__DOT__valid_bit_rdata
           [0U] & (vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram
                   [vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__addr_r] 
                   == (vlSelf->CPU__DOT__DCache_inst__DOT__addr_pipe 
                       >> 8U)));
    vlSelf->CPU__DOT__forward2_en = 0U;
    vlSelf->CPU__DOT__forward1_en = 0U;
    if (vlSelf->CPU__DOT__wb_rf_sel_wb) {
        if (vlSelf->CPU__DOT__wb_rf_sel_wb) {
            vlSelf->CPU__DOT__rf_wdata_wb = vlSelf->CPU__DOT__mem_rdata_wb;
        }
    } else {
        vlSelf->CPU__DOT__rf_wdata_wb = vlSelf->CPU__DOT__alu_result_wb;
    }
    vlSelf->arlen = 0U;
    if ((1U & (~ ((IData)(vlSelf->CPU__DOT__axi_arbiter_inst__DOT__r_crt) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->CPU__DOT__axi_arbiter_inst__DOT__r_crt))) {
            if ((1U & (IData)(vlSelf->CPU__DOT__axi_arbiter_inst__DOT__r_crt))) {
                vlSelf->arvalid = 1U;
                if (vlSelf->CPU__DOT__DCache_inst__DOT__uncache) {
                    vlSelf->arsize = vlSelf->CPU__DOT__DCache_inst__DOT__rsize_pipe;
                    vlSelf->araddr = vlSelf->CPU__DOT__DCache_inst__DOT__addr_pipe;
                } else {
                    vlSelf->arsize = 2U;
                    vlSelf->araddr = (0xfffffff0U & vlSelf->CPU__DOT__DCache_inst__DOT__addr_pipe);
                }
                vlSelf->arlen = vlSelf->awlen;
            }
            if ((1U & (~ (IData)(vlSelf->CPU__DOT__axi_arbiter_inst__DOT__r_crt)))) {
                vlSelf->CPU__DOT__i_rlast = vlSelf->rlast;
                vlSelf->CPU__DOT__i_rready = vlSelf->rvalid;
            }
        } else if ((1U & (IData)(vlSelf->CPU__DOT__axi_arbiter_inst__DOT__r_crt))) {
            vlSelf->arvalid = 1U;
            vlSelf->arsize = 2U;
            vlSelf->araddr = (0xfffffff0U & vlSelf->CPU__DOT__ICache_inst__DOT__addr_pipe);
            vlSelf->arlen = 3U;
        }
    }
    if ((2U & (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__state))) {
        if ((1U & (~ (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__state)))) {
            vlSelf->CPU__DOT__DCache_inst__DOT__lru_refill_update = 1U;
            vlSelf->CPU__DOT__DCache_inst__DOT__dirty_refill = 1U;
            vlSelf->CPU__DOT__DCache_inst__DOT__wdata_from_pipe = 0U;
        }
    }
    if (vlSelf->CPU__DOT__DCache_inst__DOT__wdata_from_pipe) {
        vlSelf->CPU__DOT__DCache_inst__DOT__mem_wdata[0U] 
            = vlSelf->CPU__DOT__DCache_inst__DOT__wdata_pipe_512[0U];
        vlSelf->CPU__DOT__DCache_inst__DOT__mem_wdata[1U] 
            = vlSelf->CPU__DOT__DCache_inst__DOT__wdata_pipe_512[1U];
        vlSelf->CPU__DOT__DCache_inst__DOT__mem_wdata[2U] 
            = vlSelf->CPU__DOT__DCache_inst__DOT__wdata_pipe_512[2U];
        vlSelf->CPU__DOT__DCache_inst__DOT__mem_wdata[3U] 
            = vlSelf->CPU__DOT__DCache_inst__DOT__wdata_pipe_512[3U];
    } else {
        vlSelf->CPU__DOT__DCache_inst__DOT__mem_wdata[0U] 
            = (((~ vlSelf->CPU__DOT__DCache_inst__DOT__wstrb_pipe_512[0U]) 
                & vlSelf->CPU__DOT__DCache_inst__DOT__ret_buf[0U]) 
               | (vlSelf->CPU__DOT__DCache_inst__DOT__wdata_pipe_512[0U] 
                  & vlSelf->CPU__DOT__DCache_inst__DOT__wstrb_pipe_512[0U]));
        vlSelf->CPU__DOT__DCache_inst__DOT__mem_wdata[1U] 
            = (((~ vlSelf->CPU__DOT__DCache_inst__DOT__wstrb_pipe_512[1U]) 
                & vlSelf->CPU__DOT__DCache_inst__DOT__ret_buf[1U]) 
               | (vlSelf->CPU__DOT__DCache_inst__DOT__wdata_pipe_512[1U] 
                  & vlSelf->CPU__DOT__DCache_inst__DOT__wstrb_pipe_512[1U]));
        vlSelf->CPU__DOT__DCache_inst__DOT__mem_wdata[2U] 
            = (((~ vlSelf->CPU__DOT__DCache_inst__DOT__wstrb_pipe_512[2U]) 
                & vlSelf->CPU__DOT__DCache_inst__DOT__ret_buf[2U]) 
               | (vlSelf->CPU__DOT__DCache_inst__DOT__wdata_pipe_512[2U] 
                  & vlSelf->CPU__DOT__DCache_inst__DOT__wstrb_pipe_512[2U]));
        vlSelf->CPU__DOT__DCache_inst__DOT__mem_wdata[3U] 
            = (((~ vlSelf->CPU__DOT__DCache_inst__DOT__wstrb_pipe_512[3U]) 
                & vlSelf->CPU__DOT__DCache_inst__DOT__ret_buf[3U]) 
               | (vlSelf->CPU__DOT__DCache_inst__DOT__wdata_pipe_512[3U] 
                  & vlSelf->CPU__DOT__DCache_inst__DOT__wstrb_pipe_512[3U]));
    }
    CPU__DOT__Hazard_inst__DOT____VdfgTmp_hfe9ab642__0 
        = ((0U != (IData)(vlSelf->CPU__DOT__priv_vec_ex)) 
           | (0U != vlSelf->CPU__DOT__mcause_global));
    if ((0U != (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__wfsm_state))) {
        if ((1U == (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__wfsm_state))) {
            vlSelf->CPU__DOT__d_wvalid = (1U & (~ ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__write_counter) 
                                                   >> 2U)));
            vlSelf->CPU__DOT__d_bready = 1U;
            vlSelf->CPU__DOT__d_wlast = ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__write_counter) 
                                         == ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__uncache)
                                              ? 0U : 3U));
        }
    }
    __Vtableidx5 = (((IData)(vlSelf->CPU__DOT__d_wvalid) 
                     << 6U) | (((IData)(vlSelf->awready) 
                                << 5U) | (((IData)(vlSelf->CPU__DOT__d_wlast) 
                                           << 4U) | 
                                          (((IData)(vlSelf->wready) 
                                            << 3U) 
                                           | (((IData)(vlSelf->bvalid) 
                                               << 2U) 
                                              | (IData)(vlSelf->CPU__DOT__axi_arbiter_inst__DOT__w_crt))))));
    vlSelf->CPU__DOT__axi_arbiter_inst__DOT__w_nxt 
        = VCPU__ConstPool__TABLE_hf616aee3_0[__Vtableidx5];
    __Vtableidx6 = (((IData)(vlSelf->CPU__DOT__d_bready) 
                     << 5U) | (((IData)(vlSelf->bvalid) 
                                << 4U) | (((IData)(vlSelf->CPU__DOT__d_wlast) 
                                           << 3U) | 
                                          (((IData)(vlSelf->wready) 
                                            << 2U) 
                                           | (IData)(vlSelf->CPU__DOT__axi_arbiter_inst__DOT__w_crt)))));
    vlSelf->CPU__DOT__d_wready = VCPU__ConstPool__TABLE_h547d70dc_0
        [__Vtableidx6];
    vlSelf->CPU__DOT__d_bvalid = VCPU__ConstPool__TABLE_h8900deca_0
        [__Vtableidx6];
    vlSelf->bready = VCPU__ConstPool__TABLE_h3f1e26a2_0
        [__Vtableidx6];
    vlSelf->awvalid = VCPU__ConstPool__TABLE_h07d257b7_0
        [__Vtableidx6];
    vlSelf->wvalid = VCPU__ConstPool__TABLE_h8a061d4b_0
        [__Vtableidx6];
    vlSelf->wlast = VCPU__ConstPool__TABLE_h02f04120_0
        [__Vtableidx6];
    vlSelf->CPU__DOT__Branch_inst__DOT__is_jalr = (
                                                   (~ 
                                                    ((IData)(vlSelf->CPU__DOT__br_type_ex) 
                                                     >> 2U)) 
                                                   & (IData)(vlSelf->CPU__DOT__Branch_inst__DOT____VdfgTmp_h8a7e5af4__0));
    vlSelf->CPU__DOT__DCache_inst__DOT__dirty_clean_all = 0U;
    if ((0U != (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__wfsm_state))) {
        if ((1U != (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__wfsm_state))) {
            if ((2U == (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__wfsm_state))) {
                vlSelf->CPU__DOT__DCache_inst__DOT__wrt_finish = 1U;
            }
        }
    }
    vlSelf->CPU__DOT__ICache_inst__DOT____VdfgTmp_h32c1d4e2__0 
        = ((vlSelf->CPU__DOT__ICache_inst__DOT__tag_rdata
            [0U] >> 0x18U) & ((0xffffffU & vlSelf->CPU__DOT__ICache_inst__DOT__tag_rdata
                               [0U]) == (vlSelf->CPU__DOT__ICache_inst__DOT__addr_pipe 
                                         >> 8U)));
    __Vtemp_hab5a02e1__0[0U] = vlSelf->CPU__DOT__DCache_inst__DOT__mem_rdata
        [(1U & (~ (IData)(vlSelf->CPU__DOT__DCache_inst__DOT____VdfgTmp_ha6d4d8ec__0)))][0U];
    __Vtemp_hab5a02e1__0[1U] = vlSelf->CPU__DOT__DCache_inst__DOT__mem_rdata
        [(1U & (~ (IData)(vlSelf->CPU__DOT__DCache_inst__DOT____VdfgTmp_ha6d4d8ec__0)))][1U];
    __Vtemp_hab5a02e1__0[2U] = vlSelf->CPU__DOT__DCache_inst__DOT__mem_rdata
        [(1U & (~ (IData)(vlSelf->CPU__DOT__DCache_inst__DOT____VdfgTmp_ha6d4d8ec__0)))][2U];
    __Vtemp_hab5a02e1__0[3U] = vlSelf->CPU__DOT__DCache_inst__DOT__mem_rdata
        [(1U & (~ (IData)(vlSelf->CPU__DOT__DCache_inst__DOT____VdfgTmp_ha6d4d8ec__0)))][3U];
    VL_SHIFTR_WWI(128,128,7, __Vtemp_h9b694aeb__0, __Vtemp_hab5a02e1__0, 
                  (0x60U & (vlSelf->CPU__DOT__DCache_inst__DOT__addr_pipe 
                            << 3U)));
    VL_SHIFTR_WWI(128,128,32, __Vtemp_hd40e0d09__0, vlSelf->CPU__DOT__DCache_inst__DOT__ret_buf, 0x60U);
    VL_SHIFTR_WWI(128,128,7, __Vtemp_h4fc542b6__0, vlSelf->CPU__DOT__DCache_inst__DOT__ret_buf, 
                  (0x60U & (vlSelf->CPU__DOT__DCache_inst__DOT__addr_pipe 
                            << 3U)));
    if ((2U & (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__state))) {
        if ((1U & (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__state))) {
            if ((1U & (~ (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__fence_valid_pipe)))) {
                vlSelf->CPU__DOT__DCache_inst__DOT__data_from_mem = 0U;
            }
        }
    }
    vlSelf->CPU__DOT__DCache_Read_Ctrl_inst__DOT__load_data 
        = (((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__data_from_mem)
             ? __Vtemp_h9b694aeb__0[0U] : ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__uncache)
                                            ? __Vtemp_hd40e0d09__0[0U]
                                            : __Vtemp_h4fc542b6__0[0U])) 
           >> (0x18U & (vlSelf->CPU__DOT__alu_result_ls 
                        << 3U)));
    vlSelf->CPU__DOT__DCache_inst__DOT__hit = (((vlSelf->CPU__DOT__DCache_inst__DOT__valid_bit_rdata
                                                 [1U] 
                                                 & (vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram
                                                    [vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__addr_r] 
                                                    == 
                                                    (vlSelf->CPU__DOT__DCache_inst__DOT__addr_pipe 
                                                     >> 8U))) 
                                                << 1U) 
                                               | (IData)(vlSelf->CPU__DOT__DCache_inst__DOT____VdfgTmp_ha6d4d8ec__0));
    vlSelf->CPU__DOT__forward2_data = 0U;
    if (((IData)(vlSelf->CPU__DOT__rf_we_ls) & ((0x1fU 
                                                 & (vlSelf->CPU__DOT__inst_ls 
                                                    >> 7U)) 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->CPU__DOT__inst_ex 
                                                    >> 0x14U))))) {
        vlSelf->CPU__DOT__forward2_en = 1U;
        vlSelf->CPU__DOT__forward2_data = vlSelf->CPU__DOT__alu_result_ls;
    } else if (((IData)(vlSelf->CPU__DOT__rf_we_wb) 
                & ((0x1fU & (vlSelf->CPU__DOT__inst_wb 
                             >> 7U)) == (0x1fU & (vlSelf->CPU__DOT__inst_ex 
                                                  >> 0x14U))))) {
        vlSelf->CPU__DOT__forward2_en = 1U;
        vlSelf->CPU__DOT__forward2_data = vlSelf->CPU__DOT__rf_wdata_wb;
    }
    vlSelf->CPU__DOT__forward1_data = 0U;
    if (((IData)(vlSelf->CPU__DOT__rf_we_ls) & ((0x1fU 
                                                 & (vlSelf->CPU__DOT__inst_ls 
                                                    >> 7U)) 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->CPU__DOT__inst_ex 
                                                    >> 0xfU))))) {
        vlSelf->CPU__DOT__forward1_en = 1U;
        vlSelf->CPU__DOT__forward1_data = vlSelf->CPU__DOT__alu_result_ls;
    } else if (((IData)(vlSelf->CPU__DOT__rf_we_wb) 
                & ((0x1fU & (vlSelf->CPU__DOT__inst_wb 
                             >> 7U)) == (0x1fU & (vlSelf->CPU__DOT__inst_ex 
                                                  >> 0xfU))))) {
        vlSelf->CPU__DOT__forward1_en = 1U;
        vlSelf->CPU__DOT__forward1_data = vlSelf->CPU__DOT__rf_wdata_wb;
    }
    vlSelf->CPU__DOT__DCache_inst__DOT__write_counter_en = 0U;
    if ((0U != (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__wfsm_state))) {
        if ((1U == (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__wfsm_state))) {
            vlSelf->CPU__DOT__DCache_inst__DOT__write_counter_en 
                = vlSelf->CPU__DOT__d_wready;
        }
    }
    vlSelf->CPU__DOT__DCache_inst__DOT__w_index = (0xfU 
                                                   & ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__read_from_cnt)
                                                       ? (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__addr_cnt)
                                                       : 
                                                      (vlSelf->CPU__DOT__DCache_inst__DOT__addr_pipe 
                                                       >> 4U)));
    vlSelf->CPU__DOT__DCache_inst__DOT__lru_sel = (1U 
                                                   & (~ 
                                                      ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__lru) 
                                                       >> (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__w_index))));
    vlSelf->CPU__DOT__ICache_inst__DOT__hit = ((0x1feU 
                                                & ((vlSelf->CPU__DOT__ICache_inst__DOT__tag_rdata
                                                    [1U] 
                                                    >> 0x17U) 
                                                   & (((0xffffffU 
                                                        & vlSelf->CPU__DOT__ICache_inst__DOT__tag_rdata
                                                        [1U]) 
                                                       == 
                                                       (vlSelf->CPU__DOT__ICache_inst__DOT__addr_pipe 
                                                        >> 8U)) 
                                                      << 1U))) 
                                               | (IData)(vlSelf->CPU__DOT__ICache_inst__DOT____VdfgTmp_h32c1d4e2__0));
    vlSelf->CPU__DOT__DCache_inst__DOT__lru_hit_update = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__dirty_we = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__mbuf_we = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__wbuf_we = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__req_buf_we = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__wfsm_en = 0U;
    if ((1U & (~ ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__state) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__state))) {
            if (vlSelf->CPU__DOT__DCache_inst__DOT__fence_valid_pipe) {
                vlSelf->CPU__DOT__DCache_inst__DOT__addr_cnt_add = 1U;
                vlSelf->CPU__DOT__DCache_inst__DOT__mbuf_we = 1U;
                vlSelf->CPU__DOT__DCache_inst__DOT__wbuf_we = 1U;
                vlSelf->CPU__DOT__DCache_inst__DOT__wfsm_en = 1U;
            }
            if ((1U & (~ (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__fence_valid_pipe)))) {
                vlSelf->CPU__DOT__d_rvalid = 1U;
            }
        } else if (((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__rvalid_pipe) 
                    | (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__wvalid_pipe))) {
            if (vlSelf->CPU__DOT__DCache_inst__DOT__uncache) {
                vlSelf->CPU__DOT__DCache_inst__DOT__mbuf_we = 1U;
                vlSelf->CPU__DOT__DCache_inst__DOT__wbuf_we = 1U;
                vlSelf->CPU__DOT__DCache_inst__DOT__wfsm_en = 1U;
            } else if ((1U & (~ (IData)((0U != (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__hit)))))) {
                vlSelf->CPU__DOT__DCache_inst__DOT__mbuf_we = 1U;
                vlSelf->CPU__DOT__DCache_inst__DOT__wbuf_we = 1U;
                vlSelf->CPU__DOT__DCache_inst__DOT__wfsm_en = 1U;
            }
        } else if (vlSelf->CPU__DOT__DCache_inst__DOT__fence_valid_pipe) {
            vlSelf->CPU__DOT__DCache_inst__DOT__mbuf_we = 1U;
            vlSelf->CPU__DOT__DCache_inst__DOT__wbuf_we = 1U;
            vlSelf->CPU__DOT__DCache_inst__DOT__wfsm_en = 1U;
        }
        if ((1U & (~ (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__state)))) {
            if (((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__rvalid_pipe) 
                 | (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__wvalid_pipe))) {
                if ((1U & (~ (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__uncache)))) {
                    if ((0U != (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__hit))) {
                        vlSelf->CPU__DOT__DCache_inst__DOT__lru_hit_update = 1U;
                        vlSelf->CPU__DOT__DCache_inst__DOT__dirty_we 
                            = vlSelf->CPU__DOT__DCache_inst__DOT__we_pipe;
                    }
                }
            }
        }
    }
    vlSelf->CPU__DOT__dcache_miss = 0U;
    if (vlSelf->CPU__DOT__forward2_en) {
        if (vlSelf->CPU__DOT__forward2_en) {
            vlSelf->CPU__DOT__alu_rf_data2 = vlSelf->CPU__DOT__forward2_data;
        }
    } else {
        vlSelf->CPU__DOT__alu_rf_data2 = vlSelf->CPU__DOT__rf_rdata2_ex;
    }
    if (vlSelf->CPU__DOT__forward1_en) {
        if (vlSelf->CPU__DOT__forward1_en) {
            vlSelf->CPU__DOT__alu_rf_data1 = vlSelf->CPU__DOT__forward1_data;
        }
    } else {
        vlSelf->CPU__DOT__alu_rf_data1 = vlSelf->CPU__DOT__rf_rdata1_ex;
    }
    vlSelf->CPU__DOT__DCache_inst__DOT__tagv_we = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__mem_we[0U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__mem_we[1U] = 0U;
    if ((2U & (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__state))) {
        if ((1U & (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__state))) {
            vlSelf->CPU__DOT__DCache_inst__DOT__wfsm_reset = 1U;
            if (vlSelf->CPU__DOT__DCache_inst__DOT__fence_valid_pipe) {
                vlSelf->CPU__DOT__DCache_inst__DOT__dirty_clean_all 
                    = ((0U == (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__addr_cnt)) 
                       & (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__wrt_finish));
                vlSelf->CPU__DOT__DCache_inst__DOT__req_buf_we 
                    = ((0U == (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__addr_cnt)) 
                       & (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__wrt_finish));
            } else {
                vlSelf->CPU__DOT__DCache_inst__DOT__req_buf_we 
                    = vlSelf->CPU__DOT__DCache_inst__DOT__wrt_finish;
            }
            vlSelf->CPU__DOT__DCache_inst__DOT__next_state 
                = ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__wrt_finish)
                    ? ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__fence_valid_pipe)
                        ? ((0U == (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__addr_cnt))
                            ? 0U : 1U) : 0U) : 3U);
        } else {
            vlSelf->CPU__DOT__DCache_inst__DOT__next_state = 3U;
        }
        vlSelf->CPU__DOT__dcache_miss = (1U & ((~ (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__state)) 
                                               | ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__fence_valid_pipe)
                                                   ? 
                                                  (~ 
                                                   ((0U 
                                                     == (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__addr_cnt)) 
                                                    & (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__wrt_finish)))
                                                   : 
                                                  (~ (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__wrt_finish)))));
        if ((1U & (~ (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__state)))) {
            vlSelf->CPU__DOT__DCache_inst__DOT__tagv_we 
                = ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__tagv_we) 
                   | (3U & ((IData)(1U) << (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__lru_sel))));
            vlSelf->CPU__DOT__DCache_inst__DOT__mem_we[vlSelf->CPU__DOT__DCache_inst__DOT__lru_sel] = 0xffffU;
        }
    } else {
        if ((1U & (~ (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__state)))) {
            if (((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__rvalid_pipe) 
                 | (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__wvalid_pipe))) {
                if ((1U & (~ (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__uncache)))) {
                    if ((0U != (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__hit))) {
                        vlSelf->CPU__DOT__DCache_inst__DOT__req_buf_we = 1U;
                        vlSelf->CPU__DOT__DCache_inst__DOT__mem_we[(1U 
                                                                    & (~ (IData)(vlSelf->CPU__DOT__DCache_inst__DOT____VdfgTmp_ha6d4d8ec__0)))] 
                            = (0xffffU & ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__wstrb_pipe) 
                                          << (0xcU 
                                              & vlSelf->CPU__DOT__DCache_inst__DOT__addr_pipe)));
                    }
                }
            } else if ((1U & (~ (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__fence_valid_pipe)))) {
                vlSelf->CPU__DOT__DCache_inst__DOT__req_buf_we = 1U;
            }
        }
        if ((1U & (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__state))) {
            vlSelf->CPU__DOT__DCache_inst__DOT__next_state 
                = ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__fence_valid_pipe)
                    ? 3U : (((IData)(vlSelf->CPU__DOT__d_rready) 
                             & (IData)(vlSelf->CPU__DOT__d_rlast))
                             ? ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__uncache)
                                 ? 3U : 2U) : 1U));
            vlSelf->CPU__DOT__dcache_miss = 1U;
        } else if (((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__rvalid_pipe) 
                    | (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__wvalid_pipe))) {
            if (vlSelf->CPU__DOT__DCache_inst__DOT__uncache) {
                vlSelf->CPU__DOT__DCache_inst__DOT__next_state 
                    = ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__wvalid_pipe)
                        ? 3U : 1U);
                vlSelf->CPU__DOT__dcache_miss = 1U;
            } else {
                vlSelf->CPU__DOT__DCache_inst__DOT__next_state 
                    = ((0U != (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__hit))
                        ? 0U : 1U);
                if ((1U & (~ (IData)((0U != (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__hit)))))) {
                    vlSelf->CPU__DOT__dcache_miss = 1U;
                }
            }
        } else if (vlSelf->CPU__DOT__DCache_inst__DOT__fence_valid_pipe) {
            vlSelf->CPU__DOT__DCache_inst__DOT__next_state = 1U;
            vlSelf->CPU__DOT__dcache_miss = 1U;
        } else {
            vlSelf->CPU__DOT__DCache_inst__DOT__next_state = 0U;
        }
    }
    __Vtableidx1 = (((IData)((0U != (IData)(vlSelf->CPU__DOT__ICache_inst__DOT__hit))) 
                     << 5U) | (((IData)(vlSelf->CPU__DOT__ICache_inst__DOT__rvalid_pipe) 
                                << 4U) | (((IData)(vlSelf->CPU__DOT__i_rlast) 
                                           << 3U) | 
                                          (((IData)(vlSelf->CPU__DOT__i_rready) 
                                            << 2U) 
                                           | (IData)(vlSelf->CPU__DOT__ICache_inst__DOT__state)))));
    vlSelf->CPU__DOT__ICache_inst__DOT__next_state 
        = VCPU__ConstPool__TABLE_h6fe32423_0[__Vtableidx1];
    __Vtableidx3 = (((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__wfsm_reset) 
                     << 8U) | (((IData)(vlSelf->CPU__DOT__d_bvalid) 
                                << 7U) | ((((1U & (
                                                   vlSelf->CPU__DOT__DCache_inst__DOT__dirty_table
                                                   [
                                                   (1U 
                                                    & ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__fence_valid_pipe)
                                                        ? 
                                                       ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__addr_cnt) 
                                                        >> 4U)
                                                        : (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__lru_sel)))] 
                                                   >> (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__w_index)))
                                             ? 1U : 2U) 
                                           << 5U) | 
                                          (((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__we_pipe) 
                                            << 4U) 
                                           | (((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__uncache) 
                                               << 3U) 
                                              | (((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__wfsm_en) 
                                                  << 2U) 
                                                 | (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__wfsm_state)))))));
    vlSelf->CPU__DOT__DCache_inst__DOT__wfsm_next_state 
        = VCPU__ConstPool__TABLE_h0c337be4_0[__Vtableidx3];
    vlSelf->CPU__DOT__IF2_ID_stall = ((IData)(vlSelf->CPU__DOT__Hazard_inst__DOT__stall_by_load_use) 
                                      | (IData)(vlSelf->CPU__DOT__dcache_miss));
    vlSelf->CPU__DOT__alu_rs2 = ((2U & (IData)(vlSelf->CPU__DOT__alu_rs2_sel_ex))
                                  ? ((1U & (IData)(vlSelf->CPU__DOT__alu_rs2_sel_ex))
                                      ? vlSelf->CPU__DOT__csr_rdata_ex
                                      : 4U) : ((1U 
                                                & (IData)(vlSelf->CPU__DOT__alu_rs2_sel_ex))
                                                ? vlSelf->CPU__DOT__imm_ex
                                                : vlSelf->CPU__DOT__alu_rf_data2));
    vlSelf->CPU__DOT__jump_target = ((IData)(vlSelf->CPU__DOT__Branch_inst__DOT__is_jalr)
                                      ? (vlSelf->CPU__DOT__alu_rf_data1 
                                         + vlSelf->CPU__DOT__imm_ex)
                                      : (vlSelf->CPU__DOT__imm_ex 
                                         + vlSelf->CPU__DOT__pc_ex));
    vlSelf->CPU__DOT__jump = ((IData)((0x10U == (0x18U 
                                                 & (IData)(vlSelf->CPU__DOT__br_type_ex))))
                               ? ((4U & (IData)(vlSelf->CPU__DOT__br_type_ex))
                                   ? ((2U & (IData)(vlSelf->CPU__DOT__br_type_ex))
                                       ? ((1U & (IData)(vlSelf->CPU__DOT__br_type_ex))
                                           ? (vlSelf->CPU__DOT__alu_rf_data1 
                                              >= vlSelf->CPU__DOT__alu_rf_data2)
                                           : (vlSelf->CPU__DOT__alu_rf_data1 
                                              < vlSelf->CPU__DOT__alu_rf_data2))
                                       : ((1U & (IData)(vlSelf->CPU__DOT__br_type_ex))
                                           ? VL_GTES_III(32, vlSelf->CPU__DOT__alu_rf_data1, vlSelf->CPU__DOT__alu_rf_data2)
                                           : VL_LTS_III(32, vlSelf->CPU__DOT__alu_rf_data1, vlSelf->CPU__DOT__alu_rf_data2)))
                                   : ((~ ((IData)(vlSelf->CPU__DOT__br_type_ex) 
                                          >> 1U)) & 
                                      ((1U & (IData)(vlSelf->CPU__DOT__br_type_ex))
                                        ? (vlSelf->CPU__DOT__alu_rf_data1 
                                           != vlSelf->CPU__DOT__alu_rf_data2)
                                        : (vlSelf->CPU__DOT__alu_rf_data1 
                                           == vlSelf->CPU__DOT__alu_rf_data2))))
                               : (((IData)(vlSelf->CPU__DOT__Branch_inst__DOT____VdfgTmp_h8a7e5af4__0) 
                                   & ((IData)(vlSelf->CPU__DOT__br_type_ex) 
                                      >> 2U)) | (IData)(vlSelf->CPU__DOT__Branch_inst__DOT__is_jalr)));
    vlSelf->CPU__DOT__alu_rs1 = ((2U & (IData)(vlSelf->CPU__DOT__alu_rs1_sel_ex))
                                  ? 0U : ((1U & (IData)(vlSelf->CPU__DOT__alu_rs1_sel_ex))
                                           ? vlSelf->CPU__DOT__pc_ex
                                           : vlSelf->CPU__DOT__alu_rf_data1));
    __Vtableidx2 = (((IData)((0U != (IData)(vlSelf->CPU__DOT__ICache_inst__DOT__hit))) 
                     << 6U) | (((IData)(vlSelf->CPU__DOT__ICache_inst__DOT__rvalid_pipe) 
                                << 5U) | (((IData)(vlSelf->CPU__DOT__IF2_ID_stall) 
                                           << 4U) | 
                                          ((((1U & 
                                              ((IData)(vlSelf->CPU__DOT__ICache_inst__DOT__lru) 
                                               >> (0xfU 
                                                   & (vlSelf->CPU__DOT__ICache_inst__DOT__addr_pipe 
                                                      >> 4U))))
                                              ? 2U : 1U) 
                                            << 2U) 
                                           | (IData)(vlSelf->CPU__DOT__ICache_inst__DOT__state)))));
    vlSelf->CPU__DOT__ICache_inst__DOT__req_buf_we 
        = VCPU__ConstPool__TABLE_hb84233db_0[__Vtableidx2];
    vlSelf->CPU__DOT__i_rvalid = VCPU__ConstPool__TABLE_h57739968_0
        [__Vtableidx2];
    vlSelf->CPU__DOT__ICache_inst__DOT__tagv_we = VCPU__ConstPool__TABLE_he1c44a55_0
        [__Vtableidx2];
    vlSelf->CPU__DOT__ICache_inst__DOT__mem_we = VCPU__ConstPool__TABLE_he1c44a55_0
        [__Vtableidx2];
    vlSelf->CPU__DOT__ICache_inst__DOT__data_from_mem 
        = VCPU__ConstPool__TABLE_h27544bbf_0[__Vtableidx2];
    vlSelf->CPU__DOT__ICache_inst__DOT__lru_hit_update 
        = VCPU__ConstPool__TABLE_hf63d9f85_0[__Vtableidx2];
    vlSelf->CPU__DOT__ICache_inst__DOT__lru_refill_update 
        = VCPU__ConstPool__TABLE_hed1d605a_0[__Vtableidx2];
    vlSelf->CPU__DOT__icache_miss = VCPU__ConstPool__TABLE_h8dd2850e_0
        [__Vtableidx2];
    vlSelf->CPU__DOT__ALU_inst__DOT__sr2_abs = ((vlSelf->CPU__DOT__alu_rs2 
                                                 >> 0x1fU)
                                                 ? 
                                                (- vlSelf->CPU__DOT__alu_rs2)
                                                 : vlSelf->CPU__DOT__alu_rs2);
    vlSelf->CPU__DOT__ID_EX_flush = (((~ (IData)(vlSelf->CPU__DOT__dcache_miss)) 
                                      & ((IData)(vlSelf->CPU__DOT__jump) 
                                         | ((IData)(vlSelf->CPU__DOT__Hazard_inst__DOT__flush_by_load_use) 
                                            | (0U != (IData)(vlSelf->CPU__DOT__priv_vec_ex))))) 
                                     | (0U != vlSelf->CPU__DOT__mcause_global));
    vlSelf->CPU__DOT__pc_set = ((IData)(vlSelf->CPU__DOT__jump) 
                                | (IData)(CPU__DOT__Hazard_inst__DOT____VdfgTmp_hfe9ab642__0));
    vlSelf->CPU__DOT__pc_target = vlSelf->CPU__DOT__jump_target;
    if ((0U != vlSelf->CPU__DOT__mcause_global)) {
        vlSelf->CPU__DOT__pc_target = vlSelf->CPU__DOT__CSR_inst__DOT__mtvec;
    } else if ((0U != (IData)(vlSelf->CPU__DOT__priv_vec_ex))) {
        vlSelf->CPU__DOT__pc_target = ((4U & (IData)(vlSelf->CPU__DOT__priv_vec_ex))
                                        ? vlSelf->CPU__DOT__CSR_inst__DOT__mepc
                                        : ((IData)(4U) 
                                           + vlSelf->CPU__DOT__pc_ex));
    } else if (vlSelf->CPU__DOT__jump) {
        vlSelf->CPU__DOT__pc_target = vlSelf->CPU__DOT__jump_target;
    }
    vlSelf->CPU__DOT__ALU_inst__DOT____VdfgTmp_h175d6d08__0 
        = ((vlSelf->CPU__DOT__alu_rs1 ^ vlSelf->CPU__DOT__alu_rs2) 
           >> 0x1fU);
    vlSelf->CPU__DOT__ALU_inst__DOT__sr1_abs = ((vlSelf->CPU__DOT__alu_rs1 
                                                 >> 0x1fU)
                                                 ? 
                                                (- vlSelf->CPU__DOT__alu_rs1)
                                                 : vlSelf->CPU__DOT__alu_rs1);
    __Vtableidx4 = (((IData)(vlSelf->CPU__DOT__i_rvalid) 
                     << 7U) | (((IData)(vlSelf->CPU__DOT__d_rvalid) 
                                << 6U) | (((IData)(vlSelf->arready) 
                                           << 5U) | 
                                          (((IData)(vlSelf->rlast) 
                                            << 4U) 
                                           | (((IData)(vlSelf->rvalid) 
                                               << 3U) 
                                              | (IData)(vlSelf->CPU__DOT__axi_arbiter_inst__DOT__r_crt))))));
    vlSelf->CPU__DOT__axi_arbiter_inst__DOT__r_nxt 
        = VCPU__ConstPool__TABLE_h66fd1b2c_0[__Vtableidx4];
    vlSelf->CPU__DOT__pc_stall = ((IData)(vlSelf->CPU__DOT__Hazard_inst__DOT__stall_by_load_use) 
                                  | ((IData)(vlSelf->CPU__DOT__dcache_miss) 
                                     | (IData)(vlSelf->CPU__DOT__icache_miss)));
    vlSelf->CPU__DOT__ICache_inst__DOT__r_index = (0xfU 
                                                   & (((IData)(vlSelf->CPU__DOT__icache_miss) 
                                                       | (IData)(vlSelf->CPU__DOT__IF2_ID_stall))
                                                       ? 
                                                      (vlSelf->CPU__DOT__ICache_inst__DOT__addr_pipe 
                                                       >> 4U)
                                                       : 
                                                      (vlSelf->CPU__DOT__PC_inst__DOT__pc_reg 
                                                       >> 4U)));
    vlSelf->CPU__DOT__IF2_ID_flush = (((~ (IData)(vlSelf->CPU__DOT__IF2_ID_stall)) 
                                       & ((IData)(vlSelf->CPU__DOT__icache_miss) 
                                          | (IData)(vlSelf->CPU__DOT__jump))) 
                                      | (IData)(CPU__DOT__Hazard_inst__DOT____VdfgTmp_hfe9ab642__0));
    vlSelf->CPU__DOT__next_pc = ((IData)(vlSelf->CPU__DOT__pc_set)
                                  ? vlSelf->CPU__DOT__pc_target
                                  : ((IData)(4U) + vlSelf->CPU__DOT__PC_inst__DOT__pc_reg));
    CPU__DOT__ALU_inst__DOT____VdfgTmp_h065b4e26__0 
        = VL_MODDIV_III(32, vlSelf->CPU__DOT__ALU_inst__DOT__sr1_abs, vlSelf->CPU__DOT__ALU_inst__DOT__sr2_abs);
    CPU__DOT__ALU_inst__DOT____VdfgTmp_h08f9e919__0 
        = VL_DIV_III(32, vlSelf->CPU__DOT__ALU_inst__DOT__sr1_abs, vlSelf->CPU__DOT__ALU_inst__DOT__sr2_abs);
    if ((0x10U & (IData)(vlSelf->CPU__DOT__alu_op_ex))) {
        vlSelf->CPU__DOT__ALU_inst__DOT__result_64 = 0ULL;
        vlSelf->CPU__DOT__ALU_inst__DOT__result_rem = 0U;
        vlSelf->CPU__DOT__ALU_inst__DOT__result_div = 0U;
        vlSelf->CPU__DOT__alu_result_ex = ((8U & (IData)(vlSelf->CPU__DOT__alu_op_ex))
                                            ? 0U : 
                                           ((4U & (IData)(vlSelf->CPU__DOT__alu_op_ex))
                                             ? ((2U 
                                                 & (IData)(vlSelf->CPU__DOT__alu_op_ex))
                                                 ? 0U
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->CPU__DOT__alu_op_ex))
                                                  ? 
                                                 VL_SHIFTRS_III(32,32,5, vlSelf->CPU__DOT__alu_rs1, 
                                                                (0x1fU 
                                                                 & vlSelf->CPU__DOT__alu_rs2))
                                                  : 0U))
                                             : ((2U 
                                                 & (IData)(vlSelf->CPU__DOT__alu_op_ex))
                                                 ? 0U
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->CPU__DOT__alu_op_ex))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->CPU__DOT__alu_rs1 
                                                  - vlSelf->CPU__DOT__alu_rs2)))));
    } else if ((8U & (IData)(vlSelf->CPU__DOT__alu_op_ex))) {
        if ((4U & (IData)(vlSelf->CPU__DOT__alu_op_ex))) {
            vlSelf->CPU__DOT__ALU_inst__DOT__result_64 = 0ULL;
            if ((1U & (IData)(vlSelf->CPU__DOT__alu_op_ex))) {
                vlSelf->CPU__DOT__ALU_inst__DOT__result_rem 
                    = VL_MODDIV_III(32, vlSelf->CPU__DOT__alu_rs1, vlSelf->CPU__DOT__alu_rs2);
                vlSelf->CPU__DOT__ALU_inst__DOT__result_div 
                    = VL_DIV_III(32, vlSelf->CPU__DOT__alu_rs1, vlSelf->CPU__DOT__alu_rs2);
            } else {
                vlSelf->CPU__DOT__ALU_inst__DOT__result_rem 
                    = ((vlSelf->CPU__DOT__alu_rs1 >> 0x1fU)
                        ? (- CPU__DOT__ALU_inst__DOT____VdfgTmp_h065b4e26__0)
                        : CPU__DOT__ALU_inst__DOT____VdfgTmp_h065b4e26__0);
                vlSelf->CPU__DOT__ALU_inst__DOT__result_div 
                    = ((IData)(vlSelf->CPU__DOT__ALU_inst__DOT____VdfgTmp_h175d6d08__0)
                        ? (- CPU__DOT__ALU_inst__DOT____VdfgTmp_h08f9e919__0)
                        : CPU__DOT__ALU_inst__DOT____VdfgTmp_h08f9e919__0);
            }
            vlSelf->CPU__DOT__alu_result_ex = ((2U 
                                                & (IData)(vlSelf->CPU__DOT__alu_op_ex))
                                                ? (
                                                   (0U 
                                                    == vlSelf->CPU__DOT__alu_rs2)
                                                    ? vlSelf->CPU__DOT__alu_rs1
                                                    : vlSelf->CPU__DOT__ALU_inst__DOT__result_rem)
                                                : (
                                                   (0U 
                                                    == vlSelf->CPU__DOT__alu_rs2)
                                                    ? 0xffffffffU
                                                    : vlSelf->CPU__DOT__ALU_inst__DOT__result_div));
        } else {
            if ((2U & (IData)(vlSelf->CPU__DOT__alu_op_ex))) {
                vlSelf->CPU__DOT__ALU_inst__DOT__result_64 
                    = ((1U & (IData)(vlSelf->CPU__DOT__alu_op_ex))
                        ? ((QData)((IData)(vlSelf->CPU__DOT__alu_rs1)) 
                           * (QData)((IData)(vlSelf->CPU__DOT__alu_rs2)))
                        : ((((QData)((IData)((- (IData)(
                                                        (vlSelf->CPU__DOT__alu_rs1 
                                                         >> 0x1fU))))) 
                             << 0x20U) | (QData)((IData)(vlSelf->CPU__DOT__alu_rs1))) 
                           * (QData)((IData)(vlSelf->CPU__DOT__alu_rs2))));
                vlSelf->CPU__DOT__alu_result_ex = (IData)(
                                                          (vlSelf->CPU__DOT__ALU_inst__DOT__result_64 
                                                           >> 0x20U));
            } else if ((1U & (IData)(vlSelf->CPU__DOT__alu_op_ex))) {
                vlSelf->CPU__DOT__ALU_inst__DOT__result_64 
                    = ((((QData)((IData)((- (IData)(
                                                    (vlSelf->CPU__DOT__alu_rs1 
                                                     >> 0x1fU))))) 
                         << 0x20U) | (QData)((IData)(vlSelf->CPU__DOT__alu_rs1))) 
                       * (((QData)((IData)((- (IData)(
                                                      (vlSelf->CPU__DOT__alu_rs2 
                                                       >> 0x1fU))))) 
                           << 0x20U) | (QData)((IData)(vlSelf->CPU__DOT__alu_rs2))));
                vlSelf->CPU__DOT__alu_result_ex = (IData)(
                                                          (vlSelf->CPU__DOT__ALU_inst__DOT__result_64 
                                                           >> 0x20U));
            } else {
                vlSelf->CPU__DOT__ALU_inst__DOT__result_64 
                    = ((((QData)((IData)((- (IData)(
                                                    (vlSelf->CPU__DOT__alu_rs1 
                                                     >> 0x1fU))))) 
                         << 0x20U) | (QData)((IData)(vlSelf->CPU__DOT__alu_rs1))) 
                       * (((QData)((IData)((- (IData)(
                                                      (vlSelf->CPU__DOT__alu_rs2 
                                                       >> 0x1fU))))) 
                           << 0x20U) | (QData)((IData)(vlSelf->CPU__DOT__alu_rs2))));
                vlSelf->CPU__DOT__alu_result_ex = (IData)(vlSelf->CPU__DOT__ALU_inst__DOT__result_64);
            }
            vlSelf->CPU__DOT__ALU_inst__DOT__result_rem = 0U;
            vlSelf->CPU__DOT__ALU_inst__DOT__result_div = 0U;
        }
    } else {
        vlSelf->CPU__DOT__ALU_inst__DOT__result_64 = 0ULL;
        vlSelf->CPU__DOT__ALU_inst__DOT__result_rem = 0U;
        vlSelf->CPU__DOT__ALU_inst__DOT__result_div = 0U;
        vlSelf->CPU__DOT__alu_result_ex = ((4U & (IData)(vlSelf->CPU__DOT__alu_op_ex))
                                            ? ((2U 
                                                & (IData)(vlSelf->CPU__DOT__alu_op_ex))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->CPU__DOT__alu_op_ex))
                                                    ? 
                                                   (vlSelf->CPU__DOT__alu_rs1 
                                                    & vlSelf->CPU__DOT__alu_rs2)
                                                    : 
                                                   (vlSelf->CPU__DOT__alu_rs1 
                                                    | vlSelf->CPU__DOT__alu_rs2))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->CPU__DOT__alu_op_ex))
                                                    ? 
                                                   (vlSelf->CPU__DOT__alu_rs1 
                                                    >> 
                                                    (0x1fU 
                                                     & vlSelf->CPU__DOT__alu_rs2))
                                                    : 
                                                   (vlSelf->CPU__DOT__alu_rs1 
                                                    ^ vlSelf->CPU__DOT__alu_rs2)))
                                            : ((2U 
                                                & (IData)(vlSelf->CPU__DOT__alu_op_ex))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->CPU__DOT__alu_op_ex))
                                                    ? 
                                                   (vlSelf->CPU__DOT__alu_rs1 
                                                    < vlSelf->CPU__DOT__alu_rs2)
                                                    : 
                                                   VL_LTS_III(32, vlSelf->CPU__DOT__alu_rs1, vlSelf->CPU__DOT__alu_rs2))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->CPU__DOT__alu_op_ex))
                                                    ? 
                                                   (vlSelf->CPU__DOT__alu_rs1 
                                                    << 
                                                    (0x1fU 
                                                     & vlSelf->CPU__DOT__alu_rs2))
                                                    : 
                                                   (vlSelf->CPU__DOT__alu_rs1 
                                                    + vlSelf->CPU__DOT__alu_rs2))));
    }
    vlSelf->CPU__DOT__DCache_inst__DOT__r_index = (0xfU 
                                                   & ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__read_from_cnt)
                                                       ? (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__addr_cnt)
                                                       : 
                                                      (vlSelf->CPU__DOT__alu_result_ex 
                                                       >> 4U)));
    vlSelf->CPU__DOT__wstrb_ex = ((0x10U & (IData)(vlSelf->CPU__DOT__mem_access_ex))
                                   ? (0xfU & ((0U == 
                                               (7U 
                                                & (IData)(vlSelf->CPU__DOT__mem_access_ex)))
                                               ? ((IData)(1U) 
                                                  << 
                                                  (3U 
                                                   & vlSelf->CPU__DOT__alu_result_ex))
                                               : ((1U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->CPU__DOT__mem_access_ex)))
                                                   ? 
                                                  ((IData)(3U) 
                                                   << 
                                                   (3U 
                                                    & vlSelf->CPU__DOT__alu_result_ex))
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->CPU__DOT__mem_access_ex)))
                                                    ? 0xfU
                                                    : 0U))))
                                   : 0U);
}

VL_ATTR_COLD void VCPU___024root___eval_stl(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VCPU___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCPU___024root___dump_triggers__ico(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VCPU___024root___dump_triggers__act(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VCPU___024root___dump_triggers__nba(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VCPU___024root___ctor_var_reset(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rstn = VL_RAND_RESET_I(1);
    vlSelf->araddr = VL_RAND_RESET_I(32);
    vlSelf->arvalid = VL_RAND_RESET_I(1);
    vlSelf->arready = VL_RAND_RESET_I(1);
    vlSelf->arlen = VL_RAND_RESET_I(8);
    vlSelf->arsize = VL_RAND_RESET_I(3);
    vlSelf->arburst = VL_RAND_RESET_I(2);
    vlSelf->rdata = VL_RAND_RESET_I(32);
    vlSelf->rresp = VL_RAND_RESET_I(2);
    vlSelf->rvalid = VL_RAND_RESET_I(1);
    vlSelf->rready = VL_RAND_RESET_I(1);
    vlSelf->rlast = VL_RAND_RESET_I(1);
    vlSelf->awaddr = VL_RAND_RESET_I(32);
    vlSelf->awvalid = VL_RAND_RESET_I(1);
    vlSelf->awready = VL_RAND_RESET_I(1);
    vlSelf->awlen = VL_RAND_RESET_I(8);
    vlSelf->awsize = VL_RAND_RESET_I(3);
    vlSelf->awburst = VL_RAND_RESET_I(2);
    vlSelf->wdata = VL_RAND_RESET_I(32);
    vlSelf->wstrb = VL_RAND_RESET_I(4);
    vlSelf->wvalid = VL_RAND_RESET_I(1);
    vlSelf->wready = VL_RAND_RESET_I(1);
    vlSelf->wlast = VL_RAND_RESET_I(1);
    vlSelf->bresp = VL_RAND_RESET_I(2);
    vlSelf->bvalid = VL_RAND_RESET_I(1);
    vlSelf->bready = VL_RAND_RESET_I(1);
    vlSelf->commit_wb = VL_RAND_RESET_I(1);
    vlSelf->uncache_read_wb = VL_RAND_RESET_I(1);
    vlSelf->inst = VL_RAND_RESET_I(32);
    vlSelf->pc_cur = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__pc_if2 = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__pc_id = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__pc_ex = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__pc_ls = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__pc_wb = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__inst_id = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__inst_ex = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__inst_ls = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__inst_wb = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__pc_target = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__imm_id = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__imm_ex = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__rf_wdata_wb = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__csr_rdata_ex = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__csr_wdata_ls = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__csr_wdata_wb = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__rf_rdata1_ex = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__rf_rdata2_ex = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__forward1_data = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__forward2_data = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__alu_rf_data1 = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__alu_rf_data2 = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__alu_rs1 = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__alu_rs2 = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__alu_result_ex = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__alu_result_ls = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__alu_result_wb = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__jump_target = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__mem_rdata_wb = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__mcause_global = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__alu_op_id = VL_RAND_RESET_I(5);
    vlSelf->CPU__DOT__alu_op_ex = VL_RAND_RESET_I(5);
    vlSelf->CPU__DOT__mem_access_id = VL_RAND_RESET_I(5);
    vlSelf->CPU__DOT__mem_access_ex = VL_RAND_RESET_I(5);
    vlSelf->CPU__DOT__mem_access_ls = VL_RAND_RESET_I(5);
    vlSelf->CPU__DOT__br_type_id = VL_RAND_RESET_I(5);
    vlSelf->CPU__DOT__br_type_ex = VL_RAND_RESET_I(5);
    vlSelf->CPU__DOT__priv_vec_ex = VL_RAND_RESET_I(5);
    vlSelf->CPU__DOT__priv_vec_ls = VL_RAND_RESET_I(5);
    vlSelf->CPU__DOT__priv_vec_wb = VL_RAND_RESET_I(5);
    vlSelf->CPU__DOT__wstrb_ex = VL_RAND_RESET_I(4);
    vlSelf->CPU__DOT__alu_rs1_sel_id = VL_RAND_RESET_I(2);
    vlSelf->CPU__DOT__alu_rs1_sel_ex = VL_RAND_RESET_I(2);
    vlSelf->CPU__DOT__alu_rs2_sel_id = VL_RAND_RESET_I(2);
    vlSelf->CPU__DOT__alu_rs2_sel_ex = VL_RAND_RESET_I(2);
    vlSelf->CPU__DOT__wb_rf_sel_id = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__wb_rf_sel_ex = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__wb_rf_sel_ls = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__wb_rf_sel_wb = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__rf_we_id = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__rf_we_ex = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__rf_we_ls = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__rf_we_wb = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__i_rvalid = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__i_rready = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__i_rlast = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__d_rvalid = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__d_rready = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__d_rlast = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__d_wvalid = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__d_wready = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__d_wlast = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__d_bvalid = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__d_bready = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__forward1_en = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__forward2_en = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__jump = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__pc_set = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__pc_stall = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__IF2_ID_stall = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__IF2_ID_flush = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__ID_EX_flush = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__icache_miss = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__dcache_miss = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__commit_if2 = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__commit_id = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__commit_ex = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__commit_ls = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__PC_inst__DOT__pc_reg = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__ICache_inst__DOT__addr_pipe = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__ICache_inst__DOT__rvalid_pipe = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__ICache_inst__DOT__req_buf_we = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->CPU__DOT__ICache_inst__DOT__ret_buf);
    vlSelf->CPU__DOT__ICache_inst__DOT__r_index = VL_RAND_RESET_I(4);
    vlSelf->CPU__DOT__ICache_inst__DOT__mem_we = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->CPU__DOT__ICache_inst__DOT__mem_rdata[__Vi0]);
    }
    vlSelf->CPU__DOT__ICache_inst__DOT__tagv_we = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->CPU__DOT__ICache_inst__DOT__tag_rdata[__Vi0] = VL_RAND_RESET_I(25);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->CPU__DOT__ICache_inst__DOT__valid_bit_mem[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->CPU__DOT__ICache_inst__DOT__hit = VL_RAND_RESET_I(2);
    vlSelf->CPU__DOT__ICache_inst__DOT__lru_hit_update = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__ICache_inst__DOT__lru_refill_update = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__ICache_inst__DOT__data_from_mem = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__ICache_inst__DOT__flush_buf = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__ICache_inst__DOT__lru = VL_RAND_RESET_I(16);
    vlSelf->CPU__DOT__ICache_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->CPU__DOT__ICache_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->CPU__DOT__ICache_inst__DOT____VdfgTmp_h32c1d4e2__0 = 0;
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__addr_r = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[__Vi0]);
    }
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__addr_r = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[__Vi0]);
    }
    vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__addr_r = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[__Vi0] = VL_RAND_RESET_I(24);
    }
    vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__addr_r = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[__Vi0] = VL_RAND_RESET_I(24);
    }
    vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__Decode_inst__DOT____VdfgTmp_haf50822f__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->CPU__DOT__Regfile_inst__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->CPU__DOT__Regfile_inst__DOT__unnamedblk1__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__CSR_inst__DOT__mstatus = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__CSR_inst__DOT__mtvec = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__CSR_inst__DOT__mcause = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__CSR_inst__DOT__mepc = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__ALU_inst__DOT__result_64 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__ALU_inst__DOT__result_div = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__ALU_inst__DOT__result_rem = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__ALU_inst__DOT__sr1_abs = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__ALU_inst__DOT__sr2_abs = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__ALU_inst__DOT____VdfgTmp_h175d6d08__0 = 0;
    vlSelf->CPU__DOT__Branch_inst__DOT__is_jalr = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__Branch_inst__DOT____VdfgTmp_h8a7e5af4__0 = 0;
    vlSelf->CPU__DOT__DCache_inst__DOT__req_buf_we = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__DCache_inst__DOT__wdata_pipe = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__DCache_inst__DOT__addr_pipe = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__DCache_inst__DOT__wstrb_pipe = VL_RAND_RESET_I(4);
    vlSelf->CPU__DOT__DCache_inst__DOT__rsize_pipe = VL_RAND_RESET_I(3);
    vlSelf->CPU__DOT__DCache_inst__DOT__fence_valid_pipe = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__DCache_inst__DOT__valid_flush = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__DCache_inst__DOT__we_pipe = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__DCache_inst__DOT__rvalid_pipe = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__DCache_inst__DOT__wvalid_pipe = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->CPU__DOT__DCache_inst__DOT__ret_buf);
    vlSelf->CPU__DOT__DCache_inst__DOT__r_index = VL_RAND_RESET_I(4);
    vlSelf->CPU__DOT__DCache_inst__DOT__w_index = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->CPU__DOT__DCache_inst__DOT__mem_we[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->CPU__DOT__DCache_inst__DOT__mem_rdata[__Vi0]);
    }
    VL_RAND_RESET_W(128, vlSelf->CPU__DOT__DCache_inst__DOT__mem_wdata);
    vlSelf->CPU__DOT__DCache_inst__DOT__tagv_we = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->CPU__DOT__DCache_inst__DOT__tag_rdata[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->CPU__DOT__DCache_inst__DOT__valid_bit_mem[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->CPU__DOT__DCache_inst__DOT__valid_bit_rdata[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->CPU__DOT__DCache_inst__DOT__hit = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(128, vlSelf->CPU__DOT__DCache_inst__DOT__wdata_pipe_512);
    VL_RAND_RESET_W(128, vlSelf->CPU__DOT__DCache_inst__DOT__wstrb_pipe_512);
    vlSelf->CPU__DOT__DCache_inst__DOT__wdata_from_pipe = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__DCache_inst__DOT__data_from_mem = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__DCache_inst__DOT__lru_sel = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__DCache_inst__DOT__lru_hit_update = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__DCache_inst__DOT__lru_refill_update = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__DCache_inst__DOT__lru = VL_RAND_RESET_I(16);
    vlSelf->CPU__DOT__DCache_inst__DOT__dirty_refill = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__DCache_inst__DOT__dirty_we = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__DCache_inst__DOT__dirty_clean_all = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->CPU__DOT__DCache_inst__DOT__dirty_table[__Vi0] = VL_RAND_RESET_I(16);
    }
    VL_RAND_RESET_W(128, vlSelf->CPU__DOT__DCache_inst__DOT__wbuf);
    vlSelf->CPU__DOT__DCache_inst__DOT__wbuf_we = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__DCache_inst__DOT__maddr_buf = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__DCache_inst__DOT__mbuf_we = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__DCache_inst__DOT__wfsm_en = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__DCache_inst__DOT__wfsm_reset = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__DCache_inst__DOT__wrt_finish = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__DCache_inst__DOT__write_counter = VL_RAND_RESET_I(3);
    vlSelf->CPU__DOT__DCache_inst__DOT__write_counter_reset = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__DCache_inst__DOT__write_counter_en = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__DCache_inst__DOT__addr_cnt = VL_RAND_RESET_I(5);
    vlSelf->CPU__DOT__DCache_inst__DOT__addr_cnt_add = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__DCache_inst__DOT__uncache = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__DCache_inst__DOT__read_from_cnt = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__DCache_inst__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->CPU__DOT__DCache_inst__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->CPU__DOT__DCache_inst__DOT__wfsm_state = VL_RAND_RESET_I(2);
    vlSelf->CPU__DOT__DCache_inst__DOT__wfsm_next_state = VL_RAND_RESET_I(2);
    vlSelf->CPU__DOT__DCache_inst__DOT____VdfgTmp_ha6d4d8ec__0 = 0;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__addr_r = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[__Vi0]);
    }
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__addr_r = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[__Vi0]);
    }
    vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__addr_r = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[__Vi0] = VL_RAND_RESET_I(24);
    }
    vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__addr_r = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[__Vi0] = VL_RAND_RESET_I(24);
    }
    vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__DCache_Read_Ctrl_inst__DOT__load_data = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__Hazard_inst__DOT__stall_by_load_use = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__Hazard_inst__DOT__flush_by_load_use = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__axi_arbiter_inst__DOT__r_crt = VL_RAND_RESET_I(3);
    vlSelf->CPU__DOT__axi_arbiter_inst__DOT__r_nxt = VL_RAND_RESET_I(3);
    vlSelf->CPU__DOT__axi_arbiter_inst__DOT__w_crt = VL_RAND_RESET_I(2);
    vlSelf->CPU__DOT__axi_arbiter_inst__DOT__w_nxt = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
