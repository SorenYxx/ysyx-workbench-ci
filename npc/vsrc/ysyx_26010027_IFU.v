`ifdef TOP_SOC
  `define PC_START 32'h3000_0000;
`else
  `define PC_START 32'h8000_0000;
`endif

module ysyx_26010027_IFU (
    input             clock,
    input             reset,
    input      [31:0] n_pc,
    output reg [31:0] pc,
    output     [31:0] inst,

    // ----------- AXI4 -----------
    input             cpu_ifu_arready,
    output     [31:0] ifu_cpu_araddr,
    output            ifu_cpu_arvalid,
    output     [ 3:0] ifu_cpu_arid,
    output     [ 7:0] ifu_cpu_arlen,
    output     [ 2:0] ifu_cpu_arsize,
    output     [ 1:0] ifu_cpu_arburst,

    input             cpu_ifu_rvalid,
    output            ifu_cpu_rready,
    input      [31:0] cpu_ifu_rdata,
    input      [ 1:0] cpu_ifu_rresp,
    input      [ 3:0] cpu_ifu_rid,
    input             cpu_ifu_rlast,
    // --------------------------------

    output            ifu_stall,
    input             lsu_stall

);

    reg [1:0] state;
    localparam IDLE = 2'b00;
    localparam WAIT = 2'b01;

    wire handshake_ar = ifu_cpu_arvalid && cpu_ifu_arready;
    wire handshake_r  = cpu_ifu_rvalid && ifu_cpu_rready && (cpu_ifu_rresp == 2'b00);

    reg lsu_pending;

    always @(posedge clock, posedge reset) begin
        if (reset) begin
            state       <= IDLE;
            pc          <= `PC_START;
            lsu_pending <= 1'b0;
        end else begin
            case (state)
                IDLE: begin
                    if (handshake_ar && !lsu_stall) begin
                        state <= WAIT;
                    end
                end
                WAIT: begin
                    if (lsu_stall) begin
                        lsu_pending <= 1'b1;
                    end else if (handshake_r) begin
                        pc    <= n_pc;
                        state <= IDLE;
                        lsu_pending <= 1'b0;
                    end else if (lsu_pending && !lsu_stall) begin
                        pc    <= n_pc;
                        state <= IDLE;
                        lsu_pending <= 1'b0;
                    end
                end
                default: state <= IDLE;
            endcase
        end
    end

    // inst 锁存
    reg [31:0] inst_latch;
    always @(posedge clock, posedge reset) begin
        if (reset)
            inst_latch <= 32'h0;
        else if (cpu_ifu_rvalid)
            inst_latch <= cpu_ifu_rdata;
    end

    assign ifu_cpu_araddr  = pc;
    assign ifu_cpu_arvalid = (state == IDLE);
    assign ifu_cpu_rready  = (state == WAIT);
    assign ifu_cpu_arid    = 4'h0;
    assign ifu_cpu_arlen   = 8'h0;
    assign ifu_cpu_arsize  = 3'b010;
    assign ifu_cpu_arburst = 2'b01;
    assign ifu_stall       = !cpu_ifu_rvalid && !lsu_pending;
    assign inst            = cpu_ifu_rvalid ? cpu_ifu_rdata : inst_latch;

endmodule
