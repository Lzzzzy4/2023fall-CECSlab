// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VCPU__Syms.h"
#include "VCPU___024root.h"

extern const VlUnpacked<CData/*2:0*/, 256> VCPU__ConstPool__TABLE_h66fd1b2c_0;
extern const VlUnpacked<CData/*1:0*/, 128> VCPU__ConstPool__TABLE_hf616aee3_0;
extern const VlUnpacked<CData/*0:0*/, 64> VCPU__ConstPool__TABLE_h547d70dc_0;
extern const VlUnpacked<CData/*0:0*/, 64> VCPU__ConstPool__TABLE_h8900deca_0;
extern const VlUnpacked<CData/*0:0*/, 64> VCPU__ConstPool__TABLE_h3f1e26a2_0;
extern const VlUnpacked<CData/*0:0*/, 64> VCPU__ConstPool__TABLE_h07d257b7_0;
extern const VlUnpacked<CData/*0:0*/, 64> VCPU__ConstPool__TABLE_h8a061d4b_0;
extern const VlUnpacked<CData/*0:0*/, 64> VCPU__ConstPool__TABLE_h02f04120_0;
extern const VlUnpacked<CData/*1:0*/, 64> VCPU__ConstPool__TABLE_hb934d788_0;
extern const VlUnpacked<CData/*1:0*/, 512> VCPU__ConstPool__TABLE_h0c337be4_0;

