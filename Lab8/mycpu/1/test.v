`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2023/11/21 20:54:17
// Design Name: 
// Module Name: test
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module test(
    );
    reg clk;
    reg rstn;
    wire [15:0] test;
    reg RxD;
    wire TxD;
Top Top(
    .clk(clk),
    .rstn(rstn),
    .test(test),
    .RxD(RxD),
    .TxD(TxD)
    );
    initial begin
        clk = 0;
        forever begin
            #0.5 clk = ~clk;
        end
    end
    initial begin
        rstn = 1;
        // rstn1 = 1;
        // #10 rstn1 = 0;
        // #10 rstn1 = 1;
        #10 rstn = 0;
        #10 rstn = 1;
    end
//     initial begin
        
//         arlen = 3;
//         arsize = 2;
//         arburst = 1;

//         rready = 1;
//     end
//     initial begin
//         arvalid = 0;
//         araddr = 32'h80000000;

//         // #100 arvalid = 1;
//         // araddr = 32'h80000000;
//         // #1 arvalid = 0;

//         // #100 arvalid = 1;
//         // araddr = 32'h80000010;
//         // #1 arvalid = 0;

//         // #100 arvalid = 1;
//         // araddr = 32'h80000040;
//         // #1 arvalid = 0;

//         // #100 arvalid = 1;
//         // araddr = 32'h80000050;
//         // #1 arvalid = 0;

//         forever begin
//             #30 
//             arvalid = 1;
//             araddr = araddr + 32'd16;
//             #1 arvalid = 0;
//         end
//     end

// reg [ 0:0]arvalid;
// reg [31:0]araddr;
// reg [ 7:0]arlen;
// reg [ 2:0]arsize;
// reg [ 1:0]arburst;
// reg [ 0:0]awvalid;
// reg [31:0]awaddr;
// reg [ 7:0]awlen;
// reg [ 2:0]awsize;
// reg [ 1:0]awburst;
// reg [31:0]wdata;
// reg [ 3:0]wstrb;
// reg [ 0:0]wvalid;
// reg [ 0:0]wlast;
// reg [ 0:0]bready;
// reg [ 0:0]rready;
// wire [ 0:0] arready_axi;
// wire [31:0] rdata_axi;
// wire [ 1:0] rresp_axi;
// wire [ 0:0] rvalid_axi;
// wire [ 0:0] rlast_axi;
// wire [ 0:0] awready_axi;
// wire [ 0:0] wready_axi;
// wire [ 1:0] bresp_axi;
// wire [ 0:0] bvalid_axi;
// wire [ 0:0] rsta_busy;
// wire [ 0:0] rstb_busy;
// wire [ 3:0] s_axi_bid;
// wire [ 3:0] s_axi_rid;
// blk_mem_gen_0 blk_mem_gen_0(
//     .s_aclk(clk),
//     .s_aresetn(rstn),
//     .rsta_busy(rsta_busy),
//     .rstb_busy(rstb_busy),
//     .s_axi_araddr(araddr),
//     .s_axi_arvalid(arvalid),
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
//     .s_axi_awvalid(awvalid),
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


endmodule
