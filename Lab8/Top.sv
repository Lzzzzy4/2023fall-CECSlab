`timescale 1ns/1ps
module Top(
    input  [0:0] clk,
    input  [0:0] rstn,
    output [14:0] test,
    output [0:0] TxD,
    input  [0:0] RxD
);
    // AR
    logic [31:0] araddr;
    logic [ 0:0] arvalid;
    logic [ 0:0] arready;
    logic [ 7:0] arlen;
    logic [ 2:0] arsize;
    logic [ 1:0] arburst;

    // R
    logic [31:0] rdata;
    logic [ 1:0] rresp;
    logic [ 0:0] rvalid;
    logic [ 0:0] rready;
    logic [ 0:0] rlast;

    // AW
    logic [31:0] awaddr;
    logic [ 0:0] awvalid;
    logic [ 0:0] awready;
    logic [ 7:0] awlen;
    logic [ 2:0] awsize;
    logic [ 1:0] awburst;

    // W
    logic [31:0] wdata;
    logic [ 3:0] wstrb;
    logic [ 0:0] wvalid;
    logic [ 0:0] wready;
    logic [ 0:0] wlast;

    // B
    logic [ 1:0] bresp;
    logic [ 0:0] bvalid;
    logic [ 0:0] bready;

    logic [ 0:0] commit_wb;
    logic [ 0:0] uncache_read_wb;
    logic [31:0] inst;
    logic [31:0] pc_cur;
    logic [31:0] pc_cur1;
    assign test = pc_cur1[14:0];

    logic [ 0:0] clk1;
    logic [31:0] cnt;
    always_ff @(posedge clk)begin
        if(!rstn)begin
            cnt <= 32'd0;
            clk1 <= 1'b0;
        end
        else if (cnt == 32'd5207)begin
            cnt <= 32'd0;
            clk1 <= ~clk1;
        end
        else begin
            cnt <= cnt + 32'd1;
        end
    end

    CPU CPU(
        .clk(clk),
        // .clk(clk1),
        .rstn(rstn),
        .araddr(araddr),
        .arvalid(arvalid),
        .arready(arready),
        .arlen(arlen),
        .arsize(arsize),
        .arburst(arburst),
        .rdata(rdata),
        .rresp(rresp),
        .rvalid(rvalid),
        .rready(rready),
        .rlast(rlast),
        .awaddr(awaddr),
        .awvalid(awvalid),
        .awready(awready),
        .awlen(awlen),
        .awsize(awsize),
        .awburst(awburst),
        .wdata(wdata),
        .wstrb(wstrb),
        .wvalid(wvalid),
        .wready(wready),
        .wlast(wlast),
        .bresp(bresp),
        .bvalid(bvalid),
        .bready(bready),
        .commit_wb(commit_wb),
        .uncache_read_wb(uncache_read_wb),
        .inst(inst),
        .pc_cur1(pc_cur1),
        .pc_cur(pc_cur)
    );

    Memory Memory(
        .clk(clk),
        // .clk(clk1),
        .rstn(rstn),
        .TxD(TxD),
        .RxD(RxD),
        .araddr(araddr),
        .arvalid(arvalid),
        .arready(arready),
        .arlen(arlen),
        .arsize(arsize),
        .arburst(arburst),
        .rdata(rdata),
        .rresp(rresp),
        .rvalid(rvalid),
        .rready(rready),
        .rlast(rlast),
        .awaddr(awaddr),
        .awvalid(awvalid),
        .awready(awready),
        .awlen(awlen),
        .awsize(awsize),
        .awburst(awburst),
        .wdata(wdata),
        .wstrb(wstrb),
        .wvalid(wvalid),
        .wready(wready),
        .wlast(wlast),
        .bresp(bresp),
        .bvalid(bvalid),
        .bready(bready)
    );
endmodule