VL_INLINE_OPT void VCPU___024root___ico_sequent__TOP__0(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    SData/*8:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*7:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*6:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*5:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    // Body
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
    vlSelf->CPU__DOT__i_rlast = 0U;
    vlSelf->CPU__DOT__i_rready = 0U;
    if ((1U & (~ ((IData)(vlSelf->CPU__DOT__axi_arbiter_inst__DOT__r_crt) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->CPU__DOT__axi_arbiter_inst__DOT__r_crt))) {
            if ((1U & (~ (IData)(vlSelf->CPU__DOT__axi_arbiter_inst__DOT__r_crt)))) {
                vlSelf->CPU__DOT__i_rlast = vlSelf->rlast;
                vlSelf->CPU__DOT__i_rready = vlSelf->rvalid;
            }
        }
    }
    vlSelf->CPU__DOT__d_rready = 0U;
    vlSelf->CPU__DOT__d_rlast = 0U;
    if ((4U & (IData)(vlSelf->CPU__DOT__axi_arbiter_inst__DOT__r_crt))) {
        if ((1U & (~ ((IData)(vlSelf->CPU__DOT__axi_arbiter_inst__DOT__r_crt) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->CPU__DOT__axi_arbiter_inst__DOT__r_crt)))) {
                vlSelf->CPU__DOT__d_rready = vlSelf->rvalid;
                vlSelf->CPU__DOT__d_rlast = vlSelf->rlast;
            }
        }
    }
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
    __Vtableidx1 = (((IData)(vlSelf->CPU__DOT__i_rlast) 
                     << 5U) | (((IData)(vlSelf->CPU__DOT__i_rready) 
                                << 4U) | (((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->CPU__DOT__ICache_inst__DOT__hit))) 
                                           << 3U) | 
                                          (((IData)(vlSelf->CPU__DOT__ICache_inst__DOT__rvalid_pipe) 
                                            << 2U) 
                                           | (IData)(vlSelf->CPU__DOT__ICache_inst__DOT__state)))));
    vlSelf->CPU__DOT__ICache_inst__DOT__next_state 
        = VCPU__ConstPool__TABLE_hb934d788_0[__Vtableidx1];
    vlSelf->CPU__DOT__DCache_inst__DOT__next_state 
        = ((2U & (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__state))
            ? ((1U & (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__state))
                ? ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__wrt_finish)
                    ? ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__fence_valid_pipe)
                        ? ((0U == (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__addr_cnt))
                            ? 0U : 1U) : 0U) : 3U) : 3U)
            : ((1U & (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__state))
                ? ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__fence_valid_pipe)
                    ? 3U : (((IData)(vlSelf->CPU__DOT__d_rready) 
                             & (IData)(vlSelf->CPU__DOT__d_rlast))
                             ? ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__uncache)
                                 ? 3U : 2U) : 1U)) : 
               (((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__rvalid_pipe) 
                 | (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__wvalid_pipe))
                 ? ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__uncache)
                     ? ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__wvalid_pipe)
                         ? 3U : 1U) : ((0U != (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__hit))
                                        ? 0U : 1U))
                 : ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__fence_valid_pipe)
                     ? 1U : 0U))));
    vlSelf->CPU__DOT__DCache_inst__DOT__write_counter_en = 0U;
    if ((0U != (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__wfsm_state))) {
        if ((1U == (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__wfsm_state))) {
            vlSelf->CPU__DOT__DCache_inst__DOT__write_counter_en 
                = vlSelf->CPU__DOT__d_wready;
        }
    }
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
}

void VCPU___024root___eval_ico(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VCPU___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void VCPU___024root___eval_act(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_act\n"); );
}

extern const VlUnpacked<CData/*0:0*/, 128> VCPU__ConstPool__TABLE_h5ca5caf7_0;
extern const VlUnpacked<CData/*0:0*/, 128> VCPU__ConstPool__TABLE_h57739968_0;
extern const VlUnpacked<CData/*1:0*/, 128> VCPU__ConstPool__TABLE_h889f6aab_0;
extern const VlUnpacked<CData/*0:0*/, 128> VCPU__ConstPool__TABLE_h27544bbf_0;
extern const VlUnpacked<CData/*0:0*/, 128> VCPU__ConstPool__TABLE_h94004141_0;
extern const VlUnpacked<CData/*0:0*/, 128> VCPU__ConstPool__TABLE_hed1d605a_0;
extern const VlUnpacked<CData/*0:0*/, 128> VCPU__ConstPool__TABLE_h8e18481c_0;

VL_INLINE_OPT void VCPU___024root___nba_sequent__TOP__0(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___nba_sequent__TOP__0\n"); );
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
    VlWide<4>/*127:0*/ __Vdly__CPU__DOT__ICache_inst__DOT__ret_buf;
    VL_ZERO_W(128, __Vdly__CPU__DOT__ICache_inst__DOT__ret_buf);
    CData/*0:0*/ __Vdlyvset__CPU__DOT__ICache_inst__DOT__valid_bit_mem__v0;
    __Vdlyvset__CPU__DOT__ICache_inst__DOT__valid_bit_mem__v0 = 0;
    CData/*3:0*/ __Vdlyvlsb__CPU__DOT__ICache_inst__DOT__valid_bit_mem__v1;
    __Vdlyvlsb__CPU__DOT__ICache_inst__DOT__valid_bit_mem__v1 = 0;
    CData/*0:0*/ __Vdlyvset__CPU__DOT__ICache_inst__DOT__valid_bit_mem__v1;
    __Vdlyvset__CPU__DOT__ICache_inst__DOT__valid_bit_mem__v1 = 0;
    CData/*0:0*/ __Vdlyvset__CPU__DOT__ICache_inst__DOT__valid_bit_mem__v2;
    __Vdlyvset__CPU__DOT__ICache_inst__DOT__valid_bit_mem__v2 = 0;
    CData/*3:0*/ __Vdlyvlsb__CPU__DOT__ICache_inst__DOT__valid_bit_mem__v3;
    __Vdlyvlsb__CPU__DOT__ICache_inst__DOT__valid_bit_mem__v3 = 0;
    CData/*0:0*/ __Vdlyvset__CPU__DOT__ICache_inst__DOT__valid_bit_mem__v3;
    __Vdlyvset__CPU__DOT__ICache_inst__DOT__valid_bit_mem__v3 = 0;
    CData/*4:0*/ __Vdlyvlsb__CPU__DOT__ICache_inst__DOT__tag_rdata__v0;
    __Vdlyvlsb__CPU__DOT__ICache_inst__DOT__tag_rdata__v0 = 0;
    CData/*0:0*/ __Vdlyvval__CPU__DOT__ICache_inst__DOT__tag_rdata__v0;
    __Vdlyvval__CPU__DOT__ICache_inst__DOT__tag_rdata__v0 = 0;
    CData/*4:0*/ __Vdlyvlsb__CPU__DOT__ICache_inst__DOT__tag_rdata__v1;
    __Vdlyvlsb__CPU__DOT__ICache_inst__DOT__tag_rdata__v1 = 0;
    CData/*0:0*/ __Vdlyvval__CPU__DOT__ICache_inst__DOT__tag_rdata__v1;
    __Vdlyvval__CPU__DOT__ICache_inst__DOT__tag_rdata__v1 = 0;
    SData/*15:0*/ __Vdly__CPU__DOT__ICache_inst__DOT__lru;
    __Vdly__CPU__DOT__ICache_inst__DOT__lru = 0;
    CData/*3:0*/ __Vdlyvdim0__CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram__v0;
    __Vdlyvdim0__CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram__v0;
    VL_ZERO_W(128, __Vdlyvval__CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram__v0);
    CData/*0:0*/ __Vdlyvset__CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram__v0;
    __Vdlyvset__CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram__v0 = 0;
    CData/*3:0*/ __Vdlyvdim0__CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram__v0;
    __Vdlyvdim0__CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram__v0;
    VL_ZERO_W(128, __Vdlyvval__CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram__v0);
    CData/*0:0*/ __Vdlyvset__CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram__v0;
    __Vdlyvset__CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram__v0 = 0;
    CData/*3:0*/ __Vdlyvdim0__CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram__v0;
    __Vdlyvdim0__CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram__v0 = 0;
    IData/*23:0*/ __Vdlyvval__CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram__v0;
    __Vdlyvval__CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram__v0;
    __Vdlyvset__CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram__v0 = 0;
    CData/*3:0*/ __Vdlyvdim0__CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram__v0;
    __Vdlyvdim0__CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram__v0 = 0;
    IData/*23:0*/ __Vdlyvval__CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram__v0;
    __Vdlyvval__CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram__v0;
    __Vdlyvset__CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram__v0 = 0;
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
    CData/*0:0*/ __Vdlyvset__CPU__DOT__DCache_inst__DOT__valid_bit_mem__v0;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__valid_bit_mem__v0 = 0;
    CData/*3:0*/ __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__valid_bit_mem__v1;
    __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__valid_bit_mem__v1 = 0;
    CData/*0:0*/ __Vdlyvset__CPU__DOT__DCache_inst__DOT__valid_bit_mem__v1;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__valid_bit_mem__v1 = 0;
    CData/*0:0*/ __Vdlyvset__CPU__DOT__DCache_inst__DOT__valid_bit_mem__v2;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__valid_bit_mem__v2 = 0;
    CData/*3:0*/ __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__valid_bit_mem__v3;
    __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__valid_bit_mem__v3 = 0;
    CData/*0:0*/ __Vdlyvset__CPU__DOT__DCache_inst__DOT__valid_bit_mem__v3;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__valid_bit_mem__v3 = 0;
    CData/*0:0*/ __Vdlyvval__CPU__DOT__DCache_inst__DOT__valid_bit_rdata__v0;
    __Vdlyvval__CPU__DOT__DCache_inst__DOT__valid_bit_rdata__v0 = 0;
    CData/*0:0*/ __Vdlyvval__CPU__DOT__DCache_inst__DOT__valid_bit_rdata__v1;
    __Vdlyvval__CPU__DOT__DCache_inst__DOT__valid_bit_rdata__v1 = 0;
    SData/*15:0*/ __Vdly__CPU__DOT__DCache_inst__DOT__lru;
    __Vdly__CPU__DOT__DCache_inst__DOT__lru = 0;
    CData/*0:0*/ __Vdlyvset__CPU__DOT__DCache_inst__DOT__dirty_table__v0;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__dirty_table__v0 = 0;
    CData/*0:0*/ __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__dirty_table__v2;
    __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__dirty_table__v2 = 0;
    CData/*3:0*/ __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__dirty_table__v2;
    __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__dirty_table__v2 = 0;
    CData/*0:0*/ __Vdlyvval__CPU__DOT__DCache_inst__DOT__dirty_table__v2;
    __Vdlyvval__CPU__DOT__DCache_inst__DOT__dirty_table__v2 = 0;
    CData/*0:0*/ __Vdlyvset__CPU__DOT__DCache_inst__DOT__dirty_table__v2;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__dirty_table__v2 = 0;
    CData/*0:0*/ __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__dirty_table__v3;
    __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__dirty_table__v3 = 0;
    CData/*3:0*/ __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__dirty_table__v3;
    __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__dirty_table__v3 = 0;
    CData/*0:0*/ __Vdlyvset__CPU__DOT__DCache_inst__DOT__dirty_table__v3;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__dirty_table__v3 = 0;
    VlWide<4>/*127:0*/ __Vdly__CPU__DOT__DCache_inst__DOT__wbuf;
    VL_ZERO_W(128, __Vdly__CPU__DOT__DCache_inst__DOT__wbuf);
    CData/*4:0*/ __Vdly__CPU__DOT__DCache_inst__DOT__addr_cnt;
    __Vdly__CPU__DOT__DCache_inst__DOT__addr_cnt = 0;
    CData/*2:0*/ __Vdly__CPU__DOT__DCache_inst__DOT__write_counter;
    __Vdly__CPU__DOT__DCache_inst__DOT__write_counter = 0;
    CData/*3:0*/ __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v0;
    __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v0 = 0;
    CData/*6:0*/ __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v0;
    __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v0 = 0;
    CData/*7:0*/ __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v0;
    __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v0;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v0 = 0;
    CData/*3:0*/ __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v1;
    __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v1 = 0;
    CData/*6:0*/ __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v1;
    __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v1 = 0;
    CData/*7:0*/ __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v1;
    __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v1 = 0;
    CData/*0:0*/ __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v1;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v1 = 0;
    CData/*3:0*/ __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v2;
    __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v2 = 0;
    CData/*6:0*/ __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v2;
    __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v2 = 0;
    CData/*7:0*/ __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v2;
    __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v2 = 0;
    CData/*0:0*/ __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v2;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v2 = 0;
    CData/*3:0*/ __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v3;
    __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v3 = 0;
    CData/*6:0*/ __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v3;
    __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v3 = 0;
    CData/*7:0*/ __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v3;
    __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v3 = 0;
    CData/*0:0*/ __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v3;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v3 = 0;
    CData/*3:0*/ __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v4;
    __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v4 = 0;
    CData/*6:0*/ __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v4;
    __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v4 = 0;
    CData/*7:0*/ __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v4;
    __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v4 = 0;
    CData/*0:0*/ __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v4;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v4 = 0;
    CData/*3:0*/ __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v5;
    __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v5 = 0;
    CData/*6:0*/ __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v5;
    __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v5 = 0;
    CData/*7:0*/ __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v5;
    __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v5 = 0;
    CData/*0:0*/ __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v5;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v5 = 0;
    CData/*3:0*/ __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v6;
    __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v6 = 0;
    CData/*6:0*/ __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v6;
    __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v6 = 0;
    CData/*7:0*/ __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v6;
    __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v6 = 0;
    CData/*0:0*/ __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v6;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v6 = 0;
    CData/*3:0*/ __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v7;
    __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v7 = 0;
    CData/*6:0*/ __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v7;
    __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v7 = 0;
    CData/*7:0*/ __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v7;
    __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v7 = 0;
    CData/*0:0*/ __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v7;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v7 = 0;
    CData/*3:0*/ __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v8;
    __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v8 = 0;
    CData/*6:0*/ __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v8;
    __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v8 = 0;
    CData/*7:0*/ __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v8;
    __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v8 = 0;
    CData/*0:0*/ __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v8;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v8 = 0;
    CData/*3:0*/ __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v9;
    __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v9 = 0;
    CData/*6:0*/ __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v9;
    __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v9 = 0;
    CData/*7:0*/ __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v9;
    __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v9 = 0;
    CData/*0:0*/ __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v9;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v9 = 0;
    CData/*3:0*/ __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v10;
    __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v10 = 0;
    CData/*6:0*/ __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v10;
    __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v10 = 0;
    CData/*7:0*/ __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v10;
    __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v10 = 0;
    CData/*0:0*/ __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v10;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v10 = 0;
    CData/*3:0*/ __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v11;
    __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v11 = 0;
    CData/*6:0*/ __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v11;
    __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v11 = 0;
    CData/*7:0*/ __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v11;
    __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v11 = 0;
    CData/*0:0*/ __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v11;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v11 = 0;
    CData/*3:0*/ __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v12;
    __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v12 = 0;
    CData/*6:0*/ __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v12;
    __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v12 = 0;
    CData/*7:0*/ __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v12;
    __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v12 = 0;
    CData/*0:0*/ __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v12;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v12 = 0;
    CData/*3:0*/ __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v13;
    __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v13 = 0;
    CData/*6:0*/ __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v13;
    __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v13 = 0;
    CData/*7:0*/ __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v13;
    __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v13 = 0;
    CData/*0:0*/ __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v13;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v13 = 0;
    CData/*3:0*/ __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v14;
    __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v14 = 0;
    CData/*6:0*/ __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v14;
    __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v14 = 0;
    CData/*7:0*/ __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v14;
    __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v14 = 0;
    CData/*0:0*/ __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v14;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v14 = 0;
    CData/*3:0*/ __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v15;
    __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v15 = 0;
    CData/*6:0*/ __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v15;
    __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v15 = 0;
    CData/*7:0*/ __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v15;
    __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v15 = 0;
    CData/*0:0*/ __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v15;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v15 = 0;
    CData/*3:0*/ __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v0;
    __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v0 = 0;
    CData/*6:0*/ __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v0;
    __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v0 = 0;
    CData/*7:0*/ __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v0;
    __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v0;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v0 = 0;
    CData/*3:0*/ __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v1;
    __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v1 = 0;
    CData/*6:0*/ __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v1;
    __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v1 = 0;
    CData/*7:0*/ __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v1;
    __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v1 = 0;
    CData/*0:0*/ __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v1;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v1 = 0;
    CData/*3:0*/ __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v2;
    __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v2 = 0;
    CData/*6:0*/ __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v2;
    __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v2 = 0;
    CData/*7:0*/ __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v2;
    __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v2 = 0;
    CData/*0:0*/ __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v2;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v2 = 0;
    CData/*3:0*/ __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v3;
    __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v3 = 0;
    CData/*6:0*/ __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v3;
    __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v3 = 0;
    CData/*7:0*/ __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v3;
    __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v3 = 0;
    CData/*0:0*/ __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v3;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v3 = 0;
    CData/*3:0*/ __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v4;
    __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v4 = 0;
    CData/*6:0*/ __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v4;
    __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v4 = 0;
    CData/*7:0*/ __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v4;
    __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v4 = 0;
    CData/*0:0*/ __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v4;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v4 = 0;
    CData/*3:0*/ __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v5;
    __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v5 = 0;
    CData/*6:0*/ __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v5;
    __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v5 = 0;
    CData/*7:0*/ __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v5;
    __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v5 = 0;
    CData/*0:0*/ __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v5;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v5 = 0;
    CData/*3:0*/ __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v6;
    __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v6 = 0;
    CData/*6:0*/ __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v6;
    __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v6 = 0;
    CData/*7:0*/ __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v6;
    __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v6 = 0;
    CData/*0:0*/ __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v6;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v6 = 0;
    CData/*3:0*/ __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v7;
    __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v7 = 0;
    CData/*6:0*/ __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v7;
    __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v7 = 0;
    CData/*7:0*/ __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v7;
    __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v7 = 0;
    CData/*0:0*/ __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v7;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v7 = 0;
    CData/*3:0*/ __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v8;
    __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v8 = 0;
    CData/*6:0*/ __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v8;
    __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v8 = 0;
    CData/*7:0*/ __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v8;
    __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v8 = 0;
    CData/*0:0*/ __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v8;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v8 = 0;
    CData/*3:0*/ __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v9;
    __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v9 = 0;
    CData/*6:0*/ __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v9;
    __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v9 = 0;
    CData/*7:0*/ __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v9;
    __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v9 = 0;
    CData/*0:0*/ __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v9;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v9 = 0;
    CData/*3:0*/ __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v10;
    __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v10 = 0;
    CData/*6:0*/ __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v10;
    __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v10 = 0;
    CData/*7:0*/ __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v10;
    __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v10 = 0;
    CData/*0:0*/ __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v10;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v10 = 0;
    CData/*3:0*/ __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v11;
    __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v11 = 0;
    CData/*6:0*/ __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v11;
    __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v11 = 0;
    CData/*7:0*/ __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v11;
    __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v11 = 0;
    CData/*0:0*/ __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v11;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v11 = 0;
    CData/*3:0*/ __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v12;
    __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v12 = 0;
    CData/*6:0*/ __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v12;
    __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v12 = 0;
    CData/*7:0*/ __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v12;
    __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v12 = 0;
    CData/*0:0*/ __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v12;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v12 = 0;
    CData/*3:0*/ __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v13;
    __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v13 = 0;
    CData/*6:0*/ __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v13;
    __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v13 = 0;
    CData/*7:0*/ __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v13;
    __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v13 = 0;
    CData/*0:0*/ __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v13;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v13 = 0;
    CData/*3:0*/ __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v14;
    __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v14 = 0;
    CData/*6:0*/ __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v14;
    __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v14 = 0;
    CData/*7:0*/ __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v14;
    __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v14 = 0;
    CData/*0:0*/ __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v14;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v14 = 0;
    CData/*3:0*/ __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v15;
    __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v15 = 0;
    CData/*6:0*/ __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v15;
    __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v15 = 0;
    CData/*7:0*/ __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v15;
    __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v15 = 0;
    CData/*0:0*/ __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v15;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v15 = 0;
    CData/*3:0*/ __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram__v0;
    __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram__v0 = 0;
    IData/*23:0*/ __Vdlyvval__CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram__v0;
    __Vdlyvval__CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram__v0;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram__v0 = 0;
    CData/*3:0*/ __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram__v0;
    __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram__v0 = 0;
    IData/*23:0*/ __Vdlyvval__CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram__v0;
    __Vdlyvval__CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram__v0;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram__v0 = 0;
    VlWide<4>/*127:0*/ __Vtemp_h8010c585__0;
    VlWide<4>/*127:0*/ __Vtemp_h5338566c__1;
    VlWide<4>/*127:0*/ __Vtemp_h440f5a77__0;
    VlWide<4>/*127:0*/ __Vtemp_hfd92b8e8__0;
    VlWide<4>/*127:0*/ __Vtemp_h9291c2cc__0;
    VlWide<4>/*127:0*/ __Vtemp_hab5a02e1__0;
    VlWide<4>/*127:0*/ __Vtemp_h9b694aeb__0;
    VlWide<4>/*127:0*/ __Vtemp_hd40e0d09__0;
    VlWide<4>/*127:0*/ __Vtemp_h4fc542b6__0;
    VlWide<4>/*127:0*/ __Vtemp_h14324bb5__0;
    VlWide<4>/*127:0*/ __Vtemp_h38679573__0;
    VlWide<4>/*127:0*/ __Vtemp_h1c51f178__0;
    // Body
    __Vdly__CPU__DOT__ICache_inst__DOT__ret_buf[0U] 
        = vlSelf->CPU__DOT__ICache_inst__DOT__ret_buf[0U];
    __Vdly__CPU__DOT__ICache_inst__DOT__ret_buf[1U] 
        = vlSelf->CPU__DOT__ICache_inst__DOT__ret_buf[1U];
    __Vdly__CPU__DOT__ICache_inst__DOT__ret_buf[2U] 
        = vlSelf->CPU__DOT__ICache_inst__DOT__ret_buf[2U];
    __Vdly__CPU__DOT__ICache_inst__DOT__ret_buf[3U] 
        = vlSelf->CPU__DOT__ICache_inst__DOT__ret_buf[3U];
    __Vdly__CPU__DOT__DCache_inst__DOT__write_counter 
        = vlSelf->CPU__DOT__DCache_inst__DOT__write_counter;
    __Vdly__CPU__DOT__DCache_inst__DOT__lru = vlSelf->CPU__DOT__DCache_inst__DOT__lru;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v0 = 0U;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v1 = 0U;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v2 = 0U;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v3 = 0U;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v4 = 0U;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v5 = 0U;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v6 = 0U;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v7 = 0U;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v8 = 0U;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v9 = 0U;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v10 = 0U;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v11 = 0U;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v12 = 0U;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v13 = 0U;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v14 = 0U;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v15 = 0U;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v0 = 0U;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v1 = 0U;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v2 = 0U;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v3 = 0U;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v4 = 0U;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v5 = 0U;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v6 = 0U;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v7 = 0U;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v8 = 0U;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v9 = 0U;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v10 = 0U;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v11 = 0U;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v12 = 0U;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v13 = 0U;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v14 = 0U;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v15 = 0U;
    __Vdly__CPU__DOT__DCache_inst__DOT__addr_cnt = vlSelf->CPU__DOT__DCache_inst__DOT__addr_cnt;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__dirty_table__v0 = 0U;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__dirty_table__v2 = 0U;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__dirty_table__v3 = 0U;
    __Vdlyvset__CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram__v0 = 0U;
    __Vdlyvset__CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram__v0 = 0U;
    __Vdly__CPU__DOT__ICache_inst__DOT__lru = vlSelf->CPU__DOT__ICache_inst__DOT__lru;
    __Vdlyvset__CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram__v0 = 0U;
    __Vdlyvset__CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram__v0 = 0U;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram__v0 = 0U;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram__v0 = 0U;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__valid_bit_mem__v0 = 0U;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__valid_bit_mem__v1 = 0U;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__valid_bit_mem__v2 = 0U;
    __Vdlyvset__CPU__DOT__DCache_inst__DOT__valid_bit_mem__v3 = 0U;
    __Vdlyvset__CPU__DOT__ICache_inst__DOT__valid_bit_mem__v0 = 0U;
    __Vdlyvset__CPU__DOT__ICache_inst__DOT__valid_bit_mem__v1 = 0U;
    __Vdlyvset__CPU__DOT__ICache_inst__DOT__valid_bit_mem__v2 = 0U;
    __Vdlyvset__CPU__DOT__ICache_inst__DOT__valid_bit_mem__v3 = 0U;
    __Vdly__CPU__DOT__DCache_inst__DOT__wbuf[0U] = 
        vlSelf->CPU__DOT__DCache_inst__DOT__wbuf[0U];
    __Vdly__CPU__DOT__DCache_inst__DOT__wbuf[1U] = 
        vlSelf->CPU__DOT__DCache_inst__DOT__wbuf[1U];
    __Vdly__CPU__DOT__DCache_inst__DOT__wbuf[2U] = 
        vlSelf->CPU__DOT__DCache_inst__DOT__wbuf[2U];
    __Vdly__CPU__DOT__DCache_inst__DOT__wbuf[3U] = 
        vlSelf->CPU__DOT__DCache_inst__DOT__wbuf[3U];
    __Vdlyvset__CPU__DOT__Regfile_inst__DOT__rf__v0 = 0U;
    __Vdly__CPU__DOT__CSR_inst__DOT__mstatus = vlSelf->CPU__DOT__CSR_inst__DOT__mstatus;
    __Vdly__CPU__DOT__csr_rdata_ex = vlSelf->CPU__DOT__csr_rdata_ex;
    if ((1U & vlSelf->CPU__DOT__DCache_inst__DOT__mem_we
         [1U])) {
        __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v0 
            = (0xffU & vlSelf->CPU__DOT__DCache_inst__DOT__mem_wdata[0U]);
        __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v0 = 1U;
        __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v0 = 0U;
        __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v0 
            = vlSelf->CPU__DOT__DCache_inst__DOT__w_index;
    }
    if ((2U & vlSelf->CPU__DOT__DCache_inst__DOT__mem_we
         [1U])) {
        __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v1 
            = (0xffU & (vlSelf->CPU__DOT__DCache_inst__DOT__mem_wdata[0U] 
                        >> 8U));
        __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v1 = 1U;
        __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v1 = 8U;
        __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v1 
            = vlSelf->CPU__DOT__DCache_inst__DOT__w_index;
    }
    if ((4U & vlSelf->CPU__DOT__DCache_inst__DOT__mem_we
         [1U])) {
        __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v2 
            = (0xffU & (vlSelf->CPU__DOT__DCache_inst__DOT__mem_wdata[0U] 
                        >> 0x10U));
        __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v2 = 1U;
        __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v2 = 0x10U;
        __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v2 
            = vlSelf->CPU__DOT__DCache_inst__DOT__w_index;
    }
    if ((8U & vlSelf->CPU__DOT__DCache_inst__DOT__mem_we
         [1U])) {
        __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v3 
            = (vlSelf->CPU__DOT__DCache_inst__DOT__mem_wdata[0U] 
               >> 0x18U);
        __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v3 = 1U;
        __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v3 = 0x18U;
        __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v3 
            = vlSelf->CPU__DOT__DCache_inst__DOT__w_index;
    }
    if ((0x10U & vlSelf->CPU__DOT__DCache_inst__DOT__mem_we
         [1U])) {
        __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v4 
            = (0xffU & vlSelf->CPU__DOT__DCache_inst__DOT__mem_wdata[1U]);
        __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v4 = 1U;
        __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v4 = 0x20U;
        __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v4 
            = vlSelf->CPU__DOT__DCache_inst__DOT__w_index;
    }
    if ((0x20U & vlSelf->CPU__DOT__DCache_inst__DOT__mem_we
         [1U])) {
        __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v5 
            = (0xffU & (vlSelf->CPU__DOT__DCache_inst__DOT__mem_wdata[1U] 
                        >> 8U));
        __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v5 = 1U;
        __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v5 = 0x28U;
        __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v5 
            = vlSelf->CPU__DOT__DCache_inst__DOT__w_index;
    }
    if ((0x40U & vlSelf->CPU__DOT__DCache_inst__DOT__mem_we
         [1U])) {
        __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v6 
            = (0xffU & (vlSelf->CPU__DOT__DCache_inst__DOT__mem_wdata[1U] 
                        >> 0x10U));
        __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v6 = 1U;
        __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v6 = 0x30U;
        __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v6 
            = vlSelf->CPU__DOT__DCache_inst__DOT__w_index;
    }
    if ((0x80U & vlSelf->CPU__DOT__DCache_inst__DOT__mem_we
         [1U])) {
        __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v7 
            = (vlSelf->CPU__DOT__DCache_inst__DOT__mem_wdata[1U] 
               >> 0x18U);
        __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v7 = 1U;
        __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v7 = 0x38U;
        __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v7 
            = vlSelf->CPU__DOT__DCache_inst__DOT__w_index;
    }
    if ((0x100U & vlSelf->CPU__DOT__DCache_inst__DOT__mem_we
         [1U])) {
        __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v8 
            = (0xffU & vlSelf->CPU__DOT__DCache_inst__DOT__mem_wdata[2U]);
        __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v8 = 1U;
        __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v8 = 0x40U;
        __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v8 
            = vlSelf->CPU__DOT__DCache_inst__DOT__w_index;
    }
    if ((0x200U & vlSelf->CPU__DOT__DCache_inst__DOT__mem_we
         [1U])) {
        __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v9 
            = (0xffU & (vlSelf->CPU__DOT__DCache_inst__DOT__mem_wdata[2U] 
                        >> 8U));
        __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v9 = 1U;
        __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v9 = 0x48U;
        __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v9 
            = vlSelf->CPU__DOT__DCache_inst__DOT__w_index;
    }
    if ((0x400U & vlSelf->CPU__DOT__DCache_inst__DOT__mem_we
         [1U])) {
        __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v10 
            = (0xffU & (vlSelf->CPU__DOT__DCache_inst__DOT__mem_wdata[2U] 
                        >> 0x10U));
        __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v10 = 1U;
        __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v10 = 0x50U;
        __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v10 
            = vlSelf->CPU__DOT__DCache_inst__DOT__w_index;
    }
    if ((0x800U & vlSelf->CPU__DOT__DCache_inst__DOT__mem_we
         [1U])) {
        __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v11 
            = (vlSelf->CPU__DOT__DCache_inst__DOT__mem_wdata[2U] 
               >> 0x18U);
        __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v11 = 1U;
        __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v11 = 0x58U;
        __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v11 
            = vlSelf->CPU__DOT__DCache_inst__DOT__w_index;
    }
    if ((0x1000U & vlSelf->CPU__DOT__DCache_inst__DOT__mem_we
         [1U])) {
        __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v12 
            = (0xffU & vlSelf->CPU__DOT__DCache_inst__DOT__mem_wdata[3U]);
        __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v12 = 1U;
        __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v12 = 0x60U;
        __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v12 
            = vlSelf->CPU__DOT__DCache_inst__DOT__w_index;
    }
    if ((0x2000U & vlSelf->CPU__DOT__DCache_inst__DOT__mem_we
         [1U])) {
        __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v13 
            = (0xffU & (vlSelf->CPU__DOT__DCache_inst__DOT__mem_wdata[3U] 
                        >> 8U));
        __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v13 = 1U;
        __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v13 = 0x68U;
        __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v13 
            = vlSelf->CPU__DOT__DCache_inst__DOT__w_index;
    }
    if ((0x4000U & vlSelf->CPU__DOT__DCache_inst__DOT__mem_we
         [1U])) {
        __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v14 
            = (0xffU & (vlSelf->CPU__DOT__DCache_inst__DOT__mem_wdata[3U] 
                        >> 0x10U));
        __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v14 = 1U;
        __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v14 = 0x70U;
        __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v14 
            = vlSelf->CPU__DOT__DCache_inst__DOT__w_index;
    }
    if ((0x8000U & vlSelf->CPU__DOT__DCache_inst__DOT__mem_we
         [1U])) {
        __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v15 
            = (vlSelf->CPU__DOT__DCache_inst__DOT__mem_wdata[3U] 
               >> 0x18U);
        __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v15 = 1U;
        __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v15 = 0x78U;
        __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v15 
            = vlSelf->CPU__DOT__DCache_inst__DOT__w_index;
    }
    if ((1U & vlSelf->CPU__DOT__DCache_inst__DOT__mem_we
         [0U])) {
        __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v0 
            = (0xffU & vlSelf->CPU__DOT__DCache_inst__DOT__mem_wdata[0U]);
        __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v0 = 1U;
        __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v0 = 0U;
        __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v0 
            = vlSelf->CPU__DOT__DCache_inst__DOT__w_index;
    }
    if ((2U & vlSelf->CPU__DOT__DCache_inst__DOT__mem_we
         [0U])) {
        __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v1 
            = (0xffU & (vlSelf->CPU__DOT__DCache_inst__DOT__mem_wdata[0U] 
                        >> 8U));
        __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v1 = 1U;
        __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v1 = 8U;
        __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v1 
            = vlSelf->CPU__DOT__DCache_inst__DOT__w_index;
    }
    if ((4U & vlSelf->CPU__DOT__DCache_inst__DOT__mem_we
         [0U])) {
        __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v2 
            = (0xffU & (vlSelf->CPU__DOT__DCache_inst__DOT__mem_wdata[0U] 
                        >> 0x10U));
        __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v2 = 1U;
        __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v2 = 0x10U;
        __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v2 
            = vlSelf->CPU__DOT__DCache_inst__DOT__w_index;
    }
    if ((8U & vlSelf->CPU__DOT__DCache_inst__DOT__mem_we
         [0U])) {
        __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v3 
            = (vlSelf->CPU__DOT__DCache_inst__DOT__mem_wdata[0U] 
               >> 0x18U);
        __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v3 = 1U;
        __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v3 = 0x18U;
        __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v3 
            = vlSelf->CPU__DOT__DCache_inst__DOT__w_index;
    }
    if ((0x10U & vlSelf->CPU__DOT__DCache_inst__DOT__mem_we
         [0U])) {
        __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v4 
            = (0xffU & vlSelf->CPU__DOT__DCache_inst__DOT__mem_wdata[1U]);
        __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v4 = 1U;
        __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v4 = 0x20U;
        __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v4 
            = vlSelf->CPU__DOT__DCache_inst__DOT__w_index;
    }
    if ((0x20U & vlSelf->CPU__DOT__DCache_inst__DOT__mem_we
         [0U])) {
        __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v5 
            = (0xffU & (vlSelf->CPU__DOT__DCache_inst__DOT__mem_wdata[1U] 
                        >> 8U));
        __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v5 = 1U;
        __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v5 = 0x28U;
        __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v5 
            = vlSelf->CPU__DOT__DCache_inst__DOT__w_index;
    }
    if ((0x40U & vlSelf->CPU__DOT__DCache_inst__DOT__mem_we
         [0U])) {
        __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v6 
            = (0xffU & (vlSelf->CPU__DOT__DCache_inst__DOT__mem_wdata[1U] 
                        >> 0x10U));
        __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v6 = 1U;
        __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v6 = 0x30U;
        __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v6 
            = vlSelf->CPU__DOT__DCache_inst__DOT__w_index;
    }
    if ((0x80U & vlSelf->CPU__DOT__DCache_inst__DOT__mem_we
         [0U])) {
        __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v7 
            = (vlSelf->CPU__DOT__DCache_inst__DOT__mem_wdata[1U] 
               >> 0x18U);
        __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v7 = 1U;
        __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v7 = 0x38U;
        __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v7 
            = vlSelf->CPU__DOT__DCache_inst__DOT__w_index;
    }
    if ((0x100U & vlSelf->CPU__DOT__DCache_inst__DOT__mem_we
         [0U])) {
        __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v8 
            = (0xffU & vlSelf->CPU__DOT__DCache_inst__DOT__mem_wdata[2U]);
        __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v8 = 1U;
        __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v8 = 0x40U;
        __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v8 
            = vlSelf->CPU__DOT__DCache_inst__DOT__w_index;
    }
    if ((0x200U & vlSelf->CPU__DOT__DCache_inst__DOT__mem_we
         [0U])) {
        __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v9 
            = (0xffU & (vlSelf->CPU__DOT__DCache_inst__DOT__mem_wdata[2U] 
                        >> 8U));
        __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v9 = 1U;
        __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v9 = 0x48U;
        __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v9 
            = vlSelf->CPU__DOT__DCache_inst__DOT__w_index;
    }
    if ((0x400U & vlSelf->CPU__DOT__DCache_inst__DOT__mem_we
         [0U])) {
        __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v10 
            = (0xffU & (vlSelf->CPU__DOT__DCache_inst__DOT__mem_wdata[2U] 
                        >> 0x10U));
        __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v10 = 1U;
        __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v10 = 0x50U;
        __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v10 
            = vlSelf->CPU__DOT__DCache_inst__DOT__w_index;
    }
    if ((0x800U & vlSelf->CPU__DOT__DCache_inst__DOT__mem_we
         [0U])) {
        __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v11 
            = (vlSelf->CPU__DOT__DCache_inst__DOT__mem_wdata[2U] 
               >> 0x18U);
        __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v11 = 1U;
        __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v11 = 0x58U;
        __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v11 
            = vlSelf->CPU__DOT__DCache_inst__DOT__w_index;
    }
    if ((0x1000U & vlSelf->CPU__DOT__DCache_inst__DOT__mem_we
         [0U])) {
        __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v12 
            = (0xffU & vlSelf->CPU__DOT__DCache_inst__DOT__mem_wdata[3U]);
        __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v12 = 1U;
        __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v12 = 0x60U;
        __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v12 
            = vlSelf->CPU__DOT__DCache_inst__DOT__w_index;
    }
    if ((0x2000U & vlSelf->CPU__DOT__DCache_inst__DOT__mem_we
         [0U])) {
        __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v13 
            = (0xffU & (vlSelf->CPU__DOT__DCache_inst__DOT__mem_wdata[3U] 
                        >> 8U));
        __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v13 = 1U;
        __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v13 = 0x68U;
        __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v13 
            = vlSelf->CPU__DOT__DCache_inst__DOT__w_index;
    }
    if ((0x4000U & vlSelf->CPU__DOT__DCache_inst__DOT__mem_we
         [0U])) {
        __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v14 
            = (0xffU & (vlSelf->CPU__DOT__DCache_inst__DOT__mem_wdata[3U] 
                        >> 0x10U));
        __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v14 = 1U;
        __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v14 = 0x70U;
        __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v14 
            = vlSelf->CPU__DOT__DCache_inst__DOT__w_index;
    }
    if ((0x8000U & vlSelf->CPU__DOT__DCache_inst__DOT__mem_we
         [0U])) {
        __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v15 
            = (vlSelf->CPU__DOT__DCache_inst__DOT__mem_wdata[3U] 
               >> 0x18U);
        __Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v15 = 1U;
        __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v15 = 0x78U;
        __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v15 
            = vlSelf->CPU__DOT__DCache_inst__DOT__w_index;
    }
    if ((1U & ((~ (IData)(vlSelf->rstn)) | (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__dirty_clean_all)))) {
        __Vdlyvset__CPU__DOT__DCache_inst__DOT__dirty_table__v0 = 1U;
    } else if (vlSelf->CPU__DOT__DCache_inst__DOT__dirty_refill) {
        __Vdlyvval__CPU__DOT__DCache_inst__DOT__dirty_table__v2 
            = vlSelf->CPU__DOT__DCache_inst__DOT__we_pipe;
        __Vdlyvset__CPU__DOT__DCache_inst__DOT__dirty_table__v2 = 1U;
        __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__dirty_table__v2 
            = vlSelf->CPU__DOT__DCache_inst__DOT__w_index;
        __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__dirty_table__v2 
            = vlSelf->CPU__DOT__DCache_inst__DOT__lru_sel;
    } else if (vlSelf->CPU__DOT__DCache_inst__DOT__dirty_we) {
        __Vdlyvset__CPU__DOT__DCache_inst__DOT__dirty_table__v3 = 1U;
        __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__dirty_table__v3 
            = vlSelf->CPU__DOT__DCache_inst__DOT__w_index;
        __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__dirty_table__v3 
            = (1U & (~ (IData)(vlSelf->CPU__DOT__DCache_inst__DOT____VdfgTmp_ha6d4d8ec__0)));
    }
    if ((2U & (IData)(vlSelf->CPU__DOT__ICache_inst__DOT__mem_we))) {
        __Vdlyvval__CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram__v0[0U] 
            = vlSelf->CPU__DOT__ICache_inst__DOT__ret_buf[0U];
        __Vdlyvval__CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram__v0[1U] 
            = vlSelf->CPU__DOT__ICache_inst__DOT__ret_buf[1U];
        __Vdlyvval__CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram__v0[2U] 
            = vlSelf->CPU__DOT__ICache_inst__DOT__ret_buf[2U];
        __Vdlyvval__CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram__v0[3U] 
            = vlSelf->CPU__DOT__ICache_inst__DOT__ret_buf[3U];
        __Vdlyvset__CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram__v0 = 1U;
        __Vdlyvdim0__CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram__v0 
            = (0xfU & (vlSelf->CPU__DOT__ICache_inst__DOT__addr_pipe 
                       >> 4U));
    }
    if ((1U & (IData)(vlSelf->CPU__DOT__ICache_inst__DOT__mem_we))) {
        __Vdlyvval__CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram__v0[0U] 
            = vlSelf->CPU__DOT__ICache_inst__DOT__ret_buf[0U];
        __Vdlyvval__CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram__v0[1U] 
            = vlSelf->CPU__DOT__ICache_inst__DOT__ret_buf[1U];
        __Vdlyvval__CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram__v0[2U] 
            = vlSelf->CPU__DOT__ICache_inst__DOT__ret_buf[2U];
        __Vdlyvval__CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram__v0[3U] 
            = vlSelf->CPU__DOT__ICache_inst__DOT__ret_buf[3U];
        __Vdlyvset__CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram__v0 = 1U;
        __Vdlyvdim0__CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram__v0 
            = (0xfU & (vlSelf->CPU__DOT__ICache_inst__DOT__addr_pipe 
                       >> 4U));
    }
    __Vdlyvval__CPU__DOT__DCache_inst__DOT__valid_bit_rdata__v0 
        = (1U & (vlSelf->CPU__DOT__DCache_inst__DOT__valid_bit_mem
                 [0U] >> (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__r_index)));
    __Vdlyvval__CPU__DOT__DCache_inst__DOT__valid_bit_rdata__v1 
        = (1U & (vlSelf->CPU__DOT__DCache_inst__DOT__valid_bit_mem
                 [1U] >> (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__r_index)));
    if ((2U & (IData)(vlSelf->CPU__DOT__ICache_inst__DOT__tagv_we))) {
        __Vdlyvval__CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram__v0 
            = (vlSelf->CPU__DOT__ICache_inst__DOT__addr_pipe 
               >> 8U);
        __Vdlyvset__CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram__v0 = 1U;
        __Vdlyvdim0__CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram__v0 
            = (0xfU & (vlSelf->CPU__DOT__ICache_inst__DOT__addr_pipe 
                       >> 4U));
    }
    if ((1U & (IData)(vlSelf->CPU__DOT__ICache_inst__DOT__tagv_we))) {
        __Vdlyvval__CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram__v0 
            = (vlSelf->CPU__DOT__ICache_inst__DOT__addr_pipe 
               >> 8U);
        __Vdlyvset__CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram__v0 = 1U;
        __Vdlyvdim0__CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram__v0 
            = (0xfU & (vlSelf->CPU__DOT__ICache_inst__DOT__addr_pipe 
                       >> 4U));
    }
    if (((0xfU & (vlSelf->CPU__DOT__ICache_inst__DOT__addr_pipe 
                  >> 4U)) == (IData)(vlSelf->CPU__DOT__ICache_inst__DOT__r_index))) {
        __Vdlyvval__CPU__DOT__ICache_inst__DOT__tag_rdata__v0 = 1U;
        __Vdlyvval__CPU__DOT__ICache_inst__DOT__tag_rdata__v1 = 1U;
    } else {
        __Vdlyvval__CPU__DOT__ICache_inst__DOT__tag_rdata__v0 
            = (1U & (vlSelf->CPU__DOT__ICache_inst__DOT__valid_bit_mem
                     [0U] >> (IData)(vlSelf->CPU__DOT__ICache_inst__DOT__r_index)));
        __Vdlyvval__CPU__DOT__ICache_inst__DOT__tag_rdata__v1 
            = (1U & (vlSelf->CPU__DOT__ICache_inst__DOT__valid_bit_mem
                     [1U] >> (IData)(vlSelf->CPU__DOT__ICache_inst__DOT__r_index)));
    }
    __Vdlyvlsb__CPU__DOT__ICache_inst__DOT__tag_rdata__v0 = 0x18U;
    __Vdlyvlsb__CPU__DOT__ICache_inst__DOT__tag_rdata__v1 = 0x18U;
    if ((2U & (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__tagv_we))) {
        __Vdlyvval__CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram__v0 
            = (vlSelf->CPU__DOT__DCache_inst__DOT__addr_pipe 
               >> 8U);
        __Vdlyvset__CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram__v0 = 1U;
        __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram__v0 
            = vlSelf->CPU__DOT__DCache_inst__DOT__w_index;
    }
    if ((1U & (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__tagv_we))) {
        __Vdlyvval__CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram__v0 
            = (vlSelf->CPU__DOT__DCache_inst__DOT__addr_pipe 
               >> 8U);
        __Vdlyvset__CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram__v0 = 1U;
        __Vdlyvdim0__CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram__v0 
            = vlSelf->CPU__DOT__DCache_inst__DOT__w_index;
    }
    if ((1U & ((~ (IData)(vlSelf->rstn)) | (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__valid_flush)))) {
        __Vdlyvset__CPU__DOT__DCache_inst__DOT__valid_bit_mem__v0 = 1U;
        __Vdlyvset__CPU__DOT__DCache_inst__DOT__valid_bit_mem__v2 = 1U;
    } else {
        if ((1U & (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__tagv_we))) {
            __Vdlyvset__CPU__DOT__DCache_inst__DOT__valid_bit_mem__v1 = 1U;
            __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__valid_bit_mem__v1 
                = vlSelf->CPU__DOT__DCache_inst__DOT__w_index;
        }
        if ((2U & (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__tagv_we))) {
            __Vdlyvset__CPU__DOT__DCache_inst__DOT__valid_bit_mem__v3 = 1U;
            __Vdlyvlsb__CPU__DOT__DCache_inst__DOT__valid_bit_mem__v3 
                = vlSelf->CPU__DOT__DCache_inst__DOT__w_index;
        }
    }
    if ((1U & ((~ (IData)(vlSelf->rstn)) | (0U != (0x18U 
                                                   & (IData)(vlSelf->CPU__DOT__priv_vec_ex)))))) {
        __Vdlyvset__CPU__DOT__ICache_inst__DOT__valid_bit_mem__v0 = 1U;
        __Vdlyvset__CPU__DOT__ICache_inst__DOT__valid_bit_mem__v2 = 1U;
    } else {
        if ((1U & (IData)(vlSelf->CPU__DOT__ICache_inst__DOT__tagv_we))) {
            __Vdlyvset__CPU__DOT__ICache_inst__DOT__valid_bit_mem__v1 = 1U;
            __Vdlyvlsb__CPU__DOT__ICache_inst__DOT__valid_bit_mem__v1 
                = (0xfU & (vlSelf->CPU__DOT__ICache_inst__DOT__addr_pipe 
                           >> 4U));
        }
        if ((2U & (IData)(vlSelf->CPU__DOT__ICache_inst__DOT__tagv_we))) {
            __Vdlyvset__CPU__DOT__ICache_inst__DOT__valid_bit_mem__v3 = 1U;
            __Vdlyvlsb__CPU__DOT__ICache_inst__DOT__valid_bit_mem__v3 
                = (0xfU & (vlSelf->CPU__DOT__ICache_inst__DOT__addr_pipe 
                           >> 4U));
        }
    }
    if (vlSelf->CPU__DOT__rf_we_wb) {
        __Vdlyvval__CPU__DOT__Regfile_inst__DOT__rf__v0 
            = vlSelf->CPU__DOT__rf_wdata_wb;
        __Vdlyvset__CPU__DOT__Regfile_inst__DOT__rf__v0 = 1U;
        __Vdlyvdim0__CPU__DOT__Regfile_inst__DOT__rf__v0 
            = (0x1fU & (vlSelf->CPU__DOT__inst_wb >> 7U));
    }
    if ((1U & ((~ (IData)(vlSelf->rstn)) | (IData)(vlSelf->CPU__DOT__ID_EX_flush)))) {
        __Vdly__CPU__DOT__csr_rdata_ex = 0U;
    } else if ((1U & (~ (IData)(vlSelf->CPU__DOT__dcache_miss)))) {
        __Vdly__CPU__DOT__csr_rdata_ex = ((0x300U == 
                                           (vlSelf->CPU__DOT__inst_id 
                                            >> 0x14U))
                                           ? vlSelf->CPU__DOT__CSR_inst__DOT__mstatus
                                           : ((0x305U 
                                               == (vlSelf->CPU__DOT__inst_id 
                                                   >> 0x14U))
                                               ? vlSelf->CPU__DOT__CSR_inst__DOT__mtvec
                                               : ((0x342U 
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
                                                    : 0U))));
    }
    if (((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__r_index) 
         == (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__w_index))) {
        vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__addr_r 
            = vlSelf->CPU__DOT__DCache_inst__DOT__w_index;
        vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__addr_r 
            = vlSelf->CPU__DOT__DCache_inst__DOT__w_index;
        vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__addr_r 
            = vlSelf->CPU__DOT__DCache_inst__DOT__w_index;
        vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__addr_r 
            = vlSelf->CPU__DOT__DCache_inst__DOT__w_index;
    } else {
        vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__addr_r 
            = vlSelf->CPU__DOT__DCache_inst__DOT__r_index;
        vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__addr_r 
            = vlSelf->CPU__DOT__DCache_inst__DOT__r_index;
        vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__addr_r 
            = vlSelf->CPU__DOT__DCache_inst__DOT__r_index;
        vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__addr_r 
            = vlSelf->CPU__DOT__DCache_inst__DOT__r_index;
    }
    if (((IData)(vlSelf->CPU__DOT__ICache_inst__DOT__r_index) 
         == (0xfU & (vlSelf->CPU__DOT__ICache_inst__DOT__addr_pipe 
                     >> 4U)))) {
        vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__addr_r 
            = (0xfU & (vlSelf->CPU__DOT__ICache_inst__DOT__addr_pipe 
                       >> 4U));
        vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__addr_r 
            = (0xfU & (vlSelf->CPU__DOT__ICache_inst__DOT__addr_pipe 
                       >> 4U));
        vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__addr_r 
            = (0xfU & (vlSelf->CPU__DOT__ICache_inst__DOT__addr_pipe 
                       >> 4U));
        vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__addr_r 
            = (0xfU & (vlSelf->CPU__DOT__ICache_inst__DOT__addr_pipe 
                       >> 4U));
    } else {
        vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__addr_r 
            = (0xfU & (IData)(vlSelf->CPU__DOT__ICache_inst__DOT__r_index));
        vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__addr_r 
            = (0xfU & (IData)(vlSelf->CPU__DOT__ICache_inst__DOT__r_index));
        vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__addr_r 
            = (0xfU & (IData)(vlSelf->CPU__DOT__ICache_inst__DOT__r_index));
        vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__addr_r 
            = (0xfU & (IData)(vlSelf->CPU__DOT__ICache_inst__DOT__r_index));
    }
    vlSelf->commit_wb = ((~ (((~ (IData)(vlSelf->rstn)) 
                              | (0U != vlSelf->CPU__DOT__mcause_global)) 
                             | (IData)(vlSelf->CPU__DOT__dcache_miss))) 
                         & (IData)(vlSelf->CPU__DOT__commit_ls));
    if ((1U & ((~ (IData)(vlSelf->rstn)) | (0U != vlSelf->CPU__DOT__mcause_global)))) {
        vlSelf->CPU__DOT__wb_rf_sel_wb = 0U;
        vlSelf->CPU__DOT__mem_rdata_wb = 0U;
        vlSelf->CPU__DOT__alu_result_wb = 0U;
        vlSelf->uncache_read_wb = 0U;
        vlSelf->CPU__DOT__commit_ls = 0U;
        vlSelf->CPU__DOT__wb_rf_sel_ls = 0U;
        vlSelf->CPU__DOT__mem_access_ls = 0U;
        vlSelf->CPU__DOT__alu_result_ls = 0U;
    } else if ((1U & (~ (IData)(vlSelf->CPU__DOT__dcache_miss)))) {
        vlSelf->CPU__DOT__wb_rf_sel_wb = vlSelf->CPU__DOT__wb_rf_sel_ls;
        vlSelf->CPU__DOT__mem_rdata_wb = ((4U & (IData)(vlSelf->CPU__DOT__mem_access_ls))
                                           ? ((2U & (IData)(vlSelf->CPU__DOT__mem_access_ls))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->CPU__DOT__mem_access_ls))
                                                   ? 
                                                  (0xffffU 
                                                   & vlSelf->CPU__DOT__DCache_Read_Ctrl_inst__DOT__load_data)
                                                   : 
                                                  (0xffU 
                                                   & vlSelf->CPU__DOT__DCache_Read_Ctrl_inst__DOT__load_data)))
                                           : ((2U & (IData)(vlSelf->CPU__DOT__mem_access_ls))
                                               ? ((1U 
                                                   & (IData)(vlSelf->CPU__DOT__mem_access_ls))
                                                   ? 0U
                                                   : vlSelf->CPU__DOT__DCache_Read_Ctrl_inst__DOT__load_data)
                                               : ((1U 
                                                   & (IData)(vlSelf->CPU__DOT__mem_access_ls))
                                                   ? 
                                                  (((- (IData)(
                                                               (1U 
                                                                & (vlSelf->CPU__DOT__DCache_Read_Ctrl_inst__DOT__load_data 
                                                                   >> 0xfU)))) 
                                                    << 0x10U) 
                                                   | (0xffffU 
                                                      & vlSelf->CPU__DOT__DCache_Read_Ctrl_inst__DOT__load_data))
                                                   : 
                                                  (((- (IData)(
                                                               (1U 
                                                                & (vlSelf->CPU__DOT__DCache_Read_Ctrl_inst__DOT__load_data 
                                                                   >> 7U)))) 
                                                    << 8U) 
                                                   | (0xffU 
                                                      & vlSelf->CPU__DOT__DCache_Read_Ctrl_inst__DOT__load_data)))));
        vlSelf->CPU__DOT__alu_result_wb = vlSelf->CPU__DOT__alu_result_ls;
        vlSelf->uncache_read_wb = ((0xaU == (vlSelf->CPU__DOT__alu_result_ls 
                                             >> 0x1cU)) 
                                   & ((IData)(vlSelf->CPU__DOT__mem_access_ls) 
                                      >> 3U));
        vlSelf->CPU__DOT__commit_ls = vlSelf->CPU__DOT__commit_ex;
        vlSelf->CPU__DOT__wb_rf_sel_ls = vlSelf->CPU__DOT__wb_rf_sel_ex;
        vlSelf->CPU__DOT__mem_access_ls = vlSelf->CPU__DOT__mem_access_ex;
        vlSelf->CPU__DOT__alu_result_ls = vlSelf->CPU__DOT__alu_result_ex;
    }
    if ((1U & ((~ (IData)(vlSelf->rstn)) | (IData)(vlSelf->CPU__DOT__ID_EX_flush)))) {
        vlSelf->CPU__DOT__alu_op_ex = 0U;
        vlSelf->CPU__DOT__alu_rs1_sel_ex = 0U;
        vlSelf->CPU__DOT__alu_rs2_sel_ex = 0U;
        vlSelf->CPU__DOT__imm_ex = 0U;
        vlSelf->CPU__DOT__br_type_ex = 0U;
        vlSelf->CPU__DOT__rf_rdata2_ex = 0U;
        vlSelf->CPU__DOT__rf_rdata1_ex = 0U;
    } else if ((1U & (~ (IData)(vlSelf->CPU__DOT__dcache_miss)))) {
        vlSelf->CPU__DOT__alu_op_ex = vlSelf->CPU__DOT__alu_op_id;
        vlSelf->CPU__DOT__alu_rs1_sel_ex = vlSelf->CPU__DOT__alu_rs1_sel_id;
        vlSelf->CPU__DOT__alu_rs2_sel_ex = vlSelf->CPU__DOT__alu_rs2_sel_id;
        vlSelf->CPU__DOT__imm_ex = vlSelf->CPU__DOT__imm_id;
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
    if ((1U & ((~ (IData)(vlSelf->rstn)) | (0U != vlSelf->CPU__DOT__mcause_global)))) {
        vlSelf->CPU__DOT__rf_we_wb = 0U;
    } else if ((1U & (~ (IData)(vlSelf->CPU__DOT__dcache_miss)))) {
        vlSelf->CPU__DOT__rf_we_wb = vlSelf->CPU__DOT__rf_we_ls;
    }
    if (vlSelf->rstn) {
        if (((IData)(vlSelf->CPU__DOT__d_rvalid) & (IData)(vlSelf->CPU__DOT__d_rready))) {
            __Vtemp_h8010c585__0[1U] = vlSelf->CPU__DOT__DCache_inst__DOT__ret_buf[2U];
            __Vtemp_h8010c585__0[2U] = vlSelf->CPU__DOT__DCache_inst__DOT__ret_buf[3U];
            vlSelf->CPU__DOT__DCache_inst__DOT__ret_buf[0U] 
                = vlSelf->CPU__DOT__DCache_inst__DOT__ret_buf[1U];
            vlSelf->CPU__DOT__DCache_inst__DOT__ret_buf[1U] 
                = __Vtemp_h8010c585__0[1U];
            vlSelf->CPU__DOT__DCache_inst__DOT__ret_buf[2U] 
                = __Vtemp_h8010c585__0[2U];
            vlSelf->CPU__DOT__DCache_inst__DOT__ret_buf[3U] 
                = vlSelf->rdata;
        }
        if (((IData)(vlSelf->CPU__DOT__i_rvalid) & (IData)(vlSelf->CPU__DOT__i_rready))) {
            __Vdly__CPU__DOT__ICache_inst__DOT__ret_buf[0U] 
                = vlSelf->CPU__DOT__ICache_inst__DOT__ret_buf[1U];
            __Vdly__CPU__DOT__ICache_inst__DOT__ret_buf[1U] 
                = vlSelf->CPU__DOT__ICache_inst__DOT__ret_buf[2U];
            __Vdly__CPU__DOT__ICache_inst__DOT__ret_buf[2U] 
                = vlSelf->CPU__DOT__ICache_inst__DOT__ret_buf[3U];
            __Vdly__CPU__DOT__ICache_inst__DOT__ret_buf[3U] 
                = vlSelf->rdata;
        }
        if (vlSelf->CPU__DOT__DCache_inst__DOT__write_counter_reset) {
            __Vdly__CPU__DOT__DCache_inst__DOT__write_counter = 0U;
        } else if (vlSelf->CPU__DOT__DCache_inst__DOT__write_counter_en) {
            __Vdly__CPU__DOT__DCache_inst__DOT__write_counter 
                = (7U & ((IData)(1U) + (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__write_counter)));
        }
        if (vlSelf->CPU__DOT__DCache_inst__DOT__lru_hit_update) {
            __Vdly__CPU__DOT__DCache_inst__DOT__lru 
                = (((~ ((IData)(1U) << (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__w_index))) 
                    & (IData)(__Vdly__CPU__DOT__DCache_inst__DOT__lru)) 
                   | (0xffffU & ((1U & (~ (IData)(vlSelf->CPU__DOT__DCache_inst__DOT____VdfgTmp_ha6d4d8ec__0))) 
                                 << (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__w_index))));
        } else if (vlSelf->CPU__DOT__DCache_inst__DOT__lru_refill_update) {
            __Vdly__CPU__DOT__DCache_inst__DOT__lru 
                = (((~ ((IData)(1U) << (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__w_index))) 
                    & (IData)(__Vdly__CPU__DOT__DCache_inst__DOT__lru)) 
                   | (0xffffU & ((1U & (~ ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__lru) 
                                           >> (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__w_index)))) 
                                 << (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__w_index))));
        }
        if (vlSelf->CPU__DOT__DCache_inst__DOT__addr_cnt_add) {
            __Vdly__CPU__DOT__DCache_inst__DOT__addr_cnt 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__addr_cnt)));
        }
        if (vlSelf->CPU__DOT__ICache_inst__DOT__lru_hit_update) {
            __Vdly__CPU__DOT__ICache_inst__DOT__lru 
                = (((~ ((IData)(1U) << (0xfU & (vlSelf->CPU__DOT__ICache_inst__DOT__addr_pipe 
                                                >> 4U)))) 
                    & (IData)(__Vdly__CPU__DOT__ICache_inst__DOT__lru)) 
                   | (0xffffU & ((1U & (~ (IData)(vlSelf->CPU__DOT__ICache_inst__DOT____VdfgTmp_h32c1d4e2__0))) 
                                 << (0xfU & (vlSelf->CPU__DOT__ICache_inst__DOT__addr_pipe 
                                             >> 4U)))));
        } else if (vlSelf->CPU__DOT__ICache_inst__DOT__lru_refill_update) {
            __Vdly__CPU__DOT__ICache_inst__DOT__lru 
                = (((~ ((IData)(1U) << (0xfU & (vlSelf->CPU__DOT__ICache_inst__DOT__addr_pipe 
                                                >> 4U)))) 
                    & (IData)(__Vdly__CPU__DOT__ICache_inst__DOT__lru)) 
                   | (0xffffU & ((1U & (~ ((IData)(vlSelf->CPU__DOT__ICache_inst__DOT__lru) 
                                           >> (0xfU 
                                               & (vlSelf->CPU__DOT__ICache_inst__DOT__addr_pipe 
                                                  >> 4U))))) 
                                 << (0xfU & (vlSelf->CPU__DOT__ICache_inst__DOT__addr_pipe 
                                             >> 4U)))));
        }
        if (vlSelf->CPU__DOT__DCache_inst__DOT__wbuf_we) {
            if (vlSelf->CPU__DOT__DCache_inst__DOT__fence_valid_pipe) {
                if ((0x10U & (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__addr_cnt))) {
                    __Vdly__CPU__DOT__DCache_inst__DOT__wbuf[0U] 
                        = vlSelf->CPU__DOT__DCache_inst__DOT__mem_rdata
                        [1U][0U];
                    __Vdly__CPU__DOT__DCache_inst__DOT__wbuf[1U] 
                        = vlSelf->CPU__DOT__DCache_inst__DOT__mem_rdata
                        [1U][1U];
                    __Vdly__CPU__DOT__DCache_inst__DOT__wbuf[2U] 
                        = vlSelf->CPU__DOT__DCache_inst__DOT__mem_rdata
                        [1U][2U];
                    __Vdly__CPU__DOT__DCache_inst__DOT__wbuf[3U] 
                        = vlSelf->CPU__DOT__DCache_inst__DOT__mem_rdata
                        [1U][3U];
                } else {
                    __Vdly__CPU__DOT__DCache_inst__DOT__wbuf[0U] 
                        = vlSelf->CPU__DOT__DCache_inst__DOT__mem_rdata
                        [0U][0U];
                    __Vdly__CPU__DOT__DCache_inst__DOT__wbuf[1U] 
                        = vlSelf->CPU__DOT__DCache_inst__DOT__mem_rdata
                        [0U][1U];
                    __Vdly__CPU__DOT__DCache_inst__DOT__wbuf[2U] 
                        = vlSelf->CPU__DOT__DCache_inst__DOT__mem_rdata
                        [0U][2U];
                    __Vdly__CPU__DOT__DCache_inst__DOT__wbuf[3U] 
                        = vlSelf->CPU__DOT__DCache_inst__DOT__mem_rdata
                        [0U][3U];
                }
            } else if (vlSelf->CPU__DOT__DCache_inst__DOT__uncache) {
                __Vdly__CPU__DOT__DCache_inst__DOT__wbuf[0U] 
                    = vlSelf->CPU__DOT__DCache_inst__DOT__wdata_pipe;
                __Vdly__CPU__DOT__DCache_inst__DOT__wbuf[1U] = 0U;
                __Vdly__CPU__DOT__DCache_inst__DOT__wbuf[2U] = 0U;
                __Vdly__CPU__DOT__DCache_inst__DOT__wbuf[3U] = 0U;
            } else if (vlSelf->CPU__DOT__DCache_inst__DOT__lru_sel) {
                __Vdly__CPU__DOT__DCache_inst__DOT__wbuf[0U] 
                    = vlSelf->CPU__DOT__DCache_inst__DOT__mem_rdata
                    [1U][0U];
                __Vdly__CPU__DOT__DCache_inst__DOT__wbuf[1U] 
                    = vlSelf->CPU__DOT__DCache_inst__DOT__mem_rdata
                    [1U][1U];
                __Vdly__CPU__DOT__DCache_inst__DOT__wbuf[2U] 
                    = vlSelf->CPU__DOT__DCache_inst__DOT__mem_rdata
                    [1U][2U];
                __Vdly__CPU__DOT__DCache_inst__DOT__wbuf[3U] 
                    = vlSelf->CPU__DOT__DCache_inst__DOT__mem_rdata
                    [1U][3U];
            } else {
                __Vdly__CPU__DOT__DCache_inst__DOT__wbuf[0U] 
                    = vlSelf->CPU__DOT__DCache_inst__DOT__mem_rdata
                    [0U][0U];
                __Vdly__CPU__DOT__DCache_inst__DOT__wbuf[1U] 
                    = vlSelf->CPU__DOT__DCache_inst__DOT__mem_rdata
                    [0U][1U];
                __Vdly__CPU__DOT__DCache_inst__DOT__wbuf[2U] 
                    = vlSelf->CPU__DOT__DCache_inst__DOT__mem_rdata
                    [0U][2U];
                __Vdly__CPU__DOT__DCache_inst__DOT__wbuf[3U] 
                    = vlSelf->CPU__DOT__DCache_inst__DOT__mem_rdata
                    [0U][3U];
            }
        } else if (((IData)(vlSelf->CPU__DOT__d_wvalid) 
                    & (IData)(vlSelf->CPU__DOT__d_wready))) {
            __Vdly__CPU__DOT__DCache_inst__DOT__wbuf[0U] 
                = vlSelf->CPU__DOT__DCache_inst__DOT__wbuf[1U];
            __Vdly__CPU__DOT__DCache_inst__DOT__wbuf[1U] 
                = vlSelf->CPU__DOT__DCache_inst__DOT__wbuf[2U];
            __Vdly__CPU__DOT__DCache_inst__DOT__wbuf[2U] 
                = vlSelf->CPU__DOT__DCache_inst__DOT__wbuf[3U];
            __Vdly__CPU__DOT__DCache_inst__DOT__wbuf[3U] = 0U;
        }
        if ((0U != vlSelf->CPU__DOT__mcause_global)) {
            __Vdly__CPU__DOT__CSR_inst__DOT__mstatus 
                = (6U | ((0xfffff000U & vlSelf->CPU__DOT__CSR_inst__DOT__mstatus) 
                         | (0xff8U & (vlSelf->CPU__DOT__CSR_inst__DOT__mstatus 
                                      << 3U))));
            vlSelf->CPU__DOT__CSR_inst__DOT__mcause 
                = vlSelf->CPU__DOT__mcause_global;
            vlSelf->CPU__DOT__CSR_inst__DOT__mepc = vlSelf->CPU__DOT__pc_wb;
        } else {
            if ((4U & (IData)(vlSelf->CPU__DOT__priv_vec_wb))) {
                __Vdly__CPU__DOT__CSR_inst__DOT__mstatus 
                    = (0x200U | ((0xfffff000U & vlSelf->CPU__DOT__CSR_inst__DOT__mstatus) 
                                 | (0x1ffU & (vlSelf->CPU__DOT__CSR_inst__DOT__mstatus 
                                              >> 3U))));
            } else if (((0x300U == (vlSelf->CPU__DOT__inst_wb 
                                    >> 0x14U)) & (IData)(vlSelf->CPU__DOT__priv_vec_wb))) {
                __Vdly__CPU__DOT__CSR_inst__DOT__mstatus 
                    = vlSelf->CPU__DOT__csr_wdata_wb;
            }
            if (((0x342U == (vlSelf->CPU__DOT__inst_wb 
                             >> 0x14U)) & (IData)(vlSelf->CPU__DOT__priv_vec_wb))) {
                vlSelf->CPU__DOT__CSR_inst__DOT__mcause 
                    = vlSelf->CPU__DOT__csr_wdata_wb;
            }
            if (((0x341U == (vlSelf->CPU__DOT__inst_wb 
                             >> 0x14U)) & (IData)(vlSelf->CPU__DOT__priv_vec_wb))) {
                vlSelf->CPU__DOT__CSR_inst__DOT__mepc 
                    = vlSelf->CPU__DOT__csr_wdata_wb;
            }
        }
        if (vlSelf->CPU__DOT__DCache_inst__DOT__req_buf_we) {
            vlSelf->CPU__DOT__DCache_inst__DOT__wstrb_pipe 
                = vlSelf->CPU__DOT__wstrb_ex;
            vlSelf->CPU__DOT__DCache_inst__DOT__rsize_pipe 
                = (7U & (IData)(vlSelf->CPU__DOT__mem_access_ex));
            vlSelf->CPU__DOT__DCache_inst__DOT__wvalid_pipe 
                = (1U & ((IData)(vlSelf->CPU__DOT__mem_access_ex) 
                         >> 4U));
            vlSelf->CPU__DOT__DCache_inst__DOT__rvalid_pipe 
                = (1U & ((IData)(vlSelf->CPU__DOT__mem_access_ex) 
                         >> 3U));
            vlSelf->CPU__DOT__DCache_inst__DOT__we_pipe 
                = (0U != (IData)(vlSelf->CPU__DOT__wstrb_ex));
            vlSelf->CPU__DOT__DCache_inst__DOT__valid_flush 
                = (1U & ((IData)(vlSelf->CPU__DOT__priv_vec_ex) 
                         >> 4U));
            vlSelf->CPU__DOT__DCache_inst__DOT__wdata_pipe 
                = ((0x10U & (IData)(vlSelf->CPU__DOT__mem_access_ex))
                    ? ((0U == (7U & (IData)(vlSelf->CPU__DOT__mem_access_ex)))
                        ? (vlSelf->CPU__DOT__alu_rf_data2 
                           << (0x18U & (vlSelf->CPU__DOT__alu_result_ex 
                                        << 3U))) : 
                       ((1U == (7U & (IData)(vlSelf->CPU__DOT__mem_access_ex)))
                         ? (vlSelf->CPU__DOT__alu_rf_data2 
                            << (0x18U & (vlSelf->CPU__DOT__alu_result_ex 
                                         << 3U))) : 
                        ((2U == (7U & (IData)(vlSelf->CPU__DOT__mem_access_ex)))
                          ? vlSelf->CPU__DOT__alu_rf_data2
                          : 0U))) : 0U);
        }
        vlSelf->CPU__DOT__axi_arbiter_inst__DOT__w_crt 
            = vlSelf->CPU__DOT__axi_arbiter_inst__DOT__w_nxt;
        vlSelf->CPU__DOT__ICache_inst__DOT__state = vlSelf->CPU__DOT__ICache_inst__DOT__next_state;
        vlSelf->CPU__DOT__axi_arbiter_inst__DOT__r_crt 
            = vlSelf->CPU__DOT__axi_arbiter_inst__DOT__r_nxt;
        if (vlSelf->CPU__DOT__ICache_inst__DOT__req_buf_we) {
            vlSelf->CPU__DOT__ICache_inst__DOT__rvalid_pipe 
                = vlSelf->rstn;
        }
        vlSelf->CPU__DOT__DCache_inst__DOT__state = vlSelf->CPU__DOT__DCache_inst__DOT__next_state;
        vlSelf->CPU__DOT__DCache_inst__DOT__wfsm_state 
            = vlSelf->CPU__DOT__DCache_inst__DOT__wfsm_next_state;
        if (vlSelf->CPU__DOT__DCache_inst__DOT__mbuf_we) {
            vlSelf->CPU__DOT__DCache_inst__DOT__maddr_buf 
                = ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__uncache)
                    ? (0xfffffffcU & vlSelf->CPU__DOT__DCache_inst__DOT__addr_pipe)
                    : ((vlSelf->CPU__DOT__DCache_inst__DOT__tag_rdata
                        [(1U & ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__fence_valid_pipe)
                                 ? ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__addr_cnt) 
                                    >> 4U) : (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__lru_sel)))] 
                        << 8U) | ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__w_index) 
                                  << 4U)));
        }
        if (((0x305U == (vlSelf->CPU__DOT__inst_wb 
                         >> 0x14U)) & (IData)(vlSelf->CPU__DOT__priv_vec_wb))) {
            vlSelf->CPU__DOT__CSR_inst__DOT__mtvec 
                = vlSelf->CPU__DOT__csr_wdata_wb;
        }
    } else {
        vlSelf->CPU__DOT__DCache_inst__DOT__ret_buf[0U] = 0U;
        vlSelf->CPU__DOT__DCache_inst__DOT__ret_buf[1U] = 0U;
        vlSelf->CPU__DOT__DCache_inst__DOT__ret_buf[2U] = 0U;
        vlSelf->CPU__DOT__DCache_inst__DOT__ret_buf[3U] = 0U;
        __Vdly__CPU__DOT__ICache_inst__DOT__ret_buf[0U] = 0U;
        __Vdly__CPU__DOT__ICache_inst__DOT__ret_buf[1U] = 0U;
        __Vdly__CPU__DOT__ICache_inst__DOT__ret_buf[2U] = 0U;
        __Vdly__CPU__DOT__ICache_inst__DOT__ret_buf[3U] = 0U;
        __Vdly__CPU__DOT__DCache_inst__DOT__write_counter = 0U;
        __Vdly__CPU__DOT__DCache_inst__DOT__lru = 0U;
        __Vdly__CPU__DOT__DCache_inst__DOT__addr_cnt = 0U;
        __Vdly__CPU__DOT__ICache_inst__DOT__lru = 0U;
        __Vdly__CPU__DOT__DCache_inst__DOT__wbuf[0U] = 0U;
        __Vdly__CPU__DOT__DCache_inst__DOT__wbuf[1U] = 0U;
        __Vdly__CPU__DOT__DCache_inst__DOT__wbuf[2U] = 0U;
        __Vdly__CPU__DOT__DCache_inst__DOT__wbuf[3U] = 0U;
        __Vdly__CPU__DOT__CSR_inst__DOT__mstatus = 0U;
        vlSelf->CPU__DOT__DCache_inst__DOT__wstrb_pipe = 0U;
        vlSelf->CPU__DOT__axi_arbiter_inst__DOT__w_crt = 0U;
        vlSelf->CPU__DOT__ICache_inst__DOT__state = 0U;
        vlSelf->CPU__DOT__axi_arbiter_inst__DOT__r_crt = 0U;
        vlSelf->CPU__DOT__ICache_inst__DOT__rvalid_pipe = 0U;
        vlSelf->CPU__DOT__DCache_inst__DOT__state = 0U;
        vlSelf->CPU__DOT__DCache_inst__DOT__wfsm_state = 0U;
        vlSelf->CPU__DOT__DCache_inst__DOT__rsize_pipe = 0U;
        vlSelf->CPU__DOT__DCache_inst__DOT__wvalid_pipe = 0U;
        vlSelf->CPU__DOT__DCache_inst__DOT__rvalid_pipe = 0U;
        vlSelf->CPU__DOT__DCache_inst__DOT__maddr_buf = 0U;
        vlSelf->CPU__DOT__DCache_inst__DOT__we_pipe = 0U;
        vlSelf->CPU__DOT__DCache_inst__DOT__valid_flush = 0U;
        vlSelf->CPU__DOT__DCache_inst__DOT__wdata_pipe = 0U;
        vlSelf->CPU__DOT__CSR_inst__DOT__mtvec = 0U;
        vlSelf->CPU__DOT__CSR_inst__DOT__mcause = 0U;
        vlSelf->CPU__DOT__CSR_inst__DOT__mepc = 0U;
    }
    if ((1U & ((~ (IData)(vlSelf->rstn)) | (0U != vlSelf->CPU__DOT__mcause_global)))) {
        vlSelf->CPU__DOT__pc_wb = 0x80000000U;
        vlSelf->CPU__DOT__priv_vec_wb = 0U;
        vlSelf->CPU__DOT__csr_wdata_wb = 0U;
        vlSelf->CPU__DOT__inst_wb = 0x13U;
        vlSelf->CPU__DOT__rf_we_ls = 0U;
        vlSelf->CPU__DOT__pc_ls = 0x80000000U;
        vlSelf->CPU__DOT__priv_vec_ls = 0U;
        vlSelf->CPU__DOT__csr_wdata_ls = 0U;
        vlSelf->CPU__DOT__inst_ls = 0x13U;
    } else if ((1U & (~ (IData)(vlSelf->CPU__DOT__dcache_miss)))) {
        vlSelf->CPU__DOT__pc_wb = vlSelf->CPU__DOT__pc_ls;
        vlSelf->CPU__DOT__priv_vec_wb = vlSelf->CPU__DOT__priv_vec_ls;
        vlSelf->CPU__DOT__csr_wdata_wb = vlSelf->CPU__DOT__csr_wdata_ls;
        vlSelf->CPU__DOT__inst_wb = vlSelf->CPU__DOT__inst_ls;
        vlSelf->CPU__DOT__rf_we_ls = vlSelf->CPU__DOT__rf_we_ex;
        vlSelf->CPU__DOT__pc_ls = vlSelf->CPU__DOT__pc_ex;
        vlSelf->CPU__DOT__priv_vec_ls = vlSelf->CPU__DOT__priv_vec_ex;
        vlSelf->CPU__DOT__csr_wdata_ls = ((0x4000U 
                                           & vlSelf->CPU__DOT__inst_ex)
                                           ? ((0x2000U 
                                               & vlSelf->CPU__DOT__inst_ex)
                                               ? ((0x1000U 
                                                   & vlSelf->CPU__DOT__inst_ex)
                                                   ? 
                                                  (vlSelf->CPU__DOT__csr_rdata_ex 
                                                   & (~ 
                                                      (0x1fU 
                                                       & (vlSelf->CPU__DOT__inst_ex 
                                                          >> 0xfU))))
                                                   : 
                                                  (vlSelf->CPU__DOT__csr_rdata_ex 
                                                   | (0x1fU 
                                                      & (vlSelf->CPU__DOT__inst_ex 
                                                         >> 0xfU))))
                                               : ((0x1000U 
                                                   & vlSelf->CPU__DOT__inst_ex)
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSelf->CPU__DOT__inst_ex 
                                                      >> 0xfU))
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
        vlSelf->CPU__DOT__commit_ex = 0U;
        vlSelf->CPU__DOT__wb_rf_sel_ex = 0U;
        vlSelf->CPU__DOT__mem_access_ex = 0U;
        vlSelf->CPU__DOT__rf_we_ex = 0U;
        vlSelf->CPU__DOT__pc_ex = 0x80000000U;
    } else if ((1U & (~ (IData)(vlSelf->CPU__DOT__dcache_miss)))) {
        vlSelf->CPU__DOT__commit_ex = vlSelf->CPU__DOT__commit_id;
        vlSelf->CPU__DOT__wb_rf_sel_ex = vlSelf->CPU__DOT__wb_rf_sel_id;
        vlSelf->CPU__DOT__mem_access_ex = vlSelf->CPU__DOT__mem_access_id;
        vlSelf->CPU__DOT__rf_we_ex = vlSelf->CPU__DOT__rf_we_id;
        vlSelf->CPU__DOT__pc_ex = vlSelf->CPU__DOT__pc_id;
    }
    if (vlSelf->rstn) {
        if (vlSelf->CPU__DOT__DCache_inst__DOT__req_buf_we) {
            vlSelf->CPU__DOT__DCache_inst__DOT__uncache 
                = (0xaU == (vlSelf->CPU__DOT__alu_result_ex 
                            >> 0x1cU));
            vlSelf->CPU__DOT__DCache_inst__DOT__addr_pipe 
                = vlSelf->CPU__DOT__alu_result_ex;
            vlSelf->CPU__DOT__DCache_inst__DOT__fence_valid_pipe 
                = (IData)((0U != (0x18U & (IData)(vlSelf->CPU__DOT__priv_vec_ex))));
        }
    } else {
        vlSelf->CPU__DOT__DCache_inst__DOT__uncache = 0U;
        vlSelf->CPU__DOT__DCache_inst__DOT__addr_pipe = 0U;
        vlSelf->CPU__DOT__DCache_inst__DOT__fence_valid_pipe = 0U;
    }
    if ((1U & ((~ (IData)(vlSelf->rstn)) | (IData)(vlSelf->CPU__DOT__ID_EX_flush)))) {
        vlSelf->CPU__DOT__priv_vec_ex = 0U;
        vlSelf->CPU__DOT__inst_ex = 0x13U;
    } else if ((1U & (~ (IData)(vlSelf->CPU__DOT__dcache_miss)))) {
        vlSelf->CPU__DOT__priv_vec_ex = (((IData)((0xfU 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->CPU__DOT__inst_id))) 
                                          << 4U) | 
                                         (((IData)(
                                                   (0x100fU 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->CPU__DOT__inst_id))) 
                                           << 3U) | 
                                          ((((IData)(vlSelf->CPU__DOT__Decode_inst__DOT____VdfgTmp_haf50822f__0) 
                                             & (0x302U 
                                                == 
                                                (vlSelf->CPU__DOT__inst_id 
                                                 >> 0x14U))) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->CPU__DOT__Decode_inst__DOT____VdfgTmp_haf50822f__0) 
                                                & (0U 
                                                   == 
                                                   (vlSelf->CPU__DOT__inst_id 
                                                    >> 0x14U))) 
                                               << 1U) 
                                              | ((0x73U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->CPU__DOT__inst_id)) 
                                                 & (0U 
                                                    != 
                                                    (7U 
                                                     & (vlSelf->CPU__DOT__inst_id 
                                                        >> 0xcU))))))));
        vlSelf->CPU__DOT__inst_ex = vlSelf->CPU__DOT__inst_id;
    }
    vlSelf->CPU__DOT__DCache_inst__DOT__write_counter 
        = __Vdly__CPU__DOT__DCache_inst__DOT__write_counter;
    vlSelf->CPU__DOT__DCache_inst__DOT__lru = __Vdly__CPU__DOT__DCache_inst__DOT__lru;
    if (__Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v0) {
        VL_ASSIGNSEL_WI(128,8,(IData)(__Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v0), 
                        vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram
                        [__Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v0], __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v0);
    }
    if (__Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v1) {
        VL_ASSIGNSEL_WI(128,8,(IData)(__Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v1), 
                        vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram
                        [__Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v1], __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v1);
    }
    if (__Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v2) {
        VL_ASSIGNSEL_WI(128,8,(IData)(__Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v2), 
                        vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram
                        [__Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v2], __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v2);
    }
    if (__Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v3) {
        VL_ASSIGNSEL_WI(128,8,(IData)(__Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v3), 
                        vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram
                        [__Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v3], __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v3);
    }
    if (__Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v4) {
        VL_ASSIGNSEL_WI(128,8,(IData)(__Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v4), 
                        vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram
                        [__Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v4], __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v4);
    }
    if (__Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v5) {
        VL_ASSIGNSEL_WI(128,8,(IData)(__Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v5), 
                        vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram
                        [__Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v5], __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v5);
    }
    if (__Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v6) {
        VL_ASSIGNSEL_WI(128,8,(IData)(__Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v6), 
                        vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram
                        [__Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v6], __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v6);
    }
    if (__Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v7) {
        VL_ASSIGNSEL_WI(128,8,(IData)(__Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v7), 
                        vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram
                        [__Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v7], __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v7);
    }
    if (__Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v8) {
        VL_ASSIGNSEL_WI(128,8,(IData)(__Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v8), 
                        vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram
                        [__Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v8], __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v8);
    }
    if (__Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v9) {
        VL_ASSIGNSEL_WI(128,8,(IData)(__Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v9), 
                        vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram
                        [__Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v9], __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v9);
    }
    if (__Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v10) {
        VL_ASSIGNSEL_WI(128,8,(IData)(__Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v10), 
                        vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram
                        [__Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v10], __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v10);
    }
    if (__Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v11) {
        VL_ASSIGNSEL_WI(128,8,(IData)(__Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v11), 
                        vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram
                        [__Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v11], __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v11);
    }
    if (__Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v12) {
        VL_ASSIGNSEL_WI(128,8,(IData)(__Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v12), 
                        vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram
                        [__Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v12], __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v12);
    }
    if (__Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v13) {
        VL_ASSIGNSEL_WI(128,8,(IData)(__Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v13), 
                        vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram
                        [__Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v13], __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v13);
    }
    if (__Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v14) {
        VL_ASSIGNSEL_WI(128,8,(IData)(__Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v14), 
                        vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram
                        [__Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v14], __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v14);
    }
    if (__Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v15) {
        VL_ASSIGNSEL_WI(128,8,(IData)(__Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v15), 
                        vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram
                        [__Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v15], __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram__v15);
    }
    if (__Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v0) {
        VL_ASSIGNSEL_WI(128,8,(IData)(__Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v0), 
                        vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram
                        [__Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v0], __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v0);
    }
    if (__Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v1) {
        VL_ASSIGNSEL_WI(128,8,(IData)(__Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v1), 
                        vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram
                        [__Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v1], __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v1);
    }
    if (__Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v2) {
        VL_ASSIGNSEL_WI(128,8,(IData)(__Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v2), 
                        vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram
                        [__Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v2], __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v2);
    }
    if (__Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v3) {
        VL_ASSIGNSEL_WI(128,8,(IData)(__Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v3), 
                        vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram
                        [__Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v3], __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v3);
    }
    if (__Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v4) {
        VL_ASSIGNSEL_WI(128,8,(IData)(__Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v4), 
                        vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram
                        [__Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v4], __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v4);
    }
    if (__Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v5) {
        VL_ASSIGNSEL_WI(128,8,(IData)(__Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v5), 
                        vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram
                        [__Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v5], __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v5);
    }
    if (__Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v6) {
        VL_ASSIGNSEL_WI(128,8,(IData)(__Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v6), 
                        vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram
                        [__Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v6], __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v6);
    }
    if (__Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v7) {
        VL_ASSIGNSEL_WI(128,8,(IData)(__Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v7), 
                        vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram
                        [__Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v7], __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v7);
    }
    if (__Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v8) {
        VL_ASSIGNSEL_WI(128,8,(IData)(__Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v8), 
                        vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram
                        [__Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v8], __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v8);
    }
    if (__Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v9) {
        VL_ASSIGNSEL_WI(128,8,(IData)(__Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v9), 
                        vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram
                        [__Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v9], __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v9);
    }
    if (__Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v10) {
        VL_ASSIGNSEL_WI(128,8,(IData)(__Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v10), 
                        vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram
                        [__Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v10], __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v10);
    }
    if (__Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v11) {
        VL_ASSIGNSEL_WI(128,8,(IData)(__Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v11), 
                        vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram
                        [__Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v11], __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v11);
    }
    if (__Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v12) {
        VL_ASSIGNSEL_WI(128,8,(IData)(__Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v12), 
                        vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram
                        [__Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v12], __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v12);
    }
    if (__Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v13) {
        VL_ASSIGNSEL_WI(128,8,(IData)(__Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v13), 
                        vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram
                        [__Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v13], __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v13);
    }
    if (__Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v14) {
        VL_ASSIGNSEL_WI(128,8,(IData)(__Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v14), 
                        vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram
                        [__Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v14], __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v14);
    }
    if (__Vdlyvset__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v15) {
        VL_ASSIGNSEL_WI(128,8,(IData)(__Vdlyvlsb__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v15), 
                        vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram
                        [__Vdlyvdim0__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v15], __Vdlyvval__CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram__v15);
    }
    if (__Vdlyvset__CPU__DOT__DCache_inst__DOT__dirty_table__v0) {
        vlSelf->CPU__DOT__DCache_inst__DOT__dirty_table[0U] = 0U;
        vlSelf->CPU__DOT__DCache_inst__DOT__dirty_table[1U] = 0U;
    }
    if (__Vdlyvset__CPU__DOT__DCache_inst__DOT__dirty_table__v2) {
        vlSelf->CPU__DOT__DCache_inst__DOT__dirty_table[__Vdlyvdim0__CPU__DOT__DCache_inst__DOT__dirty_table__v2] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__CPU__DOT__DCache_inst__DOT__dirty_table__v2))) 
                & vlSelf->CPU__DOT__DCache_inst__DOT__dirty_table
                [__Vdlyvdim0__CPU__DOT__DCache_inst__DOT__dirty_table__v2]) 
               | (0xffffU & ((IData)(__Vdlyvval__CPU__DOT__DCache_inst__DOT__dirty_table__v2) 
                             << (IData)(__Vdlyvlsb__CPU__DOT__DCache_inst__DOT__dirty_table__v2))));
    }
    if (__Vdlyvset__CPU__DOT__DCache_inst__DOT__dirty_table__v3) {
        vlSelf->CPU__DOT__DCache_inst__DOT__dirty_table[__Vdlyvdim0__CPU__DOT__DCache_inst__DOT__dirty_table__v3] 
            = (vlSelf->CPU__DOT__DCache_inst__DOT__dirty_table
               [__Vdlyvdim0__CPU__DOT__DCache_inst__DOT__dirty_table__v3] 
               | (0xffffU & ((IData)(1U) << (IData)(__Vdlyvlsb__CPU__DOT__DCache_inst__DOT__dirty_table__v3))));
    }
    if (__Vdlyvset__CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram__v0) {
        vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[__Vdlyvdim0__CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram__v0][0U] 
            = __Vdlyvval__CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram__v0[0U];
        vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[__Vdlyvdim0__CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram__v0][1U] 
            = __Vdlyvval__CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram__v0[1U];
        vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[__Vdlyvdim0__CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram__v0][2U] 
            = __Vdlyvval__CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram__v0[2U];
        vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[__Vdlyvdim0__CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram__v0][3U] 
            = __Vdlyvval__CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram__v0) {
        vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[__Vdlyvdim0__CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram__v0][0U] 
            = __Vdlyvval__CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram__v0[0U];
        vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[__Vdlyvdim0__CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram__v0][1U] 
            = __Vdlyvval__CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram__v0[1U];
        vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[__Vdlyvdim0__CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram__v0][2U] 
            = __Vdlyvval__CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram__v0[2U];
        vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[__Vdlyvdim0__CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram__v0][3U] 
            = __Vdlyvval__CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram__v0[3U];
    }
    vlSelf->CPU__DOT__DCache_inst__DOT__valid_bit_rdata[0U] 
        = __Vdlyvval__CPU__DOT__DCache_inst__DOT__valid_bit_rdata__v0;
    vlSelf->CPU__DOT__DCache_inst__DOT__valid_bit_rdata[1U] 
        = __Vdlyvval__CPU__DOT__DCache_inst__DOT__valid_bit_rdata__v1;
    vlSelf->CPU__DOT__ICache_inst__DOT__lru = __Vdly__CPU__DOT__ICache_inst__DOT__lru;
    if (__Vdlyvset__CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram__v0) {
        vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[__Vdlyvdim0__CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram__v0] 
            = __Vdlyvval__CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram__v0;
    }
    if (__Vdlyvset__CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram__v0) {
        vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[__Vdlyvdim0__CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram__v0] 
            = __Vdlyvval__CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram__v0;
    }
    vlSelf->CPU__DOT__ICache_inst__DOT__tag_rdata[0U] 
        = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__CPU__DOT__ICache_inst__DOT__tag_rdata__v0))) 
            & vlSelf->CPU__DOT__ICache_inst__DOT__tag_rdata
            [0U]) | (0x1ffffffU & ((IData)(__Vdlyvval__CPU__DOT__ICache_inst__DOT__tag_rdata__v0) 
                                   << (IData)(__Vdlyvlsb__CPU__DOT__ICache_inst__DOT__tag_rdata__v0))));
    vlSelf->CPU__DOT__ICache_inst__DOT__tag_rdata[1U] 
        = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__CPU__DOT__ICache_inst__DOT__tag_rdata__v1))) 
            & vlSelf->CPU__DOT__ICache_inst__DOT__tag_rdata
            [1U]) | (0x1ffffffU & ((IData)(__Vdlyvval__CPU__DOT__ICache_inst__DOT__tag_rdata__v1) 
                                   << (IData)(__Vdlyvlsb__CPU__DOT__ICache_inst__DOT__tag_rdata__v1))));
    if (__Vdlyvset__CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram__v0) {
        vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[__Vdlyvdim0__CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram__v0] 
            = __Vdlyvval__CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram__v0;
    }
    if (__Vdlyvset__CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram__v0) {
        vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[__Vdlyvdim0__CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram__v0] 
            = __Vdlyvval__CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram__v0;
    }
    if (__Vdlyvset__CPU__DOT__DCache_inst__DOT__valid_bit_mem__v0) {
        vlSelf->CPU__DOT__DCache_inst__DOT__valid_bit_mem[0U] = 0U;
    }
    if (__Vdlyvset__CPU__DOT__DCache_inst__DOT__valid_bit_mem__v1) {
        vlSelf->CPU__DOT__DCache_inst__DOT__valid_bit_mem[0U] 
            = (vlSelf->CPU__DOT__DCache_inst__DOT__valid_bit_mem
               [0U] | (0xffffU & ((IData)(1U) << (IData)(__Vdlyvlsb__CPU__DOT__DCache_inst__DOT__valid_bit_mem__v1))));
    }
    if (__Vdlyvset__CPU__DOT__DCache_inst__DOT__valid_bit_mem__v2) {
        vlSelf->CPU__DOT__DCache_inst__DOT__valid_bit_mem[1U] = 0U;
    }
    if (__Vdlyvset__CPU__DOT__DCache_inst__DOT__valid_bit_mem__v3) {
        vlSelf->CPU__DOT__DCache_inst__DOT__valid_bit_mem[1U] 
            = (vlSelf->CPU__DOT__DCache_inst__DOT__valid_bit_mem
               [1U] | (0xffffU & ((IData)(1U) << (IData)(__Vdlyvlsb__CPU__DOT__DCache_inst__DOT__valid_bit_mem__v3))));
    }
    if (__Vdlyvset__CPU__DOT__ICache_inst__DOT__valid_bit_mem__v0) {
        vlSelf->CPU__DOT__ICache_inst__DOT__valid_bit_mem[0U] = 0U;
    }
    if (__Vdlyvset__CPU__DOT__ICache_inst__DOT__valid_bit_mem__v1) {
        vlSelf->CPU__DOT__ICache_inst__DOT__valid_bit_mem[0U] 
            = (vlSelf->CPU__DOT__ICache_inst__DOT__valid_bit_mem
               [0U] | (0xffffU & ((IData)(1U) << (IData)(__Vdlyvlsb__CPU__DOT__ICache_inst__DOT__valid_bit_mem__v1))));
    }
    if (__Vdlyvset__CPU__DOT__ICache_inst__DOT__valid_bit_mem__v2) {
        vlSelf->CPU__DOT__ICache_inst__DOT__valid_bit_mem[1U] = 0U;
    }
    if (__Vdlyvset__CPU__DOT__ICache_inst__DOT__valid_bit_mem__v3) {
        vlSelf->CPU__DOT__ICache_inst__DOT__valid_bit_mem[1U] 
            = (vlSelf->CPU__DOT__ICache_inst__DOT__valid_bit_mem
               [1U] | (0xffffU & ((IData)(1U) << (IData)(__Vdlyvlsb__CPU__DOT__ICache_inst__DOT__valid_bit_mem__v3))));
    }
    vlSelf->CPU__DOT__DCache_inst__DOT__wbuf[0U] = 
        __Vdly__CPU__DOT__DCache_inst__DOT__wbuf[0U];
    vlSelf->CPU__DOT__DCache_inst__DOT__wbuf[1U] = 
        __Vdly__CPU__DOT__DCache_inst__DOT__wbuf[1U];
    vlSelf->CPU__DOT__DCache_inst__DOT__wbuf[2U] = 
        __Vdly__CPU__DOT__DCache_inst__DOT__wbuf[2U];
    vlSelf->CPU__DOT__DCache_inst__DOT__wbuf[3U] = 
        __Vdly__CPU__DOT__DCache_inst__DOT__wbuf[3U];
    vlSelf->CPU__DOT__CSR_inst__DOT__mstatus = __Vdly__CPU__DOT__CSR_inst__DOT__mstatus;
    vlSelf->CPU__DOT__DCache_inst__DOT__addr_cnt = __Vdly__CPU__DOT__DCache_inst__DOT__addr_cnt;
    if (__Vdlyvset__CPU__DOT__Regfile_inst__DOT__rf__v0) {
        vlSelf->CPU__DOT__Regfile_inst__DOT__rf[__Vdlyvdim0__CPU__DOT__Regfile_inst__DOT__rf__v0] 
            = __Vdlyvval__CPU__DOT__Regfile_inst__DOT__rf__v0;
    }
    vlSelf->wdata = vlSelf->CPU__DOT__DCache_inst__DOT__wbuf[0U];
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
    vlSelf->rready = 0U;
    vlSelf->arvalid = 0U;
    vlSelf->CPU__DOT__i_rlast = 0U;
    vlSelf->CPU__DOT__i_rready = 0U;
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
    vlSelf->CPU__DOT__DCache_inst__DOT__tag_rdata[1U] 
        = vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram
        [vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__addr_r];
    vlSelf->CPU__DOT__DCache_inst__DOT__tag_rdata[0U] 
        = vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram
        [vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__addr_r];
    vlSelf->CPU__DOT__DCache_inst__DOT__lru_refill_update = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__dirty_refill = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__wdata_from_pipe = 1U;
    vlSelf->CPU__DOT__DCache_inst__DOT__wfsm_reset = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__write_counter_reset = 0U;
    if ((0U == (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__wfsm_state))) {
        vlSelf->CPU__DOT__DCache_inst__DOT__write_counter_reset = 1U;
    }
    vlSelf->CPU__DOT__d_wvalid = 0U;
    vlSelf->CPU__DOT__d_bready = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__wrt_finish = 0U;
    vlSelf->CPU__DOT__Branch_inst__DOT____VdfgTmp_h8a7e5af4__0 
        = (IData)((0x18U == (0x18U & (IData)(vlSelf->CPU__DOT__br_type_ex))));
    vlSelf->CPU__DOT__ICache_inst__DOT__tag_rdata[1U] 
        = ((0x1000000U & vlSelf->CPU__DOT__ICache_inst__DOT__tag_rdata
            [1U]) | vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram
           [vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__addr_r]);
    vlSelf->CPU__DOT__ICache_inst__DOT__tag_rdata[0U] 
        = ((0x1000000U & vlSelf->CPU__DOT__ICache_inst__DOT__tag_rdata
            [0U]) | vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram
           [vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__addr_r]);
    if (vlSelf->CPU__DOT__wb_rf_sel_wb) {
        if (vlSelf->CPU__DOT__wb_rf_sel_wb) {
            vlSelf->CPU__DOT__rf_wdata_wb = vlSelf->CPU__DOT__mem_rdata_wb;
        }
    } else {
        vlSelf->CPU__DOT__rf_wdata_wb = vlSelf->CPU__DOT__alu_result_wb;
    }
    vlSelf->awaddr = vlSelf->CPU__DOT__DCache_inst__DOT__maddr_buf;
    vlSelf->CPU__DOT__Branch_inst__DOT__is_jalr = (
                                                   (~ 
                                                    ((IData)(vlSelf->CPU__DOT__br_type_ex) 
                                                     >> 2U)) 
                                                   & (IData)(vlSelf->CPU__DOT__Branch_inst__DOT____VdfgTmp_h8a7e5af4__0));
    if (vlSelf->CPU__DOT__DCache_inst__DOT__uncache) {
        vlSelf->wstrb = vlSelf->CPU__DOT__DCache_inst__DOT__wstrb_pipe;
        vlSelf->awlen = 0U;
    } else {
        vlSelf->wstrb = 0xfU;
        vlSelf->awlen = 3U;
    }
    vlSelf->arsize = 0U;
    vlSelf->CPU__DOT__d_wlast = 0U;
    __Vtemp_h5338566c__1[0U] = vlSelf->CPU__DOT__DCache_inst__DOT__wdata_pipe;
    __Vtemp_h5338566c__1[1U] = 0U;
    __Vtemp_h5338566c__1[2U] = 0U;
    __Vtemp_h5338566c__1[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h440f5a77__0, __Vtemp_h5338566c__1, 
                  (0x60U & (vlSelf->CPU__DOT__DCache_inst__DOT__addr_pipe 
                            << 3U)));
    vlSelf->CPU__DOT__DCache_inst__DOT__wdata_pipe_512[0U] 
        = __Vtemp_h440f5a77__0[0U];
    vlSelf->CPU__DOT__DCache_inst__DOT__wdata_pipe_512[1U] 
        = __Vtemp_h440f5a77__0[1U];
    vlSelf->CPU__DOT__DCache_inst__DOT__wdata_pipe_512[2U] 
        = __Vtemp_h440f5a77__0[2U];
    vlSelf->CPU__DOT__DCache_inst__DOT__wdata_pipe_512[3U] 
        = __Vtemp_h440f5a77__0[3U];
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
    vlSelf->CPU__DOT__DCache_inst__DOT____VdfgTmp_ha6d4d8ec__0 
        = (vlSelf->CPU__DOT__DCache_inst__DOT__valid_bit_rdata
           [0U] & (vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram
                   [vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__addr_r] 
                   == (vlSelf->CPU__DOT__DCache_inst__DOT__addr_pipe 
                       >> 8U)));
    vlSelf->CPU__DOT__DCache_inst__DOT__addr_cnt_add = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__dirty_clean_all = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__data_from_mem = 1U;
    if ((0U != (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__wfsm_state))) {
        if ((1U == (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__wfsm_state))) {
            vlSelf->CPU__DOT__d_wvalid = (1U & (~ ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__write_counter) 
                                                   >> 2U)));
            vlSelf->CPU__DOT__d_bready = 1U;
            vlSelf->CPU__DOT__d_wlast = ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__write_counter) 
                                         == ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__uncache)
                                              ? 0U : 3U));
        }
        if ((1U != (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__wfsm_state))) {
            if ((2U == (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__wfsm_state))) {
                vlSelf->CPU__DOT__DCache_inst__DOT__wrt_finish = 1U;
            }
        }
        vlSelf->CPU__DOT__d_rvalid = 0U;
        vlSelf->arlen = 0U;
    } else {
        vlSelf->CPU__DOT__d_rvalid = 0U;
        vlSelf->arlen = 0U;
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
    vlSelf->CPU__DOT__DCache_inst__DOT__hit = (((vlSelf->CPU__DOT__DCache_inst__DOT__valid_bit_rdata
                                                 [1U] 
                                                 & (vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram
                                                    [vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__addr_r] 
                                                    == 
                                                    (vlSelf->CPU__DOT__DCache_inst__DOT__addr_pipe 
                                                     >> 8U))) 
                                                << 1U) 
                                               | (IData)(vlSelf->CPU__DOT__DCache_inst__DOT____VdfgTmp_ha6d4d8ec__0));
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
            vlSelf->CPU__DOT__DCache_inst__DOT__wfsm_reset = 1U;
            if (vlSelf->CPU__DOT__DCache_inst__DOT__fence_valid_pipe) {
                vlSelf->CPU__DOT__DCache_inst__DOT__dirty_clean_all 
                    = ((0U == (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__addr_cnt)) 
                       & (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__wrt_finish));
            }
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
    vlSelf->pc_cur = vlSelf->CPU__DOT__pc_wb;
    vlSelf->inst = vlSelf->CPU__DOT__inst_wb;
    if ((1U & ((~ (IData)(vlSelf->rstn)) | (IData)(vlSelf->CPU__DOT__IF2_ID_flush)))) {
        vlSelf->CPU__DOT__commit_id = 0U;
        vlSelf->CPU__DOT__pc_id = 0x80000000U;
        vlSelf->CPU__DOT__inst_id = 0x13U;
    } else if ((1U & (~ (IData)(vlSelf->CPU__DOT__IF2_ID_stall)))) {
        vlSelf->CPU__DOT__commit_id = vlSelf->CPU__DOT__commit_if2;
        vlSelf->CPU__DOT__pc_id = vlSelf->CPU__DOT__pc_if2;
        __Vtemp_h14324bb5__0[0U] = vlSelf->CPU__DOT__ICache_inst__DOT__mem_rdata
            [(1U & (~ (IData)(vlSelf->CPU__DOT__ICache_inst__DOT____VdfgTmp_h32c1d4e2__0)))][0U];
        __Vtemp_h14324bb5__0[1U] = vlSelf->CPU__DOT__ICache_inst__DOT__mem_rdata
            [(1U & (~ (IData)(vlSelf->CPU__DOT__ICache_inst__DOT____VdfgTmp_h32c1d4e2__0)))][1U];
        __Vtemp_h14324bb5__0[2U] = vlSelf->CPU__DOT__ICache_inst__DOT__mem_rdata
            [(1U & (~ (IData)(vlSelf->CPU__DOT__ICache_inst__DOT____VdfgTmp_h32c1d4e2__0)))][2U];
        __Vtemp_h14324bb5__0[3U] = vlSelf->CPU__DOT__ICache_inst__DOT__mem_rdata
            [(1U & (~ (IData)(vlSelf->CPU__DOT__ICache_inst__DOT____VdfgTmp_h32c1d4e2__0)))][3U];
        VL_SHIFTR_WWI(128,128,7, __Vtemp_h38679573__0, __Vtemp_h14324bb5__0, 
                      (0x60U & (vlSelf->CPU__DOT__ICache_inst__DOT__addr_pipe 
                                << 3U)));
        VL_SHIFTR_WWI(128,128,7, __Vtemp_h1c51f178__0, vlSelf->CPU__DOT__ICache_inst__DOT__ret_buf, 
                      (0x60U & (vlSelf->CPU__DOT__ICache_inst__DOT__addr_pipe 
                                << 3U)));
        vlSelf->CPU__DOT__inst_id = (((IData)(vlSelf->CPU__DOT__pc_set) 
                                      | (IData)(vlSelf->CPU__DOT__ICache_inst__DOT__flush_buf))
                                      ? 0x13U : ((IData)(vlSelf->CPU__DOT__ICache_inst__DOT__data_from_mem)
                                                  ? 
                                                 __Vtemp_h38679573__0[0U]
                                                  : 
                                                 __Vtemp_h1c51f178__0[0U]));
    }
    vlSelf->CPU__DOT__DCache_inst__DOT__write_counter_en = 0U;
    if ((0U != (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__wfsm_state))) {
        if ((1U == (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__wfsm_state))) {
            vlSelf->CPU__DOT__DCache_inst__DOT__write_counter_en 
                = vlSelf->CPU__DOT__d_wready;
        }
    }
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
    vlSelf->CPU__DOT__csr_rdata_ex = __Vdly__CPU__DOT__csr_rdata_ex;
    vlSelf->CPU__DOT__mcause_global = 0U;
    if ((2U & (IData)(vlSelf->CPU__DOT__priv_vec_wb))) {
        vlSelf->CPU__DOT__mcause_global = 0xbU;
    }
    if ((1U & ((~ (IData)(vlSelf->rstn)) | (IData)(vlSelf->CPU__DOT__pc_set)))) {
        vlSelf->CPU__DOT__commit_if2 = 0U;
        vlSelf->CPU__DOT__pc_if2 = 0x80000000U;
    } else if ((1U & (~ (IData)(vlSelf->CPU__DOT__pc_stall)))) {
        vlSelf->CPU__DOT__commit_if2 = vlSelf->rstn;
        vlSelf->CPU__DOT__pc_if2 = vlSelf->CPU__DOT__PC_inst__DOT__pc_reg;
    }
    if (vlSelf->rstn) {
        if (vlSelf->CPU__DOT__pc_set) {
            vlSelf->CPU__DOT__ICache_inst__DOT__flush_buf = 1U;
        } else if (vlSelf->CPU__DOT__ICache_inst__DOT__req_buf_we) {
            vlSelf->CPU__DOT__ICache_inst__DOT__flush_buf = 0U;
        }
        if (vlSelf->CPU__DOT__ICache_inst__DOT__req_buf_we) {
            vlSelf->CPU__DOT__ICache_inst__DOT__addr_pipe 
                = vlSelf->CPU__DOT__PC_inst__DOT__pc_reg;
        }
        if ((1U & ((IData)(vlSelf->CPU__DOT__pc_set) 
                   | (~ (IData)(vlSelf->CPU__DOT__pc_stall))))) {
            vlSelf->CPU__DOT__PC_inst__DOT__pc_reg 
                = vlSelf->CPU__DOT__next_pc;
        }
    } else {
        vlSelf->CPU__DOT__ICache_inst__DOT__flush_buf = 0U;
        vlSelf->CPU__DOT__ICache_inst__DOT__addr_pipe = 0U;
        vlSelf->CPU__DOT__PC_inst__DOT__pc_reg = 0x80000000U;
    }
    vlSelf->CPU__DOT__dcache_miss = 0U;
    CPU__DOT__Hazard_inst__DOT____VdfgTmp_hfe9ab642__0 
        = ((0U != (IData)(vlSelf->CPU__DOT__priv_vec_ex)) 
           | (0U != vlSelf->CPU__DOT__mcause_global));
    vlSelf->CPU__DOT__DCache_inst__DOT__read_from_cnt 
        = ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__fence_valid_pipe) 
           | (0U != (0x18U & (IData)(vlSelf->CPU__DOT__priv_vec_ex))));
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
    vlSelf->CPU__DOT__ICache_inst__DOT__ret_buf[0U] 
        = __Vdly__CPU__DOT__ICache_inst__DOT__ret_buf[0U];
    vlSelf->CPU__DOT__ICache_inst__DOT__ret_buf[1U] 
        = __Vdly__CPU__DOT__ICache_inst__DOT__ret_buf[1U];
    vlSelf->CPU__DOT__ICache_inst__DOT__ret_buf[2U] 
        = __Vdly__CPU__DOT__ICache_inst__DOT__ret_buf[2U];
    vlSelf->CPU__DOT__ICache_inst__DOT__ret_buf[3U] 
        = __Vdly__CPU__DOT__ICache_inst__DOT__ret_buf[3U];
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
    vlSelf->CPU__DOT__Decode_inst__DOT____VdfgTmp_haf50822f__0 
        = (IData)((0x73U == (0x707fU & vlSelf->CPU__DOT__inst_id)));
    vlSelf->CPU__DOT__Hazard_inst__DOT__flush_by_load_use = 0U;
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
    vlSelf->CPU__DOT__DCache_inst__DOT__tagv_we = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__mem_we[0U] = 0U;
    vlSelf->CPU__DOT__DCache_inst__DOT__mem_we[1U] = 0U;
    if ((2U & (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__state))) {
        if ((1U & (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__state))) {
            vlSelf->CPU__DOT__DCache_inst__DOT__req_buf_we 
                = ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__fence_valid_pipe)
                    ? ((0U == (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__addr_cnt)) 
                       & (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__wrt_finish))
                    : (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__wrt_finish));
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
    vlSelf->CPU__DOT__ALU_inst__DOT__sr2_abs = ((vlSelf->CPU__DOT__alu_rs2 
                                                 >> 0x1fU)
                                                 ? 
                                                (- vlSelf->CPU__DOT__alu_rs2)
                                                 : vlSelf->CPU__DOT__alu_rs2);
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
    vlSelf->CPU__DOT__ID_EX_flush = (((~ (IData)(vlSelf->CPU__DOT__dcache_miss)) 
                                      & ((IData)(vlSelf->CPU__DOT__jump) 
                                         | ((IData)(vlSelf->CPU__DOT__Hazard_inst__DOT__flush_by_load_use) 
                                            | (0U != (IData)(vlSelf->CPU__DOT__priv_vec_ex))))) 
                                     | (0U != vlSelf->CPU__DOT__mcause_global));
    vlSelf->CPU__DOT__IF2_ID_stall = ((IData)(vlSelf->CPU__DOT__Hazard_inst__DOT__stall_by_load_use) 
                                      | (IData)(vlSelf->CPU__DOT__dcache_miss));
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
    vlSelf->araddr = 0U;
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
            vlSelf->arlen = 3U;
            vlSelf->araddr = (0xfffffff0U & vlSelf->CPU__DOT__ICache_inst__DOT__addr_pipe);
        }
    }
    vlSelf->CPU__DOT__ICache_inst__DOT____VdfgTmp_h32c1d4e2__0 
        = ((vlSelf->CPU__DOT__ICache_inst__DOT__tag_rdata
            [0U] >> 0x18U) & ((0xffffffU & vlSelf->CPU__DOT__ICache_inst__DOT__tag_rdata
                               [0U]) == (vlSelf->CPU__DOT__ICache_inst__DOT__addr_pipe 
                                         >> 8U)));
    vlSelf->CPU__DOT__pc_set = ((IData)(vlSelf->CPU__DOT__jump) 
                                | (IData)(CPU__DOT__Hazard_inst__DOT____VdfgTmp_hfe9ab642__0));
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
    vlSelf->CPU__DOT__next_pc = ((IData)(vlSelf->CPU__DOT__pc_set)
                                  ? vlSelf->CPU__DOT__pc_target
                                  : ((IData)(4U) + vlSelf->CPU__DOT__PC_inst__DOT__pc_reg));
    __Vtableidx1 = (((IData)(vlSelf->CPU__DOT__i_rlast) 
                     << 5U) | (((IData)(vlSelf->CPU__DOT__i_rready) 
                                << 4U) | (((IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->CPU__DOT__ICache_inst__DOT__hit))) 
                                           << 3U) | 
                                          (((IData)(vlSelf->CPU__DOT__ICache_inst__DOT__rvalid_pipe) 
                                            << 2U) 
                                           | (IData)(vlSelf->CPU__DOT__ICache_inst__DOT__state)))));
    vlSelf->CPU__DOT__ICache_inst__DOT__next_state 
        = VCPU__ConstPool__TABLE_hb934d788_0[__Vtableidx1];
    __Vtableidx2 = ((((1U & ((IData)(vlSelf->CPU__DOT__ICache_inst__DOT__lru) 
                             >> (0xfU & (vlSelf->CPU__DOT__ICache_inst__DOT__addr_pipe 
                                         >> 4U)))) ? 2U
                       : 1U) << 5U) | (((IData)(vlSelf->CPU__DOT__IF2_ID_stall) 
                                        << 4U) | (((IData)(
                                                           (0U 
                                                            != (IData)(vlSelf->CPU__DOT__ICache_inst__DOT__hit))) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->CPU__DOT__ICache_inst__DOT__rvalid_pipe) 
                                                      << 2U) 
                                                     | (IData)(vlSelf->CPU__DOT__ICache_inst__DOT__state)))));
    vlSelf->CPU__DOT__ICache_inst__DOT__req_buf_we 
        = VCPU__ConstPool__TABLE_h5ca5caf7_0[__Vtableidx2];
    vlSelf->CPU__DOT__i_rvalid = VCPU__ConstPool__TABLE_h57739968_0
        [__Vtableidx2];
    vlSelf->CPU__DOT__ICache_inst__DOT__tagv_we = VCPU__ConstPool__TABLE_h889f6aab_0
        [__Vtableidx2];
    vlSelf->CPU__DOT__ICache_inst__DOT__mem_we = VCPU__ConstPool__TABLE_h889f6aab_0
        [__Vtableidx2];
    vlSelf->CPU__DOT__ICache_inst__DOT__data_from_mem 
        = VCPU__ConstPool__TABLE_h27544bbf_0[__Vtableidx2];
    vlSelf->CPU__DOT__ICache_inst__DOT__lru_hit_update 
        = VCPU__ConstPool__TABLE_h94004141_0[__Vtableidx2];
    vlSelf->CPU__DOT__ICache_inst__DOT__lru_refill_update 
        = VCPU__ConstPool__TABLE_hed1d605a_0[__Vtableidx2];
    vlSelf->CPU__DOT__icache_miss = VCPU__ConstPool__TABLE_h8e18481c_0
        [__Vtableidx2];
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
}

