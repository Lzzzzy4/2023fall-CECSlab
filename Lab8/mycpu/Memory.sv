`timescale 1ns/1ps
module Memory(
    input  logic [   0:0] clk,
    input  logic [   0:0] rstn,
    input  logic [   0:0] clk_cpu,
    input  logic [   0:0] rstn_cpu,
    output logic [  15:0] test,

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
    // input  logic [ 3:0] arid,

    // R
    output logic [31:0] rdata,
    output logic [ 1:0] rresp,
    output logic [ 0:0] rvalid,
    input  logic [ 0:0] rready,
    output logic [ 0:0] rlast,
    // output logic [ 3:0] rid,

    // AW
    input  logic [31:0] awaddr,
    input  logic [ 0:0] awvalid,
    output logic [ 0:0] awready,
    input  logic [ 7:0] awlen,
    input  logic [ 2:0] awsize,
    input  logic [ 1:0] awburst,
    // input  logic [ 3:0] awid,

    // W
    input  logic [31:0] wdata,
    input  logic [ 3:0] wstrb,
    input  logic [ 0:0] wvalid,
    output logic [ 0:0] wready,
    input  logic [ 0:0] wlast,
    // input  logic [ 3:0] wid,

    // B
    output logic [ 1:0] bresp,
    output logic [ 0:0] bvalid,
    input  logic [ 0:0] bready
    // output logic [ 3:0] bid

);
assign test = 0;
logic [ 0:0] tag_r, tag_r_reg;
logic [ 0:0] tag_w, tag_w_reg;

always_ff @(posedge clk_cpu)begin
    if(!rstn_cpu)begin
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

//   logic  [15:0]BRAM_PORTA_0_addr;
 logic [17:0]BRAM_PORTA_0_addr;
  logic  BRAM_PORTA_0_clk;
  logic  [31:0]BRAM_PORTA_0_din;
  logic [31:0]BRAM_PORTA_0_dout;
  logic  BRAM_PORTA_0_en;
  logic  BRAM_PORTA_0_rst;
  logic  [3:0]BRAM_PORTA_0_we;
//   logic  [15:0]BRAM_PORTB_0_addr;
  logic  [17:0]BRAM_PORTB_0_addr;
  logic  BRAM_PORTB_0_clk;
  logic  [31:0]BRAM_PORTB_0_din;
  logic [31:0]BRAM_PORTB_0_dout;
  logic  BRAM_PORTB_0_en;
  logic  BRAM_PORTB_0_rst;
  logic  [3:0]BRAM_PORTB_0_we;

// output 
logic [ 0:0] arready_axi;
logic [31:0] rdata_axi;
logic [ 1:0] rresp_axi;
logic [ 0:0] rvalid_axi;
logic [ 0:0] rlast_axi;
logic [ 0:0] awready_axi;
logic [ 0:0] wready_axi;
logic [ 1:0] bresp_axi;
logic [ 0:0] bvalid_axi;
  axi_bram_ctrl_0 axi_bram_ctrl_0(
    .bram_addr_a(BRAM_PORTA_0_addr),
    .bram_clk_a(BRAM_PORTA_0_clk),
    .bram_rddata_a(BRAM_PORTA_0_dout),
    .bram_wrdata_a(BRAM_PORTA_0_din),
    .bram_en_a(BRAM_PORTA_0_en),
    .bram_we_a(BRAM_PORTA_0_we),
    .bram_rst_a(BRAM_PORTA_0_rst),

    .bram_addr_b(BRAM_PORTB_0_addr),
    .bram_clk_b(BRAM_PORTB_0_clk),
    .bram_rddata_b(BRAM_PORTB_0_dout),
    .bram_wrdata_b(BRAM_PORTB_0_din),
    .bram_en_b(BRAM_PORTB_0_en),
    .bram_we_b(BRAM_PORTB_0_we),
    .bram_rst_b(BRAM_PORTB_0_rst),

    .s_axi_aclk(clk_cpu),
    .s_axi_aresetn(rstn_cpu),

    .s_axi_araddr(araddr[17:0]),
    .s_axi_arburst(arburst),
    .s_axi_arlen(arlen),
    .s_axi_arready(arready_axi),
    .s_axi_arsize(arsize),
    .s_axi_arvalid(tag_r ? 1'b0 : arvalid),
    .s_axi_awaddr(awaddr[17:0]),
    .s_axi_awburst(awburst),
    .s_axi_awlen(awlen),
    .s_axi_awready(awready_axi),
    .s_axi_awsize(awsize),
    .s_axi_awvalid(tag_w ? 1'b0 : awvalid),
    .s_axi_bready(bready),
    .s_axi_bresp(bresp_axi),
    .s_axi_bvalid(bvalid_axi),
    .s_axi_rdata(rdata_axi),
    .s_axi_rlast(rlast_axi),
    .s_axi_rready(rready),
    .s_axi_rresp(rresp_axi),
    .s_axi_rvalid(rvalid_axi),
    .s_axi_wdata(wdata),
    .s_axi_wlast(wlast),
    .s_axi_wready(wready_axi),
    .s_axi_wstrb(wstrb),
    .s_axi_wvalid(wvalid),
    
    .s_axi_arcache(0),
    .s_axi_arlock(0),
    .s_axi_arprot(0),
    .s_axi_awcache(0),
    .s_axi_awlock(0),
    .s_axi_awprot(0)

  );

blk_mem_gen_0 blk_mem_gen_0(
    .addra(BRAM_PORTA_0_addr[17:2]),
    // .addra(BRAM_PORTA_0_addr),
    .clka(BRAM_PORTA_0_clk),
    .dina(BRAM_PORTA_0_din),
    .douta(BRAM_PORTA_0_dout),
    .ena(BRAM_PORTA_0_en),
    .wea(BRAM_PORTA_0_we),

    .addrb(BRAM_PORTB_0_addr[17:2]),
    // .addrb(BRAM_PORTB_0_addr),
    .clkb(BRAM_PORTB_0_clk),
    .dinb(BRAM_PORTB_0_din),
    .doutb(BRAM_PORTB_0_dout),
    .enb(BRAM_PORTB_0_en),
    .web(BRAM_PORTB_0_we)

);

//Baud Rate : 128000
logic [ 0:0] arready_urat;
logic [31:0] rdata_urat;
logic [ 1:0] rresp_urat;
logic [ 0:0] rvalid_urat;
logic [ 0:0] rlast_urat;
logic [ 0:0] awready_urat;
logic [ 0:0] wready_urat;
logic [ 1:0] bresp_urat;
logic [ 0:0] bvalid_urat;
assign rlast_urat = rvalid_urat;

axi_uartlite_0 axi_uartlite_0(
    .s_axi_aclk(clk_cpu),
    .s_axi_aresetn(rstn_cpu),

    .s_axi_araddr(4'h0),
    .s_axi_arready(arready_urat),
    .s_axi_arvalid(tag_r ? arvalid : 1'b0),
    .s_axi_awaddr(4'h4),
    .s_axi_awready(awready_urat),
    .s_axi_awvalid(tag_w ? awvalid : 1'b0),
    .s_axi_bready(bready),
    .s_axi_bresp(bresp_urat),
    .s_axi_bvalid(bvalid_urat),
    .s_axi_rdata(rdata_urat),
    .s_axi_rready(rready),
    .s_axi_rresp(rresp_urat),
    .s_axi_rvalid(rvalid_urat),
    .s_axi_wdata(wdata),
    .s_axi_wready(wready_urat),
    .s_axi_wstrb(wstrb),
    .s_axi_wvalid(wvalid),
    
    .rx(RxD),
    .tx(TxD),
    .interrupt()

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


// assign test = test1;
// URAT_unit URAT_unit(
//     .clk(clk),
//     .rstn(rstn),
//     .test(test2),
//     .TxD(TxD),
//     .RxD(RxD),
//     .awaddr(awaddr),
//     .awvalid(tag_w ? awvalid : 1'b0),
//     .awready(awready_urat),
//     .wdata(wdata),
//     .wvalid(wvalid),
//     .wready(wready_urat),
//     .bvalid(bvalid_urat),
//     .bready(bready),
//     .bresp(bresp_urat),
//     .arvalid(tag_r ? arvalid : 1'b0),
//     .arready(arready_urat),
//     .rdata(rdata_urat),
//     .rvalid(rvalid_urat),
//     .rready(rready),
//     .rlast(rlast_urat)
// );

// logic [ 0:0] arready_axi;
// logic [31:0] rdata_axi;
// logic [ 1:0] rresp_axi;
// logic [ 0:0] rvalid_axi;
// logic [ 0:0] rlast_axi;
// logic [ 0:0] awready_axi;
// logic [ 0:0] wready_axi;
// logic [ 1:0] bresp_axi;
// logic [ 0:0] bvalid_axi;
// logic [ 0:0] rsta_busy;
// logic [ 0:0] rstb_busy;
// logic [ 3:0] s_axi_bid;
// logic [ 3:0] s_axi_rid;
// blk_mem_gen_0 blk_mem_gen_0(
//     .s_aclk(clk),
//     .s_aresetn(rstn),
//     .rsta_busy(rsta_busy),
//     .rstb_busy(rstb_busy),
//     .s_axi_araddr(araddr),
//     .s_axi_arvalid(!tag_r ? arvalid : 1'b0),
//     .s_axi_arready(arready_axi),
//     .s_axi_arlen(arlen),
//     .s_axi_arsize(arsize),
//     .s_axi_arburst(arburst),
//     .s_axi_rdata(rdata_axi),
//     .s_axi_rresp(rresp_axi),
//     .s_axi_rvalid(rvalid_axi),
//     .s_axi_rready(rready),
//     .s_axi_rlast(rlast_axi),
//     .s_axi_awaddr(awaddr),
//     .s_axi_awvalid(!tag_w ? awvalid : 1'b0),
//     .s_axi_awready(awready_axi),
//     .s_axi_awlen(awlen),
//     .s_axi_awsize(awsize),
//     .s_axi_awburst(awburst),
//     .s_axi_wdata(wdata),
//     .s_axi_wstrb(wstrb),
//     .s_axi_wvalid(wvalid),
//     .s_axi_wready(wready_axi),
//     .s_axi_wlast(wlast),
//     .s_axi_bresp(bresp_axi),
//     .s_axi_bvalid(bvalid_axi),
//     .s_axi_bready(bready),

//     .s_axi_arid(4'b0),
//     .s_axi_awid(4'b0),
//     .s_axi_bid(s_axi_bid),
//     .s_axi_rid(s_axi_rid)
// );
// assign arready = tag_r ? arready_urat : arready_axi;
// assign rdata   = tag_r ? rdata_urat   : rdata_axi;
// assign rresp   = tag_r ? rresp_urat   : rresp_axi;
// assign rvalid  = tag_r ? rvalid_urat  : rvalid_axi;
// assign rlast   = tag_r ? rlast_urat   : rlast_axi;
// assign awready = tag_w ? awready_urat : awready_axi;
// assign wready  = tag_w ? wready_urat  : wready_axi;
// assign bresp   = tag_w ? bresp_urat   : bresp_axi;
// assign bvalid  = tag_w ? bvalid_urat  : bvalid_axi;

// //only axi mem
// logic [ 0:0] rsta_busy;
// logic [ 0:0] rstb_busy;
// blk_mem_gen_1 blk_mem_gen_1(
//     .s_aclk(clk_cpu),
//     .s_aresetn(rstn_cpu),
//     .rsta_busy(rsta_busy),
//     .rstb_busy(rstb_busy),
//     .s_axi_araddr(araddr),
//     .s_axi_arvalid(arvalid),
//     .s_axi_arready(arready),
//     .s_axi_arlen(arlen),
//     .s_axi_arsize(arsize),
//     .s_axi_arburst(arburst),
//     .s_axi_rdata(rdata),
//     .s_axi_rresp(rresp),
//     .s_axi_rvalid(rvalid),
//     .s_axi_rready(rready),
//     .s_axi_rlast(rlast),
//     .s_axi_awaddr(awaddr),
//     .s_axi_awvalid(awvalid),
//     .s_axi_awready(awready),
//     .s_axi_awlen(awlen),
//     .s_axi_awsize(awsize),
//     .s_axi_awburst(awburst),
//     .s_axi_wdata(wdata),
//     .s_axi_wstrb(wstrb),
//     .s_axi_wvalid(wvalid),
//     .s_axi_wready(wready),
//     .s_axi_wlast(wlast),
//     .s_axi_bresp(bresp),
//     .s_axi_bvalid(bvalid),
//     .s_axi_bready(bready),

//     .s_axi_arid(4'd0),
//     .s_axi_awid(4'd0),
//     .s_axi_bid(),
//     .s_axi_rid()
// );
// always_ff @(posedge clk)begin
//     if(!rstn) begin
//         test <= 0;
//     end
//     else if( awvalid && awaddr[31:28] == 4'ha) begin
//         test <= {8'hff, wdata[7:0]};
//     end
// end
// assign TxD = 0;

//     // wire [3:0]S_AXI_0_arcache;
//     // assgin S_AXI_0_arcache = 4'b0;
//     // wire [3:0]S_AXI_0_arlock;
//     // assgin S_AXI_0_arlock = 4'b0;
//     // wire [2:0]S_AXI_0_arprot;
//     // assgin S_AXI_0_arprot = 3'b0;
//     // wire [3:0]S_AXI_0_arqos;
//     // assgin S_AXI_0_arqos = 4'b0;
//     // wire [3:0]S_AXI_0_arregion;
//     // assgin S_AXI_0_arregion = 4'b0;

//     // wire [3:0]S_AXI_0_awcache;
//     // assgin S_AXI_0_awcache = 4'b0;
//     // wire [3:0]S_AXI_0_awlock;
//     // assgin S_AXI_0_awlock = 4'b0;
//     // wire [2:0]S_AXI_0_awprot;
//     // assgin S_AXI_0_awprot = 3'b0;
//     // wire [3:0]S_AXI_0_awqos;
//     // assgin S_AXI_0_awqos = 4'b0;
//     // wire [3:0]S_AXI_0_awregion;
//     // assgin S_AXI_0_awregion = 4'b0;

//     logic [ 0:0] clk_mem;
//     logic [ 0:0] rstn_mem;
//     clk_wiz_mem clk_wiz_mem(
//         .resetn(rstn),
//         .clk_in1(clk),
//         .clk_out1(clk_mem),
//         .locked(rstn_mem)
//     );

//     logic [ 0:0] clk_inter;
//     logic [ 0:0] rstn_inter;
//     clk_wiz_inter clk_wiz_inter(
//         .resetn(rstn),
//         .clk_in1(clk),
//         .clk_out1(clk_inter),
//         .locked(rstn_inter)
//     );

//     logic [ 0:0] clk_uart;
//     logic [ 0:0] rstn_uart;
//     clk_wiz_mem clk_wiz_uart(
//         .resetn(rstn),
//         .clk_in1(clk),
//         .clk_out1(clk_uart),
//         .locked(rstn_uart)
//     );

// design_1_wrapper design_1_wrapper(
//     .ACLK_0(clk),
//     .ARESETN_0(rstn),
//     // .m_axi_aclk_0(clk_inter),
//     // .m_axi_aresetn_0(rstn_inter),
//     // .s_axi_aclk_0(clk_cpu),
//     // .s_axi_aresetn_0(rstn_cpu),
//     .S00_ACLK_0(clk_cpu),
//     .S00_ARESETN_0(rstn_cpu),
//     .M00_ACLK_0(clk_mem),
//     .M00_ARESETN_0(rstn_mem),
//     .M01_ACLK_0(clk_uart),
//     .M01_ARESETN_0(rstn_uart),

//     .BRAM_PORTA_0_addr(BRAM_PORTA_0_addr),
//     .BRAM_PORTA_0_clk(BRAM_PORTA_0_clk),
//     .BRAM_PORTA_0_din(BRAM_PORTA_0_din),
//     .BRAM_PORTA_0_dout(BRAM_PORTA_0_dout),
//     .BRAM_PORTA_0_en(BRAM_PORTA_0_en),
//     .BRAM_PORTA_0_rst(BRAM_PORTA_0_rst),
//     .BRAM_PORTA_0_we(BRAM_PORTA_0_we),
//     .BRAM_PORTB_0_addr(BRAM_PORTB_0_addr),
//     .BRAM_PORTB_0_clk(BRAM_PORTB_0_clk),
//     .BRAM_PORTB_0_din(BRAM_PORTB_0_din),
//     .BRAM_PORTB_0_dout(BRAM_PORTB_0_dout),
//     .BRAM_PORTB_0_en(BRAM_PORTB_0_en),
//     .BRAM_PORTB_0_rst(BRAM_PORTB_0_rst),
//     .BRAM_PORTB_0_we(BRAM_PORTB_0_we),

//     .S00_AXI_0_araddr(araddr),
//     .S00_AXI_0_arburst(arburst),
//     .S00_AXI_0_arlen(arlen),
//     .S00_AXI_0_arready(arready),
//     .S00_AXI_0_arsize(arsize),
//     .S00_AXI_0_arvalid(arvalid),
//     .S00_AXI_0_awaddr(awaddr),
//     .S00_AXI_0_awburst(awburst),
//     .S00_AXI_0_awlen(awlen),
//     .S00_AXI_0_awready(awready),
//     .S00_AXI_0_awsize(awsize),
//     .S00_AXI_0_awvalid(awvalid),
//     .S00_AXI_0_bready(bready),
//     .S00_AXI_0_bresp(bresp),
//     .S00_AXI_0_bvalid(bvalid),
//     .S00_AXI_0_rdata(rdata),
//     .S00_AXI_0_rlast(rlast),
//     .S00_AXI_0_rready(rready),
//     .S00_AXI_0_rresp(rresp),
//     .S00_AXI_0_rvalid(rvalid),
//     .S00_AXI_0_wdata(wdata),
//     .S00_AXI_0_wlast(wlast),
//     .S00_AXI_0_wready(wready),
//     .S00_AXI_0_wstrb(wstrb),
//     .S00_AXI_0_wvalid(wvalid),

//     // .S_AXI_0_arcache(S_AXI_0_arcache),
//     // .S_AXI_0_arlock(S_AXI_0_arlock),
//     // .S_AXI_0_arprot(S_AXI_0_arprot),
//     // .S_AXI_0_arqos(S_AXI_0_arqos),
//     // .S_AXI_0_arregion(S_AXI_0_arregion),
//     // .S_AXI_0_awcache(S_AXI_0_awcache),
//     // .S_AXI_0_awlock(S_AXI_0_awlock),
//     // .S_AXI_0_awprot(S_AXI_0_awprot),
//     // .S_AXI_0_awqos(S_AXI_0_awqos),
//     // .S_AXI_0_awregion(S_AXI_0_awregion),

//     .UART_0_rxd(RxD),
//     .UART_0_txd(TxD),
//     .interrupt_0()

// );
endmodule