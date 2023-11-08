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
    vlSelf->CPU__DOT__PC_inst__DOT__pc_reg = 0x80000000U;
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
    vlSelf->CPU__DOT__CSR_inst__DOT__mstatus = 0U;
    vlSelf->CPU__DOT__CSR_inst__DOT__mtvec = 0U;
    vlSelf->CPU__DOT__CSR_inst__DOT__mcause = 0U;
    vlSelf->CPU__DOT__CSR_inst__DOT__mepc = 0U;
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
                VL_FATAL_MT("/home/user/cpu/2023fall-CECSlab/simulator/IP/mycpu/CPU.sv", 2, "", "Settle region did not converge.");
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

void VCPU___024root____Vdpiimwrap_CPU__DOT__ICache_inst__DOT__pmem_read_TOP(CData/*0:0*/ re, IData/*31:0*/ addr, IData/*31:0*/ mask, IData/*31:0*/ &rword);

VL_ATTR_COLD void VCPU___024root___stl_sequent__TOP__0(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___stl_sequent__TOP__0\n"); );
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
            vlSelf->CPU__DOT__br_type_id = (7U & (vlSelf->CPU__DOT__inst_id 
                                                  >> 0xcU));
            vlSelf->CPU__DOT__alu_op_id = 0U;
            vlSelf->CPU__DOT__mem_access_id = 0U;
            vlSelf->CPU__DOT__rf_we_id = (0U != (0x1fU 
                                                 & (vlSelf->CPU__DOT__inst_id 
                                                    >> 7U)));
            vlSelf->CPU__DOT__alu_rs2_sel_id = 1U;
            vlSelf->CPU__DOT__imm_id = (0xfffff000U 
                                        & vlSelf->CPU__DOT__inst_id);
        } else if ((0x17U == (0x7fU & vlSelf->CPU__DOT__inst_id))) {
            vlSelf->CPU__DOT__alu_rs1_sel_id = 1U;
            vlSelf->CPU__DOT__br_type_id = (7U & (vlSelf->CPU__DOT__inst_id 
                                                  >> 0xcU));
            vlSelf->CPU__DOT__alu_op_id = 0U;
            vlSelf->CPU__DOT__mem_access_id = 0U;
            vlSelf->CPU__DOT__rf_we_id = (0U != (0x1fU 
                                                 & (vlSelf->CPU__DOT__inst_id 
                                                    >> 7U)));
            vlSelf->CPU__DOT__alu_rs2_sel_id = 1U;
            vlSelf->CPU__DOT__imm_id = (0xfffff000U 
                                        & vlSelf->CPU__DOT__inst_id);
        } else if ((0x6fU == (0x7fU & vlSelf->CPU__DOT__inst_id))) {
            vlSelf->CPU__DOT__alu_rs1_sel_id = 1U;
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
            vlSelf->CPU__DOT__rf_we_id = (0U != (0x1fU 
                                                 & (vlSelf->CPU__DOT__inst_id 
                                                    >> 7U)));
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
            vlSelf->CPU__DOT__br_type_id = (0x10U | 
                                            ((8U & 
                                              (vlSelf->CPU__DOT__inst_id 
                                               << 1U)) 
                                             | (7U 
                                                & (vlSelf->CPU__DOT__inst_id 
                                                   >> 0xcU))));
            vlSelf->CPU__DOT__alu_op_id = 0U;
            vlSelf->CPU__DOT__mem_access_id = 0U;
            vlSelf->CPU__DOT__rf_we_id = (0U != (0x1fU 
                                                 & (vlSelf->CPU__DOT__inst_id 
                                                    >> 7U)));
            vlSelf->CPU__DOT__alu_rs2_sel_id = 2U;
            vlSelf->CPU__DOT__imm_id = (((- (IData)(
                                                    (vlSelf->CPU__DOT__inst_id 
                                                     >> 0x1fU))) 
                                         << 0xcU) | 
                                        (vlSelf->CPU__DOT__inst_id 
                                         >> 0x14U));
        } else {
            vlSelf->CPU__DOT__alu_rs1_sel_id = 0U;
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
            vlSelf->CPU__DOT__rf_we_id = (0U != (0x1fU 
                                                 & (vlSelf->CPU__DOT__inst_id 
                                                    >> 7U)));
            vlSelf->CPU__DOT__alu_rs2_sel_id = 0U;
            vlSelf->CPU__DOT__imm_id = 0U;
        } else if ((0x73U == (0x7fU & vlSelf->CPU__DOT__inst_id))) {
            vlSelf->CPU__DOT__alu_rs1_sel_id = 2U;
            vlSelf->CPU__DOT__br_type_id = ((8U & (vlSelf->CPU__DOT__inst_id 
                                                   << 1U)) 
                                            | (7U & 
                                               (vlSelf->CPU__DOT__inst_id 
                                                >> 0xcU)));
            vlSelf->CPU__DOT__alu_rs2_sel_id = 3U;
            vlSelf->CPU__DOT__imm_id = (0x1fU & (vlSelf->CPU__DOT__inst_id 
                                                 >> 0xfU));
            vlSelf->CPU__DOT__alu_op_id = 0U;
            vlSelf->CPU__DOT__rf_we_id = ((0U != (0x1fU 
                                                  & (vlSelf->CPU__DOT__inst_id 
                                                     >> 7U))) 
                                          & (0U != 
                                             (7U & 
                                              (vlSelf->CPU__DOT__inst_id 
                                               >> 0xcU))));
        } else {
            vlSelf->CPU__DOT__alu_rs1_sel_id = 0U;
            vlSelf->CPU__DOT__br_type_id = 0U;
            vlSelf->CPU__DOT__alu_rs2_sel_id = 0U;
            vlSelf->CPU__DOT__imm_id = 0U;
            vlSelf->CPU__DOT__alu_op_id = 0U;
            vlSelf->CPU__DOT__rf_we_id = 0U;
        }
        vlSelf->CPU__DOT__mem_access_id = 0U;
        vlSelf->CPU__DOT__wb_rf_sel_id = 0U;
    }
    vlSelf->CPU__DOT__csr_we_id = 0U;
    if ((1U & (~ ((((((((0x37U == (0x7fU & vlSelf->CPU__DOT__inst_id)) 
                        | (0x17U == (0x7fU & vlSelf->CPU__DOT__inst_id))) 
                       | (0x6fU == (0x7fU & vlSelf->CPU__DOT__inst_id))) 
                      | (0x67U == (0x7fU & vlSelf->CPU__DOT__inst_id))) 
                     | (0x63U == (0x7fU & vlSelf->CPU__DOT__inst_id))) 
                    | (3U == (0x7fU & vlSelf->CPU__DOT__inst_id))) 
                   | (0x23U == (0x7fU & vlSelf->CPU__DOT__inst_id))) 
                  | (0x13U == (0x7fU & vlSelf->CPU__DOT__inst_id)))))) {
        if ((0x33U != (0x7fU & vlSelf->CPU__DOT__inst_id))) {
            if ((0x73U == (0x7fU & vlSelf->CPU__DOT__inst_id))) {
                vlSelf->CPU__DOT__csr_we_id = (0U != 
                                               (7U 
                                                & (vlSelf->CPU__DOT__inst_id 
                                                   >> 0xcU)));
            }
        }
    }
    vlSelf->pc_cur = vlSelf->CPU__DOT__pc_wb;
    vlSelf->inst = vlSelf->CPU__DOT__inst_wb;
    vlSelf->CPU__DOT__Hazard_inst__DOT__flush_by_exp 
        = (1U & (IData)(vlSelf->CPU__DOT__priv_vec_wb));
    if ((0x73U == (0x7fU & vlSelf->CPU__DOT__inst_id))) {
        vlSelf->CPU__DOT__priv_vec_id = ((0x17U & (IData)(vlSelf->CPU__DOT__priv_vec_id)) 
                                         | ((0U != 
                                             (7U & 
                                              (vlSelf->CPU__DOT__inst_id 
                                               >> 0xcU))) 
                                            << 3U));
        vlSelf->CPU__DOT__priv_vec_id = ((0x1eU & (IData)(vlSelf->CPU__DOT__priv_vec_id)) 
                                         | (IData)(
                                                   (0U 
                                                    == 
                                                    (0xfff07000U 
                                                     & vlSelf->CPU__DOT__inst_id))));
        vlSelf->CPU__DOT__priv_vec_id = ((0x1dU & (IData)(vlSelf->CPU__DOT__priv_vec_id)) 
                                         | ((IData)(
                                                    (0x30200000U 
                                                     == 
                                                     (0xfff07000U 
                                                      & vlSelf->CPU__DOT__inst_id))) 
                                            << 1U));
        vlSelf->CPU__DOT__priv_vec_id = (0x1bU & (IData)(vlSelf->CPU__DOT__priv_vec_id));
    } else {
        vlSelf->CPU__DOT__priv_vec_id = ((0x10U & (IData)(vlSelf->CPU__DOT__priv_vec_id)) 
                                         | ((0xfU == 
                                             (0x7fU 
                                              & vlSelf->CPU__DOT__inst_id))
                                             ? ((1U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->CPU__DOT__inst_id 
                                                     >> 0xcU))) 
                                                << 2U)
                                             : 0U));
    }
    vlSelf->CPU__DOT__priv_vec_id = ((0x1bU & (IData)(vlSelf->CPU__DOT__priv_vec_id)) 
                                     | ((IData)((0x100fU 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->CPU__DOT__inst_id))) 
                                        << 2U));
    VCPU___024root____Vdpiimwrap_CPU__DOT__ICache_inst__DOT__pmem_read_TOP(1U, vlSelf->CPU__DOT__PC_inst__DOT__pc_reg, 2U, vlSelf->__Vtask_CPU__DOT__ICache_inst__DOT__pmem_read__0__rword);
    vlSelf->CPU__DOT__ICache_inst__DOT__rdata_temp 
        = vlSelf->__Vtask_CPU__DOT__ICache_inst__DOT__pmem_read__0__rword;
    vlSelf->CPU__DOT__Hazard_inst__DOT__stall_by_load_use 
        = (((IData)(vlSelf->CPU__DOT__mem_access_ex) 
            >> 3U) & (((0x1fU & (vlSelf->CPU__DOT__inst_ex 
                                 >> 7U)) == (0x1fU 
                                             & (vlSelf->CPU__DOT__inst_id 
                                                >> 0xfU))) 
                      | ((0x1fU & (vlSelf->CPU__DOT__inst_ex 
                                   >> 7U)) == (0x1fU 
                                               & (vlSelf->CPU__DOT__inst_id 
                                                  >> 0x14U)))));
    vlSelf->CPU__DOT__Branch_inst__DOT____VdfgTmp_h8a7e5af4__0 
        = (IData)((0x18U == (0x18U & (IData)(vlSelf->CPU__DOT__br_type_ex))));
    vlSelf->CPU__DOT__forward2_en = 0U;
    vlSelf->CPU__DOT__forward1_en = 0U;
    if (vlSelf->CPU__DOT__wb_rf_sel_wb) {
        if (vlSelf->CPU__DOT__wb_rf_sel_wb) {
            vlSelf->CPU__DOT__rf_wdata_wb = vlSelf->CPU__DOT__mem_rdata_wb;
        }
    } else {
        vlSelf->CPU__DOT__rf_wdata_wb = vlSelf->CPU__DOT__alu_result_wb;
    }
    vlSelf->CPU__DOT__Branch_inst__DOT__is_jalr = (
                                                   (~ 
                                                    ((IData)(vlSelf->CPU__DOT__br_type_ex) 
                                                     >> 2U)) 
                                                   & (IData)(vlSelf->CPU__DOT__Branch_inst__DOT____VdfgTmp_h8a7e5af4__0));
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
    vlSelf->CPU__DOT__ALU_inst__DOT__sr2_abs = ((vlSelf->CPU__DOT__alu_rs2 
                                                 >> 0x1fU)
                                                 ? 
                                                (- vlSelf->CPU__DOT__alu_rs2)
                                                 : vlSelf->CPU__DOT__alu_rs2);
    vlSelf->CPU__DOT__pc_target = vlSelf->CPU__DOT__jump_target;
    if ((1U & (IData)(vlSelf->CPU__DOT__priv_vec_wb))) {
        vlSelf->CPU__DOT__pc_target = vlSelf->CPU__DOT__CSR_inst__DOT__mtvec;
    } else if ((0U != (IData)(vlSelf->CPU__DOT__priv_vec_ex))) {
        vlSelf->CPU__DOT__pc_target = ((2U & (IData)(vlSelf->CPU__DOT__priv_vec_ex))
                                        ? vlSelf->CPU__DOT__CSR_inst__DOT__mepc
                                        : ((IData)(4U) 
                                           + vlSelf->CPU__DOT__pc_ex));
    } else if (vlSelf->CPU__DOT__jump) {
        vlSelf->CPU__DOT__pc_target = vlSelf->CPU__DOT__jump_target;
    }
    vlSelf->CPU__DOT__pc_set = (1U & ((IData)(vlSelf->CPU__DOT__priv_vec_wb) 
                                      | ((IData)(vlSelf->CPU__DOT__jump) 
                                         | (0U != (IData)(vlSelf->CPU__DOT__priv_vec_ex)))));
    vlSelf->CPU__DOT__ALU_inst__DOT____VdfgTmp_h175d6d08__0 
        = ((vlSelf->CPU__DOT__alu_rs1 ^ vlSelf->CPU__DOT__alu_rs2) 
           >> 0x1fU);
    vlSelf->CPU__DOT__ALU_inst__DOT__sr1_abs = ((vlSelf->CPU__DOT__alu_rs1 
                                                 >> 0x1fU)
                                                 ? 
                                                (- vlSelf->CPU__DOT__alu_rs1)
                                                 : vlSelf->CPU__DOT__alu_rs1);
    vlSelf->CPU__DOT__next_pc = ((IData)(vlSelf->CPU__DOT__pc_set)
                                  ? vlSelf->CPU__DOT__pc_target
                                  : ((IData)(4U) + vlSelf->CPU__DOT__PC_inst__DOT__pc_reg));
    vlSelf->CPU__DOT__ID_EX_flush = ((IData)(vlSelf->CPU__DOT__pc_set) 
                                     | (((IData)(vlSelf->CPU__DOT__mem_access_ex) 
                                         >> 3U) & (
                                                   ((0x1fU 
                                                     & (vlSelf->CPU__DOT__inst_ex 
                                                        >> 7U)) 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->CPU__DOT__inst_id 
                                                        >> 0xfU))) 
                                                   | ((0x1fU 
                                                       & (vlSelf->CPU__DOT__inst_ex 
                                                          >> 7U)) 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->CPU__DOT__inst_id 
                                                          >> 0x14U))))));
    vlSelf->CPU__DOT__ALU_inst__DOT____VdfgTmp_h065b4e26__0 
        = VL_MODDIV_III(32, vlSelf->CPU__DOT__ALU_inst__DOT__sr1_abs, vlSelf->CPU__DOT__ALU_inst__DOT__sr2_abs);
    vlSelf->CPU__DOT__ALU_inst__DOT____VdfgTmp_h08f9e919__0 
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
                        ? (- vlSelf->CPU__DOT__ALU_inst__DOT____VdfgTmp_h065b4e26__0)
                        : vlSelf->CPU__DOT__ALU_inst__DOT____VdfgTmp_h065b4e26__0);
                vlSelf->CPU__DOT__ALU_inst__DOT__result_div 
                    = ((IData)(vlSelf->CPU__DOT__ALU_inst__DOT____VdfgTmp_h175d6d08__0)
                        ? (- vlSelf->CPU__DOT__ALU_inst__DOT____VdfgTmp_h08f9e919__0)
                        : vlSelf->CPU__DOT__ALU_inst__DOT____VdfgTmp_h08f9e919__0);
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
                                                   ((vlSelf->CPU__DOT__alu_rs1 
                                                     < vlSelf->CPU__DOT__alu_rs2)
                                                     ? 1U
                                                     : 0U)
                                                    : 
                                                   (VL_LTS_III(32, vlSelf->CPU__DOT__alu_rs1, vlSelf->CPU__DOT__alu_rs2)
                                                     ? 1U
                                                     : 0U))
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
    VCPU___024root____Vdpiimwrap_CPU__DOT__ICache_inst__DOT__pmem_read_TOP(
                                                                           (1U 
                                                                            & ((IData)(vlSelf->CPU__DOT__mem_access_ex) 
                                                                               >> 3U)), vlSelf->CPU__DOT__alu_result_ex, 
                                                                           (3U 
                                                                            & (IData)(vlSelf->CPU__DOT__mem_access_ex)), vlSelf->__Vtask_CPU__DOT__DCache_inst__DOT__pmem_read__3__rword);
    vlSelf->CPU__DOT__DCache_inst__DOT__rdata_temp 
        = vlSelf->__Vtask_CPU__DOT__DCache_inst__DOT__pmem_read__3__rword;
}

