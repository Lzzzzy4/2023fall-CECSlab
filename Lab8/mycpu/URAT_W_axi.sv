`timescale 1ns/1ps
module URAT_W_axi(
    input  logic clk,
    input  logic rstn,

    // UART_T
    output logic [ 7:0] data,
    output logic [ 0:0] valid,
    input  logic [ 0:0] ready,
    
    //axi
    input  logic [31:0] awaddr,
    input  logic [ 0:0] awvalid,
    output logic [ 0:0] awready,

    input  logic [31:0] wdata,
    input  logic [ 0:0] wvalid,
    output logic [ 0:0] wready,

    output  logic [ 0:0] bvalid,
    input   logic [ 0:0] bready,
    output  logic [ 1:0] bresp
);
// awlen = 0;
localparam Idle = 3'd0, aw = 3'd1, w = 3'd2, b = 3'd3;
logic [2:0]cs;
logic [2:0]ns;
// logic [7:0]din;
// always_comb begin
//     case (awaddr[1:0])
//         2'b00: din = wdata[ 7: 0];
//         2'b01: din = wdata[15: 8];
//         2'b10: din = wdata[23:16];
//         2'b11: din = wdata[31:24]; 
//         default: din = 0;
//     endcase
// end
always_ff  @(posedge clk) begin
    if(!rstn)cs <= Idle;
    else cs <= ns;
end
always_comb begin
    case (cs)
        Idle: begin
            if(awvalid)ns = aw;
            else ns = Idle;
        end
        aw: begin
            if(wvalid)ns = w;
            else ns = aw;
        end
        w: begin
            if(ready)ns = b;
            else ns = w;
        end
        b: begin
            if(bready)ns = Idle;
            else ns = b;
        end
        default: ns = Idle;
    endcase
end
always_ff  @(posedge clk) begin
    if(!rstn)data <= 8'd0;
    else if(cs == aw && wvalid)data <= wdata[ 7: 0];
end
always_comb begin
    awready = 1'b0;
    wready = 1'b0;
    bvalid = 1'b0;
    bresp = 2'b0;
    valid = 1'b0;
    case (cs)
        Idle: begin
            awready = 1;
        end
        aw: begin
            wready = 1;
        end
        w: begin
            valid = 1;
        end
        b: begin
            bvalid = 1;
        end
        default: begin

        end
    endcase
end
endmodule