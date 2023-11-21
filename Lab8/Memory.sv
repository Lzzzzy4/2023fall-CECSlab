`timescale 1ns/1ps
module Memory(
    input  logic [   0:0] clk,
    input  logic [   0:0] rstn,

    //URAT
    output logic [0:0] TxD,
    input  logic [0:0] RxD,

    // AR
    input  logic [31:0] araddr,
    input  logic [ 0:0] arvalid,
    output logic [ 0:0] arready,
    input  logic [ 7:0] arlen,
    input  logic [ 2:0] arsize,
    input  logic [ 1:0] arburst,

    // R
    output logic [31:0] rdata,
    output logic [ 1:0] rresp,
    output logic [ 0:0] rvalid,
    input  logic [ 0:0] rready,
    output logic [ 0:0] rlast,

    // AW
    input  logic [31:0] awaddr,
    input  logic [ 0:0] awvalid,
    output logic [ 0:0] awready,
    input  logic [ 7:0] awlen,
    input  logic [ 2:0] awsize,
    input  logic [ 1:0] awburst,

    // W
    input  logic [31:0] wdata,
    input  logic [ 3:0] wstrb,
    input  logic [ 0:0] wvalid,
    output logic [ 0:0] wready,
    input  logic [ 0:0] wlast,

    // B
    output logic [ 1:0] bresp,
    output logic [ 0:0] bvalid,
    input  logic [ 0:0] bready
);
logic [ 0:0] tag_r, tag_r_reg;
logic [ 0:0] tag_w, tag_w_reg;
always_ff @(posedge clk)begin
    if(!rstn)begin
        tag_r_reg <= 1'b0;
        tag_w_reg <= 1'b0;
    end else begin
        tag_r_reg <= tag_r;
        tag_w_reg <= tag_w;
    end
end
always_comb begin
    if(arvalid) tag_r = (araddr[31:28] == 4'ha);
    else tag_r = tag_r_reg;
    if(awvalid) tag_w = (awaddr[31:28] == 4'ha);
    else tag_w = tag_w_reg;
end

logic [ 0:0] arready_urat;
logic [31:0] rdata_urat;
logic [ 1:0] rresp_urat;
logic [ 0:0] rvalid_urat;
logic [ 0:0] rlast_urat;
logic [ 0:0] awready_urat;
logic [ 0:0] wready_urat;
logic [ 1:0] bresp_urat;
logic [ 0:0] bvalid_urat;
URAT_unit URAT_unit(
    .clk(clk),
    .rstn(rstn),
    .TxD(TxD),
    .RxD(RxD),
    .awaddr(awaddr),
    .awvalid(tag_w ? awvalid : 1'b0),
    .awready(awready_urat),
    .wdata(wdata),
    .wvalid(wvalid),
    .wready(wready_urat),
    .bvalid(bvalid_urat),
    .bready(bready),
    .bresp(bresp_urat),
    .arvalid(tag_r ? arvalid : 1'b0),
    .arready(arready_urat),
    .rdata(rdata_urat),
    .rvalid(rvalid_urat),
    .rready(rready),
    .rlast(rlast_urat)
);

logic [ 0:0] arready_axi;
logic [31:0] rdata_axi;
logic [ 1:0] rresp_axi;
logic [ 0:0] rvalid_axi;
logic [ 0:0] rlast_axi;
logic [ 0:0] awready_axi;
logic [ 0:0] wready_axi;
logic [ 1:0] bresp_axi;
logic [ 0:0] bvalid_axi;
logic [ 0:0] rsta_busy;
logic [ 0:0] rstb_busy;
logic [ 3:0] s_axi_bid;
logic [ 3:0] s_axi_rid;
axi_mem axi_mem(
    .s_aclk(clk),
    .s_aresetn(rstn),
    .rsta_busy(rsta_busy),
    .rstb_busy(rstb_busy),
    .s_axi_araddr(araddr),
    .s_axi_arvalid(!tag_r ? arvalid : 1'b0),
    .s_axi_arready(arready_axi),
    .s_axi_arlen(arlen),
    .s_axi_arsize(arsize),
    .s_axi_arburst(arburst),
    .s_axi_rdata(rdata_axi),
    .s_axi_rresp(rresp_axi),
    .s_axi_rvalid(rvalid_axi),
    .s_axi_rready(rready),
    .s_axi_rlast(rlast_axi),
    .s_axi_awaddr(awaddr),
    .s_axi_awvalid(!tag_w ? awvalid : 1'b0),
    .s_axi_awready(awready_axi),
    .s_axi_awlen(awlen),
    .s_axi_awsize(awsize),
    .s_axi_awburst(awburst),
    .s_axi_wdata(wdata),
    .s_axi_wstrb(wstrb),
    .s_axi_wvalid(wvalid),
    .s_axi_wready(wready_axi),
    .s_axi_wlast(wlast),
    .s_axi_bresp(bresp_axi),
    .s_axi_bvalid(bvalid_axi),
    .s_axi_bready(bready),

    .s_axi_arid(4'b0),
    .s_axi_awid(4'b0),
    .s_axi_bid(s_axi_bid),
    .s_axi_rid(s_axi_rid)
);
assign arready = tag_r ? arready_urat : arready_axi;
assign rdata   = tag_r ? rdata_urat   : rdata_axi;
assign rresp   = tag_r ? rresp_urat   : rresp_axi;
assign rvalid  = tag_r ? rvalid_urat  : rvalid_axi;
assign rlast   = tag_r ? rlast_urat   : rlast_axi;
assign awready = tag_w ? awready_urat : awready_axi;
assign wready  = tag_w ? wready_urat  : wready_axi;
assign bresp   = tag_w ? bresp_urat   : bresp_axi;
assign bvalid  = tag_w ? bvalid_urat  : bvalid_axi;
endmodule