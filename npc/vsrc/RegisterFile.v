module RegisterFile (
    input             clk,
    input             rst,

    // ----------- AXI-Lite -----------
    // IFU 端口
    input  reg [31:0] ifu_rom_araddr,
    input             ifu_rom_arvalid,
    output            rom_ifu_arready,

    input             ifu_rom_rready,
    output reg [31:0] rom_ifu_rdata,
    output reg        rom_ifu_rvalid,
    output reg [ 1:0] rom_ifu_rresp,

    // LSU 端口
    output            ram_lsu_arready,
    input      [31:0] lsu_ram_araddr,
    input             lsu_ram_arvalid,

    input             lsu_ram_rready,
    output            ram_lsu_rvalid,
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
    output            ram_lsu_bvalid,
    input             lsu_ram_bready

    // --------------------------------
);

    // 请求通道握手: CPU→存储器
    wire handshake_ifu_req  = ifu_rom_arvalid && rom_ifu_arready;
    wire handshake_lsu_rreq = lsu_ram_arvalid && ram_lsu_arready;
    wire handshake_lsu_wreq = lsu_ram_awvalid && ram_lsu_awready && lsu_ram_wvalid && ram_lsu_wready;

    // 响应通道握手: 存储器→CPU
    wire handshake_ifu_resp  = rom_ifu_rvalid && ifu_rom_rready && (rom_ifu_rresp == 2'b00);
    wire handshake_lsu_rresp = ram_lsu_rvalid && lsu_ram_rready && (ram_lsu_rresp == 2'b00);
    wire handshake_lsu_bresp = ram_lsu_bvalid && lsu_ram_bready && (ram_lsu_bresp == 2'b00);

    // 存储器永远ready
    assign rom_ifu_arready = 1'b1;
    assign ram_lsu_arready = 1'b1;
    assign ram_lsu_awready = 1'b1;
    assign ram_lsu_wready  = 1'b1;

    // ROM
    always @(posedge clk, posedge rst) begin
        if (rst) begin
            rom_ifu_rdata  <= 32'b0;
            rom_ifu_rvalid <= 1'b0;
            rom_ifu_rresp  <= 2'b0;
        end else begin
            if (handshake_ifu_req) begin
                // 请求握手: 接收地址, 读数据, 下一拍回复有效
                rom_ifu_rdata  <= pmem_read(ifu_rom_araddr);
                rom_ifu_rvalid <= 1'b1;
                rom_ifu_rresp  <= 2'b0;
            end else if (handshake_ifu_resp) begin
                // 响应握手: CPU 已取走数据, 清除 valid
                rom_ifu_rvalid <= 1'b0;
            end
        end
    end

    // RAM
    always @(posedge clk, posedge rst) begin
        if (rst) begin
            ram_lsu_rdata  <= 32'b0;
            ram_lsu_rvalid <= 1'b0;
            ram_lsu_rresp  <= 2'b0;
            ram_lsu_bvalid <= 1'b0;
            ram_lsu_bresp  <= 2'b0;
        end
        else begin
            if (handshake_lsu_rreq) begin
                // read 请求
                ram_lsu_rdata  <= pmem_read(lsu_ram_araddr);
                ram_lsu_rvalid <= 1'b1;
                ram_lsu_rresp  <= 2'b0;
            end
            else if (handshake_lsu_rresp) begin
                // read 响应
                ram_lsu_rresp <= 2'b0;
            end
            
            if (handshake_lsu_wreq) begin
                // write
                pmem_write(lsu_ram_awaddr, lsu_ram_wdata, {28'b0, lsu_ram_wstrb});
                ram_lsu_bvalid <= 1'b1;
            end
            else if (handshake_lsu_bresp) begin
                // write 响应
                ram_lsu_bresp <= 2'b0;
            end
        end
    end

endmodule
