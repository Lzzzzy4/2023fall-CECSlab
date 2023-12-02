`timescale 1ns/1ps
module URAT_T(
    input  logic clk,
    input  logic rstn,
    input  logic [7:0] data,
    input  logic [0:0] valid,
    output logic [0:0] ready,
    output logic [0:0] TxD
);
localparam Idle = 2'd0, Start = 2'd1, Send = 2'd2, Stop = 2'd3;
logic [2:0]cnt;
logic [1:0]cs;
logic [1:0]ns;
logic [7:0]data_reg;
always_ff  @(posedge clk) begin
    if(!rstn)cs <= Idle;
    else cs <= ns;
end
always_comb begin
    ready = 1'b1;
    TxD = 1'b1;
    ns = Idle;
    case(cs)
        Idle: begin
            if(valid)ns = Start;
            else ns = Idle;
        end
        Start: begin
            ready = 1'b0;
            TxD = 1'b0;
            ns = Send;
        end
        Send: begin
            ready = 1'b0;
            TxD = data_reg[cnt];
            if(cnt == 3'd7)ns = Stop;
            else ns = Send;
        end
        Stop: begin
            ready = 1'b0;
            ns = Idle;
        end
        default: begin
            ns = Idle;
        end
    endcase
end
always_ff @(posedge clk) begin
    if(!rstn)cnt <= 3'd0;
    else if(cs == Send)cnt <= cnt + 3'd1;
    else cnt <= 3'd0;
    
    if(!rstn)data_reg <= 8'd0;
    else if(cs == Start)data_reg <= data;
end
endmodule