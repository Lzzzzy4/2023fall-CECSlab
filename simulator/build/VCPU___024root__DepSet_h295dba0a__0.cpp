// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VCPU__Syms.h"
#include "VCPU___024root.h"

void VCPU___024root___eval_act(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_act\n"); );
}

void VCPU___024root____Vdpiimwrap_CPU__DOT__DCache_inst__DOT__pmem_write_TOP(CData/*0:0*/ we, IData/*31:0*/ addr, IData/*31:0*/ mask, IData/*31:0*/ wword);
void VCPU___024root____Vdpiimwrap_CPU__DOT__ICache_inst__DOT__pmem_read_TOP(CData/*0:0*/ re, IData/*31:0*/ addr, IData/*31:0*/ mask, IData/*31:0*/ &rword);

VL_INLINE_OPT void VCPU___024root___nba_sequent__TOP__0(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__CPU__DOT__Regfile_inst__DOT__rf__v0;
    __Vdlyvdim0__CPU__DOT__Regfile_inst__DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdlyvval__CPU__DOT__Regfile_inst__DOT__rf__v0;
    __Vdlyvval__CPU__DOT__Regfile_inst__DOT__rf__v0 = 0;
    CData/*0:0*/ __Vdlyvset__CPU__DOT__Regfile_inst__DOT__rf__v0;
    __Vdlyvset__CPU__DOT__Regfile_inst__DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdly__CPU__DOT__CSR_inst__DOT__mstatus;
    __Vdly__CPU__DOT__CSR_inst__DOT__mstatus = 0;
    IData/*31:0*/ __Vdly__CPU__DOT__csr_rdata_ex;
    __Vdly__CPU__DOT__csr_rdata_ex = 0;
    CData/*4:0*/ __Vdly__CPU__DOT__priv_vec_ls;
    __Vdly__CPU__DOT__priv_vec_ls = 0;
    // Body
    VCPU___024root____Vdpiimwrap_CPU__DOT__DCache_inst__DOT__pmem_write_TOP(
                                                                            (1U 
                                                                             & ((IData)(vlSelf->CPU__DOT__mem_access_ex) 
                                                                                >> 4U)), vlSelf->CPU__DOT__alu_result_ex, 
                                                                            (3U 
                                                                             & (IData)(vlSelf->CPU__DOT__mem_access_ex)), vlSelf->CPU__DOT__alu_rf_data2);
    __Vdly__CPU__DOT__priv_vec_ls = vlSelf->CPU__DOT__priv_vec_ls;
    __Vdly__CPU__DOT__CSR_inst__DOT__mstatus = vlSelf->CPU__DOT__CSR_inst__DOT__mstatus;
    __Vdlyvset__CPU__DOT__Regfile_inst__DOT__rf__v0 = 0U;
    __Vdly__CPU__DOT__csr_rdata_ex = vlSelf->CPU__DOT__csr_rdata_ex;
    if (vlSelf->CPU__DOT__rf_we_wb) {
        __Vdlyvval__CPU__DOT__Regfile_inst__DOT__rf__v0 
            = vlSelf->CPU__DOT__rf_wdata_wb;
        __Vdlyvset__CPU__DOT__Regfile_inst__DOT__rf__v0 = 1U;
        __Vdlyvdim0__CPU__DOT__Regfile_inst__DOT__rf__v0 
            = (0x1fU & (vlSelf->CPU__DOT__inst_wb >> 7U));
    }
    __Vdly__CPU__DOT__csr_rdata_ex = ((1U & ((~ (IData)(vlSelf->rstn)) 
                                             | (IData)(vlSelf->CPU__DOT__ID_EX_flush)))
                                       ? 0U : ((0x300U 
                                                == 
                                                (vlSelf->CPU__DOT__inst_id 
                                                 >> 0x14U))
                                                ? vlSelf->CPU__DOT__CSR_inst__DOT__mstatus
                                                : (
                                                   (0x305U 
                                                    == 
                                                    (vlSelf->CPU__DOT__inst_id 
                                                     >> 0x14U))
                                                    ? vlSelf->CPU__DOT__CSR_inst__DOT__mtvec
                                                    : 
                                                   ((0x342U 
                                                     == 
                                                     (vlSelf->CPU__DOT__inst_id 
                                                      >> 0x14U))
                                                     ? vlSelf->CPU__DOT__CSR_inst__DOT__mcause
                                                     : 
                                                    ((0x341U 
                                                      == 
                                                      (vlSelf->CPU__DOT__inst_id 
                                                       >> 0x14U))
                                                      ? vlSelf->CPU__DOT__CSR_inst__DOT__mepc
                                                      : 0U)))));
    __Vdly__CPU__DOT__priv_vec_ls = ((1U & ((~ (IData)(vlSelf->rstn)) 
                                            | (IData)(vlSelf->CPU__DOT__priv_vec_wb)))
                                      ? 0U : (IData)(vlSelf->CPU__DOT__priv_vec_ex));
    vlSelf->commit_wb = ((~ ((~ (IData)(vlSelf->rstn)) 
                             | (IData)(vlSelf->CPU__DOT__priv_vec_wb))) 
                         & (IData)(vlSelf->CPU__DOT__commit_ls));
    vlSelf->CPU__DOT__wb_rf_sel_wb = ((~ ((~ (IData)(vlSelf->rstn)) 
                                          | (IData)(vlSelf->CPU__DOT__priv_vec_wb))) 
                                      & (IData)(vlSelf->CPU__DOT__wb_rf_sel_ls));
    vlSelf->uncache_read_wb = ((~ ((~ (IData)(vlSelf->rstn)) 
                                   | (IData)(vlSelf->CPU__DOT__priv_vec_wb))) 
                               & (((IData)(vlSelf->CPU__DOT__mem_access_ls) 
                                   >> 3U) & (0xaU == 
                                             (vlSelf->CPU__DOT__alu_result_ls 
                                              >> 0x1cU))));
    if ((1U & ((~ (IData)(vlSelf->rstn)) | (IData)(vlSelf->CPU__DOT__priv_vec_wb)))) {
        vlSelf->CPU__DOT__mem_rdata_wb = 0U;
        vlSelf->CPU__DOT__alu_result_wb = 0U;
        vlSelf->CPU__DOT__mem_access_ls = 0U;
        vlSelf->CPU__DOT__alu_result_ls = 0U;
    } else {
        vlSelf->CPU__DOT__mem_rdata_wb = ((4U & (IData)(vlSelf->CPU__DOT__mem_access_ls))
                                           ? ((2U & (IData)(vlSelf->CPU__DOT__mem_access_ls))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->CPU__DOT__mem_access_ls))
                                                   ? 
                                                  (0xffffU 
                                                   & vlSelf->CPU__DOT__dcache_rdata_ls)
                                                   : 
                                                  (0xffU 
                                                   & vlSelf->CPU__DOT__dcache_rdata_ls)))
                                           : ((2U & (IData)(vlSelf->CPU__DOT__mem_access_ls))
                                               ? ((1U 
                                                   & (IData)(vlSelf->CPU__DOT__mem_access_ls))
                                                   ? 0U
                                                   : vlSelf->CPU__DOT__dcache_rdata_ls)
                                               : ((1U 
                                                   & (IData)(vlSelf->CPU__DOT__mem_access_ls))
                                                   ? 
                                                  (((- (IData)(
                                                               (1U 
                                                                & (vlSelf->CPU__DOT__dcache_rdata_ls 
                                                                   >> 0xfU)))) 
                                                    << 0x10U) 
                                                   | (0xffffU 
                                                      & vlSelf->CPU__DOT__dcache_rdata_ls))
                                                   : 
                                                  (((- (IData)(
                                                               (1U 
                                                                & (vlSelf->CPU__DOT__dcache_rdata_ls 
                                                                   >> 7U)))) 
                                                    << 8U) 
                                                   | (0xffU 
                                                      & vlSelf->CPU__DOT__dcache_rdata_ls)))));
        vlSelf->CPU__DOT__alu_result_wb = vlSelf->CPU__DOT__alu_result_ls;
        vlSelf->CPU__DOT__mem_access_ls = vlSelf->CPU__DOT__mem_access_ex;
        vlSelf->CPU__DOT__alu_result_ls = vlSelf->CPU__DOT__alu_result_ex;
    }
    if (vlSelf->rstn) {
        if ((0U != ((1U & (IData)(vlSelf->CPU__DOT__priv_vec_wb))
                     ? 0xbU : 0U))) {
            __Vdly__CPU__DOT__CSR_inst__DOT__mstatus 
                = (6U | ((0xfffff000U & vlSelf->CPU__DOT__CSR_inst__DOT__mstatus) 
                         | (0xff8U & (vlSelf->CPU__DOT__CSR_inst__DOT__mstatus 
                                      << 3U))));
            vlSelf->CPU__DOT__CSR_inst__DOT__mcause 
                = ((1U & (IData)(vlSelf->CPU__DOT__priv_vec_wb))
                    ? 0xbU : 0U);
            vlSelf->CPU__DOT__CSR_inst__DOT__mepc = vlSelf->CPU__DOT__pc_wb;
        } else {
            if ((2U & (IData)(vlSelf->CPU__DOT__priv_vec_wb))) {
                __Vdly__CPU__DOT__CSR_inst__DOT__mstatus 
                    = (0x200U | ((0xfffff000U & vlSelf->CPU__DOT__CSR_inst__DOT__mstatus) 
                                 | (0x1ffU & (vlSelf->CPU__DOT__CSR_inst__DOT__mstatus 
                                              >> 3U))));
            } else if (((0x300U == (vlSelf->CPU__DOT__inst_wb 
                                    >> 0x14U)) & (IData)(vlSelf->CPU__DOT__csr_we_wb))) {
                __Vdly__CPU__DOT__CSR_inst__DOT__mstatus 
                    = vlSelf->CPU__DOT__csr_wdata_wb;
            }
            if (((0x342U == (vlSelf->CPU__DOT__inst_wb 
                             >> 0x14U)) & (IData)(vlSelf->CPU__DOT__csr_we_wb))) {
                vlSelf->CPU__DOT__CSR_inst__DOT__mcause 
                    = vlSelf->CPU__DOT__csr_wdata_wb;
            }
            if (((0x341U == (vlSelf->CPU__DOT__inst_wb 
                             >> 0x14U)) & (IData)(vlSelf->CPU__DOT__csr_we_wb))) {
                vlSelf->CPU__DOT__CSR_inst__DOT__mepc 
                    = vlSelf->CPU__DOT__csr_wdata_wb;
            }
        }
        if (((0x305U == (vlSelf->CPU__DOT__inst_wb 
                         >> 0x14U)) & (IData)(vlSelf->CPU__DOT__csr_we_wb))) {
            vlSelf->CPU__DOT__CSR_inst__DOT__mtvec 
                = vlSelf->CPU__DOT__csr_wdata_wb;
        }
    } else {
        __Vdly__CPU__DOT__CSR_inst__DOT__mstatus = 0U;
        vlSelf->CPU__DOT__CSR_inst__DOT__mtvec = 0U;
        vlSelf->CPU__DOT__CSR_inst__DOT__mcause = 0U;
        vlSelf->CPU__DOT__CSR_inst__DOT__mepc = 0U;
    }
    if ((1U & ((~ (IData)(vlSelf->rstn)) | (IData)(vlSelf->CPU__DOT__priv_vec_wb)))) {
        vlSelf->CPU__DOT__pc_wb = 0x80000000U;
        vlSelf->CPU__DOT__csr_wdata_wb = 0U;
    } else {
        vlSelf->CPU__DOT__pc_wb = vlSelf->CPU__DOT__pc_ls;
        vlSelf->CPU__DOT__csr_wdata_wb = vlSelf->CPU__DOT__csr_wdata_ls;
    }
    if ((1U & ((~ (IData)(vlSelf->rstn)) | (IData)(vlSelf->CPU__DOT__ID_EX_flush)))) {
        vlSelf->CPU__DOT__alu_op_ex = 0U;
        vlSelf->CPU__DOT__alu_rs1_sel_ex = 0U;
        vlSelf->CPU__DOT__alu_rs2_sel_ex = 0U;
        vlSelf->CPU__DOT__br_type_ex = 0U;
        vlSelf->CPU__DOT__rf_rdata2_ex = 0U;
        vlSelf->CPU__DOT__rf_rdata1_ex = 0U;
    } else {
        vlSelf->CPU__DOT__alu_op_ex = vlSelf->CPU__DOT__alu_op_id;
        vlSelf->CPU__DOT__alu_rs1_sel_ex = vlSelf->CPU__DOT__alu_rs1_sel_id;
        vlSelf->CPU__DOT__alu_rs2_sel_ex = vlSelf->CPU__DOT__alu_rs2_sel_id;
        vlSelf->CPU__DOT__br_type_ex = vlSelf->CPU__DOT__br_type_id;
        vlSelf->CPU__DOT__rf_rdata2_ex = (((IData)(vlSelf->CPU__DOT__rf_we_wb) 
                                           & ((0x1fU 
                                               & (vlSelf->CPU__DOT__inst_id 
                                                  >> 0x14U)) 
                                              == (0x1fU 
                                                  & (vlSelf->CPU__DOT__inst_wb 
                                                     >> 7U))))
                                           ? vlSelf->CPU__DOT__rf_wdata_wb
                                           : vlSelf->CPU__DOT__Regfile_inst__DOT__rf
                                          [(0x1fU & 
                                            (vlSelf->CPU__DOT__inst_id 
                                             >> 0x14U))]);
        vlSelf->CPU__DOT__rf_rdata1_ex = (((IData)(vlSelf->CPU__DOT__rf_we_wb) 
                                           & ((0x1fU 
                                               & (vlSelf->CPU__DOT__inst_id 
                                                  >> 0xfU)) 
                                              == (0x1fU 
                                                  & (vlSelf->CPU__DOT__inst_wb 
                                                     >> 7U))))
                                           ? vlSelf->CPU__DOT__rf_wdata_wb
                                           : vlSelf->CPU__DOT__Regfile_inst__DOT__rf
                                          [(0x1fU & 
                                            (vlSelf->CPU__DOT__inst_id 
                                             >> 0xfU))]);
    }
    if ((1U & ((~ (IData)(vlSelf->rstn)) | (IData)(vlSelf->CPU__DOT__priv_vec_wb)))) {
        vlSelf->CPU__DOT__inst_wb = 0x13U;
        vlSelf->CPU__DOT__pc_ls = 0x80000000U;
        vlSelf->CPU__DOT__csr_wdata_ls = 0U;
        vlSelf->CPU__DOT__inst_ls = 0x13U;
    } else {
        vlSelf->CPU__DOT__inst_wb = vlSelf->CPU__DOT__inst_ls;
        vlSelf->CPU__DOT__pc_ls = vlSelf->CPU__DOT__pc_ex;
        vlSelf->CPU__DOT__csr_wdata_ls = ((0x4000U 
                                           & vlSelf->CPU__DOT__inst_ex)
                                           ? ((0x2000U 
                                               & vlSelf->CPU__DOT__inst_ex)
                                               ? ((0x1000U 
                                                   & vlSelf->CPU__DOT__inst_ex)
                                                   ? 
                                                  (vlSelf->CPU__DOT__csr_rdata_ex 
                                                   & (~ vlSelf->CPU__DOT__imm_ex))
                                                   : 
                                                  (vlSelf->CPU__DOT__csr_rdata_ex 
                                                   | vlSelf->CPU__DOT__imm_ex))
                                               : ((0x1000U 
                                                   & vlSelf->CPU__DOT__inst_ex)
                                                   ? vlSelf->CPU__DOT__imm_ex
                                                   : 0U))
                                           : ((0x2000U 
                                               & vlSelf->CPU__DOT__inst_ex)
                                               ? ((0x1000U 
                                                   & vlSelf->CPU__DOT__inst_ex)
                                                   ? 
                                                  (vlSelf->CPU__DOT__csr_rdata_ex 
                                                   & (~ vlSelf->CPU__DOT__alu_rf_data1))
                                                   : 
                                                  (vlSelf->CPU__DOT__csr_rdata_ex 
                                                   | vlSelf->CPU__DOT__alu_rf_data1))
                                               : ((0x1000U 
                                                   & vlSelf->CPU__DOT__inst_ex)
                                                   ? vlSelf->CPU__DOT__alu_rf_data1
                                                   : 0U)));
        vlSelf->CPU__DOT__inst_ls = vlSelf->CPU__DOT__inst_ex;
    }
    if ((1U & ((~ (IData)(vlSelf->rstn)) | (IData)(vlSelf->CPU__DOT__ID_EX_flush)))) {
        vlSelf->CPU__DOT__priv_vec_ex = 0U;
        vlSelf->CPU__DOT__mem_access_ex = 0U;
        vlSelf->CPU__DOT__pc_ex = 0x80000000U;
        vlSelf->CPU__DOT__imm_ex = 0U;
        vlSelf->CPU__DOT__inst_ex = 0x13U;
    } else {
        vlSelf->CPU__DOT__priv_vec_ex = vlSelf->CPU__DOT__priv_vec_id;
        vlSelf->CPU__DOT__mem_access_ex = vlSelf->CPU__DOT__mem_access_id;
        vlSelf->CPU__DOT__pc_ex = vlSelf->CPU__DOT__pc_id;
        vlSelf->CPU__DOT__imm_ex = vlSelf->CPU__DOT__imm_id;
        vlSelf->CPU__DOT__inst_ex = vlSelf->CPU__DOT__inst_id;
    }
    vlSelf->CPU__DOT__CSR_inst__DOT__mstatus = __Vdly__CPU__DOT__CSR_inst__DOT__mstatus;
    if (__Vdlyvset__CPU__DOT__Regfile_inst__DOT__rf__v0) {
        vlSelf->CPU__DOT__Regfile_inst__DOT__rf[__Vdlyvdim0__CPU__DOT__Regfile_inst__DOT__rf__v0] 
            = __Vdlyvval__CPU__DOT__Regfile_inst__DOT__rf__v0;
    }
    vlSelf->CPU__DOT__Branch_inst__DOT____VdfgTmp_h8a7e5af4__0 
        = (IData)((0x18U == (0x18U & (IData)(vlSelf->CPU__DOT__br_type_ex))));
    vlSelf->CPU__DOT__commit_ls = ((~ ((~ (IData)(vlSelf->rstn)) 
                                       | (IData)(vlSelf->CPU__DOT__priv_vec_wb))) 
                                   & (IData)(vlSelf->CPU__DOT__commit_ex));
    vlSelf->CPU__DOT__wb_rf_sel_ls = ((~ ((~ (IData)(vlSelf->rstn)) 
                                          | (IData)(vlSelf->CPU__DOT__priv_vec_wb))) 
                                      & (IData)(vlSelf->CPU__DOT__wb_rf_sel_ex));
    if (vlSelf->CPU__DOT__wb_rf_sel_wb) {
        if (vlSelf->CPU__DOT__wb_rf_sel_wb) {
            vlSelf->CPU__DOT__rf_wdata_wb = vlSelf->CPU__DOT__mem_rdata_wb;
        }
    } else {
        vlSelf->CPU__DOT__rf_wdata_wb = vlSelf->CPU__DOT__alu_result_wb;
    }
    vlSelf->CPU__DOT__rf_we_wb = ((~ ((~ (IData)(vlSelf->rstn)) 
                                      | (IData)(vlSelf->CPU__DOT__priv_vec_wb))) 
                                  & (IData)(vlSelf->CPU__DOT__rf_we_ls));
    vlSelf->CPU__DOT__Branch_inst__DOT__is_jalr = (
                                                   (~ 
                                                    ((IData)(vlSelf->CPU__DOT__br_type_ex) 
                                                     >> 2U)) 
                                                   & (IData)(vlSelf->CPU__DOT__Branch_inst__DOT____VdfgTmp_h8a7e5af4__0));
    vlSelf->CPU__DOT__csr_we_wb = ((~ ((~ (IData)(vlSelf->rstn)) 
                                       | (IData)(vlSelf->CPU__DOT__priv_vec_wb))) 
                                   & (IData)(vlSelf->CPU__DOT__csr_we_ls));
    vlSelf->CPU__DOT__commit_ex = ((~ ((~ (IData)(vlSelf->rstn)) 
                                       | (IData)(vlSelf->CPU__DOT__ID_EX_flush))) 
                                   & (IData)(vlSelf->CPU__DOT__commit_id));
    vlSelf->CPU__DOT__wb_rf_sel_ex = ((~ ((~ (IData)(vlSelf->rstn)) 
                                          | (IData)(vlSelf->CPU__DOT__ID_EX_flush))) 
                                      & (IData)(vlSelf->CPU__DOT__wb_rf_sel_id));
    vlSelf->CPU__DOT__rf_we_ls = ((~ ((~ (IData)(vlSelf->rstn)) 
                                      | (IData)(vlSelf->CPU__DOT__priv_vec_wb))) 
                                  & (IData)(vlSelf->CPU__DOT__rf_we_ex));
    vlSelf->CPU__DOT__csr_we_ls = ((~ ((~ (IData)(vlSelf->rstn)) 
                                       | (IData)(vlSelf->CPU__DOT__priv_vec_wb))) 
                                   & (IData)(vlSelf->CPU__DOT__csr_we_ex));
    vlSelf->pc_cur = vlSelf->CPU__DOT__pc_wb;
    vlSelf->inst = vlSelf->CPU__DOT__inst_wb;
    if ((1U & ((~ (IData)(vlSelf->rstn)) | (IData)(vlSelf->CPU__DOT__pc_set)))) {
        vlSelf->CPU__DOT__commit_id = 0U;
        vlSelf->CPU__DOT__commit_if2 = 0U;
        vlSelf->CPU__DOT__pc_id = 0x80000000U;
        vlSelf->CPU__DOT__inst_id = 0x13U;
        vlSelf->CPU__DOT__pc_if2 = 0x80000000U;
    } else if ((1U & (~ (IData)(vlSelf->CPU__DOT__Hazard_inst__DOT__stall_by_load_use)))) {
        vlSelf->CPU__DOT__commit_id = vlSelf->CPU__DOT__commit_if2;
        vlSelf->CPU__DOT__commit_if2 = vlSelf->rstn;
        vlSelf->CPU__DOT__pc_id = vlSelf->CPU__DOT__pc_if2;
        vlSelf->CPU__DOT__inst_id = vlSelf->CPU__DOT__inst_if2;
        vlSelf->CPU__DOT__pc_if2 = vlSelf->CPU__DOT__PC_inst__DOT__pc_reg;
    }
    if (vlSelf->rstn) {
        if ((1U & (~ (IData)(vlSelf->CPU__DOT__Hazard_inst__DOT__stall_by_load_use)))) {
            vlSelf->CPU__DOT__PC_inst__DOT__pc_reg 
                = vlSelf->CPU__DOT__next_pc;
        }
    } else {
        vlSelf->CPU__DOT__PC_inst__DOT__pc_reg = 0x80000000U;
    }
    vlSelf->CPU__DOT__rf_we_ex = ((~ ((~ (IData)(vlSelf->rstn)) 
                                      | (IData)(vlSelf->CPU__DOT__ID_EX_flush))) 
                                  & (IData)(vlSelf->CPU__DOT__rf_we_id));
    vlSelf->CPU__DOT__csr_rdata_ex = __Vdly__CPU__DOT__csr_rdata_ex;
    vlSelf->CPU__DOT__csr_we_ex = ((~ ((~ (IData)(vlSelf->rstn)) 
                                       | (IData)(vlSelf->CPU__DOT__ID_EX_flush))) 
                                   & (IData)(vlSelf->CPU__DOT__csr_we_id));
    vlSelf->CPU__DOT__dcache_rdata_ls = ((1U & (IData)(vlSelf->CPU__DOT__priv_vec_wb))
                                          ? 0U : vlSelf->CPU__DOT__DCache_inst__DOT__rdata_temp);
    vlSelf->CPU__DOT__priv_vec_wb = ((1U & ((~ (IData)(vlSelf->rstn)) 
                                            | (IData)(vlSelf->CPU__DOT__Hazard_inst__DOT__flush_by_exp)))
                                      ? 0U : (IData)(vlSelf->CPU__DOT__priv_vec_ls));
    vlSelf->CPU__DOT__priv_vec_ls = __Vdly__CPU__DOT__priv_vec_ls;
    vlSelf->CPU__DOT__Hazard_inst__DOT__flush_by_exp 
        = (1U & (IData)(vlSelf->CPU__DOT__priv_vec_wb));
    vlSelf->CPU__DOT__forward2_en = 0U;
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
    vlSelf->CPU__DOT__forward1_en = 0U;
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
    if (vlSelf->CPU__DOT__pc_set) {
        vlSelf->CPU__DOT__inst_if2 = 0U;
    } else if ((1U & (~ (IData)(vlSelf->CPU__DOT__Hazard_inst__DOT__stall_by_load_use)))) {
        vlSelf->CPU__DOT__inst_if2 = vlSelf->CPU__DOT__ICache_inst__DOT__rdata_temp;
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
    if ((0x10U & (IData)(vlSelf->CPU__DOT__alu_op_ex))) {
        vlSelf->CPU__DOT__ALU_inst__DOT__result_64 = 0ULL;
        vlSelf->CPU__DOT__ALU_inst__DOT__result_rem = 0U;
        vlSelf->CPU__DOT__ALU_inst__DOT__result_div = 0U;
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
        } else {
            vlSelf->CPU__DOT__ALU_inst__DOT__result_64 
                = ((2U & (IData)(vlSelf->CPU__DOT__alu_op_ex))
                    ? ((1U & (IData)(vlSelf->CPU__DOT__alu_op_ex))
                        ? ((QData)((IData)(vlSelf->CPU__DOT__alu_rs1)) 
                           * (QData)((IData)(vlSelf->CPU__DOT__alu_rs2)))
                        : ((((QData)((IData)((- (IData)(
                                                        (vlSelf->CPU__DOT__alu_rs1 
                                                         >> 0x1fU))))) 
                             << 0x20U) | (QData)((IData)(vlSelf->CPU__DOT__alu_rs1))) 
                           * (QData)((IData)(vlSelf->CPU__DOT__alu_rs2))))
                    : ((1U & (IData)(vlSelf->CPU__DOT__alu_op_ex))
                        ? ((((QData)((IData)((- (IData)(
                                                        (vlSelf->CPU__DOT__alu_rs1 
                                                         >> 0x1fU))))) 
                             << 0x20U) | (QData)((IData)(vlSelf->CPU__DOT__alu_rs1))) 
                           * (((QData)((IData)((- (IData)(
                                                          (vlSelf->CPU__DOT__alu_rs2 
                                                           >> 0x1fU))))) 
                               << 0x20U) | (QData)((IData)(vlSelf->CPU__DOT__alu_rs2))))
                        : ((((QData)((IData)((- (IData)(
                                                        (vlSelf->CPU__DOT__alu_rs1 
                                                         >> 0x1fU))))) 
                             << 0x20U) | (QData)((IData)(vlSelf->CPU__DOT__alu_rs1))) 
                           * (((QData)((IData)((- (IData)(
                                                          (vlSelf->CPU__DOT__alu_rs2 
                                                           >> 0x1fU))))) 
                               << 0x20U) | (QData)((IData)(vlSelf->CPU__DOT__alu_rs2))))));
            vlSelf->CPU__DOT__ALU_inst__DOT__result_rem = 0U;
            vlSelf->CPU__DOT__ALU_inst__DOT__result_div = 0U;
        }
    } else {
        vlSelf->CPU__DOT__ALU_inst__DOT__result_64 = 0ULL;
        vlSelf->CPU__DOT__ALU_inst__DOT__result_rem = 0U;
        vlSelf->CPU__DOT__ALU_inst__DOT__result_div = 0U;
    }
    VCPU___024root____Vdpiimwrap_CPU__DOT__ICache_inst__DOT__pmem_read_TOP(1U, vlSelf->CPU__DOT__PC_inst__DOT__pc_reg, 2U, vlSelf->__Vtask_CPU__DOT__ICache_inst__DOT__pmem_read__0__rword);
    vlSelf->CPU__DOT__alu_result_ex = ((0x10U & (IData)(vlSelf->CPU__DOT__alu_op_ex))
                                        ? ((8U & (IData)(vlSelf->CPU__DOT__alu_op_ex))
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
                                                  - vlSelf->CPU__DOT__alu_rs2)))))
                                        : ((8U & (IData)(vlSelf->CPU__DOT__alu_op_ex))
                                            ? ((4U 
                                                & (IData)(vlSelf->CPU__DOT__alu_op_ex))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelf->CPU__DOT__alu_op_ex))
                                                    ? 
                                                   ((0U 
                                                     == vlSelf->CPU__DOT__alu_rs2)
                                                     ? vlSelf->CPU__DOT__alu_rs1
                                                     : vlSelf->CPU__DOT__ALU_inst__DOT__result_rem)
                                                    : 
                                                   ((0U 
                                                     == vlSelf->CPU__DOT__alu_rs2)
                                                     ? 0xffffffffU
                                                     : vlSelf->CPU__DOT__ALU_inst__DOT__result_div))
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelf->CPU__DOT__alu_op_ex))
                                                    ? (IData)(
                                                              (vlSelf->CPU__DOT__ALU_inst__DOT__result_64 
                                                               >> 0x20U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->CPU__DOT__alu_op_ex))
                                                     ? (IData)(
                                                               (vlSelf->CPU__DOT__ALU_inst__DOT__result_64 
                                                                >> 0x20U))
                                                     : (IData)(vlSelf->CPU__DOT__ALU_inst__DOT__result_64))))
                                            : ((4U 
                                                & (IData)(vlSelf->CPU__DOT__alu_op_ex))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelf->CPU__DOT__alu_op_ex))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->CPU__DOT__alu_op_ex))
                                                     ? 
                                                    (vlSelf->CPU__DOT__alu_rs1 
                                                     & vlSelf->CPU__DOT__alu_rs2)
                                                     : 
                                                    (vlSelf->CPU__DOT__alu_rs1 
                                                     | vlSelf->CPU__DOT__alu_rs2))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->CPU__DOT__alu_op_ex))
                                                     ? 
                                                    (vlSelf->CPU__DOT__alu_rs1 
                                                     >> 
                                                     (0x1fU 
                                                      & vlSelf->CPU__DOT__alu_rs2))
                                                     : 
                                                    (vlSelf->CPU__DOT__alu_rs1 
                                                     ^ vlSelf->CPU__DOT__alu_rs2)))
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelf->CPU__DOT__alu_op_ex))
                                                    ? 
                                                   ((1U 
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
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->CPU__DOT__alu_op_ex))
                                                     ? 
                                                    (vlSelf->CPU__DOT__alu_rs1 
                                                     << 
                                                     (0x1fU 
                                                      & vlSelf->CPU__DOT__alu_rs2))
                                                     : 
                                                    (vlSelf->CPU__DOT__alu_rs1 
                                                     + vlSelf->CPU__DOT__alu_rs2))))));
    vlSelf->CPU__DOT__next_pc = ((IData)(vlSelf->CPU__DOT__pc_set)
                                  ? vlSelf->CPU__DOT__pc_target
                                  : ((IData)(4U) + vlSelf->CPU__DOT__PC_inst__DOT__pc_reg));
    vlSelf->CPU__DOT__ICache_inst__DOT__rdata_temp 
        = vlSelf->__Vtask_CPU__DOT__ICache_inst__DOT__pmem_read__0__rword;
    VCPU___024root____Vdpiimwrap_CPU__DOT__ICache_inst__DOT__pmem_read_TOP(
                                                                           (1U 
                                                                            & ((IData)(vlSelf->CPU__DOT__mem_access_ex) 
                                                                               >> 3U)), vlSelf->CPU__DOT__alu_result_ex, 
                                                                           (3U 
                                                                            & (IData)(vlSelf->CPU__DOT__mem_access_ex)), vlSelf->__Vtask_CPU__DOT__DCache_inst__DOT__pmem_read__3__rword);
    vlSelf->CPU__DOT__DCache_inst__DOT__rdata_temp 
        = vlSelf->__Vtask_CPU__DOT__DCache_inst__DOT__pmem_read__3__rword;
}

void VCPU___024root___eval_nba(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VCPU___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void VCPU___024root___eval_triggers__act(VCPU___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VCPU___024root___dump_triggers__act(VCPU___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VCPU___024root___dump_triggers__nba(VCPU___024root* vlSelf);
#endif  // VL_DEBUG

void VCPU___024root___eval(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VCPU___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VCPU___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/user/cpu/2023fall-CECSlab/simulator/IP/mycpu/CPU.sv", 2, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                VCPU___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VCPU___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/user/cpu/2023fall-CECSlab/simulator/IP/mycpu/CPU.sv", 2, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VCPU___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VCPU___024root___eval_debug_assertions(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rstn & 0xfeU))) {
        Verilated::overWidthError("rstn");}
}
#endif  // VL_DEBUG
