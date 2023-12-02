`timescale 1ns/1ps
module URAT_R_axi(
    input  logic clk,
    input  logic rstn,

    // UART_R
    input  logic [ 7:0] data,
    input  logic [ 0:0] valid,
    
    //axi
    input  logic [ 0:0] arvalid,
    output logic [ 0:0] arready,

    output logic [31:0] rdata,
    output logic [ 0:0] rvalid,
    input  logic [ 0:0] rready,
    output logic [ 0:0] rlast
);
logic [7:0] data_reg;
logic clk_urat;
logic [3:0]cnt;
always_ff @(posedge clk)begin
    if(!rstn) cnt <= 0;
    else cnt <= cnt + 1;
end
assign clk_urat = cnt[3];
always_ff @(posedge clk_urat)begin
    if(!rstn)data_reg <= 8'd0;
    else if(valid)data_reg <= data;
end
assign rdata = {24'd0, data_reg};
localparam Idle = 3'd0, ar = 3'd1, r = 3'd2;
logic [2:0]cs;
logic [2:0]ns;
always_comb begin
    case (cs)
        Idle: begin
            if(arvalid)ns = ar;
            else ns = Idle;
        end
        ar: begin
            if(rready)ns = Idle; //**
            else ns = ar;
        end
        r: begin
            ns = Idle;
        end 
        default: ns  = Idle;
    endcase
end
always_ff  @(posedge clk) begin
    if(!rstn)cs <= Idle;
    else cs <= ns;
end
always_comb begin
    arready = 1'b0;
    rvalid = 1'b0;
    rlast = 1'b0;
    case (cs)
        Idle: begin
            arready = 1;
        end
        ar: begin
            rvalid = 1;
            rlast = 1;
        end
        r: begin
            // rvalid = 1;
            // rlast = 1;
        end
        default: begin
            
        end
    endcase
end

endmodule