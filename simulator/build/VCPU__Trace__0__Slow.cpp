// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCPU__Syms.h"


VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__0(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+665,"clk", false,-1, 0,0);
    tracep->declBus(c+666,"rstn", false,-1, 0,0);
    tracep->declBus(c+667,"araddr", false,-1, 31,0);
    tracep->declBus(c+668,"arvalid", false,-1, 0,0);
    tracep->declBus(c+669,"arready", false,-1, 0,0);
    tracep->declBus(c+670,"arlen", false,-1, 7,0);
    tracep->declBus(c+671,"arsize", false,-1, 2,0);
    tracep->declBus(c+672,"arburst", false,-1, 1,0);
    tracep->declBus(c+673,"rdata", false,-1, 31,0);
    tracep->declBus(c+674,"rresp", false,-1, 1,0);
    tracep->declBus(c+675,"rvalid", false,-1, 0,0);
    tracep->declBus(c+676,"rready", false,-1, 0,0);
    tracep->declBus(c+677,"rlast", false,-1, 0,0);
    tracep->declBus(c+678,"awaddr", false,-1, 31,0);
    tracep->declBus(c+679,"awvalid", false,-1, 0,0);
    tracep->declBus(c+680,"awready", false,-1, 0,0);
    tracep->declBus(c+681,"awlen", false,-1, 7,0);
    tracep->declBus(c+682,"awsize", false,-1, 2,0);
    tracep->declBus(c+683,"awburst", false,-1, 1,0);
    tracep->declBus(c+684,"wdata", false,-1, 31,0);
    tracep->declBus(c+685,"wstrb", false,-1, 3,0);
    tracep->declBus(c+686,"wvalid", false,-1, 0,0);
    tracep->declBus(c+687,"wready", false,-1, 0,0);
    tracep->declBus(c+688,"wlast", false,-1, 0,0);
    tracep->declBus(c+689,"bresp", false,-1, 1,0);
    tracep->declBus(c+690,"bvalid", false,-1, 0,0);
    tracep->declBus(c+691,"bready", false,-1, 0,0);
    tracep->declBus(c+692,"commit_wb", false,-1, 0,0);
    tracep->declBus(c+693,"uncache_read_wb", false,-1, 0,0);
    tracep->declBus(c+694,"inst", false,-1, 31,0);
    tracep->declBus(c+695,"pc_cur", false,-1, 31,0);
    tracep->pushNamePrefix("CPU ");
    tracep->declBus(c+696,"PC_RESET_VALUE", false,-1, 31,0);
    tracep->declBus(c+697,"INDEX_WIDTH", false,-1, 31,0);
    tracep->declBus(c+698,"WORD_OFFSET_WIDTH", false,-1, 31,0);
    tracep->declBus(c+665,"clk", false,-1, 0,0);
    tracep->declBus(c+666,"rstn", false,-1, 0,0);
    tracep->declBus(c+667,"araddr", false,-1, 31,0);
    tracep->declBus(c+668,"arvalid", false,-1, 0,0);
    tracep->declBus(c+669,"arready", false,-1, 0,0);
    tracep->declBus(c+670,"arlen", false,-1, 7,0);
    tracep->declBus(c+671,"arsize", false,-1, 2,0);
    tracep->declBus(c+672,"arburst", false,-1, 1,0);
    tracep->declBus(c+673,"rdata", false,-1, 31,0);
    tracep->declBus(c+674,"rresp", false,-1, 1,0);
    tracep->declBus(c+675,"rvalid", false,-1, 0,0);
    tracep->declBus(c+676,"rready", false,-1, 0,0);
    tracep->declBus(c+677,"rlast", false,-1, 0,0);
    tracep->declBus(c+678,"awaddr", false,-1, 31,0);
    tracep->declBus(c+679,"awvalid", false,-1, 0,0);
    tracep->declBus(c+680,"awready", false,-1, 0,0);
    tracep->declBus(c+681,"awlen", false,-1, 7,0);
    tracep->declBus(c+682,"awsize", false,-1, 2,0);
    tracep->declBus(c+683,"awburst", false,-1, 1,0);
    tracep->declBus(c+684,"wdata", false,-1, 31,0);
    tracep->declBus(c+685,"wstrb", false,-1, 3,0);
    tracep->declBus(c+686,"wvalid", false,-1, 0,0);
    tracep->declBus(c+687,"wready", false,-1, 0,0);
    tracep->declBus(c+688,"wlast", false,-1, 0,0);
    tracep->declBus(c+689,"bresp", false,-1, 1,0);
    tracep->declBus(c+690,"bvalid", false,-1, 0,0);
    tracep->declBus(c+691,"bready", false,-1, 0,0);
    tracep->declBus(c+692,"commit_wb", false,-1, 0,0);
    tracep->declBus(c+693,"uncache_read_wb", false,-1, 0,0);
    tracep->declBus(c+694,"inst", false,-1, 31,0);
    tracep->declBus(c+695,"pc_cur", false,-1, 31,0);
    tracep->declBus(c+22,"pc_if1", false,-1, 31,0);
    tracep->declBus(c+23,"pc_if2", false,-1, 31,0);
    tracep->declBus(c+24,"pc_id", false,-1, 31,0);
    tracep->declBus(c+25,"pc_ex", false,-1, 31,0);
    tracep->declBus(c+26,"pc_ls", false,-1, 31,0);
    tracep->declBus(c+27,"pc_wb", false,-1, 31,0);
    tracep->declBus(c+28,"inst_if2", false,-1, 31,0);
    tracep->declBus(c+29,"inst_id", false,-1, 31,0);
    tracep->declBus(c+30,"inst_ex", false,-1, 31,0);
    tracep->declBus(c+31,"inst_ls", false,-1, 31,0);
    tracep->declBus(c+32,"inst_wb", false,-1, 31,0);
    tracep->declBus(c+33,"pc_target", false,-1, 31,0);
    tracep->declBus(c+34,"next_pc", false,-1, 31,0);
    tracep->declBus(c+35,"imm_id", false,-1, 31,0);
    tracep->declBus(c+36,"imm_ex", false,-1, 31,0);
    tracep->declBus(c+37,"rf_wdata_wb", false,-1, 31,0);
    tracep->declBus(c+38,"csr_rdata_id", false,-1, 31,0);
    tracep->declBus(c+39,"csr_rdata_ex", false,-1, 31,0);
    tracep->declBus(c+40,"csr_wdata_ex", false,-1, 31,0);
    tracep->declBus(c+41,"csr_wdata_ls", false,-1, 31,0);
    tracep->declBus(c+42,"csr_wdata_wb", false,-1, 31,0);
    tracep->declBus(c+43,"rf_rdata1_id", false,-1, 31,0);
    tracep->declBus(c+44,"rf_rdata1_ex", false,-1, 31,0);
    tracep->declBus(c+45,"rf_rdata2_id", false,-1, 31,0);
    tracep->declBus(c+46,"rf_rdata2_ex", false,-1, 31,0);
    tracep->declBus(c+47,"forward1_data", false,-1, 31,0);
    tracep->declBus(c+48,"forward2_data", false,-1, 31,0);
    tracep->declBus(c+49,"alu_rf_data1", false,-1, 31,0);
    tracep->declBus(c+50,"alu_rf_data2", false,-1, 31,0);
    tracep->declBus(c+51,"alu_rs1", false,-1, 31,0);
    tracep->declBus(c+52,"alu_rs2", false,-1, 31,0);
    tracep->declBus(c+53,"alu_result_ex", false,-1, 31,0);
    tracep->declBus(c+54,"alu_result_ls", false,-1, 31,0);
    tracep->declBus(c+55,"alu_result_wb", false,-1, 31,0);
    tracep->declBus(c+56,"jump_target", false,-1, 31,0);
    tracep->declBus(c+57,"mem_wdata_ex", false,-1, 31,0);
    tracep->declBus(c+58,"mem_rdata_ls", false,-1, 31,0);
    tracep->declBus(c+59,"mem_rdata_wb", false,-1, 31,0);
    tracep->declBus(c+60,"dcache_rdata_ls", false,-1, 31,0);
    tracep->declBus(c+61,"i_raddr", false,-1, 31,0);
    tracep->declBus(c+673,"i_rdata", false,-1, 31,0);
    tracep->declBus(c+62,"d_raddr", false,-1, 31,0);
    tracep->declBus(c+673,"d_rdata", false,-1, 31,0);
    tracep->declBus(c+678,"d_waddr", false,-1, 31,0);
    tracep->declBus(c+684,"d_wdata", false,-1, 31,0);
    tracep->declBus(c+63,"mepc_global", false,-1, 31,0);
    tracep->declBus(c+64,"mtvec_global", false,-1, 31,0);
    tracep->declBus(c+65,"mcause_global", false,-1, 31,0);
    tracep->declBus(c+699,"i_rlen", false,-1, 7,0);
    tracep->declBus(c+699,"d_rlen", false,-1, 7,0);
    tracep->declBus(c+699,"d_wlen", false,-1, 7,0);
    tracep->declBus(c+66,"alu_op_id", false,-1, 4,0);
    tracep->declBus(c+67,"alu_op_ex", false,-1, 4,0);
    tracep->declBus(c+68,"mem_access_id", false,-1, 4,0);
    tracep->declBus(c+69,"mem_access_ex", false,-1, 4,0);
    tracep->declBus(c+70,"mem_access_ls", false,-1, 4,0);
    tracep->declBus(c+71,"br_type_id", false,-1, 4,0);
    tracep->declBus(c+72,"br_type_ex", false,-1, 4,0);
    tracep->declBus(c+73,"priv_vec_id", false,-1, 4,0);
    tracep->declBus(c+74,"priv_vec_ex", false,-1, 4,0);
    tracep->declBus(c+75,"priv_vec_ls", false,-1, 4,0);
    tracep->declBus(c+76,"priv_vec_wb", false,-1, 4,0);
    tracep->declBus(c+77,"wstrb_ex", false,-1, 3,0);
    tracep->declBus(c+700,"d_wstrb", false,-1, 3,0);
    tracep->declBus(c+701,"i_rsize", false,-1, 2,0);
    tracep->declBus(c+701,"d_rsize", false,-1, 2,0);
    tracep->declBus(c+701,"d_wsize", false,-1, 2,0);
    tracep->declBus(c+78,"alu_rs1_sel_id", false,-1, 1,0);
    tracep->declBus(c+79,"alu_rs1_sel_ex", false,-1, 1,0);
    tracep->declBus(c+80,"alu_rs2_sel_id", false,-1, 1,0);
    tracep->declBus(c+81,"alu_rs2_sel_ex", false,-1, 1,0);
    tracep->declBus(c+82,"wb_rf_sel_id", false,-1, 0,0);
    tracep->declBus(c+83,"wb_rf_sel_ex", false,-1, 0,0);
    tracep->declBus(c+84,"wb_rf_sel_ls", false,-1, 0,0);
    tracep->declBus(c+85,"wb_rf_sel_wb", false,-1, 0,0);
    tracep->declBus(c+86,"rf_we_id", false,-1, 0,0);
    tracep->declBus(c+87,"rf_we_ex", false,-1, 0,0);
    tracep->declBus(c+88,"rf_we_ls", false,-1, 0,0);
    tracep->declBus(c+89,"rf_we_wb", false,-1, 0,0);
    tracep->declBus(c+666,"ip_rvalid_if1", false,-1, 0,0);
    tracep->declBus(c+90,"i_rvalid", false,-1, 0,0);
    tracep->declBus(c+10,"i_rready", false,-1, 0,0);
    tracep->declBus(c+11,"i_rlast", false,-1, 0,0);
    tracep->declBus(c+91,"d_rvalid", false,-1, 0,0);
    tracep->declBus(c+12,"d_rready", false,-1, 0,0);
    tracep->declBus(c+13,"d_rlast", false,-1, 0,0);
    tracep->declBus(c+92,"d_wvalid", false,-1, 0,0);
    tracep->declBus(c+14,"d_wready", false,-1, 0,0);
    tracep->declBus(c+93,"d_wlast", false,-1, 0,0);
    tracep->declBus(c+15,"d_bvalid", false,-1, 0,0);
    tracep->declBus(c+94,"d_bready", false,-1, 0,0);
    tracep->declBus(c+95,"forward1_en", false,-1, 0,0);
    tracep->declBus(c+96,"forward2_en", false,-1, 0,0);
    tracep->declBus(c+97,"jump", false,-1, 0,0);
    tracep->declBus(c+98,"pc_set", false,-1, 0,0);
    tracep->declBus(c+99,"pc_stall", false,-1, 0,0);
    tracep->declBus(c+99,"IF1_IF2_stall", false,-1, 0,0);
    tracep->declBus(c+98,"IF1_IF2_flush", false,-1, 0,0);
    tracep->declBus(c+100,"IF2_ID_stall", false,-1, 0,0);
    tracep->declBus(c+101,"IF2_ID_flush", false,-1, 0,0);
    tracep->declBus(c+102,"ID_EX_stall", false,-1, 0,0);
    tracep->declBus(c+103,"ID_EX_flush", false,-1, 0,0);
    tracep->declBus(c+102,"EX_LS_stall", false,-1, 0,0);
    tracep->declBus(c+104,"EX_LS_flush", false,-1, 0,0);
    tracep->declBus(c+102,"LS_WB_stall", false,-1, 0,0);
    tracep->declBus(c+104,"LS_WB_flush", false,-1, 0,0);
    tracep->declBus(c+100,"icache_stall", false,-1, 0,0);
    tracep->declBus(c+98,"icache_flush", false,-1, 0,0);
    tracep->declBus(c+105,"icache_miss", false,-1, 0,0);
    tracep->declBus(c+102,"dcache_miss", false,-1, 0,0);
    tracep->declBus(c+666,"commit_if1", false,-1, 0,0);
    tracep->declBus(c+106,"commit_if2", false,-1, 0,0);
    tracep->declBus(c+107,"commit_id", false,-1, 0,0);
    tracep->declBus(c+108,"commit_ex", false,-1, 0,0);
    tracep->declBus(c+109,"commit_ls", false,-1, 0,0);
    tracep->pushNamePrefix("ALU_inst ");
    tracep->declBus(c+51,"sr1", false,-1, 31,0);
    tracep->declBus(c+52,"sr2", false,-1, 31,0);
    tracep->declBus(c+67,"alu_op", false,-1, 4,0);
    tracep->declBus(c+53,"result", false,-1, 31,0);
    tracep->declQuad(c+110,"result_64", false,-1, 63,0);
    tracep->declBus(c+112,"result_div", false,-1, 31,0);
    tracep->declBus(c+113,"result_rem", false,-1, 31,0);
    tracep->declBus(c+114,"sign", false,-1, 1,0);
    tracep->declBus(c+115,"sr1_abs", false,-1, 31,0);
    tracep->declBus(c+116,"sr2_abs", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_rf_data1_mux ");
    tracep->declBus(c+702,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+44,"din1", false,-1, 31,0);
    tracep->declBus(c+47,"din2", false,-1, 31,0);
    tracep->declBus(c+95,"sel", false,-1, 0,0);
    tracep->declBus(c+49,"dout", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_rf_data2_mux ");
    tracep->declBus(c+702,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+46,"din1", false,-1, 31,0);
    tracep->declBus(c+48,"din2", false,-1, 31,0);
    tracep->declBus(c+96,"sel", false,-1, 0,0);
    tracep->declBus(c+50,"dout", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_rs1_mux ");
    tracep->declBus(c+702,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+49,"din1", false,-1, 31,0);
    tracep->declBus(c+25,"din2", false,-1, 31,0);
    tracep->declBus(c+703,"din3", false,-1, 31,0);
    tracep->declBus(c+703,"din4", false,-1, 31,0);
    tracep->declBus(c+79,"sel", false,-1, 1,0);
    tracep->declBus(c+51,"dout", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_rs2_mux ");
    tracep->declBus(c+702,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+50,"din1", false,-1, 31,0);
    tracep->declBus(c+36,"din2", false,-1, 31,0);
    tracep->declBus(c+704,"din3", false,-1, 31,0);
    tracep->declBus(c+39,"din4", false,-1, 31,0);
    tracep->declBus(c+81,"sel", false,-1, 1,0);
    tracep->declBus(c+52,"dout", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Branch_inst ");
    tracep->declBus(c+72,"br_type", false,-1, 4,0);
    tracep->declBus(c+49,"sr1", false,-1, 31,0);
    tracep->declBus(c+50,"sr2", false,-1, 31,0);
    tracep->declBus(c+25,"pc", false,-1, 31,0);
    tracep->declBus(c+36,"imm", false,-1, 31,0);
    tracep->declBus(c+97,"jump", false,-1, 0,0);
    tracep->declBus(c+56,"jump_target", false,-1, 31,0);
    tracep->declBit(c+117,"is_branch", false,-1);
    tracep->declBit(c+118,"is_jal", false,-1);
    tracep->declBit(c+119,"is_jalr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CSR_inst ");
    tracep->declBus(c+665,"clk", false,-1, 0,0);
    tracep->declBus(c+666,"rstn", false,-1, 0,0);
    tracep->declBus(c+120,"raddr", false,-1, 11,0);
    tracep->declBus(c+121,"waddr", false,-1, 11,0);
    tracep->declBus(c+122,"we", false,-1, 0,0);
    tracep->declBus(c+42,"wdata", false,-1, 31,0);
    tracep->declBus(c+38,"rdata", false,-1, 31,0);
    tracep->declBus(c+63,"mepc_out", false,-1, 31,0);
    tracep->declBus(c+27,"pc_wb", false,-1, 31,0);
    tracep->declBus(c+64,"mtvec_out", false,-1, 31,0);
    tracep->declBus(c+65,"mcause_in", false,-1, 31,0);
    tracep->declBus(c+76,"priv_vec_wb", false,-1, 4,0);
    tracep->declBit(c+104,"has_exp", false,-1);
    tracep->declBus(c+123,"mstatus", false,-1, 31,0);
    tracep->declBus(c+64,"mtvec", false,-1, 31,0);
    tracep->declBus(c+124,"mcause", false,-1, 31,0);
    tracep->declBus(c+63,"mepc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DCache_Read_Ctrl_inst ");
    tracep->declBus(c+60,"mem_rdata", false,-1, 31,0);
    tracep->declBus(c+54,"mem_raddr", false,-1, 31,0);
    tracep->declBus(c+70,"mem_access", false,-1, 4,0);
    tracep->declBus(c+58,"rdata", false,-1, 31,0);
    tracep->declBus(c+125,"load_type", false,-1, 2,0);
    tracep->declBus(c+126,"load_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DCache_Write_Ctrl_inst ");
    tracep->declBus(c+50,"wdata", false,-1, 31,0);
    tracep->declBus(c+53,"mem_waddr", false,-1, 31,0);
    tracep->declBus(c+69,"mem_access", false,-1, 4,0);
    tracep->declBus(c+77,"wstrb", false,-1, 3,0);
    tracep->declBus(c+57,"mem_wdata", false,-1, 31,0);
    tracep->declBit(c+127,"is_store", false,-1);
    tracep->declBus(c+128,"store_type", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DCache_inst ");
    tracep->declBus(c+697,"INDEX_WIDTH", false,-1, 31,0);
    tracep->declBus(c+698,"WORD_OFFSET_WIDTH", false,-1, 31,0);
    tracep->declBus(c+665,"clk", false,-1, 0,0);
    tracep->declBus(c+666,"rstn", false,-1, 0,0);
    tracep->declBus(c+53,"addr", false,-1, 31,0);
    tracep->declBus(c+129,"rvalid", false,-1, 0,0);
    tracep->declBus(c+60,"rdata", false,-1, 31,0);
    tracep->declBus(c+128,"rsize", false,-1, 2,0);
    tracep->declBus(c+127,"wvalid", false,-1, 0,0);
    tracep->declBus(c+57,"wdata", false,-1, 31,0);
    tracep->declBus(c+77,"wstrb", false,-1, 3,0);
    tracep->declBus(c+102,"dcache_miss", false,-1, 0,0);
    tracep->declBus(c+130,"fencei_valid", false,-1, 0,0);
    tracep->declBus(c+131,"fence_valid", false,-1, 0,0);
    tracep->declBus(c+91,"d_rvalid", false,-1, 0,0);
    tracep->declBus(c+12,"d_rready", false,-1, 0,0);
    tracep->declBus(c+62,"d_raddr", false,-1, 31,0);
    tracep->declBus(c+673,"d_rdata", false,-1, 31,0);
    tracep->declBus(c+13,"d_rlast", false,-1, 0,0);
    tracep->declBus(c+701,"d_rsize", false,-1, 2,0);
    tracep->declBus(c+699,"d_rlen", false,-1, 7,0);
    tracep->declBus(c+92,"d_wvalid", false,-1, 0,0);
    tracep->declBus(c+14,"d_wready", false,-1, 0,0);
    tracep->declBus(c+678,"d_waddr", false,-1, 31,0);
    tracep->declBus(c+684,"d_wdata", false,-1, 31,0);
    tracep->declBus(c+700,"d_wstrb", false,-1, 3,0);
    tracep->declBus(c+93,"d_wlast", false,-1, 0,0);
    tracep->declBus(c+701,"d_wsize", false,-1, 2,0);
    tracep->declBus(c+699,"d_wlen", false,-1, 7,0);
    tracep->declBus(c+15,"d_bvalid", false,-1, 0,0);
    tracep->declBus(c+94,"d_bready", false,-1, 0,0);
    tracep->declBus(c+697,"BYTE_OFFSET_WIDTH", false,-1, 31,0);
    tracep->declBus(c+705,"TAG_WIDTH", false,-1, 31,0);
    tracep->declBus(c+706,"SET_NUM", false,-1, 31,0);
    tracep->declBus(c+697,"WORD_NUM", false,-1, 31,0);
    tracep->declBus(c+706,"BYTE_NUM", false,-1, 31,0);
    tracep->declBus(c+707,"BIT_NUM", false,-1, 31,0);
    tracep->declBus(c+132,"req_buf_we", false,-1, 0,0);
    tracep->declBus(c+133,"wdata_pipe", false,-1, 31,0);
    tracep->declBus(c+134,"addr_pipe", false,-1, 31,0);
    tracep->declBus(c+135,"wstrb_pipe", false,-1, 3,0);
    tracep->declBus(c+136,"rsize_pipe", false,-1, 2,0);
    tracep->declBus(c+137,"fence_valid_pipe", false,-1, 0,0);
    tracep->declBus(c+138,"valid_flush", false,-1, 0,0);
    tracep->declBus(c+139,"we_pipe", false,-1, 0,0);
    tracep->declBus(c+140,"rvalid_pipe", false,-1, 0,0);
    tracep->declBus(c+141,"wvalid_pipe", false,-1, 0,0);
    tracep->declArray(c+142,"ret_buf", false,-1, 127,0);
    tracep->declBus(c+146,"r_index", false,-1, 3,0);
    tracep->declBus(c+147,"w_index", false,-1, 3,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+148+i*1,"mem_we", true,(i+0), 15,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+150+i*4,"mem_rdata", true,(i+0), 127,0);
    }
    tracep->declArray(c+158,"mem_wdata", false,-1, 127,0);
    tracep->declBus(c+162,"tagv_we", false,-1, 1,0);
    tracep->declBus(c+163,"w_tag", false,-1, 23,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+164+i*1,"tag_rdata", true,(i+0), 23,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+166+i*1,"valid_bit_mem", true,(i+0), 15,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+168+i*1,"valid_bit_rdata", true,(i+0), 0,0);
    }
    tracep->declBus(c+170,"hit", false,-1, 1,0);
    tracep->declBit(c+171,"cache_hit", false,-1);
    tracep->declBus(c+163,"tag", false,-1, 23,0);
    tracep->declBit(c+172,"hit_way", false,-1);
    tracep->declArray(c+173,"wdata_pipe_512", false,-1, 127,0);
    tracep->declArray(c+177,"wstrb_pipe_512", false,-1, 127,0);
    tracep->declBit(c+181,"wdata_from_pipe", false,-1);
    tracep->declBit(c+182,"data_from_mem", false,-1);
    tracep->declBit(c+183,"lru_sel", false,-1);
    tracep->declBit(c+184,"lru_hit_update", false,-1);
    tracep->declBit(c+185,"lru_refill_update", false,-1);
    tracep->declBus(c+186,"lru", false,-1, 15,0);
    tracep->declBit(c+187,"dirty_info", false,-1);
    tracep->declBit(c+188,"dirty_refill", false,-1);
    tracep->declBit(c+189,"dirty_we", false,-1);
    tracep->declBit(c+190,"dirty_clean_all", false,-1);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+191+i*1,"dirty_table", true,(i+0), 15,0);
    }
    tracep->declArray(c+193,"wbuf", false,-1, 127,0);
    tracep->declBit(c+197,"wbuf_we", false,-1);
    tracep->declBus(c+198,"maddr_buf", false,-1, 31,0);
    tracep->declBit(c+199,"mbuf_we", false,-1);
    tracep->declBit(c+200,"wfsm_en", false,-1);
    tracep->declBit(c+201,"wfsm_reset", false,-1);
    tracep->declBit(c+202,"wrt_finish", false,-1);
    tracep->declBus(c+203,"write_counter", false,-1, 2,0);
    tracep->declBit(c+204,"write_counter_reset", false,-1);
    tracep->declBit(c+16,"write_counter_en", false,-1);
    tracep->declBus(c+205,"addr_cnt", false,-1, 4,0);
    tracep->declBit(c+206,"addr_cnt_add", false,-1);
    tracep->declBit(c+207,"read_from_cnt", false,-1);
    tracep->declArray(c+208,"rdata_mem", false,-1, 127,0);
    tracep->declArray(c+212,"rdata_ret", false,-1, 127,0);
    tracep->declBus(c+216,"state", false,-1, 1,0);
    tracep->declBus(c+17,"next_state", false,-1, 1,0);
    tracep->declBus(c+217,"wfsm_state", false,-1, 1,0);
    tracep->declBus(c+18,"wfsm_next_state", false,-1, 1,0);
    tracep->declBus(c+708,"write_num", false,-1, 2,0);
    tracep->pushNamePrefix("data_mem0 ");
    tracep->declBus(c+707,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+697,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+665,"clk", false,-1);
    tracep->declBus(c+146,"raddr", false,-1, 3,0);
    tracep->declBus(c+147,"waddr", false,-1, 3,0);
    tracep->declArray(c+158,"din", false,-1, 127,0);
    tracep->declBus(c+218,"we", false,-1, 15,0);
    tracep->declArray(c+219,"dout", false,-1, 127,0);
    tracep->declBus(c+223,"addr_r", false,-1, 3,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declArray(c+224+i*4,"ram", true,(i+0), 127,0);
    }
    tracep->declBus(c+1,"j", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("data_mem1 ");
    tracep->declBus(c+707,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+697,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+665,"clk", false,-1);
    tracep->declBus(c+146,"raddr", false,-1, 3,0);
    tracep->declBus(c+147,"waddr", false,-1, 3,0);
    tracep->declArray(c+158,"din", false,-1, 127,0);
    tracep->declBus(c+288,"we", false,-1, 15,0);
    tracep->declArray(c+289,"dout", false,-1, 127,0);
    tracep->declBus(c+293,"addr_r", false,-1, 3,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declArray(c+294+i*4,"ram", true,(i+0), 127,0);
    }
    tracep->declBus(c+2,"j", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tag_mem0 ");
    tracep->declBus(c+705,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+697,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+665,"clk", false,-1);
    tracep->declBus(c+146,"raddr", false,-1, 3,0);
    tracep->declBus(c+147,"waddr", false,-1, 3,0);
    tracep->declBus(c+163,"din", false,-1, 23,0);
    tracep->declBit(c+358,"we", false,-1);
    tracep->declBus(c+359,"dout", false,-1, 23,0);
    tracep->declBus(c+360,"addr_r", false,-1, 3,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+361+i*1,"ram", true,(i+0), 23,0);
    }
    tracep->declBus(c+3,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tag_mem1 ");
    tracep->declBus(c+705,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+697,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+665,"clk", false,-1);
    tracep->declBus(c+146,"raddr", false,-1, 3,0);
    tracep->declBus(c+147,"waddr", false,-1, 3,0);
    tracep->declBus(c+163,"din", false,-1, 23,0);
    tracep->declBit(c+377,"we", false,-1);
    tracep->declBus(c+378,"dout", false,-1, 23,0);
    tracep->declBus(c+379,"addr_r", false,-1, 3,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+380+i*1,"ram", true,(i+0), 23,0);
    }
    tracep->declBus(c+4,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Decode_inst ");
    tracep->declBus(c+29,"inst", false,-1, 31,0);
    tracep->declBus(c+66,"alu_op", false,-1, 4,0);
    tracep->declBus(c+68,"mem_access", false,-1, 4,0);
    tracep->declBus(c+35,"imm", false,-1, 31,0);
    tracep->declBus(c+86,"rf_we", false,-1, 0,0);
    tracep->declBus(c+78,"alu_rs1_sel", false,-1, 1,0);
    tracep->declBus(c+80,"alu_rs2_sel", false,-1, 1,0);
    tracep->declBus(c+82,"wb_rf_sel", false,-1, 0,0);
    tracep->declBus(c+71,"br_type", false,-1, 4,0);
    tracep->declBus(c+73,"priv_vec", false,-1, 4,0);
    tracep->declBus(c+396,"rd", false,-1, 4,0);
    tracep->declBus(c+397,"funct3", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Exp_Commit_inst ");
    tracep->declBus(c+76,"priv_vec", false,-1, 4,0);
    tracep->declBus(c+65,"exp_code", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Hazard_inst ");
    tracep->declBus(c+398,"rf_rd_ls", false,-1, 4,0);
    tracep->declBus(c+399,"rf_rd_wb", false,-1, 4,0);
    tracep->declBus(c+88,"rf_we_ls", false,-1, 0,0);
    tracep->declBus(c+89,"rf_we_wb", false,-1, 0,0);
    tracep->declBus(c+400,"rf_rs1_ex", false,-1, 4,0);
    tracep->declBus(c+401,"rf_rs2_ex", false,-1, 4,0);
    tracep->declBus(c+54,"rf_wdata_tmp_ls", false,-1, 31,0);
    tracep->declBus(c+37,"rf_wdata_wb", false,-1, 31,0);
    tracep->declBus(c+95,"forward1_en", false,-1, 0,0);
    tracep->declBus(c+96,"forward2_en", false,-1, 0,0);
    tracep->declBus(c+47,"forward1_data", false,-1, 31,0);
    tracep->declBus(c+48,"forward2_data", false,-1, 31,0);
    tracep->declBus(c+69,"mem_access_ex", false,-1, 4,0);
    tracep->declBus(c+402,"rf_rd_ex", false,-1, 4,0);
    tracep->declBus(c+403,"rf_rs1_id", false,-1, 4,0);
    tracep->declBus(c+404,"rf_rs2_id", false,-1, 4,0);
    tracep->declBus(c+105,"icache_miss", false,-1, 0,0);
    tracep->declBus(c+102,"dcache_miss", false,-1, 0,0);
    tracep->declBus(c+97,"jump", false,-1, 0,0);
    tracep->declBus(c+56,"jump_target", false,-1, 31,0);
    tracep->declBus(c+74,"priv_vec_ex", false,-1, 4,0);
    tracep->declBus(c+25,"pc_ex", false,-1, 31,0);
    tracep->declBus(c+76,"priv_vec_wb", false,-1, 4,0);
    tracep->declBus(c+27,"pc_wb", false,-1, 31,0);
    tracep->declBus(c+63,"mepc_global", false,-1, 31,0);
    tracep->declBus(c+64,"mtvec_global", false,-1, 31,0);
    tracep->declBus(c+65,"mcause_global", false,-1, 31,0);
    tracep->declBus(c+98,"pc_set", false,-1, 0,0);
    tracep->declBus(c+98,"IF1_IF2_flush", false,-1, 0,0);
    tracep->declBus(c+101,"IF2_ID_flush", false,-1, 0,0);
    tracep->declBus(c+103,"ID_EX_flush", false,-1, 0,0);
    tracep->declBus(c+104,"EX_LS_flush", false,-1, 0,0);
    tracep->declBus(c+104,"LS_WB_flush", false,-1, 0,0);
    tracep->declBus(c+98,"icache_flush", false,-1, 0,0);
    tracep->declBus(c+99,"pc_stall", false,-1, 0,0);
    tracep->declBus(c+99,"IF1_IF2_stall", false,-1, 0,0);
    tracep->declBus(c+100,"IF2_ID_stall", false,-1, 0,0);
    tracep->declBus(c+102,"ID_EX_stall", false,-1, 0,0);
    tracep->declBus(c+102,"EX_LS_stall", false,-1, 0,0);
    tracep->declBus(c+102,"LS_WB_stall", false,-1, 0,0);
    tracep->declBus(c+100,"icache_stall", false,-1, 0,0);
    tracep->declBus(c+33,"pc_set_target", false,-1, 31,0);
    tracep->declBit(c+405,"stall_by_load_use", false,-1);
    tracep->declBit(c+406,"flush_by_load_use", false,-1);
    tracep->declBit(c+129,"is_load_ex", false,-1);
    tracep->declBit(c+105,"stall_by_icache", false,-1);
    tracep->declBit(c+105,"flush_by_icache", false,-1);
    tracep->declBit(c+102,"stall_by_dcache", false,-1);
    tracep->declBit(c+97,"flush_by_jump", false,-1);
    tracep->declBit(c+407,"flush_by_priv_ex", false,-1);
    tracep->declBit(c+104,"flush_by_exp", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ICache_inst ");
    tracep->declBus(c+697,"INDEX_WIDTH", false,-1, 31,0);
    tracep->declBus(c+698,"WORD_OFFSET_WIDTH", false,-1, 31,0);
    tracep->declBus(c+665,"clk", false,-1, 0,0);
    tracep->declBus(c+666,"rstn", false,-1, 0,0);
    tracep->declBus(c+666,"rvalid", false,-1, 0,0);
    tracep->declBus(c+22,"raddr", false,-1, 31,0);
    tracep->declBus(c+28,"rdata", false,-1, 31,0);
    tracep->declBus(c+130,"fencei_valid", false,-1, 0,0);
    tracep->declBus(c+131,"fence_valid", false,-1, 0,0);
    tracep->declBus(c+98,"flush", false,-1, 0,0);
    tracep->declBus(c+100,"stall", false,-1, 0,0);
    tracep->declBus(c+105,"icache_miss", false,-1, 0,0);
    tracep->declBus(c+90,"i_rvalid", false,-1, 0,0);
    tracep->declBus(c+10,"i_rready", false,-1, 0,0);
    tracep->declBus(c+61,"i_raddr", false,-1, 31,0);
    tracep->declBus(c+673,"i_rdata", false,-1, 31,0);
    tracep->declBus(c+11,"i_rlast", false,-1, 0,0);
    tracep->declBus(c+701,"i_rsize", false,-1, 2,0);
    tracep->declBus(c+699,"i_rlen", false,-1, 7,0);
    tracep->declBus(c+697,"BYTE_OFFSET_WIDTH", false,-1, 31,0);
    tracep->declBus(c+705,"TAG_WIDTH", false,-1, 31,0);
    tracep->declBus(c+706,"SET_NUM", false,-1, 31,0);
    tracep->declBus(c+697,"WORD_NUM", false,-1, 31,0);
    tracep->declBus(c+706,"BYTE_NUM", false,-1, 31,0);
    tracep->declBus(c+707,"BIT_NUM", false,-1, 31,0);
    tracep->declBus(c+408,"addr_pipe", false,-1, 31,0);
    tracep->declBit(c+409,"rvalid_pipe", false,-1);
    tracep->declBit(c+410,"req_buf_we", false,-1);
    tracep->declArray(c+411,"ret_buf", false,-1, 127,0);
    tracep->declBus(c+415,"r_index", false,-1, 3,0);
    tracep->declBus(c+416,"w_index", false,-1, 3,0);
    tracep->declBus(c+417,"mem_we", false,-1, 1,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+418+i*4,"mem_rdata", true,(i+0), 127,0);
    }
    tracep->declBus(c+426,"tagv_we", false,-1, 1,0);
    tracep->declBus(c+427,"w_tag", false,-1, 23,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+428+i*1,"tag_rdata", true,(i+0), 24,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+430+i*1,"valid_bit_mem", true,(i+0), 15,0);
    }
    tracep->declBus(c+432,"hit", false,-1, 1,0);
    tracep->declBit(c+433,"hit_way", false,-1);
    tracep->declBit(c+434,"cache_hit", false,-1);
    tracep->declBus(c+427,"tag", false,-1, 23,0);
    tracep->declBit(c+435,"lru_sel", false,-1);
    tracep->declBit(c+436,"lru_hit_update", false,-1);
    tracep->declBit(c+437,"lru_refill_update", false,-1);
    tracep->declBit(c+438,"data_from_mem", false,-1);
    tracep->declBit(c+439,"flush_buf", false,-1);
    tracep->declArray(c+440,"rdata_mem", false,-1, 127,0);
    tracep->declArray(c+444,"rdata_ret", false,-1, 127,0);
    tracep->declBus(c+448,"lru", false,-1, 15,0);
    tracep->declBus(c+449,"state", false,-1, 1,0);
    tracep->declBus(c+19,"next_state", false,-1, 1,0);
    tracep->pushNamePrefix("data_mem0 ");
    tracep->declBus(c+707,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+697,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+665,"clk", false,-1);
    tracep->declBus(c+415,"raddr", false,-1, 3,0);
    tracep->declBus(c+416,"waddr", false,-1, 3,0);
    tracep->declArray(c+411,"din", false,-1, 127,0);
    tracep->declBit(c+450,"we", false,-1);
    tracep->declArray(c+451,"dout", false,-1, 127,0);
    tracep->declBus(c+455,"addr_r", false,-1, 3,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declArray(c+456+i*4,"ram", true,(i+0), 127,0);
    }
    tracep->declBus(c+5,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("data_mem1 ");
    tracep->declBus(c+707,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+697,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+665,"clk", false,-1);
    tracep->declBus(c+415,"raddr", false,-1, 3,0);
    tracep->declBus(c+416,"waddr", false,-1, 3,0);
    tracep->declArray(c+411,"din", false,-1, 127,0);
    tracep->declBit(c+520,"we", false,-1);
    tracep->declArray(c+521,"dout", false,-1, 127,0);
    tracep->declBus(c+525,"addr_r", false,-1, 3,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declArray(c+526+i*4,"ram", true,(i+0), 127,0);
    }
    tracep->declBus(c+6,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tag_mem0 ");
    tracep->declBus(c+705,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+697,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+665,"clk", false,-1);
    tracep->declBus(c+415,"raddr", false,-1, 3,0);
    tracep->declBus(c+416,"waddr", false,-1, 3,0);
    tracep->declBus(c+427,"din", false,-1, 23,0);
    tracep->declBit(c+590,"we", false,-1);
    tracep->declBus(c+591,"dout", false,-1, 23,0);
    tracep->declBus(c+592,"addr_r", false,-1, 3,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+593+i*1,"ram", true,(i+0), 23,0);
    }
    tracep->declBus(c+7,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tag_mem1 ");
    tracep->declBus(c+705,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+697,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+665,"clk", false,-1);
    tracep->declBus(c+415,"raddr", false,-1, 3,0);
    tracep->declBus(c+416,"waddr", false,-1, 3,0);
    tracep->declBus(c+427,"din", false,-1, 23,0);
    tracep->declBit(c+609,"we", false,-1);
    tracep->declBus(c+610,"dout", false,-1, 23,0);
    tracep->declBus(c+611,"addr_r", false,-1, 3,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+612+i*1,"ram", true,(i+0), 23,0);
    }
    tracep->declBus(c+8,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("NPC_Mux_inst ");
    tracep->declBus(c+22,"pc", false,-1, 31,0);
    tracep->declBus(c+98,"pc_set", false,-1, 0,0);
    tracep->declBus(c+33,"pc_target", false,-1, 31,0);
    tracep->declBus(c+34,"next_pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PC_inst ");
    tracep->declBus(c+696,"RESET_VALUE", false,-1, 31,0);
    tracep->declBus(c+665,"clk", false,-1, 0,0);
    tracep->declBus(c+666,"rstn", false,-1, 0,0);
    tracep->declBus(c+99,"stall", false,-1, 0,0);
    tracep->declBus(c+98,"pc_set", false,-1, 0,0);
    tracep->declBus(c+34,"next_pc", false,-1, 31,0);
    tracep->declBus(c+22,"pc", false,-1, 31,0);
    tracep->declBus(c+22,"pc_reg", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Priv_inst ");
    tracep->declBus(c+628,"csr_op", false,-1, 2,0);
    tracep->declBus(c+39,"csr_rdata", false,-1, 31,0);
    tracep->declBus(c+49,"rf_rdata1", false,-1, 31,0);
    tracep->declBus(c+629,"zimm", false,-1, 31,0);
    tracep->declBus(c+40,"csr_wdata", false,-1, 31,0);
    tracep->declBus(c+709,"CSRRW", false,-1, 2,0);
    tracep->declBus(c+701,"CSRRS", false,-1, 2,0);
    tracep->declBus(c+708,"CSRRC", false,-1, 2,0);
    tracep->declBus(c+710,"CSRRWI", false,-1, 2,0);
    tracep->declBus(c+711,"CSRRSI", false,-1, 2,0);
    tracep->declBus(c+712,"CSRRCI", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Regfile_inst ");
    tracep->declBus(c+665,"clk", false,-1, 0,0);
    tracep->declBus(c+403,"raddr1", false,-1, 4,0);
    tracep->declBus(c+404,"raddr2", false,-1, 4,0);
    tracep->declBus(c+399,"waddr", false,-1, 4,0);
    tracep->declBus(c+37,"wdata", false,-1, 31,0);
    tracep->declBit(c+89,"we", false,-1);
    tracep->declBus(c+43,"rdata1", false,-1, 31,0);
    tracep->declBus(c+45,"rdata2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+630+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+9,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("SegReg_EX_LS_inst ");
    tracep->declBus(c+696,"PC_RESET_VAL", false,-1, 31,0);
    tracep->declBus(c+665,"clk", false,-1, 0,0);
    tracep->declBus(c+666,"rstn", false,-1, 0,0);
    tracep->declBus(c+102,"stall", false,-1, 0,0);
    tracep->declBus(c+104,"flush", false,-1, 0,0);
    tracep->declBus(c+25,"pc_ex", false,-1, 31,0);
    tracep->declBus(c+30,"inst_ex", false,-1, 31,0);
    tracep->declBus(c+74,"priv_vec_ex", false,-1, 4,0);
    tracep->declBus(c+40,"csr_wdata_ex", false,-1, 31,0);
    tracep->declBus(c+53,"alu_result_ex", false,-1, 31,0);
    tracep->declBus(c+69,"mem_access_ex", false,-1, 4,0);
    tracep->declBus(c+83,"wb_rf_sel_ex", false,-1, 0,0);
    tracep->declBus(c+87,"rf_we_ex", false,-1, 0,0);
    tracep->declBus(c+26,"pc_ls", false,-1, 31,0);
    tracep->declBus(c+31,"inst_ls", false,-1, 31,0);
    tracep->declBus(c+75,"priv_vec_ls", false,-1, 4,0);
    tracep->declBus(c+41,"csr_wdata_ls", false,-1, 31,0);
    tracep->declBus(c+54,"alu_result_ls", false,-1, 31,0);
    tracep->declBus(c+70,"mem_access_ls", false,-1, 4,0);
    tracep->declBus(c+84,"wb_rf_sel_ls", false,-1, 0,0);
    tracep->declBus(c+88,"rf_we_ls", false,-1, 0,0);
    tracep->declBus(c+108,"commit_ex", false,-1, 0,0);
    tracep->declBus(c+109,"commit_ls", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SegReg_ID_EX_inst ");
    tracep->declBus(c+696,"PC_RESET_VAL", false,-1, 31,0);
    tracep->declBus(c+665,"clk", false,-1, 0,0);
    tracep->declBus(c+666,"rstn", false,-1, 0,0);
    tracep->declBus(c+102,"stall", false,-1, 0,0);
    tracep->declBus(c+103,"flush", false,-1, 0,0);
    tracep->declBus(c+24,"pc_id", false,-1, 31,0);
    tracep->declBus(c+29,"inst_id", false,-1, 31,0);
    tracep->declBus(c+38,"csr_rdata_id", false,-1, 31,0);
    tracep->declBus(c+43,"rdata1_id", false,-1, 31,0);
    tracep->declBus(c+45,"rdata2_id", false,-1, 31,0);
    tracep->declBus(c+35,"imm_id", false,-1, 31,0);
    tracep->declBus(c+68,"mem_access_id", false,-1, 4,0);
    tracep->declBus(c+66,"op_id", false,-1, 4,0);
    tracep->declBus(c+71,"br_type_id", false,-1, 4,0);
    tracep->declBus(c+82,"wb_rf_sel_id", false,-1, 0,0);
    tracep->declBus(c+78,"alu_rs1_sel_id", false,-1, 1,0);
    tracep->declBus(c+80,"alu_rs2_sel_id", false,-1, 1,0);
    tracep->declBus(c+86,"rf_we_id", false,-1, 0,0);
    tracep->declBus(c+73,"priv_vec_id", false,-1, 4,0);
    tracep->declBus(c+25,"pc_ex", false,-1, 31,0);
    tracep->declBus(c+30,"inst_ex", false,-1, 31,0);
    tracep->declBus(c+39,"csr_rdata_ex", false,-1, 31,0);
    tracep->declBus(c+44,"rdata1_ex", false,-1, 31,0);
    tracep->declBus(c+46,"rdata2_ex", false,-1, 31,0);
    tracep->declBus(c+36,"imm_ex", false,-1, 31,0);
    tracep->declBus(c+69,"mem_access_ex", false,-1, 4,0);
    tracep->declBus(c+67,"op_ex", false,-1, 4,0);
    tracep->declBus(c+72,"br_type_ex", false,-1, 4,0);
    tracep->declBus(c+83,"wb_rf_sel_ex", false,-1, 0,0);
    tracep->declBus(c+79,"alu_rs1_sel_ex", false,-1, 1,0);
    tracep->declBus(c+81,"alu_rs2_sel_ex", false,-1, 1,0);
    tracep->declBus(c+87,"rf_we_ex", false,-1, 0,0);
    tracep->declBus(c+74,"priv_vec_ex", false,-1, 4,0);
    tracep->declBus(c+107,"commit_id", false,-1, 0,0);
    tracep->declBus(c+108,"commit_ex", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SegReg_IF1_IF2_inst ");
    tracep->declBus(c+696,"PC_RESET_VAL", false,-1, 31,0);
    tracep->declBus(c+665,"clk", false,-1, 0,0);
    tracep->declBus(c+666,"rstn", false,-1, 0,0);
    tracep->declBus(c+99,"stall", false,-1, 0,0);
    tracep->declBus(c+98,"flush", false,-1, 0,0);
    tracep->declBus(c+22,"pc_if1", false,-1, 31,0);
    tracep->declBus(c+23,"pc_if2", false,-1, 31,0);
    tracep->declBus(c+666,"commit_if1", false,-1, 0,0);
    tracep->declBus(c+106,"commit_if2", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SegReg_IF2_ID_inst ");
    tracep->declBus(c+696,"PC_RESET_VAL", false,-1, 31,0);
    tracep->declBus(c+665,"clk", false,-1, 0,0);
    tracep->declBus(c+666,"rstn", false,-1, 0,0);
    tracep->declBus(c+100,"stall", false,-1, 0,0);
    tracep->declBus(c+101,"flush", false,-1, 0,0);
    tracep->declBus(c+23,"pc_if2", false,-1, 31,0);
    tracep->declBus(c+28,"inst_if2", false,-1, 31,0);
    tracep->declBus(c+24,"pc_id", false,-1, 31,0);
    tracep->declBus(c+29,"inst_id", false,-1, 31,0);
    tracep->declBus(c+106,"commit_if2", false,-1, 0,0);
    tracep->declBus(c+107,"commit_id", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SegReg_LS_WB_inst ");
    tracep->declBus(c+696,"PC_RESET_VAL", false,-1, 31,0);
    tracep->declBus(c+665,"clk", false,-1, 0,0);
    tracep->declBus(c+666,"rstn", false,-1, 0,0);
    tracep->declBus(c+102,"stall", false,-1, 0,0);
    tracep->declBus(c+104,"flush", false,-1, 0,0);
    tracep->declBus(c+26,"pc_ls", false,-1, 31,0);
    tracep->declBus(c+31,"inst_ls", false,-1, 31,0);
    tracep->declBus(c+54,"alu_result_ls", false,-1, 31,0);
    tracep->declBus(c+58,"mem_rdata_ls", false,-1, 31,0);
    tracep->declBus(c+75,"priv_vec_ls", false,-1, 4,0);
    tracep->declBus(c+41,"csr_wdata_ls", false,-1, 31,0);
    tracep->declBus(c+84,"wb_rf_sel_ls", false,-1, 0,0);
    tracep->declBus(c+88,"rf_we_ls", false,-1, 0,0);
    tracep->declBus(c+27,"pc_wb", false,-1, 31,0);
    tracep->declBus(c+32,"inst_wb", false,-1, 31,0);
    tracep->declBus(c+55,"alu_result_wb", false,-1, 31,0);
    tracep->declBus(c+59,"mem_rdata_wb", false,-1, 31,0);
    tracep->declBus(c+76,"priv_vec_wb", false,-1, 4,0);
    tracep->declBus(c+42,"csr_wdata_wb", false,-1, 31,0);
    tracep->declBus(c+85,"wb_rf_sel_wb", false,-1, 0,0);
    tracep->declBus(c+89,"rf_we_wb", false,-1, 0,0);
    tracep->declBus(c+662,"read_ls", false,-1, 0,0);
    tracep->declBus(c+693,"uncache_read_wb", false,-1, 0,0);
    tracep->declBus(c+109,"commit_ls", false,-1, 0,0);
    tracep->declBus(c+692,"commit_wb", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB_rf_wdata_mux ");
    tracep->declBus(c+702,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+55,"din1", false,-1, 31,0);
    tracep->declBus(c+59,"din2", false,-1, 31,0);
    tracep->declBus(c+85,"sel", false,-1, 0,0);
    tracep->declBus(c+37,"dout", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi_arbiter_inst ");
    tracep->declBus(c+665,"clk", false,-1, 0,0);
    tracep->declBus(c+666,"rstn", false,-1, 0,0);
    tracep->declBus(c+90,"i_rvalid", false,-1, 0,0);
    tracep->declBus(c+10,"i_rready", false,-1, 0,0);
    tracep->declBus(c+61,"i_raddr", false,-1, 31,0);
    tracep->declBus(c+673,"i_rdata", false,-1, 31,0);
    tracep->declBus(c+11,"i_rlast", false,-1, 0,0);
    tracep->declBus(c+701,"i_rsize", false,-1, 2,0);
    tracep->declBus(c+699,"i_rlen", false,-1, 7,0);
    tracep->declBus(c+91,"d_rvalid", false,-1, 0,0);
    tracep->declBus(c+12,"d_rready", false,-1, 0,0);
    tracep->declBus(c+62,"d_raddr", false,-1, 31,0);
    tracep->declBus(c+673,"d_rdata", false,-1, 31,0);
    tracep->declBus(c+13,"d_rlast", false,-1, 0,0);
    tracep->declBus(c+701,"d_rsize", false,-1, 2,0);
    tracep->declBus(c+699,"d_rlen", false,-1, 7,0);
    tracep->declBus(c+92,"d_wvalid", false,-1, 0,0);
    tracep->declBus(c+14,"d_wready", false,-1, 0,0);
    tracep->declBus(c+678,"d_waddr", false,-1, 31,0);
    tracep->declBus(c+684,"d_wdata", false,-1, 31,0);
    tracep->declBus(c+700,"d_wstrb", false,-1, 3,0);
    tracep->declBus(c+93,"d_wlast", false,-1, 0,0);
    tracep->declBus(c+701,"d_wsize", false,-1, 2,0);
    tracep->declBus(c+699,"d_wlen", false,-1, 7,0);
    tracep->declBus(c+15,"d_bvalid", false,-1, 0,0);
    tracep->declBus(c+94,"d_bready", false,-1, 0,0);
    tracep->declBus(c+667,"araddr", false,-1, 31,0);
    tracep->declBus(c+668,"arvalid", false,-1, 0,0);
    tracep->declBus(c+669,"arready", false,-1, 0,0);
    tracep->declBus(c+670,"arlen", false,-1, 7,0);
    tracep->declBus(c+671,"arsize", false,-1, 2,0);
    tracep->declBus(c+672,"arburst", false,-1, 1,0);
    tracep->declBus(c+673,"rdata", false,-1, 31,0);
    tracep->declBus(c+674,"rresp", false,-1, 1,0);
    tracep->declBus(c+675,"rvalid", false,-1, 0,0);
    tracep->declBus(c+676,"rready", false,-1, 0,0);
    tracep->declBus(c+677,"rlast", false,-1, 0,0);
    tracep->declBus(c+678,"awaddr", false,-1, 31,0);
    tracep->declBus(c+679,"awvalid", false,-1, 0,0);
    tracep->declBus(c+680,"awready", false,-1, 0,0);
    tracep->declBus(c+681,"awlen", false,-1, 7,0);
    tracep->declBus(c+682,"awsize", false,-1, 2,0);
    tracep->declBus(c+683,"awburst", false,-1, 1,0);
    tracep->declBus(c+684,"wdata", false,-1, 31,0);
    tracep->declBus(c+685,"wstrb", false,-1, 3,0);
    tracep->declBus(c+686,"wvalid", false,-1, 0,0);
    tracep->declBus(c+687,"wready", false,-1, 0,0);
    tracep->declBus(c+688,"wlast", false,-1, 0,0);
    tracep->declBus(c+689,"bresp", false,-1, 1,0);
    tracep->declBus(c+690,"bvalid", false,-1, 0,0);
    tracep->declBus(c+691,"bready", false,-1, 0,0);
    tracep->declBus(c+663,"r_crt", false,-1, 2,0);
    tracep->declBus(c+20,"r_nxt", false,-1, 2,0);
    tracep->declBus(c+664,"w_crt", false,-1, 1,0);
    tracep->declBus(c+21,"w_nxt", false,-1, 1,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VCPU___024root__trace_init_top(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_init_top\n"); );
    // Body
    VCPU___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VCPU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VCPU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VCPU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VCPU___024root__trace_register(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VCPU___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VCPU___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VCPU___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VCPU___024root__trace_full_sub_0(VCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VCPU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_full_top_0\n"); );
    // Init
    VCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCPU___024root*>(voidSelf);
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VCPU___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VCPU___024root__trace_full_sub_0(VCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<4>/*127:0*/ __Vtemp_h14324bb5__0;
    VlWide<4>/*127:0*/ __Vtemp_h38679573__0;
    VlWide<4>/*127:0*/ __Vtemp_h1c51f178__0;
    VlWide<4>/*127:0*/ __Vtemp_hab5a02e1__0;
    VlWide<4>/*127:0*/ __Vtemp_h9b694aeb__0;
    VlWide<4>/*127:0*/ __Vtemp_h4fc542b6__0;
    VlWide<4>/*127:0*/ __Vtemp_hab5a02e1__1;
    VlWide<4>/*127:0*/ __Vtemp_h495dcf24__0;
    VlWide<4>/*127:0*/ __Vtemp_h4fc542b6__1;
    VlWide<4>/*127:0*/ __Vtemp_h47c5a587__0;
    VlWide<4>/*127:0*/ __Vtemp_h5ce51087__0;
    VlWide<4>/*127:0*/ __Vtemp_h14324bb5__1;
    VlWide<4>/*127:0*/ __Vtemp_h1ef5202c__0;
    VlWide<4>/*127:0*/ __Vtemp_h1c51f178__1;
    VlWide<4>/*127:0*/ __Vtemp_h3ba5ccd0__0;
    VlWide<4>/*127:0*/ __Vtemp_he624d3e8__0;
    // Body
    bufp->fullIData(oldp+1,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__j),32);
    bufp->fullIData(oldp+2,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__j),32);
    bufp->fullIData(oldp+3,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__i),32);
    bufp->fullIData(oldp+4,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__i),32);
    bufp->fullIData(oldp+5,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__i),32);
    bufp->fullIData(oldp+6,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__i),32);
    bufp->fullIData(oldp+7,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__i),32);
    bufp->fullIData(oldp+8,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__i),32);
    bufp->fullIData(oldp+9,(vlSelf->CPU__DOT__Regfile_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+10,(vlSelf->CPU__DOT__i_rready));
    bufp->fullBit(oldp+11,(vlSelf->CPU__DOT__i_rlast));
    bufp->fullBit(oldp+12,(vlSelf->CPU__DOT__d_rready));
    bufp->fullBit(oldp+13,(vlSelf->CPU__DOT__d_rlast));
    bufp->fullBit(oldp+14,(vlSelf->CPU__DOT__d_wready));
    bufp->fullBit(oldp+15,(vlSelf->CPU__DOT__d_bvalid));
    bufp->fullBit(oldp+16,(vlSelf->CPU__DOT__DCache_inst__DOT__write_counter_en));
    bufp->fullCData(oldp+17,(((2U & (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__state))
                               ? ((1U & (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__state))
                                   ? ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__wrt_finish)
                                       ? ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__fence_valid_pipe)
                                           ? ((0U == (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__addr_cnt))
                                               ? 0U
                                               : 1U)
                                           : 0U) : 3U)
                                   : 3U) : ((1U & (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__state))
                                             ? ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__fence_valid_pipe)
                                                 ? 3U
                                                 : 
                                                (((IData)(vlSelf->CPU__DOT__d_rready) 
                                                  & (IData)(vlSelf->CPU__DOT__d_rlast))
                                                  ? 2U
                                                  : 1U))
                                             : (((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__rvalid_pipe) 
                                                 | (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__wvalid_pipe))
                                                 ? 
                                                ((0U 
                                                  != (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__hit))
                                                  ? 0U
                                                  : 1U)
                                                 : 
                                                ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__fence_valid_pipe)
                                                  ? 1U
                                                  : 0U))))),2);
    bufp->fullCData(oldp+18,(vlSelf->CPU__DOT__DCache_inst__DOT__wfsm_next_state),2);
    bufp->fullCData(oldp+19,(vlSelf->CPU__DOT__ICache_inst__DOT__next_state),2);
    bufp->fullCData(oldp+20,(vlSelf->CPU__DOT__axi_arbiter_inst__DOT__r_nxt),3);
    bufp->fullCData(oldp+21,(vlSelf->CPU__DOT__axi_arbiter_inst__DOT__w_nxt),2);
    bufp->fullIData(oldp+22,(vlSelf->CPU__DOT__PC_inst__DOT__pc_reg),32);
    bufp->fullIData(oldp+23,(vlSelf->CPU__DOT__pc_if2),32);
    bufp->fullIData(oldp+24,(vlSelf->CPU__DOT__pc_id),32);
    bufp->fullIData(oldp+25,(vlSelf->CPU__DOT__pc_ex),32);
    bufp->fullIData(oldp+26,(vlSelf->CPU__DOT__pc_ls),32);
    bufp->fullIData(oldp+27,(vlSelf->CPU__DOT__pc_wb),32);
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
    bufp->fullIData(oldp+28,((((IData)(vlSelf->CPU__DOT__pc_set) 
                               | (IData)(vlSelf->CPU__DOT__ICache_inst__DOT__flush_buf))
                               ? 0x13U : ((IData)(vlSelf->CPU__DOT__ICache_inst__DOT__data_from_mem)
                                           ? __Vtemp_h38679573__0[0U]
                                           : __Vtemp_h1c51f178__0[0U]))),32);
    bufp->fullIData(oldp+29,(vlSelf->CPU__DOT__inst_id),32);
    bufp->fullIData(oldp+30,(vlSelf->CPU__DOT__inst_ex),32);
    bufp->fullIData(oldp+31,(vlSelf->CPU__DOT__inst_ls),32);
    bufp->fullIData(oldp+32,(vlSelf->CPU__DOT__inst_wb),32);
    bufp->fullIData(oldp+33,(vlSelf->CPU__DOT__pc_target),32);
    bufp->fullIData(oldp+34,(((IData)(vlSelf->CPU__DOT__pc_set)
                               ? vlSelf->CPU__DOT__pc_target
                               : ((IData)(4U) + vlSelf->CPU__DOT__PC_inst__DOT__pc_reg))),32);
    bufp->fullIData(oldp+35,(vlSelf->CPU__DOT__imm_id),32);
    bufp->fullIData(oldp+36,(vlSelf->CPU__DOT__imm_ex),32);
    bufp->fullIData(oldp+37,(vlSelf->CPU__DOT__rf_wdata_wb),32);
    bufp->fullIData(oldp+38,(((0x300U == (vlSelf->CPU__DOT__inst_id 
                                          >> 0x14U))
                               ? vlSelf->CPU__DOT__CSR_inst__DOT__mstatus
                               : ((0x305U == (vlSelf->CPU__DOT__inst_id 
                                              >> 0x14U))
                                   ? vlSelf->CPU__DOT__CSR_inst__DOT__mtvec
                                   : ((0x342U == (vlSelf->CPU__DOT__inst_id 
                                                  >> 0x14U))
                                       ? vlSelf->CPU__DOT__CSR_inst__DOT__mcause
                                       : ((0x341U == 
                                           (vlSelf->CPU__DOT__inst_id 
                                            >> 0x14U))
                                           ? vlSelf->CPU__DOT__CSR_inst__DOT__mepc
                                           : 0U))))),32);
    bufp->fullIData(oldp+39,(vlSelf->CPU__DOT__csr_rdata_ex),32);
    bufp->fullIData(oldp+40,(((0x4000U & vlSelf->CPU__DOT__inst_ex)
                               ? ((0x2000U & vlSelf->CPU__DOT__inst_ex)
                                   ? ((0x1000U & vlSelf->CPU__DOT__inst_ex)
                                       ? (vlSelf->CPU__DOT__csr_rdata_ex 
                                          & (~ (0x1fU 
                                                & (vlSelf->CPU__DOT__inst_ex 
                                                   >> 0xfU))))
                                       : (vlSelf->CPU__DOT__csr_rdata_ex 
                                          | (0x1fU 
                                             & (vlSelf->CPU__DOT__inst_ex 
                                                >> 0xfU))))
                                   : ((0x1000U & vlSelf->CPU__DOT__inst_ex)
                                       ? (0x1fU & (vlSelf->CPU__DOT__inst_ex 
                                                   >> 0xfU))
                                       : 0U)) : ((0x2000U 
                                                  & vlSelf->CPU__DOT__inst_ex)
                                                  ? 
                                                 ((0x1000U 
                                                   & vlSelf->CPU__DOT__inst_ex)
                                                   ? 
                                                  (vlSelf->CPU__DOT__csr_rdata_ex 
                                                   & (~ vlSelf->CPU__DOT__alu_rf_data1))
                                                   : 
                                                  (vlSelf->CPU__DOT__csr_rdata_ex 
                                                   | vlSelf->CPU__DOT__alu_rf_data1))
                                                  : 
                                                 ((0x1000U 
                                                   & vlSelf->CPU__DOT__inst_ex)
                                                   ? vlSelf->CPU__DOT__alu_rf_data1
                                                   : 0U)))),32);
    bufp->fullIData(oldp+41,(vlSelf->CPU__DOT__csr_wdata_ls),32);
    bufp->fullIData(oldp+42,(vlSelf->CPU__DOT__csr_wdata_wb),32);
    bufp->fullIData(oldp+43,((((IData)(vlSelf->CPU__DOT__rf_we_wb) 
                               & ((0x1fU & (vlSelf->CPU__DOT__inst_id 
                                            >> 0xfU)) 
                                  == (0x1fU & (vlSelf->CPU__DOT__inst_wb 
                                               >> 7U))))
                               ? vlSelf->CPU__DOT__rf_wdata_wb
                               : vlSelf->CPU__DOT__Regfile_inst__DOT__rf
                              [(0x1fU & (vlSelf->CPU__DOT__inst_id 
                                         >> 0xfU))])),32);
    bufp->fullIData(oldp+44,(vlSelf->CPU__DOT__rf_rdata1_ex),32);
    bufp->fullIData(oldp+45,((((IData)(vlSelf->CPU__DOT__rf_we_wb) 
                               & ((0x1fU & (vlSelf->CPU__DOT__inst_id 
                                            >> 0x14U)) 
                                  == (0x1fU & (vlSelf->CPU__DOT__inst_wb 
                                               >> 7U))))
                               ? vlSelf->CPU__DOT__rf_wdata_wb
                               : vlSelf->CPU__DOT__Regfile_inst__DOT__rf
                              [(0x1fU & (vlSelf->CPU__DOT__inst_id 
                                         >> 0x14U))])),32);
    bufp->fullIData(oldp+46,(vlSelf->CPU__DOT__rf_rdata2_ex),32);
    bufp->fullIData(oldp+47,(vlSelf->CPU__DOT__forward1_data),32);
    bufp->fullIData(oldp+48,(vlSelf->CPU__DOT__forward2_data),32);
    bufp->fullIData(oldp+49,(vlSelf->CPU__DOT__alu_rf_data1),32);
    bufp->fullIData(oldp+50,(vlSelf->CPU__DOT__alu_rf_data2),32);
    bufp->fullIData(oldp+51,(vlSelf->CPU__DOT__alu_rs1),32);
    bufp->fullIData(oldp+52,(vlSelf->CPU__DOT__alu_rs2),32);
    bufp->fullIData(oldp+53,(vlSelf->CPU__DOT__alu_result_ex),32);
    bufp->fullIData(oldp+54,(vlSelf->CPU__DOT__alu_result_ls),32);
    bufp->fullIData(oldp+55,(vlSelf->CPU__DOT__alu_result_wb),32);
    bufp->fullIData(oldp+56,(vlSelf->CPU__DOT__jump_target),32);
    bufp->fullIData(oldp+57,(((0x10U & (IData)(vlSelf->CPU__DOT__mem_access_ex))
                               ? ((0U == (7U & (IData)(vlSelf->CPU__DOT__mem_access_ex)))
                                   ? (vlSelf->CPU__DOT__alu_rf_data2 
                                      << (0x18U & (vlSelf->CPU__DOT__alu_result_ex 
                                                   << 3U)))
                                   : ((1U == (7U & (IData)(vlSelf->CPU__DOT__mem_access_ex)))
                                       ? (vlSelf->CPU__DOT__alu_rf_data2 
                                          << (0x18U 
                                              & (vlSelf->CPU__DOT__alu_result_ex 
                                                 << 3U)))
                                       : ((2U == (7U 
                                                  & (IData)(vlSelf->CPU__DOT__mem_access_ex)))
                                           ? vlSelf->CPU__DOT__alu_rf_data2
                                           : 0U))) : 0U)),32);
    bufp->fullIData(oldp+58,(((4U & (IData)(vlSelf->CPU__DOT__mem_access_ls))
                               ? ((2U & (IData)(vlSelf->CPU__DOT__mem_access_ls))
                                   ? 0U : ((1U & (IData)(vlSelf->CPU__DOT__mem_access_ls))
                                            ? (0xffffU 
                                               & vlSelf->CPU__DOT__DCache_Read_Ctrl_inst__DOT__load_data)
                                            : (0xffU 
                                               & vlSelf->CPU__DOT__DCache_Read_Ctrl_inst__DOT__load_data)))
                               : ((2U & (IData)(vlSelf->CPU__DOT__mem_access_ls))
                                   ? ((1U & (IData)(vlSelf->CPU__DOT__mem_access_ls))
                                       ? 0U : vlSelf->CPU__DOT__DCache_Read_Ctrl_inst__DOT__load_data)
                                   : ((1U & (IData)(vlSelf->CPU__DOT__mem_access_ls))
                                       ? (((- (IData)(
                                                      (1U 
                                                       & (vlSelf->CPU__DOT__DCache_Read_Ctrl_inst__DOT__load_data 
                                                          >> 0xfU)))) 
                                           << 0x10U) 
                                          | (0xffffU 
                                             & vlSelf->CPU__DOT__DCache_Read_Ctrl_inst__DOT__load_data))
                                       : (((- (IData)(
                                                      (1U 
                                                       & (vlSelf->CPU__DOT__DCache_Read_Ctrl_inst__DOT__load_data 
                                                          >> 7U)))) 
                                           << 8U) | 
                                          (0xffU & vlSelf->CPU__DOT__DCache_Read_Ctrl_inst__DOT__load_data)))))),32);
    bufp->fullIData(oldp+59,(vlSelf->CPU__DOT__mem_rdata_wb),32);
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
    VL_SHIFTR_WWI(128,128,7, __Vtemp_h4fc542b6__0, vlSelf->CPU__DOT__DCache_inst__DOT__ret_buf, 
                  (0x60U & (vlSelf->CPU__DOT__DCache_inst__DOT__addr_pipe 
                            << 3U)));
    bufp->fullIData(oldp+60,(((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__data_from_mem)
                               ? __Vtemp_h9b694aeb__0[0U]
                               : __Vtemp_h4fc542b6__0[0U])),32);
    bufp->fullIData(oldp+61,((0xfffffff0U & vlSelf->CPU__DOT__ICache_inst__DOT__addr_pipe)),32);
    bufp->fullIData(oldp+62,((0xfffffff0U & vlSelf->CPU__DOT__DCache_inst__DOT__addr_pipe)),32);
    bufp->fullIData(oldp+63,(vlSelf->CPU__DOT__CSR_inst__DOT__mepc),32);
    bufp->fullIData(oldp+64,(vlSelf->CPU__DOT__CSR_inst__DOT__mtvec),32);
    bufp->fullIData(oldp+65,(vlSelf->CPU__DOT__mcause_global),32);
    bufp->fullCData(oldp+66,(vlSelf->CPU__DOT__alu_op_id),5);
    bufp->fullCData(oldp+67,(vlSelf->CPU__DOT__alu_op_ex),5);
    bufp->fullCData(oldp+68,(vlSelf->CPU__DOT__mem_access_id),5);
    bufp->fullCData(oldp+69,(vlSelf->CPU__DOT__mem_access_ex),5);
    bufp->fullCData(oldp+70,(vlSelf->CPU__DOT__mem_access_ls),5);
    bufp->fullCData(oldp+71,(vlSelf->CPU__DOT__br_type_id),5);
    bufp->fullCData(oldp+72,(vlSelf->CPU__DOT__br_type_ex),5);
    bufp->fullCData(oldp+73,((((IData)((0xfU == (0x707fU 
                                                 & vlSelf->CPU__DOT__inst_id))) 
                               << 4U) | (((IData)((0x100fU 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->CPU__DOT__inst_id))) 
                                          << 3U) | 
                                         ((((IData)(vlSelf->CPU__DOT__Decode_inst__DOT____VdfgTmp_haf50822f__0) 
                                            & (0x302U 
                                               == (vlSelf->CPU__DOT__inst_id 
                                                   >> 0x14U))) 
                                           << 2U) | 
                                          ((((IData)(vlSelf->CPU__DOT__Decode_inst__DOT____VdfgTmp_haf50822f__0) 
                                             & (0U 
                                                == 
                                                (vlSelf->CPU__DOT__inst_id 
                                                 >> 0x14U))) 
                                            << 1U) 
                                           | ((0x73U 
                                               == (0x7fU 
                                                   & vlSelf->CPU__DOT__inst_id)) 
                                              & (0U 
                                                 != 
                                                 (7U 
                                                  & (vlSelf->CPU__DOT__inst_id 
                                                     >> 0xcU))))))))),5);
    bufp->fullCData(oldp+74,(vlSelf->CPU__DOT__priv_vec_ex),5);
    bufp->fullCData(oldp+75,(vlSelf->CPU__DOT__priv_vec_ls),5);
    bufp->fullCData(oldp+76,(vlSelf->CPU__DOT__priv_vec_wb),5);
    bufp->fullCData(oldp+77,(vlSelf->CPU__DOT__wstrb_ex),4);
    bufp->fullCData(oldp+78,(vlSelf->CPU__DOT__alu_rs1_sel_id),2);
    bufp->fullCData(oldp+79,(vlSelf->CPU__DOT__alu_rs1_sel_ex),2);
    bufp->fullCData(oldp+80,(vlSelf->CPU__DOT__alu_rs2_sel_id),2);
    bufp->fullCData(oldp+81,(vlSelf->CPU__DOT__alu_rs2_sel_ex),2);
    bufp->fullBit(oldp+82,(vlSelf->CPU__DOT__wb_rf_sel_id));
    bufp->fullBit(oldp+83,(vlSelf->CPU__DOT__wb_rf_sel_ex));
    bufp->fullBit(oldp+84,(vlSelf->CPU__DOT__wb_rf_sel_ls));
    bufp->fullBit(oldp+85,(vlSelf->CPU__DOT__wb_rf_sel_wb));
    bufp->fullBit(oldp+86,(vlSelf->CPU__DOT__rf_we_id));
    bufp->fullBit(oldp+87,(vlSelf->CPU__DOT__rf_we_ex));
    bufp->fullBit(oldp+88,(vlSelf->CPU__DOT__rf_we_ls));
    bufp->fullBit(oldp+89,(vlSelf->CPU__DOT__rf_we_wb));
    bufp->fullBit(oldp+90,(vlSelf->CPU__DOT__i_rvalid));
    bufp->fullBit(oldp+91,(vlSelf->CPU__DOT__d_rvalid));
    bufp->fullBit(oldp+92,(vlSelf->CPU__DOT__d_wvalid));
    bufp->fullBit(oldp+93,(vlSelf->CPU__DOT__d_wlast));
    bufp->fullBit(oldp+94,(vlSelf->CPU__DOT__d_bready));
    bufp->fullBit(oldp+95,(vlSelf->CPU__DOT__forward1_en));
    bufp->fullBit(oldp+96,(vlSelf->CPU__DOT__forward2_en));
    bufp->fullBit(oldp+97,(vlSelf->CPU__DOT__jump));
    bufp->fullBit(oldp+98,(vlSelf->CPU__DOT__pc_set));
    bufp->fullBit(oldp+99,(vlSelf->CPU__DOT__pc_stall));
    bufp->fullBit(oldp+100,(vlSelf->CPU__DOT__IF2_ID_stall));
    bufp->fullBit(oldp+101,(vlSelf->CPU__DOT__IF2_ID_flush));
    bufp->fullBit(oldp+102,(vlSelf->CPU__DOT__dcache_miss));
    bufp->fullBit(oldp+103,(vlSelf->CPU__DOT__ID_EX_flush));
    bufp->fullBit(oldp+104,((0U != vlSelf->CPU__DOT__mcause_global)));
    bufp->fullBit(oldp+105,(vlSelf->CPU__DOT__icache_miss));
    bufp->fullBit(oldp+106,(vlSelf->CPU__DOT__commit_if2));
    bufp->fullBit(oldp+107,(vlSelf->CPU__DOT__commit_id));
    bufp->fullBit(oldp+108,(vlSelf->CPU__DOT__commit_ex));
    bufp->fullBit(oldp+109,(vlSelf->CPU__DOT__commit_ls));
    bufp->fullQData(oldp+110,(vlSelf->CPU__DOT__ALU_inst__DOT__result_64),64);
    bufp->fullIData(oldp+112,(vlSelf->CPU__DOT__ALU_inst__DOT__result_div),32);
    bufp->fullIData(oldp+113,(vlSelf->CPU__DOT__ALU_inst__DOT__result_rem),32);
    bufp->fullCData(oldp+114,((((IData)(vlSelf->CPU__DOT__ALU_inst__DOT____VdfgTmp_h175d6d08__0) 
                                << 1U) | (vlSelf->CPU__DOT__alu_rs1 
                                          >> 0x1fU))),2);
    bufp->fullIData(oldp+115,(vlSelf->CPU__DOT__ALU_inst__DOT__sr1_abs),32);
    bufp->fullIData(oldp+116,(vlSelf->CPU__DOT__ALU_inst__DOT__sr2_abs),32);
    bufp->fullBit(oldp+117,((IData)((0x10U == (0x18U 
                                               & (IData)(vlSelf->CPU__DOT__br_type_ex))))));
    bufp->fullBit(oldp+118,(((IData)(vlSelf->CPU__DOT__Branch_inst__DOT____VdfgTmp_h8a7e5af4__0) 
                             & ((IData)(vlSelf->CPU__DOT__br_type_ex) 
                                >> 2U))));
    bufp->fullBit(oldp+119,(vlSelf->CPU__DOT__Branch_inst__DOT__is_jalr));
    bufp->fullSData(oldp+120,((vlSelf->CPU__DOT__inst_id 
                               >> 0x14U)),12);
    bufp->fullSData(oldp+121,((vlSelf->CPU__DOT__inst_wb 
                               >> 0x14U)),12);
    bufp->fullBit(oldp+122,((1U & (IData)(vlSelf->CPU__DOT__priv_vec_wb))));
    bufp->fullIData(oldp+123,(vlSelf->CPU__DOT__CSR_inst__DOT__mstatus),32);
    bufp->fullIData(oldp+124,(vlSelf->CPU__DOT__CSR_inst__DOT__mcause),32);
    bufp->fullCData(oldp+125,((7U & (IData)(vlSelf->CPU__DOT__mem_access_ls))),3);
    bufp->fullIData(oldp+126,(vlSelf->CPU__DOT__DCache_Read_Ctrl_inst__DOT__load_data),32);
    bufp->fullBit(oldp+127,((1U & ((IData)(vlSelf->CPU__DOT__mem_access_ex) 
                                   >> 4U))));
    bufp->fullCData(oldp+128,((7U & (IData)(vlSelf->CPU__DOT__mem_access_ex))),3);
    bufp->fullBit(oldp+129,((1U & ((IData)(vlSelf->CPU__DOT__mem_access_ex) 
                                   >> 3U))));
    bufp->fullBit(oldp+130,((1U & ((IData)(vlSelf->CPU__DOT__priv_vec_ex) 
                                   >> 3U))));
    bufp->fullBit(oldp+131,((1U & ((IData)(vlSelf->CPU__DOT__priv_vec_ex) 
                                   >> 4U))));
    bufp->fullBit(oldp+132,(vlSelf->CPU__DOT__DCache_inst__DOT__req_buf_we));
    bufp->fullIData(oldp+133,(vlSelf->CPU__DOT__DCache_inst__DOT__wdata_pipe),32);
    bufp->fullIData(oldp+134,(vlSelf->CPU__DOT__DCache_inst__DOT__addr_pipe),32);
    bufp->fullCData(oldp+135,(vlSelf->CPU__DOT__DCache_inst__DOT__wstrb_pipe),4);
    bufp->fullCData(oldp+136,(vlSelf->CPU__DOT__DCache_inst__DOT__rsize_pipe),3);
    bufp->fullBit(oldp+137,(vlSelf->CPU__DOT__DCache_inst__DOT__fence_valid_pipe));
    bufp->fullBit(oldp+138,(vlSelf->CPU__DOT__DCache_inst__DOT__valid_flush));
    bufp->fullBit(oldp+139,(vlSelf->CPU__DOT__DCache_inst__DOT__we_pipe));
    bufp->fullBit(oldp+140,(vlSelf->CPU__DOT__DCache_inst__DOT__rvalid_pipe));
    bufp->fullBit(oldp+141,(vlSelf->CPU__DOT__DCache_inst__DOT__wvalid_pipe));
    bufp->fullWData(oldp+142,(vlSelf->CPU__DOT__DCache_inst__DOT__ret_buf),128);
    bufp->fullCData(oldp+146,(vlSelf->CPU__DOT__DCache_inst__DOT__r_index),4);
    bufp->fullCData(oldp+147,(vlSelf->CPU__DOT__DCache_inst__DOT__w_index),4);
    bufp->fullSData(oldp+148,(vlSelf->CPU__DOT__DCache_inst__DOT__mem_we[0]),16);
    bufp->fullSData(oldp+149,(vlSelf->CPU__DOT__DCache_inst__DOT__mem_we[1]),16);
    bufp->fullWData(oldp+150,(vlSelf->CPU__DOT__DCache_inst__DOT__mem_rdata[0]),128);
    bufp->fullWData(oldp+154,(vlSelf->CPU__DOT__DCache_inst__DOT__mem_rdata[1]),128);
    bufp->fullWData(oldp+158,(vlSelf->CPU__DOT__DCache_inst__DOT__mem_wdata),128);
    bufp->fullCData(oldp+162,(vlSelf->CPU__DOT__DCache_inst__DOT__tagv_we),2);
    bufp->fullIData(oldp+163,((vlSelf->CPU__DOT__DCache_inst__DOT__addr_pipe 
                               >> 8U)),24);
    bufp->fullIData(oldp+164,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_rdata[0]),24);
    bufp->fullIData(oldp+165,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_rdata[1]),24);
    bufp->fullSData(oldp+166,(vlSelf->CPU__DOT__DCache_inst__DOT__valid_bit_mem[0]),16);
    bufp->fullSData(oldp+167,(vlSelf->CPU__DOT__DCache_inst__DOT__valid_bit_mem[1]),16);
    bufp->fullBit(oldp+168,(vlSelf->CPU__DOT__DCache_inst__DOT__valid_bit_rdata[0]));
    bufp->fullBit(oldp+169,(vlSelf->CPU__DOT__DCache_inst__DOT__valid_bit_rdata[1]));
    bufp->fullCData(oldp+170,(vlSelf->CPU__DOT__DCache_inst__DOT__hit),2);
    bufp->fullBit(oldp+171,((0U != (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__hit))));
    bufp->fullBit(oldp+172,((1U & (~ (IData)(vlSelf->CPU__DOT__DCache_inst__DOT____VdfgTmp_ha6d4d8ec__0)))));
    bufp->fullWData(oldp+173,(vlSelf->CPU__DOT__DCache_inst__DOT__wdata_pipe_512),128);
    bufp->fullWData(oldp+177,(vlSelf->CPU__DOT__DCache_inst__DOT__wstrb_pipe_512),128);
    bufp->fullBit(oldp+181,(vlSelf->CPU__DOT__DCache_inst__DOT__wdata_from_pipe));
    bufp->fullBit(oldp+182,(vlSelf->CPU__DOT__DCache_inst__DOT__data_from_mem));
    bufp->fullBit(oldp+183,(vlSelf->CPU__DOT__DCache_inst__DOT__lru_sel));
    bufp->fullBit(oldp+184,(vlSelf->CPU__DOT__DCache_inst__DOT__lru_hit_update));
    bufp->fullBit(oldp+185,(vlSelf->CPU__DOT__DCache_inst__DOT__lru_refill_update));
    bufp->fullSData(oldp+186,(vlSelf->CPU__DOT__DCache_inst__DOT__lru),16);
    bufp->fullBit(oldp+187,((1U & (vlSelf->CPU__DOT__DCache_inst__DOT__dirty_table
                                   [(1U & ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__fence_valid_pipe)
                                            ? ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__addr_cnt) 
                                               >> 4U)
                                            : (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__lru_sel)))] 
                                   >> (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__w_index)))));
    bufp->fullBit(oldp+188,(vlSelf->CPU__DOT__DCache_inst__DOT__dirty_refill));
    bufp->fullBit(oldp+189,(vlSelf->CPU__DOT__DCache_inst__DOT__dirty_we));
    bufp->fullBit(oldp+190,(vlSelf->CPU__DOT__DCache_inst__DOT__dirty_clean_all));
    bufp->fullSData(oldp+191,(vlSelf->CPU__DOT__DCache_inst__DOT__dirty_table[0]),16);
    bufp->fullSData(oldp+192,(vlSelf->CPU__DOT__DCache_inst__DOT__dirty_table[1]),16);
    bufp->fullWData(oldp+193,(vlSelf->CPU__DOT__DCache_inst__DOT__wbuf),128);
    bufp->fullBit(oldp+197,(vlSelf->CPU__DOT__DCache_inst__DOT__wbuf_we));
    bufp->fullIData(oldp+198,(vlSelf->CPU__DOT__DCache_inst__DOT__maddr_buf),32);
    bufp->fullBit(oldp+199,(vlSelf->CPU__DOT__DCache_inst__DOT__mbuf_we));
    bufp->fullBit(oldp+200,(vlSelf->CPU__DOT__DCache_inst__DOT__wfsm_en));
    bufp->fullBit(oldp+201,(vlSelf->CPU__DOT__DCache_inst__DOT__wfsm_reset));
    bufp->fullBit(oldp+202,(vlSelf->CPU__DOT__DCache_inst__DOT__wrt_finish));
    bufp->fullCData(oldp+203,(vlSelf->CPU__DOT__DCache_inst__DOT__write_counter),3);
    bufp->fullBit(oldp+204,(vlSelf->CPU__DOT__DCache_inst__DOT__write_counter_reset));
    bufp->fullCData(oldp+205,(vlSelf->CPU__DOT__DCache_inst__DOT__addr_cnt),5);
    bufp->fullBit(oldp+206,(vlSelf->CPU__DOT__DCache_inst__DOT__addr_cnt_add));
    bufp->fullBit(oldp+207,(vlSelf->CPU__DOT__DCache_inst__DOT__read_from_cnt));
    __Vtemp_hab5a02e1__1[0U] = vlSelf->CPU__DOT__DCache_inst__DOT__mem_rdata
        [(1U & (~ (IData)(vlSelf->CPU__DOT__DCache_inst__DOT____VdfgTmp_ha6d4d8ec__0)))][0U];
    __Vtemp_hab5a02e1__1[1U] = vlSelf->CPU__DOT__DCache_inst__DOT__mem_rdata
        [(1U & (~ (IData)(vlSelf->CPU__DOT__DCache_inst__DOT____VdfgTmp_ha6d4d8ec__0)))][1U];
    __Vtemp_hab5a02e1__1[2U] = vlSelf->CPU__DOT__DCache_inst__DOT__mem_rdata
        [(1U & (~ (IData)(vlSelf->CPU__DOT__DCache_inst__DOT____VdfgTmp_ha6d4d8ec__0)))][2U];
    __Vtemp_hab5a02e1__1[3U] = vlSelf->CPU__DOT__DCache_inst__DOT__mem_rdata
        [(1U & (~ (IData)(vlSelf->CPU__DOT__DCache_inst__DOT____VdfgTmp_ha6d4d8ec__0)))][3U];
    VL_SHIFTR_WWI(128,128,7, __Vtemp_h495dcf24__0, __Vtemp_hab5a02e1__1, 
                  (0x60U & (vlSelf->CPU__DOT__DCache_inst__DOT__addr_pipe 
                            << 3U)));
    bufp->fullWData(oldp+208,(__Vtemp_h495dcf24__0),128);
    VL_SHIFTR_WWI(128,128,7, __Vtemp_h4fc542b6__1, vlSelf->CPU__DOT__DCache_inst__DOT__ret_buf, 
                  (0x60U & (vlSelf->CPU__DOT__DCache_inst__DOT__addr_pipe 
                            << 3U)));
    bufp->fullWData(oldp+212,(__Vtemp_h4fc542b6__1),128);
    bufp->fullCData(oldp+216,(vlSelf->CPU__DOT__DCache_inst__DOT__state),2);
    bufp->fullCData(oldp+217,(vlSelf->CPU__DOT__DCache_inst__DOT__wfsm_state),2);
    bufp->fullSData(oldp+218,(vlSelf->CPU__DOT__DCache_inst__DOT__mem_we
                              [0U]),16);
    __Vtemp_h47c5a587__0[0U] = vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram
        [vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__addr_r][0U];
    __Vtemp_h47c5a587__0[1U] = vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram
        [vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__addr_r][1U];
    __Vtemp_h47c5a587__0[2U] = vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram
        [vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__addr_r][2U];
    __Vtemp_h47c5a587__0[3U] = vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram
        [vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__addr_r][3U];
    bufp->fullWData(oldp+219,(__Vtemp_h47c5a587__0),128);
    bufp->fullCData(oldp+223,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__addr_r),4);
    bufp->fullWData(oldp+224,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[0]),128);
    bufp->fullWData(oldp+228,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[1]),128);
    bufp->fullWData(oldp+232,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[2]),128);
    bufp->fullWData(oldp+236,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[3]),128);
    bufp->fullWData(oldp+240,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[4]),128);
    bufp->fullWData(oldp+244,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[5]),128);
    bufp->fullWData(oldp+248,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[6]),128);
    bufp->fullWData(oldp+252,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[7]),128);
    bufp->fullWData(oldp+256,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[8]),128);
    bufp->fullWData(oldp+260,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[9]),128);
    bufp->fullWData(oldp+264,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[10]),128);
    bufp->fullWData(oldp+268,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[11]),128);
    bufp->fullWData(oldp+272,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[12]),128);
    bufp->fullWData(oldp+276,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[13]),128);
    bufp->fullWData(oldp+280,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[14]),128);
    bufp->fullWData(oldp+284,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem0__DOT__ram[15]),128);
    bufp->fullSData(oldp+288,(vlSelf->CPU__DOT__DCache_inst__DOT__mem_we
                              [1U]),16);
    __Vtemp_h5ce51087__0[0U] = vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram
        [vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__addr_r][0U];
    __Vtemp_h5ce51087__0[1U] = vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram
        [vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__addr_r][1U];
    __Vtemp_h5ce51087__0[2U] = vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram
        [vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__addr_r][2U];
    __Vtemp_h5ce51087__0[3U] = vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram
        [vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__addr_r][3U];
    bufp->fullWData(oldp+289,(__Vtemp_h5ce51087__0),128);
    bufp->fullCData(oldp+293,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__addr_r),4);
    bufp->fullWData(oldp+294,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[0]),128);
    bufp->fullWData(oldp+298,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[1]),128);
    bufp->fullWData(oldp+302,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[2]),128);
    bufp->fullWData(oldp+306,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[3]),128);
    bufp->fullWData(oldp+310,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[4]),128);
    bufp->fullWData(oldp+314,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[5]),128);
    bufp->fullWData(oldp+318,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[6]),128);
    bufp->fullWData(oldp+322,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[7]),128);
    bufp->fullWData(oldp+326,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[8]),128);
    bufp->fullWData(oldp+330,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[9]),128);
    bufp->fullWData(oldp+334,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[10]),128);
    bufp->fullWData(oldp+338,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[11]),128);
    bufp->fullWData(oldp+342,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[12]),128);
    bufp->fullWData(oldp+346,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[13]),128);
    bufp->fullWData(oldp+350,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[14]),128);
    bufp->fullWData(oldp+354,(vlSelf->CPU__DOT__DCache_inst__DOT__data_mem1__DOT__ram[15]),128);
    bufp->fullBit(oldp+358,((1U & (IData)(vlSelf->CPU__DOT__DCache_inst__DOT__tagv_we))));
    bufp->fullIData(oldp+359,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram
                              [vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__addr_r]),24);
    bufp->fullCData(oldp+360,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__addr_r),4);
    bufp->fullIData(oldp+361,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[0]),24);
    bufp->fullIData(oldp+362,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[1]),24);
    bufp->fullIData(oldp+363,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[2]),24);
    bufp->fullIData(oldp+364,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[3]),24);
    bufp->fullIData(oldp+365,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[4]),24);
    bufp->fullIData(oldp+366,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[5]),24);
    bufp->fullIData(oldp+367,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[6]),24);
    bufp->fullIData(oldp+368,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[7]),24);
    bufp->fullIData(oldp+369,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[8]),24);
    bufp->fullIData(oldp+370,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[9]),24);
    bufp->fullIData(oldp+371,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[10]),24);
    bufp->fullIData(oldp+372,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[11]),24);
    bufp->fullIData(oldp+373,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[12]),24);
    bufp->fullIData(oldp+374,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[13]),24);
    bufp->fullIData(oldp+375,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[14]),24);
    bufp->fullIData(oldp+376,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem0__DOT__ram[15]),24);
    bufp->fullBit(oldp+377,((1U & ((IData)(vlSelf->CPU__DOT__DCache_inst__DOT__tagv_we) 
                                   >> 1U))));
    bufp->fullIData(oldp+378,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram
                              [vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__addr_r]),24);
    bufp->fullCData(oldp+379,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__addr_r),4);
    bufp->fullIData(oldp+380,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[0]),24);
    bufp->fullIData(oldp+381,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[1]),24);
    bufp->fullIData(oldp+382,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[2]),24);
    bufp->fullIData(oldp+383,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[3]),24);
    bufp->fullIData(oldp+384,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[4]),24);
    bufp->fullIData(oldp+385,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[5]),24);
    bufp->fullIData(oldp+386,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[6]),24);
    bufp->fullIData(oldp+387,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[7]),24);
    bufp->fullIData(oldp+388,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[8]),24);
    bufp->fullIData(oldp+389,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[9]),24);
    bufp->fullIData(oldp+390,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[10]),24);
    bufp->fullIData(oldp+391,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[11]),24);
    bufp->fullIData(oldp+392,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[12]),24);
    bufp->fullIData(oldp+393,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[13]),24);
    bufp->fullIData(oldp+394,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[14]),24);
    bufp->fullIData(oldp+395,(vlSelf->CPU__DOT__DCache_inst__DOT__tag_mem1__DOT__ram[15]),24);
    bufp->fullCData(oldp+396,((0x1fU & (vlSelf->CPU__DOT__inst_id 
                                        >> 7U))),5);
    bufp->fullCData(oldp+397,((7U & (vlSelf->CPU__DOT__inst_id 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+398,((0x1fU & (vlSelf->CPU__DOT__inst_ls 
                                        >> 7U))),5);
    bufp->fullCData(oldp+399,((0x1fU & (vlSelf->CPU__DOT__inst_wb 
                                        >> 7U))),5);
    bufp->fullCData(oldp+400,((0x1fU & (vlSelf->CPU__DOT__inst_ex 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+401,((0x1fU & (vlSelf->CPU__DOT__inst_ex 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+402,((0x1fU & (vlSelf->CPU__DOT__inst_ex 
                                        >> 7U))),5);
    bufp->fullCData(oldp+403,((0x1fU & (vlSelf->CPU__DOT__inst_id 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+404,((0x1fU & (vlSelf->CPU__DOT__inst_id 
                                        >> 0x14U))),5);
    bufp->fullBit(oldp+405,(vlSelf->CPU__DOT__Hazard_inst__DOT__stall_by_load_use));
    bufp->fullBit(oldp+406,(vlSelf->CPU__DOT__Hazard_inst__DOT__flush_by_load_use));
    bufp->fullBit(oldp+407,((0U != (IData)(vlSelf->CPU__DOT__priv_vec_ex))));
    bufp->fullIData(oldp+408,(vlSelf->CPU__DOT__ICache_inst__DOT__addr_pipe),32);
    bufp->fullBit(oldp+409,(vlSelf->CPU__DOT__ICache_inst__DOT__rvalid_pipe));
    bufp->fullBit(oldp+410,(vlSelf->CPU__DOT__ICache_inst__DOT__req_buf_we));
    bufp->fullWData(oldp+411,(vlSelf->CPU__DOT__ICache_inst__DOT__ret_buf),128);
    bufp->fullCData(oldp+415,(vlSelf->CPU__DOT__ICache_inst__DOT__r_index),4);
    bufp->fullCData(oldp+416,((0xfU & (vlSelf->CPU__DOT__ICache_inst__DOT__addr_pipe 
                                       >> 4U))),4);
    bufp->fullCData(oldp+417,(vlSelf->CPU__DOT__ICache_inst__DOT__mem_we),2);
    bufp->fullWData(oldp+418,(vlSelf->CPU__DOT__ICache_inst__DOT__mem_rdata[0]),128);
    bufp->fullWData(oldp+422,(vlSelf->CPU__DOT__ICache_inst__DOT__mem_rdata[1]),128);
    bufp->fullCData(oldp+426,(vlSelf->CPU__DOT__ICache_inst__DOT__tagv_we),2);
    bufp->fullIData(oldp+427,((vlSelf->CPU__DOT__ICache_inst__DOT__addr_pipe 
                               >> 8U)),24);
    bufp->fullIData(oldp+428,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_rdata[0]),25);
    bufp->fullIData(oldp+429,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_rdata[1]),25);
    bufp->fullSData(oldp+430,(vlSelf->CPU__DOT__ICache_inst__DOT__valid_bit_mem[0]),16);
    bufp->fullSData(oldp+431,(vlSelf->CPU__DOT__ICache_inst__DOT__valid_bit_mem[1]),16);
    bufp->fullCData(oldp+432,(vlSelf->CPU__DOT__ICache_inst__DOT__hit),2);
    bufp->fullBit(oldp+433,((1U & (~ (IData)(vlSelf->CPU__DOT__ICache_inst__DOT____VdfgTmp_h32c1d4e2__0)))));
    bufp->fullBit(oldp+434,((0U != (IData)(vlSelf->CPU__DOT__ICache_inst__DOT__hit))));
    bufp->fullBit(oldp+435,((1U & (~ ((IData)(vlSelf->CPU__DOT__ICache_inst__DOT__lru) 
                                      >> (0xfU & (vlSelf->CPU__DOT__ICache_inst__DOT__addr_pipe 
                                                  >> 4U)))))));
    bufp->fullBit(oldp+436,(vlSelf->CPU__DOT__ICache_inst__DOT__lru_hit_update));
    bufp->fullBit(oldp+437,(vlSelf->CPU__DOT__ICache_inst__DOT__lru_refill_update));
    bufp->fullBit(oldp+438,(vlSelf->CPU__DOT__ICache_inst__DOT__data_from_mem));
    bufp->fullBit(oldp+439,(vlSelf->CPU__DOT__ICache_inst__DOT__flush_buf));
    __Vtemp_h14324bb5__1[0U] = vlSelf->CPU__DOT__ICache_inst__DOT__mem_rdata
        [(1U & (~ (IData)(vlSelf->CPU__DOT__ICache_inst__DOT____VdfgTmp_h32c1d4e2__0)))][0U];
    __Vtemp_h14324bb5__1[1U] = vlSelf->CPU__DOT__ICache_inst__DOT__mem_rdata
        [(1U & (~ (IData)(vlSelf->CPU__DOT__ICache_inst__DOT____VdfgTmp_h32c1d4e2__0)))][1U];
    __Vtemp_h14324bb5__1[2U] = vlSelf->CPU__DOT__ICache_inst__DOT__mem_rdata
        [(1U & (~ (IData)(vlSelf->CPU__DOT__ICache_inst__DOT____VdfgTmp_h32c1d4e2__0)))][2U];
    __Vtemp_h14324bb5__1[3U] = vlSelf->CPU__DOT__ICache_inst__DOT__mem_rdata
        [(1U & (~ (IData)(vlSelf->CPU__DOT__ICache_inst__DOT____VdfgTmp_h32c1d4e2__0)))][3U];
    VL_SHIFTR_WWI(128,128,7, __Vtemp_h1ef5202c__0, __Vtemp_h14324bb5__1, 
                  (0x60U & (vlSelf->CPU__DOT__ICache_inst__DOT__addr_pipe 
                            << 3U)));
    bufp->fullWData(oldp+440,(__Vtemp_h1ef5202c__0),128);
    VL_SHIFTR_WWI(128,128,7, __Vtemp_h1c51f178__1, vlSelf->CPU__DOT__ICache_inst__DOT__ret_buf, 
                  (0x60U & (vlSelf->CPU__DOT__ICache_inst__DOT__addr_pipe 
                            << 3U)));
    bufp->fullWData(oldp+444,(__Vtemp_h1c51f178__1),128);
    bufp->fullSData(oldp+448,(vlSelf->CPU__DOT__ICache_inst__DOT__lru),16);
    bufp->fullCData(oldp+449,(vlSelf->CPU__DOT__ICache_inst__DOT__state),2);
    bufp->fullBit(oldp+450,((1U & (IData)(vlSelf->CPU__DOT__ICache_inst__DOT__mem_we))));
    __Vtemp_h3ba5ccd0__0[0U] = vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram
        [vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__addr_r][0U];
    __Vtemp_h3ba5ccd0__0[1U] = vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram
        [vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__addr_r][1U];
    __Vtemp_h3ba5ccd0__0[2U] = vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram
        [vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__addr_r][2U];
    __Vtemp_h3ba5ccd0__0[3U] = vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram
        [vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__addr_r][3U];
    bufp->fullWData(oldp+451,(__Vtemp_h3ba5ccd0__0),128);
    bufp->fullCData(oldp+455,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__addr_r),4);
    bufp->fullWData(oldp+456,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[0]),128);
    bufp->fullWData(oldp+460,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[1]),128);
    bufp->fullWData(oldp+464,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[2]),128);
    bufp->fullWData(oldp+468,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[3]),128);
    bufp->fullWData(oldp+472,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[4]),128);
    bufp->fullWData(oldp+476,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[5]),128);
    bufp->fullWData(oldp+480,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[6]),128);
    bufp->fullWData(oldp+484,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[7]),128);
    bufp->fullWData(oldp+488,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[8]),128);
    bufp->fullWData(oldp+492,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[9]),128);
    bufp->fullWData(oldp+496,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[10]),128);
    bufp->fullWData(oldp+500,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[11]),128);
    bufp->fullWData(oldp+504,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[12]),128);
    bufp->fullWData(oldp+508,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[13]),128);
    bufp->fullWData(oldp+512,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[14]),128);
    bufp->fullWData(oldp+516,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem0__DOT__ram[15]),128);
    bufp->fullBit(oldp+520,((1U & ((IData)(vlSelf->CPU__DOT__ICache_inst__DOT__mem_we) 
                                   >> 1U))));
    __Vtemp_he624d3e8__0[0U] = vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram
        [vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__addr_r][0U];
    __Vtemp_he624d3e8__0[1U] = vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram
        [vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__addr_r][1U];
    __Vtemp_he624d3e8__0[2U] = vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram
        [vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__addr_r][2U];
    __Vtemp_he624d3e8__0[3U] = vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram
        [vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__addr_r][3U];
    bufp->fullWData(oldp+521,(__Vtemp_he624d3e8__0),128);
    bufp->fullCData(oldp+525,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__addr_r),4);
    bufp->fullWData(oldp+526,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[0]),128);
    bufp->fullWData(oldp+530,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[1]),128);
    bufp->fullWData(oldp+534,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[2]),128);
    bufp->fullWData(oldp+538,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[3]),128);
    bufp->fullWData(oldp+542,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[4]),128);
    bufp->fullWData(oldp+546,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[5]),128);
    bufp->fullWData(oldp+550,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[6]),128);
    bufp->fullWData(oldp+554,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[7]),128);
    bufp->fullWData(oldp+558,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[8]),128);
    bufp->fullWData(oldp+562,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[9]),128);
    bufp->fullWData(oldp+566,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[10]),128);
    bufp->fullWData(oldp+570,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[11]),128);
    bufp->fullWData(oldp+574,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[12]),128);
    bufp->fullWData(oldp+578,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[13]),128);
    bufp->fullWData(oldp+582,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[14]),128);
    bufp->fullWData(oldp+586,(vlSelf->CPU__DOT__ICache_inst__DOT__data_mem1__DOT__ram[15]),128);
    bufp->fullBit(oldp+590,((1U & (IData)(vlSelf->CPU__DOT__ICache_inst__DOT__tagv_we))));
    bufp->fullIData(oldp+591,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram
                              [vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__addr_r]),24);
    bufp->fullCData(oldp+592,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__addr_r),4);
    bufp->fullIData(oldp+593,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[0]),24);
    bufp->fullIData(oldp+594,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[1]),24);
    bufp->fullIData(oldp+595,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[2]),24);
    bufp->fullIData(oldp+596,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[3]),24);
    bufp->fullIData(oldp+597,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[4]),24);
    bufp->fullIData(oldp+598,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[5]),24);
    bufp->fullIData(oldp+599,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[6]),24);
    bufp->fullIData(oldp+600,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[7]),24);
    bufp->fullIData(oldp+601,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[8]),24);
    bufp->fullIData(oldp+602,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[9]),24);
    bufp->fullIData(oldp+603,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[10]),24);
    bufp->fullIData(oldp+604,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[11]),24);
    bufp->fullIData(oldp+605,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[12]),24);
    bufp->fullIData(oldp+606,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[13]),24);
    bufp->fullIData(oldp+607,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[14]),24);
    bufp->fullIData(oldp+608,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem0__DOT__ram[15]),24);
    bufp->fullBit(oldp+609,((1U & ((IData)(vlSelf->CPU__DOT__ICache_inst__DOT__tagv_we) 
                                   >> 1U))));
    bufp->fullIData(oldp+610,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram
                              [vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__addr_r]),24);
    bufp->fullCData(oldp+611,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__addr_r),4);
    bufp->fullIData(oldp+612,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[0]),24);
    bufp->fullIData(oldp+613,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[1]),24);
    bufp->fullIData(oldp+614,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[2]),24);
    bufp->fullIData(oldp+615,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[3]),24);
    bufp->fullIData(oldp+616,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[4]),24);
    bufp->fullIData(oldp+617,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[5]),24);
    bufp->fullIData(oldp+618,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[6]),24);
    bufp->fullIData(oldp+619,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[7]),24);
    bufp->fullIData(oldp+620,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[8]),24);
    bufp->fullIData(oldp+621,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[9]),24);
    bufp->fullIData(oldp+622,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[10]),24);
    bufp->fullIData(oldp+623,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[11]),24);
    bufp->fullIData(oldp+624,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[12]),24);
    bufp->fullIData(oldp+625,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[13]),24);
    bufp->fullIData(oldp+626,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[14]),24);
    bufp->fullIData(oldp+627,(vlSelf->CPU__DOT__ICache_inst__DOT__tag_mem1__DOT__ram[15]),24);
    bufp->fullCData(oldp+628,((7U & (vlSelf->CPU__DOT__inst_ex 
                                     >> 0xcU))),3);
    bufp->fullIData(oldp+629,((0x1fU & (vlSelf->CPU__DOT__inst_ex 
                                        >> 0xfU))),32);
    bufp->fullIData(oldp+630,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[0]),32);
    bufp->fullIData(oldp+631,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[1]),32);
    bufp->fullIData(oldp+632,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[2]),32);
    bufp->fullIData(oldp+633,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[3]),32);
    bufp->fullIData(oldp+634,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[4]),32);
    bufp->fullIData(oldp+635,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[5]),32);
    bufp->fullIData(oldp+636,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[6]),32);
    bufp->fullIData(oldp+637,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[7]),32);
    bufp->fullIData(oldp+638,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[8]),32);
    bufp->fullIData(oldp+639,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[9]),32);
    bufp->fullIData(oldp+640,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[10]),32);
    bufp->fullIData(oldp+641,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[11]),32);
    bufp->fullIData(oldp+642,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[12]),32);
    bufp->fullIData(oldp+643,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[13]),32);
    bufp->fullIData(oldp+644,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[14]),32);
    bufp->fullIData(oldp+645,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[15]),32);
    bufp->fullIData(oldp+646,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[16]),32);
    bufp->fullIData(oldp+647,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[17]),32);
    bufp->fullIData(oldp+648,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[18]),32);
    bufp->fullIData(oldp+649,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[19]),32);
    bufp->fullIData(oldp+650,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[20]),32);
    bufp->fullIData(oldp+651,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[21]),32);
    bufp->fullIData(oldp+652,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[22]),32);
    bufp->fullIData(oldp+653,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[23]),32);
    bufp->fullIData(oldp+654,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[24]),32);
    bufp->fullIData(oldp+655,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[25]),32);
    bufp->fullIData(oldp+656,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[26]),32);
    bufp->fullIData(oldp+657,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[27]),32);
    bufp->fullIData(oldp+658,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[28]),32);
    bufp->fullIData(oldp+659,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[29]),32);
    bufp->fullIData(oldp+660,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[30]),32);
    bufp->fullIData(oldp+661,(vlSelf->CPU__DOT__Regfile_inst__DOT__rf[31]),32);
    bufp->fullBit(oldp+662,((1U & ((IData)(vlSelf->CPU__DOT__mem_access_ls) 
                                   >> 3U))));
    bufp->fullCData(oldp+663,(vlSelf->CPU__DOT__axi_arbiter_inst__DOT__r_crt),3);
    bufp->fullCData(oldp+664,(vlSelf->CPU__DOT__axi_arbiter_inst__DOT__w_crt),2);
    bufp->fullBit(oldp+665,(vlSelf->clk));
    bufp->fullBit(oldp+666,(vlSelf->rstn));
    bufp->fullIData(oldp+667,(vlSelf->araddr),32);
    bufp->fullBit(oldp+668,(vlSelf->arvalid));
    bufp->fullBit(oldp+669,(vlSelf->arready));
    bufp->fullCData(oldp+670,(vlSelf->arlen),8);
    bufp->fullCData(oldp+671,(vlSelf->arsize),3);
    bufp->fullCData(oldp+672,(vlSelf->arburst),2);
    bufp->fullIData(oldp+673,(vlSelf->rdata),32);
    bufp->fullCData(oldp+674,(vlSelf->rresp),2);
    bufp->fullBit(oldp+675,(vlSelf->rvalid));
    bufp->fullBit(oldp+676,(vlSelf->rready));
    bufp->fullBit(oldp+677,(vlSelf->rlast));
    bufp->fullIData(oldp+678,(vlSelf->awaddr),32);
    bufp->fullBit(oldp+679,(vlSelf->awvalid));
    bufp->fullBit(oldp+680,(vlSelf->awready));
    bufp->fullCData(oldp+681,(vlSelf->awlen),8);
    bufp->fullCData(oldp+682,(vlSelf->awsize),3);
    bufp->fullCData(oldp+683,(vlSelf->awburst),2);
    bufp->fullIData(oldp+684,(vlSelf->wdata),32);
    bufp->fullCData(oldp+685,(vlSelf->wstrb),4);
    bufp->fullBit(oldp+686,(vlSelf->wvalid));
    bufp->fullBit(oldp+687,(vlSelf->wready));
    bufp->fullBit(oldp+688,(vlSelf->wlast));
    bufp->fullCData(oldp+689,(vlSelf->bresp),2);
    bufp->fullBit(oldp+690,(vlSelf->bvalid));
    bufp->fullBit(oldp+691,(vlSelf->bready));
    bufp->fullBit(oldp+692,(vlSelf->commit_wb));
    bufp->fullBit(oldp+693,(vlSelf->uncache_read_wb));
    bufp->fullIData(oldp+694,(vlSelf->inst),32);
    bufp->fullIData(oldp+695,(vlSelf->pc_cur),32);
    bufp->fullIData(oldp+696,(0x80000000U),32);
    bufp->fullIData(oldp+697,(4U),32);
    bufp->fullIData(oldp+698,(2U),32);
    bufp->fullCData(oldp+699,(3U),8);
    bufp->fullCData(oldp+700,(0xfU),4);
    bufp->fullCData(oldp+701,(2U),3);
    bufp->fullIData(oldp+702,(0x20U),32);
    bufp->fullIData(oldp+703,(0U),32);
    bufp->fullIData(oldp+704,(4U),32);
    bufp->fullIData(oldp+705,(0x18U),32);
    bufp->fullIData(oldp+706,(0x10U),32);
    bufp->fullIData(oldp+707,(0x80U),32);
    bufp->fullCData(oldp+708,(3U),3);
    bufp->fullCData(oldp+709,(1U),3);
    bufp->fullCData(oldp+710,(5U),3);
    bufp->fullCData(oldp+711,(6U),3);
    bufp->fullCData(oldp+712,(7U),3);
}
