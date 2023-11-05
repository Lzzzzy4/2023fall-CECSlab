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
        VL_OUT8(arvalid,0,0);
        VL_IN8(arready,0,0);
        VL_OUT8(arlen,7,0);
        VL_OUT8(arsize,2,0);
        VL_OUT8(arburst,1,0);
        VL_IN8(rresp,1,0);
        VL_IN8(rvalid,0,0);
        VL_OUT8(rready,0,0);
        VL_IN8(rlast,0,0);
        VL_OUT8(awvalid,0,0);
        VL_IN8(awready,0,0);
        VL_OUT8(awlen,7,0);
        VL_OUT8(awsize,2,0);
        VL_OUT8(awburst,1,0);
        VL_OUT8(wstrb,3,0);
        VL_OUT8(wvalid,0,0);
        VL_IN8(wready,0,0);
        VL_OUT8(wlast,0,0);
        VL_IN8(bresp,1,0);
        VL_IN8(bvalid,0,0);
        VL_OUT8(bready,0,0);
        VL_OUT8(commit_wb,0,0);
        VL_OUT8(uncache_read_wb,0,0);
        CData/*4:0*/ CPU__DOT__alu_op_id;
        CData/*4:0*/ CPU__DOT__alu_op_ex;
        CData/*4:0*/ CPU__DOT__mem_access_id;
        CData/*4:0*/ CPU__DOT__mem_access_ex;
        CData/*4:0*/ CPU__DOT__mem_access_ls;
        CData/*4:0*/ CPU__DOT__br_type_id;
        CData/*4:0*/ CPU__DOT__br_type_ex;
        CData/*4:0*/ CPU__DOT__priv_vec_ex;
        CData/*4:0*/ CPU__DOT__priv_vec_ls;
        CData/*4:0*/ CPU__DOT__priv_vec_wb;
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
        CData/*0:0*/ CPU__DOT__i_rvalid;
        CData/*0:0*/ CPU__DOT__i_rready;
        CData/*0:0*/ CPU__DOT__i_rlast;
        CData/*0:0*/ CPU__DOT__d_rvalid;
        CData/*0:0*/ CPU__DOT__d_rready;
        CData/*0:0*/ CPU__DOT__d_rlast;
        CData/*0:0*/ CPU__DOT__d_wvalid;
        CData/*0:0*/ CPU__DOT__d_wready;
        CData/*0:0*/ CPU__DOT__d_wlast;
        CData/*0:0*/ CPU__DOT__d_bvalid;
        CData/*0:0*/ CPU__DOT__d_bready;
        CData/*0:0*/ CPU__DOT__forward1_en;
        CData/*0:0*/ CPU__DOT__forward2_en;
        CData/*0:0*/ CPU__DOT__jump;
        CData/*0:0*/ CPU__DOT__pc_set;
        CData/*0:0*/ CPU__DOT__pc_stall;
    };
    struct {
        CData/*0:0*/ CPU__DOT__IF2_ID_stall;
        CData/*0:0*/ CPU__DOT__IF2_ID_flush;
        CData/*0:0*/ CPU__DOT__ID_EX_flush;
        CData/*0:0*/ CPU__DOT__icache_miss;
        CData/*0:0*/ CPU__DOT__dcache_miss;
        CData/*0:0*/ CPU__DOT__commit_if2;
        CData/*0:0*/ CPU__DOT__commit_id;
        CData/*0:0*/ CPU__DOT__commit_ex;
        CData/*0:0*/ CPU__DOT__commit_ls;
        CData/*0:0*/ CPU__DOT__ICache_inst__DOT__rvalid_pipe;
        CData/*0:0*/ CPU__DOT__ICache_inst__DOT__req_buf_we;
        CData/*3:0*/ CPU__DOT__ICache_inst__DOT__r_index;
        CData/*1:0*/ CPU__DOT__ICache_inst__DOT__mem_we;
        CData/*1:0*/ CPU__DOT__ICache_inst__DOT__tagv_we;
        CData/*1:0*/ CPU__DOT__ICache_inst__DOT__hit;
        CData/*0:0*/ CPU__DOT__ICache_inst__DOT__lru_hit_update;
        CData/*0:0*/ CPU__DOT__ICache_inst__DOT__lru_refill_update;
        CData/*0:0*/ CPU__DOT__ICache_inst__DOT__data_from_mem;
        CData/*0:0*/ CPU__DOT__ICache_inst__DOT__flush_buf;
        CData/*1:0*/ CPU__DOT__ICache_inst__DOT__state;
        CData/*1:0*/ CPU__DOT__ICache_inst__DOT__next_state;
        CData/*0:0*/ CPU__DOT__ICache_inst__DOT____VdfgTmp_h32c1d4e2__0;
        CData/*3:0*/ CPU__DOT__ICache_inst__DOT__data_mem0__DOT__addr_r;
        CData/*3:0*/ CPU__DOT__ICache_inst__DOT__data_mem1__DOT__addr_r;
        CData/*3:0*/ CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__addr_r;
        CData/*3:0*/ CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__addr_r;
        CData/*0:0*/ CPU__DOT__Decode_inst__DOT____VdfgTmp_haf50822f__0;
        CData/*0:0*/ CPU__DOT__ALU_inst__DOT____VdfgTmp_h175d6d08__0;
        CData/*0:0*/ CPU__DOT__Branch_inst__DOT__is_jalr;
        CData/*0:0*/ CPU__DOT__Branch_inst__DOT____VdfgTmp_h8a7e5af4__0;
        CData/*0:0*/ CPU__DOT__DCache_inst__DOT__req_buf_we;
        CData/*3:0*/ CPU__DOT__DCache_inst__DOT__wstrb_pipe;
        CData/*2:0*/ CPU__DOT__DCache_inst__DOT__rsize_pipe;
        CData/*0:0*/ CPU__DOT__DCache_inst__DOT__fence_valid_pipe;
        CData/*0:0*/ CPU__DOT__DCache_inst__DOT__valid_flush;
        CData/*0:0*/ CPU__DOT__DCache_inst__DOT__we_pipe;
        CData/*0:0*/ CPU__DOT__DCache_inst__DOT__rvalid_pipe;
        CData/*0:0*/ CPU__DOT__DCache_inst__DOT__wvalid_pipe;
        CData/*3:0*/ CPU__DOT__DCache_inst__DOT__r_index;
        CData/*3:0*/ CPU__DOT__DCache_inst__DOT__w_index;
        CData/*1:0*/ CPU__DOT__DCache_inst__DOT__tagv_we;
        CData/*1:0*/ CPU__DOT__DCache_inst__DOT__hit;
        CData/*0:0*/ CPU__DOT__DCache_inst__DOT__wdata_from_pipe;
        CData/*0:0*/ CPU__DOT__DCache_inst__DOT__data_from_mem;
        CData/*0:0*/ CPU__DOT__DCache_inst__DOT__lru_sel;
        CData/*0:0*/ CPU__DOT__DCache_inst__DOT__lru_hit_update;
        CData/*0:0*/ CPU__DOT__DCache_inst__DOT__lru_refill_update;
        CData/*0:0*/ CPU__DOT__DCache_inst__DOT__dirty_refill;
        CData/*0:0*/ CPU__DOT__DCache_inst__DOT__dirty_we;
        CData/*0:0*/ CPU__DOT__DCache_inst__DOT__dirty_clean_all;
        CData/*0:0*/ CPU__DOT__DCache_inst__DOT__wbuf_we;
        CData/*0:0*/ CPU__DOT__DCache_inst__DOT__mbuf_we;
        CData/*0:0*/ CPU__DOT__DCache_inst__DOT__wfsm_en;
        CData/*0:0*/ CPU__DOT__DCache_inst__DOT__wfsm_reset;
        CData/*0:0*/ CPU__DOT__DCache_inst__DOT__wrt_finish;
        CData/*2:0*/ CPU__DOT__DCache_inst__DOT__write_counter;
        CData/*0:0*/ CPU__DOT__DCache_inst__DOT__write_counter_reset;
        CData/*0:0*/ CPU__DOT__DCache_inst__DOT__write_counter_en;
        CData/*4:0*/ CPU__DOT__DCache_inst__DOT__addr_cnt;
        CData/*0:0*/ CPU__DOT__DCache_inst__DOT__addr_cnt_add;
        CData/*0:0*/ CPU__DOT__DCache_inst__DOT__uncache;
        CData/*0:0*/ CPU__DOT__DCache_inst__DOT__read_from_cnt;
        CData/*1:0*/ CPU__DOT__DCache_inst__DOT__state;
        CData/*1:0*/ CPU__DOT__DCache_inst__DOT__next_state;
    };
    struct {
        CData/*1:0*/ CPU__DOT__DCache_inst__DOT__wfsm_state;
        CData/*1:0*/ CPU__DOT__DCache_inst__DOT__wfsm_next_state;
        CData/*0:0*/ CPU__DOT__DCache_inst__DOT____VdfgTmp_ha6d4d8ec__0;
        CData/*3:0*/ CPU__DOT__DCache_inst__DOT__data_mem0__DOT__addr_r;
        CData/*3:0*/ CPU__DOT__DCache_inst__DOT__data_mem1__DOT__addr_r;
        CData/*3:0*/ CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__addr_r;
        CData/*3:0*/ CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__addr_r;
        CData/*0:0*/ CPU__DOT__Hazard_inst__DOT__stall_by_load_use;
        CData/*0:0*/ CPU__DOT__Hazard_inst__DOT__flush_by_load_use;
        CData/*2:0*/ CPU__DOT__axi_arbiter_inst__DOT__r_crt;
        CData/*2:0*/ CPU__DOT__axi_arbiter_inst__DOT__r_nxt;
        CData/*1:0*/ CPU__DOT__axi_arbiter_inst__DOT__w_crt;
        CData/*1:0*/ CPU__DOT__axi_arbiter_inst__DOT__w_nxt;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ CPU__DOT__ICache_inst__DOT__lru;
        SData/*15:0*/ CPU__DOT__DCache_inst__DOT__lru;
        VL_OUT(araddr,31,0);
        VL_IN(rdata,31,0);
        VL_OUT(awaddr,31,0);
        VL_OUT(wdata,31,0);
        VL_OUT(inst,31,0);
        VL_OUT(pc_cur,31,0);
        IData/*31:0*/ CPU__DOT__pc_if2;
        IData/*31:0*/ CPU__DOT__pc_id;
        IData/*31:0*/ CPU__DOT__pc_ex;
        IData/*31:0*/ CPU__DOT__pc_ls;
        IData/*31:0*/ CPU__DOT__pc_wb;
        IData/*31:0*/ CPU__DOT__inst_id;
        IData/*31:0*/ CPU__DOT__inst_ex;
        IData/*31:0*/ CPU__DOT__inst_ls;
        IData/*31:0*/ CPU__DOT__inst_wb;
        IData/*31:0*/ CPU__DOT__pc_target;
        IData/*31:0*/ CPU__DOT__next_pc;
        IData/*31:0*/ CPU__DOT__imm_id;
        IData/*31:0*/ CPU__DOT__imm_ex;
        IData/*31:0*/ CPU__DOT__rf_wdata_wb;
        IData/*31:0*/ CPU__DOT__csr_rdata_ex;
        IData/*31:0*/ CPU__DOT__csr_wdata_ls;
        IData/*31:0*/ CPU__DOT__csr_wdata_wb;
        IData/*31:0*/ CPU__DOT__rf_rdata1_ex;
        IData/*31:0*/ CPU__DOT__rf_rdata2_ex;
        IData/*31:0*/ CPU__DOT__forward1_data;
        IData/*31:0*/ CPU__DOT__forward2_data;
        IData/*31:0*/ CPU__DOT__alu_rf_data1;
        IData/*31:0*/ CPU__DOT__alu_rf_data2;
        IData/*31:0*/ CPU__DOT__alu_rs1;
        IData/*31:0*/ CPU__DOT__alu_rs2;
        IData/*31:0*/ CPU__DOT__alu_result_ex;
        IData/*31:0*/ CPU__DOT__alu_result_ls;
        IData/*31:0*/ CPU__DOT__alu_result_wb;
        IData/*31:0*/ CPU__DOT__jump_target;
        IData/*31:0*/ CPU__DOT__mem_rdata_wb;
        IData/*31:0*/ CPU__DOT__mcause_global;
        IData/*31:0*/ CPU__DOT__PC_inst__DOT__pc_reg;
        IData/*31:0*/ CPU__DOT__ICache_inst__DOT__addr_pipe;
        VlWide<4>/*127:0*/ CPU__DOT__ICache_inst__DOT__ret_buf;
        IData/*31:0*/ CPU__DOT__ICache_inst__DOT__data_mem0__DOT__i;
        IData/*31:0*/ CPU__DOT__ICache_inst__DOT__data_mem1__DOT__i;
        IData/*31:0*/ CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__i;
        IData/*31:0*/ CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__i;
        IData/*31:0*/ CPU__DOT__Regfile_inst__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ CPU__DOT__CSR_inst__DOT__mstatus;
        IData/*31:0*/ CPU__DOT__CSR_inst__DOT__mtvec;
    };
    struct {
        IData/*31:0*/ CPU__DOT__CSR_inst__DOT__mcause;
        IData/*31:0*/ CPU__DOT__CSR_inst__DOT__mepc;
        IData/*31:0*/ CPU__DOT__ALU_inst__DOT__result_div;
        IData/*31:0*/ CPU__DOT__ALU_inst__DOT__result_rem;
        IData/*31:0*/ CPU__DOT__ALU_inst__DOT__sr1_abs;
        IData/*31:0*/ CPU__DOT__ALU_inst__DOT__sr2_abs;
        IData/*31:0*/ CPU__DOT__DCache_inst__DOT__wdata_pipe;
        IData/*31:0*/ CPU__DOT__DCache_inst__DOT__addr_pipe;
        VlWide<4>/*127:0*/ CPU__DOT__DCache_inst__DOT__ret_buf;
        VlWide<4>/*127:0*/ CPU__DOT__DCache_inst__DOT__mem_wdata;
        VlWide<4>/*127:0*/ CPU__DOT__DCache_inst__DOT__wdata_pipe_512;
        VlWide<4>/*127:0*/ CPU__DOT__DCache_inst__DOT__wstrb_pipe_512;
        VlWide<4>/*127:0*/ CPU__DOT__DCache_inst__DOT__wbuf;
        IData/*31:0*/ CPU__DOT__DCache_inst__DOT__maddr_buf;
        IData/*31:0*/ CPU__DOT__DCache_inst__DOT__data_mem0__DOT__j;
        IData/*31:0*/ CPU__DOT__DCache_inst__DOT__data_mem1__DOT__j;
        IData/*31:0*/ CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__i;
        IData/*31:0*/ CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__i;
        IData/*31:0*/ CPU__DOT__DCache_Read_Ctrl_inst__DOT__load_data;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ CPU__DOT__ALU_inst__DOT__result_64;
        VlUnpacked<VlWide<4>/*127:0*/, 2> CPU__DOT__ICache_inst__DOT__mem_rdata;
        VlUnpacked<IData/*24:0*/, 2> CPU__DOT__ICache_inst__DOT__tag_rdata;
        VlUnpacked<SData/*15:0*/, 2> CPU__DOT__ICache_inst__DOT__valid_bit_mem;
        VlUnpacked<VlWide<4>/*127:0*/, 16> CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram;
        VlUnpacked<VlWide<4>/*127:0*/, 16> CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram;
        VlUnpacked<IData/*23:0*/, 16> CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram;
        VlUnpacked<IData/*23:0*/, 16> CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram;
        VlUnpacked<IData/*31:0*/, 32> CPU__DOT__Regfile_inst__DOT__rf;
        VlUnpacked<SData/*15:0*/, 2> CPU__DOT__DCache_inst__DOT__mem_we;
        VlUnpacked<VlWide<4>/*127:0*/, 2> CPU__DOT__DCache_inst__DOT__mem_rdata;
        VlUnpacked<IData/*23:0*/, 2> CPU__DOT__DCache_inst__DOT__tag_rdata;
        VlUnpacked<SData/*15:0*/, 2> CPU__DOT__DCache_inst__DOT__valid_bit_mem;
        VlUnpacked<CData/*0:0*/, 2> CPU__DOT__DCache_inst__DOT__valid_bit_rdata;
        VlUnpacked<SData/*15:0*/, 2> CPU__DOT__DCache_inst__DOT__dirty_table;
        VlUnpacked<VlWide<4>/*127:0*/, 16> CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram;
        VlUnpacked<VlWide<4>/*127:0*/, 16> CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram;
        VlUnpacked<IData/*23:0*/, 16> CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram;
        VlUnpacked<IData/*23:0*/, 16> CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
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
