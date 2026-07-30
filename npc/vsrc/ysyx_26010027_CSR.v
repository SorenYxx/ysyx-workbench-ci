module ysyx_26010027_CSR (
    input             clock,
    input             reset,
    input      [ 1:0] j_type,
    input      [11:0] csr_addr,
    input      [31:0] csr_wdata,
    input      [31:0] pc,
    input             csr_we,

    input             ifu_stall,

    output reg [31:0] csr_rdata,
    output     [31:0] out_mepc,
    output     [31:0] out_mtvec
);

    reg [31:0] mvendorid = 32'h79737978;  // "ysyx"
    reg [31:0] marchid   = 32'h18CE1AB;   // "26010027"

    reg [31:0] mstatus;
    reg [31:0] mtvec;
    reg [31:0] mepc;
    reg [31:0] mcause;
    reg [63:0] mc;

    wire [31:0] mcycle  = mc[31:0];
    wire [31:0] mcycleh = mc[63:32];

    // Write
    always @(posedge clock, posedge reset) begin
        if (reset) begin
            mc      <= 0;
            mstatus <= 0;
            mtvec   <= 0;
            mepc    <= 0;
            mcause  <= 0;
        end else begin
            mc <= ifu_stall ? mc : mc + 1;

            if (j_type == 2'b10 && !ifu_stall) begin  // ecall
                mepc   <= pc;
                mcause <= 32'd11;  // M-mode
                get_csr({20'b0, 12'h341}, pc);
                get_csr({20'b0, 12'h342}, 32'd11);
            end else if (csr_we && j_type == 2'b00 && !ifu_stall) begin
                get_csr({20'b0, csr_addr}, csr_wdata);
                case (csr_addr)
                    12'h300: mstatus <= csr_wdata;
                    12'h305: mtvec   <= csr_wdata;
                    12'h341: mepc    <= csr_wdata;
                    12'h342: mcause  <= csr_wdata;
                    default: ;
                endcase
            end
        end
    end

    // Read
    always @(*) begin
        case (csr_addr)
            12'hf11: csr_rdata = mvendorid;
            12'hf12: csr_rdata = marchid;
            12'hB00: csr_rdata = mcycle;
            12'hB80: csr_rdata = mcycleh;
            12'h300: csr_rdata = mstatus;
            12'h305: csr_rdata = mtvec;
            12'h341: csr_rdata = mepc;
            12'h342: csr_rdata = mcause;
            default: csr_rdata = 0;
        endcase
    end

    assign out_mepc  = mepc;
    assign out_mtvec = mtvec;

endmodule
