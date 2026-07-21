module ysyx_26010027_SRAM (
    input             clock,
    input             reset,

    // ----------- AXI-Lite -----------
    input      [31:0] io_slave_araddr,
    input             io_slave_arvalid,
    output            io_slave_arready,

    input             io_slave_rready,
    output reg [31:0] io_slave_rdata,
    output reg        io_slave_rvalid,
    output reg [ 1:0] io_slave_rresp,

    input      [31:0] io_slave_awaddr,
    input             io_slave_awvalid,
    output            io_slave_awready,

    input      [31:0] io_slave_wdata,
    input      [ 3:0] io_slave_wstrb,
    input             io_slave_wvalid,
    output            io_slave_wready,

    output     [ 1:0] io_slave_bresp,
    output reg        io_slave_bvalid,
    input             io_slave_bready,

    output reg        w_pending

    // --------------------------------
);
    wire handshake_ar = io_slave_arvalid && io_slave_arready;
    wire handshake_r  = io_slave_rvalid && io_slave_rready;
    wire handshake_aw = io_slave_awvalid && io_slave_awready;
    wire handshake_w  = io_slave_wvalid && io_slave_wready;
    wire handshake_b  = io_slave_bvalid && io_slave_bready;

    assign io_slave_arready = io_slave_arvalid;
    assign io_slave_awready = io_slave_awvalid && !w_pending;
    assign io_slave_wready  = io_slave_wvalid && w_pending;

    // read
    always @(posedge clock, posedge reset) begin
        if (reset) begin
            io_slave_rdata  <= 32'b0;
            io_slave_rvalid <= 1'b0;
            io_slave_rresp  <= 2'b0;
        end else begin
            if (handshake_ar) begin
                io_slave_rdata  <= pmem_read(io_slave_araddr);
                io_slave_rvalid <= 1'b1;
                io_slave_rresp  <= 2'b0;
            end
            else if (handshake_r) io_slave_rvalid <= 1'b0;
        end
    end

    // write
    reg [31:0] awaddr_latch;

    always @(posedge clock, posedge reset) begin
        if (reset) begin
            awaddr_latch <= 32'b0;
            w_pending    <= 1'b0;
        end
        else begin
            if (handshake_aw) begin
                awaddr_latch <= io_slave_awaddr;
                w_pending    <= 1'b1;
            end
            if (handshake_w) w_pending <= 1'b0;
        end
    end

    always @(posedge clock, posedge reset) begin
        if (reset) begin
            io_slave_bvalid <= 1'b0;
            io_slave_bresp  <= 2'b0;
        end else begin
            if (handshake_w) begin
                pmem_write(awaddr_latch, io_slave_wdata, {28'b0, io_slave_wstrb});
                io_slave_bvalid <= 1'b1;
                io_slave_bresp  <= 2'b0;
            end
            else if (handshake_b) io_slave_bvalid <= 1'b0;
        end
    end

endmodule