void VCPU___024root___eval_nba(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VCPU___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
}

void VCPU___024root___eval_triggers__ico(VCPU___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VCPU___024root___dump_triggers__ico(VCPU___024root* vlSelf);
#endif  // VL_DEBUG
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
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        VCPU___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                VCPU___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/user/cpu/2023fall-CECSlab/simulator/IP/mycpu/CPU.sv", 3, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            VCPU___024root___eval_ico(vlSelf);
        }
    }
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
                    VL_FATAL_MT("/home/user/cpu/2023fall-CECSlab/simulator/IP/mycpu/CPU.sv", 3, "", "Active region did not converge.");
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
                VL_FATAL_MT("/home/user/cpu/2023fall-CECSlab/simulator/IP/mycpu/CPU.sv", 3, "", "NBA region did not converge.");
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
    if (VL_UNLIKELY((vlSelf->arready & 0xfeU))) {
        Verilated::overWidthError("arready");}
    if (VL_UNLIKELY((vlSelf->rresp & 0xfcU))) {
        Verilated::overWidthError("rresp");}
    if (VL_UNLIKELY((vlSelf->rvalid & 0xfeU))) {
        Verilated::overWidthError("rvalid");}
    if (VL_UNLIKELY((vlSelf->rlast & 0xfeU))) {
        Verilated::overWidthError("rlast");}
    if (VL_UNLIKELY((vlSelf->awready & 0xfeU))) {
        Verilated::overWidthError("awready");}
    if (VL_UNLIKELY((vlSelf->wready & 0xfeU))) {
        Verilated::overWidthError("wready");}
    if (VL_UNLIKELY((vlSelf->bresp & 0xfcU))) {
        Verilated::overWidthError("bresp");}
    if (VL_UNLIKELY((vlSelf->bvalid & 0xfeU))) {
        Verilated::overWidthError("bvalid");}
}
#endif  // VL_DEBUG
