`timescale 1ns/1ps
module URAT_R(
    input  logic clk,
    input  logic rstn,
    input  logic [0:0] RxD,
    output logic [7:0] data,
    output logic [0:0] valid
);
localparam Idle = 2'd0, Check = 2'd1, Receive = 2'd2, Complete = 2'd3;
logic [2:0]cnt;
logic [3:0]cnt1;
logic [1:0]cs;
logic [1:0]ns;
always_ff  @(posedge clk) begin
    if(!rstn)cs <= Idle;
    else cs <= ns;
end
always_comb begin
    valid = 1'b0;
    ns = Idle;
    case(cs)
        Idle: begin
            if(RxD == 1'b0)ns = Check;
            else ns = Idle;
        end
        Check: begin
            if(cnt == 3'd7)ns = Receive;
            else if(RxD == 1'b0)ns = Check;
            else ns = Idle;
        end
        Receive: begin
            if(cnt == 3'd7 && cnt1 == 4'd15)ns = Complete;
            else ns = Receive;
        end
        Complete: begin
            valid = 1;
            ns = Idle;
        end
        default: begin
            ns = Idle;
        end
    endcase
end
always_ff  @(posedge clk) begin
    if(!rstn)cnt <= 3'd0;
    else if(cs == Check)cnt <= cnt + 3'd1;
    else if(cs == Receive && cnt1 == 4'd15)cnt <= cnt + 3'd1;
    else cnt <= 3'd0;

    if(!rstn)cnt1 <= 4'd0;
    else if(cs == Receive)cnt1 <= cnt1 + 4'd1;
    else cnt1 <= 4'd0;

    if(!rstn)data <= 0;
    else if(cs == Receive && cnt1 == 4'd15)data[cnt] <= RxD;
end
endmodule