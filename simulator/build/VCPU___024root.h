// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCPU.h for the primary calling header

#ifndef VERILATED_VCPU___024ROOT_H_
#define VERILATED_VCPU___024ROOT_H_  // guard

#include "verilated.h"


class VCPU__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCPU___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rstn,0,0);
        VL_OUT8(commit_wb,0,0);
        VL_OUT8(uncache_read_wb,0,0);
        CData/*4:0*/ CPU__DOT__alu_op_id;
        CData/*4:0*/ CPU__DOT__alu_op_ex;
        CData/*4:0*/ CPU__DOT__mem_access_id;
        CData/*4:0*/ CPU__DOT__mem_access_ex;
        CData/*4:0*/ CPU__DOT__mem_access_ls;
        CData/*4:0*/ CPU__DOT__br_type_id;
        CData/*4:0*/ CPU__DOT__br_type_ex;
        CData/*3:0*/ CPU__DOT__wstrb_ex;
        CData/*1:0*/ CPU__DOT__alu_rs1_sel_id;
        CData/*1:0*/ CPU__DOT__alu_rs1_sel_ex;
        CData/*1:0*/ CPU__DOT__alu_rs2_sel_id;
        CData/*1:0*/ CPU__DOT__alu_rs2_sel_ex;
        CData/*0:0*/ CPU__DOT__wb_rf_sel_id;
        CData/*0:0*/ CPU__DOT__wb_rf_sel_ex;
        CData/*0:0*/ CPU__DOT__wb_rf_sel_ls;
        CData/*0:0*/ CPU__DOT__wb_rf_sel_wb;
        CData/*0:0*/ CPU__DOT__rf_we_id;
        CData/*0:0*/ CPU__DOT__rf_we_ex;
        CData/*0:0*/ CPU__DOT__rf_we_ls;
        CData/*0:0*/ CPU__DOT__rf_we_wb;
        CData/*0:0*/ CPU__DOT__forward1_en;
        CData/*0:0*/ CPU__DOT__forward2_en;
        CData/*0:0*/ CPU__DOT__jump;
        CData/*0:0*/ CPU__DOT__ID_EX_flush;
        CData/*0:0*/ CPU__DOT__commit_if2;
        CData/*0:0*/ CPU__DOT__commit_id;
        CData/*0:0*/ CPU__DOT__commit_ex;
        CData/*0:0*/ CPU__DOT__commit_ls;
        CData/*0:0*/ CPU__DOT__ALU_inst__DOT____VdfgTmp_h175d6d08__0;
        CData/*0:0*/ CPU__DOT__Branch_inst__DOT__is_jalr;
        CData/*0:0*/ CPU__DOT__Branch_inst__DOT____VdfgTmp_h8a7e5af4__0;
        CData/*0:0*/ CPU__DOT__Hazard_inst__DOT__stall_by_load_use;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __VactContinue;
        VL_OUT(pc_cur,31,0);
        VL_OUT(inst,31,0);
        IData/*31:0*/ CPU__DOT__pc_if2;
        IData/*31:0*/ CPU__DOT__pc_id;
        IData/*31:0*/ CPU__DOT__pc_ex;
        IData/*31:0*/ CPU__DOT__pc_ls;
        IData/*31:0*/ CPU__DOT__pc_wb;
        IData/*31:0*/ CPU__DOT__inst_if2;
        IData/*31:0*/ CPU__DOT__inst_id;
        IData/*31:0*/ CPU__DOT__inst_ex;
        IData/*31:0*/ CPU__DOT__inst_ls;
        IData/*31:0*/ CPU__DOT__inst_wb;
        IData/*31:0*/ CPU__DOT__pc_target;
        IData/*31:0*/ CPU__DOT__next_pc;
        IData/*31:0*/ CPU__DOT__imm_id;
        IData/*31:0*/ CPU__DOT__imm_ex;
        IData/*31:0*/ CPU__DOT__rf_wdata_wb;
        IData/*31:0*/ CPU__DOT__rf_rdata1_ex;
        IData/*31:0*/ CPU__DOT__rf_rdata2_ex;
        IData/*31:0*/ CPU__DOT__forward1_data;
        IData/*31:0*/ CPU__DOT__forward2_data;
        IData/*31:0*/ CPU__DOT__alu_rf_data1;
        IData/*31:0*/ CPU__DOT__alu_rf_data2;
        IData/*31:0*/ CPU__DOT__alu_rs1;
        IData/*31:0*/ CPU__DOT__alu_rs2;
        IData/*31:0*/ CPU__DOT__alu_result_ex;
    };
    struct {
        IData/*31:0*/ CPU__DOT__alu_result_ls;
        IData/*31:0*/ CPU__DOT__alu_result_wb;
        IData/*31:0*/ CPU__DOT__jump_target;
        IData/*31:0*/ CPU__DOT__mem_wdata_ex;
        IData/*31:0*/ CPU__DOT__mem_rdata_wb;
        IData/*31:0*/ CPU__DOT__dcache_rdata_ls;
        IData/*31:0*/ CPU__DOT__PC_inst__DOT__pc_reg;
        IData/*31:0*/ CPU__DOT__ICache_inst__DOT__rdata_temp;
        IData/*31:0*/ CPU__DOT__Regfile_inst__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ CPU__DOT__ALU_inst__DOT__result_div;
        IData/*31:0*/ CPU__DOT__ALU_inst__DOT__result_rem;
        IData/*31:0*/ CPU__DOT__ALU_inst__DOT__sr1_abs;
        IData/*31:0*/ CPU__DOT__ALU_inst__DOT__sr2_abs;
        IData/*31:0*/ CPU__DOT__ALU_inst__DOT____VdfgTmp_h08f9e919__0;
        IData/*31:0*/ CPU__DOT__ALU_inst__DOT____VdfgTmp_h065b4e26__0;
        IData/*31:0*/ CPU__DOT__DCache_inst__DOT__rdata_temp;
        IData/*31:0*/ __Vtask_CPU__DOT__ICache_inst__DOT__pmem_read__0__rword;
        IData/*31:0*/ __Vtask_CPU__DOT__DCache_inst__DOT__pmem_read__2__rword;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ CPU__DOT__ALU_inst__DOT__result_64;
        VlUnpacked<IData/*31:0*/, 32> CPU__DOT__Regfile_inst__DOT__rf;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VCPU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCPU___024root(VCPU__Syms* symsp, const char* v__name);
    ~VCPU___024root();
    VL_UNCOPYABLE(VCPU___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