VL_ATTR_COLD void VCPU___024root___eval_stl(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VCPU___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

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
    vlSelf->commit_wb = VL_RAND_RESET_I(1);
    vlSelf->pc_cur = VL_RAND_RESET_I(32);
    vlSelf->inst = VL_RAND_RESET_I(32);
    vlSelf->uncache_read_wb = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__pc_if2 = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__pc_id = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__pc_ex = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__pc_ls = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__pc_wb = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__inst_if2 = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__inst_id = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__inst_ex = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__inst_ls = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__inst_wb = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__pc_target = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__imm_id = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__imm_ex = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__rf_wdata_wb = VL_RAND_RESET_I(32);
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
    vlSelf->CPU__DOT__mem_wdata_ex = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__mem_rdata_wb = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__dcache_rdata_ls = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__alu_op_id = VL_RAND_RESET_I(5);
    vlSelf->CPU__DOT__alu_op_ex = VL_RAND_RESET_I(5);
    vlSelf->CPU__DOT__mem_access_id = VL_RAND_RESET_I(5);
    vlSelf->CPU__DOT__mem_access_ex = VL_RAND_RESET_I(5);
    vlSelf->CPU__DOT__mem_access_ls = VL_RAND_RESET_I(5);
    vlSelf->CPU__DOT__br_type_id = VL_RAND_RESET_I(5);
    vlSelf->CPU__DOT__br_type_ex = VL_RAND_RESET_I(5);
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
    vlSelf->CPU__DOT__forward1_en = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__forward2_en = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__jump = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__pc_set = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__ID_EX_flush = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__commit_if2 = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__commit_id = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__commit_ex = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__commit_ls = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__csr_we_id = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__priv_vec_id = VL_RAND_RESET_I(5);
    vlSelf->CPU__DOT__csr_wdata_wb = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__csr_we_wb = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__csr_rdata_ex = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__csr_we_ex = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__priv_vec_ex = VL_RAND_RESET_I(5);
    vlSelf->CPU__DOT__csr_wdata_ls = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__csr_we_ls = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__priv_vec_ls = VL_RAND_RESET_I(5);
    vlSelf->CPU__DOT__priv_vec_wb = VL_RAND_RESET_I(5);
    vlSelf->CPU__DOT__PC_inst__DOT__pc_reg = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__ICache_inst__DOT__rdata_temp = VL_RAND_RESET_I(32);
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
    vlSelf->CPU__DOT__ALU_inst__DOT____VdfgTmp_h08f9e919__0 = 0;
    vlSelf->CPU__DOT__ALU_inst__DOT____VdfgTmp_h065b4e26__0 = 0;
    vlSelf->CPU__DOT__Branch_inst__DOT__is_jalr = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__Branch_inst__DOT____VdfgTmp_h8a7e5af4__0 = 0;
    vlSelf->CPU__DOT__DCache_inst__DOT__rdata_temp = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__Hazard_inst__DOT__stall_by_load_use = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__Hazard_inst__DOT__flush_by_exp = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_CPU__DOT__ICache_inst__DOT__pmem_read__0__rword = 0;
    vlSelf->__Vtask_CPU__DOT__DCache_inst__DOT__pmem_read__3__rword = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
