`include "./include/config.sv"
module CSR(
    input  logic [ 0:0] clk,
    input  logic [ 0:0] rstn,
    input  logic [11:0] raddr,
    input  logic [11:0] waddr,
    input  logic [ 0:0] we,
    input  logic [31:0] wdata,
    output logic [31:0] rdata,
    output logic [31:0] mepc_out,
    input  logic [31:0] pc_wb,
    output logic [31:0] mtvec_out,
    input  logic [31:0] mcause_in,
    input  logic [ 4:0] priv_vec_wb
    // Lab4 TODO: you need to add some input or output pors to implement CSRs' special functions
);
    import "DPI-C" function void set_csr_ptr(input logic [31:0] m1 [], input logic [31:0] m2 [], input logic [31:0] m3 [], input logic [31:0] m4 []);

    reg [31:0] mstatus;
    always_ff @(posedge clk) begin
        if(!rstn) begin
            mstatus <= 32'h0;
        end
        else if(|mcause_in) begin
            mstatus <= {mstatus[31:12], mstatus[8:0], 3'h6};
        end
        else if(priv_vec_wb[`MRET]) begin
            mstatus <= {mstatus[31:12], 3'h1, mstatus[11:3]};
        end
        else if(waddr == `CSR_MSTATUS && we) begin
            mstatus <= wdata;
        end
    end

    reg [31:0] mtvec;
    assign mtvec_out = mtvec;
    always_ff @(posedge clk) begin
        if(!rstn) begin
            mtvec <= 32'h0;
        end
        else if(waddr == `CSR_MTVEC && we) begin
            mtvec <=  wdata;
        end
    end

    reg [31:0] mcause;
    always_ff @(posedge clk) begin
        if(!rstn) begin
            mcause <= 32'h0;
        end
        else if(|mcause_in) begin
            mcause <= mcause_in;
        end
        else if(waddr == `CSR_MCAUSE && we) begin
            mcause <= wdata;
        end
    end

    reg [31:0] mepc;
    assign mepc_out = mepc;
    always_ff @(posedge clk) begin
        if(!rstn) begin
            mepc <= 32'h0;
        end
        else if(|mcause_in) begin
            mepc <= pc_wb;
        end
        else if(waddr == `CSR_MEPC && we) begin
            mepc <= wdata;
        end
    end

    // read
    always_comb begin
        case(raddr)
            `CSR_MSTATUS: rdata = mstatus;
            `CSR_MTVEC  : rdata = mtvec;
            `CSR_MCAUSE : rdata = mcause;
            `CSR_MEPC   : rdata = mepc;
            default     : rdata = 32'h0;
        endcase
    end
    initial begin
        set_csr_ptr(mstatus, mtvec, mepc, mcause);
    end
endmodule