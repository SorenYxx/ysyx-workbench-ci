module RegisterFile (
    input             clk,
    input             rst,

    // ----------- AXI-Lite -----------
    // IFU 端口 (AR + R)
    input      [31:0] ifu_rom_araddr,
    input             ifu_rom_arvalid,
    output            rom_ifu_arready,

    input             ifu_rom_rready,
    output reg [31:0] rom_ifu_rdata,
    output reg        rom_ifu_rvalid,
    output reg [ 1:0] rom_ifu_rresp,

    // LSU 端口 (AR + R + AW + W + B)
    output            ram_lsu_arready,
    input      [31:0] lsu_ram_araddr,
    input             lsu_ram_arvalid,

    input             lsu_ram_rready,
    output reg        ram_lsu_rvalid,
    output     [31:0] ram_lsu_rdata,
    output     [ 1:0] ram_lsu_rresp,

    input      [31:0] lsu_ram_awaddr,
    input             lsu_ram_awvalid,
    output            ram_lsu_awready,

    input      [31:0] lsu_ram_wdata,
    input      [ 3:0] lsu_ram_wstrb,
    input             lsu_ram_wvalid,
    output            ram_lsu_wready,

    output     [ 1:0] ram_lsu_bresp,
    output reg        ram_lsu_bvalid,
    input             lsu_ram_bready

    // --------------------------------
);

    // req 握手
    wire handshake_ifu_ar = ifu_rom_arvalid && rom_ifu_arready;
    wire handshake_lsu_ar = lsu_ram_arvalid && ram_lsu_arready;
    wire handshake_lsu_aw = lsu_ram_awvalid && ram_lsu_awready;
    wire handshake_lsu_w  = lsu_ram_wvalid  && ram_lsu_wready;

    // resp 握手
    wire handshake_ifu_r = rom_ifu_rvalid && ifu_rom_rready && (rom_ifu_rresp == 2'b00);
    wire handshake_lsu_r = ram_lsu_rvalid && lsu_ram_rready && (ram_lsu_rresp == 2'b00);
    wire handshake_lsu_b = ram_lsu_bvalid && lsu_ram_bready && (ram_lsu_bresp == 2'b00);

    // grant 仲裁信号
    localparam IFU_GRANT = 2'b01;
    localparam LSU_GRANT = 2'b10;

    reg        w_pending; // pending for w
    reg [31:0] awaddr_latch;
    reg [ 1:0] grant;

    assign rom_ifu_arready = (grant == IFU_GRANT);
    assign ram_lsu_arready = (grant == LSU_GRANT);
    assign ram_lsu_awready = (grant == LSU_GRANT);
    assign ram_lsu_wready  = (grant == LSU_GRANT);

    // Arbiter
    always @(posedge clk, posedge rst) begin
        if (rst) begin
            awaddr_latch <= 32'b0;
            w_pending    <= 0;
            grant        <= IFU_GRANT;
        end

        // aw 后等 w 握手
        else begin
            if (handshake_lsu_aw) begin
              awaddr_latch <= lsu_ram_awaddr;
              w_pending    <= 1'b1;
            end
            if (handshake_lsu_w) w_pending <= 1'b0;

            // grant 状态机
            case (grant)
                IFU_GRANT:
                if (handshake_ifu_ar) begin
                    if (lsu_ram_arvalid || lsu_ram_awvalid || w_pending) grant <= LSU_GRANT; 
                end
                else grant <= IFU_GRANT;

                LSU_GRANT:
                if (handshake_lsu_w || handshake_lsu_ar) begin
                    if (ifu_rom_arvalid) grant <= IFU_GRANT;
                end
                default: grant <= IFU_GRANT;
            endcase
        end
    end

    // IFU
    always @(posedge clk, posedge rst) begin
        if (rst) begin
            rom_ifu_rdata  <= 32'b0;
            rom_ifu_rvalid <= 1'b0;
            rom_ifu_rresp  <= 2'b0;
        end else begin
            if (handshake_ifu_ar) begin
                rom_ifu_rdata  <= pmem_read(ifu_rom_araddr);
                rom_ifu_rvalid <= 1'b1;
                rom_ifu_rresp  <= 2'b0;
            end
            else if (handshake_ifu_r) rom_ifu_rvalid <= 1'b0;
        end
    end

    // LSU R
    always @(posedge clk, posedge rst) begin
        if (rst) begin
            ram_lsu_rdata  <= 32'b0;
            ram_lsu_rvalid <= 1'b0;
            ram_lsu_rresp  <= 2'b0;
        end else begin
            if (handshake_lsu_ar) begin
                ram_lsu_rdata  <= pmem_read(lsu_ram_araddr);
                ram_lsu_rvalid <= 1'b1;
                ram_lsu_rresp  <= 2'b0;
            end
            else if (handshake_lsu_r) ram_lsu_rvalid <= 1'b0;
        end
    end

    // LSU W
    always @(posedge clk, posedge rst) begin
        if (rst) begin
            ram_lsu_bvalid <= 1'b0;
            ram_lsu_bresp  <= 2'b0;
        end else begin
            if (handshake_lsu_w) begin
                pmem_write(awaddr_latch, lsu_ram_wdata, {28'b0, lsu_ram_wstrb});
                ram_lsu_bvalid <= 1'b1;
                ram_lsu_bresp  <= 2'b0;
            end
            else if (handshake_lsu_b) ram_lsu_bvalid <= 1'b0;
        end
    end

endmodule
