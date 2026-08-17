module ysyx_26010027_CSR (
    input              clock,
    input              reset,
    input              csr_ecall,
    input              csr_mret,
    input       [11:0] csr_raddr,
    input       [11:0] csr_waddr,
    input       [31:0] csr_wdata,
    output reg  [31:0] csr_rdata,
    output      [31:0] csr_mtvec,
    output      [31:0] csr_mepc,
    input       [31:0] pc,
    input  wire        csr_we

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
            mc <= mc + 1;

            if (csr_ecall) begin  // ecall
                mepc   <= pc;
                mcause <= 32'd11;  // M-mode
                get_csr({20'b0, 12'h341}, pc);
                get_csr({20'b0, 12'h342}, 32'd11);
            end else if (csr_we && !csr_ecall && !csr_mret) begin
                get_csr({20'b0, csr_waddr}, csr_wdata);
                case (csr_waddr)
                    12'h300: mstatus <= csr_wdata;
                    12'h305: mtvec   <= csr_wdata;
                    12'h341: mepc    <= csr_wdata;
                    12'h342: mcause  <= csr_wdata;
                    default: $display("Warning: Write to unknown CSR address %h", csr_waddr);
                endcase
            end
        end
    end

    // Read
    assign csr_rdata = (csr_raddr == 12'hf11) ? mvendorid :
                       (csr_raddr == 12'hf12) ? marchid :
                       (csr_raddr == 12'hB00) ? mcycle :
                       (csr_raddr == 12'hB80) ? mcycleh :
                       (csr_raddr == 12'h300) ? mstatus :
                       (csr_raddr == 12'h305) ? mtvec :
                       (csr_raddr == 12'h341) ? mepc :
                       (csr_raddr == 12'h342) ? mcause : 0;

    assign csr_mtvec = mtvec;
    assign csr_mepc  = mepc;

endmodule
