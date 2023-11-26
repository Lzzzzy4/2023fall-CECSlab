`timescale 1ns/1ps
module URAT_unit(
    input  logic clk,
    input  logic rstn,

    //URAT
    output logic [0:0] TxD,
    input  logic [0:0] RxD,

    //AXI_W
    input  logic [31:0] awaddr,
    input  logic [ 0:0] awvalid,
    output logic [ 0:0] awready,

    input  logic [31:0] wdata,
    input  logic [ 0:0] wvalid,
    output logic [ 0:0] wready,

    output  logic [ 0:0] bvalid,
    input   logic [ 0:0] bready,
    output  logic [ 1:0] bresp,

    //AXI_R
    input  logic [ 0:0] arvalid,
    output logic [ 0:0] arready,

    output logic [31:0] rdata,
    output logic [ 0:0] rvalid,
    input  logic [ 0:0] rready,
    output logic [ 0:0] rlast
);
logic [7:0] data_R;
logic valid_R;
URAT_R_axi URAT_R_axi(
    .clk(clk),
    .rstn(rstn),
    .data(data_R),
    .valid(valid_R),
    .arvalid(arvalid),
    .arready(arready),
    .rdata(rdata),
    .rvalid(rvalid),
    .rready(rready),
    .rlast(rlast)
);
URAT_R URAT_R(
    .clk(clk),
    .rstn(rstn),
    .RxD(RxD),
    .data(data_R),
    .valid(valid_R)
);
logic [7:0] data_W;
logic valid_W;
logic ready_W;
URAT_W_axi URAT_W_axi(
    .clk(clk),
    .rstn(rstn),
    .data(data_W),
    .valid(valid_W),
    .ready(ready_W),
    .awaddr(awaddr),
    .awvalid(awvalid),
    .awready(awready),
    .wdata(wdata),
    .wvalid(wvalid),
    .wready(wready),
    .bvalid(bvalid),
    .bready(bready),
    .bresp(bresp)
);
// logic [9:0]cnt;
// always_ff @(posedge clk) begin
//     cnt <= cnt + 1;
// end
URAT_T URAT_T(
    .clk(clk),
    .rstn(rstn),
    // .data(8'h61),
    // .valid((cnt == 10'd0) ? 1'b1 : 1'b0),
    .data(data_W),
    .valid(valid_W),
    .ready(ready_W),
    .TxD(TxD)
);
endmodule