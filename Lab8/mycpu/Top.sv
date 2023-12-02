`timescale 1ns/1ps
module Top(
    input  [0:0] clk,
    input  [0:0] rstn,
    // input  [0:0] rstn1,
    output [15:0] test,
    output [0:0] TxD,
    input  [0:0] RxD
);
    // AR
    (* DONT_TOUCH= "TRUE" *)logic [31:0] araddr;
    logic [ 0:0] arvalid;
    logic [ 0:0] arready;
    logic [ 7:0] arlen;
    logic [ 2:0] arsize;
    logic [ 1:0] arburst;
    logic [ 3:0] arid;

    // R
    logic [31:0] rdata;
    logic [ 1:0] rresp;
    logic [ 0:0] rvalid;
    logic [ 0:0] rready;
    logic [ 0:0] rlast;
    logic [ 3:0] rid;

    // AW
    logic [31:0] awaddr;
    logic [ 0:0] awvalid;
    logic [ 0:0] awready;
    logic [ 7:0] awlen;
    logic [ 2:0] awsize;
    logic [ 1:0] awburst;
    logic [ 3:0] awid;

    // W
    logic [31:0] wdata;
    logic [ 3:0] wstrb;
    logic [ 0:0] wvalid;
    logic [ 0:0] wready;
    logic [ 0:0] wlast;
    logic [ 3:0] wid;

    // B
    logic [ 1:0] bresp;
    logic [ 0:0] bvalid;
    logic [ 0:0] bready;
    logic [ 3:0] bid;

    logic [ 0:0] commit_wb;
    logic [ 0:0] uncache_read_wb;
    logic [31:0] inst;
    logic [31:0] pc_cur;
    logic [15:0]test1;
    logic [15:0]test2;
    // assign test = {test2[7:0],test1[7:0]};
    // assign test = test1;
    assign test = test1;

    (* DONT_TOUCH= "TRUE" *) logic [31:0] araddr_new ;
    assign araddr_new = araddr[31:28] == 4'ha ? 32'ha0000000 : {4'd0,araddr[27:0]};
    (* DONT_TOUCH= "TRUE" *) logic [31:0] awaddr_new ;
    assign awaddr_new = awaddr[31:28] == 4'ha ? 32'ha0000004 : {4'd0,awaddr[27:0]};

    logic [ 0:0] clk_cpu;
    logic [ 0:0] rstn_cpu;
    clk_wiz_cpu clk_wiz_cpu(
        .resetn(rstn),
        .clk_in1(clk),
        .clk_out1(clk_cpu),
        .locked(rstn_cpu)
    );
    CPU CPU(
        .clk(clk_cpu),
        .rstn(rstn_cpu),
        .test(test1),
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
        .pc_cur(pc_cur)
    );

    Memory Memory(
        .clk(clk),
        .rstn(rstn),
        .clk_cpu(clk_cpu),
        .rstn_cpu(rstn_cpu),

        .test(test2),
        .TxD(TxD),
        .RxD(RxD),

        .araddr(araddr_new),
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
        .awaddr(awaddr_new),
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

    // logic [ 0:0] clk1;
    // logic [31:0] cnt;
    // // 9600 - 5207
    // always_ff @(posedge clk)begin
    //     // if(!rstn1)begin
    //     //     clk1 <= 1'b0;
    //     //     cnt <= 32'd0;
    //     // end
    //     if (cnt == 32'd5207)begin
    //         cnt <= 32'd0;
    //         clk1 <= ~clk1;
    //     end
    //     else begin
    //         cnt <= cnt + 32'd1;
    //     end
    // end

    // logic [ 0:0] clk_wiz;
    // logic [ 0:0] locked;
    // clk_wiz_0 clk_wiz_0(
    //     .resetn(rstn),
    //     .clk_in1(clk),
    //     .clk_out1(clk_wiz),
    //     .locked(locked)
    // );

    // logic [1:0] cs;
    // logic [1:0] ns;
    // localparam Idle = 2'd0, Rstn = 2'd1, Wait = 2'd2, Start = 2'd3;
    // logic [31:0] cnt1,cnt2;
    // always_comb begin
    //     case (cs)
    //         Idle: ns = Rstn;
    //         Rstn: begin
    //             if(cnt1 == 32'd100) ns = Wait;
    //             else ns = Rstn;
    //         end
    //         Wait: begin
    //             if(cnt2 == 32'd100) ns = Start;
    //             else ns = Wait;
    //         end
    //         Start: ns = Start;
    //     endcase
    // end
    // always_ff @(posedge clk_wiz) begin
    //     if(!locked)cs <= Idle;
    //     else cs <= ns;
    // end
    // always_ff @(posedge clk_wiz) begin
    //     if(!locked) cnt1 <= 32'd0;
    //     else if(cs == Rstn) cnt1 <= cnt1 + 1;
    // end
    // always_ff @(posedge clk_wiz) begin
    //     if(!locked) cnt2 <= 32'd0;
    //     else if(cs == Wait) cnt2 <= cnt2 + 1;
    // end
    // logic [0:0] rstn_gen;
    // logic [0:0] start;
    // always_ff @(posedge clk_wiz) begin
    //     if(!locked) rstn_gen <= 0;
    //     else if(cs == Wait) rstn_gen <= 1;
    // end
    // always_ff @(posedge clk_wiz) begin
    //     if(!locked) start <= 0;
    //     else if(cs == Start) start <= 1;
    // end
endmodule