module RegisterFile (
    input             clk,
    input             rst,

    // IFU 端口
    input  reg [31:0] ifu_rom_raddr,
    output reg [31:0] rom_ifu_rdata,

    input             ifu_rom_reqValid,
    output reg        rom_ifu_respValid,
    input             ifu_rom_respReady,
    output            rom_ifu_reqReady,


    // LSU 端口
    input  reg [31:0] lsu_ram_addr,
    input             lsu_ram_wen,
    input  reg [31:0] lsu_ram_wdata,
    input  reg [ 3:0] lsu_ram_wmask,
    output reg [31:0] ram_lsu_rdata,

    input             lsu_ram_reqValid,
    output reg        ram_lsu_respValid,
    input             lsu_ram_respReady,
    output            ram_lsu_reqReady

);

    // 请求通道握手: CPU→存储器
    wire handshake_ifu_req = ifu_rom_reqValid && rom_ifu_reqReady;
    wire handshake_lsu_req = lsu_ram_reqValid && ram_lsu_reqReady;

    // 响应通道握手: 存储器→CPU
    wire handshake_ifu_resp = rom_ifu_respValid && ifu_rom_respReady;
    wire handshake_lsu_resp = ram_lsu_respValid && lsu_ram_respReady;

    // 存储器永远ready
    assign rom_ifu_reqReady = 1'b1;
    assign ram_lsu_reqReady = 1'b1;

    // ROM
    always @(posedge clk, posedge rst) begin
        if (rst) begin
            rom_ifu_rdata     <= 32'b0;
            rom_ifu_respValid <= 1'b0;
        end else begin
            if (handshake_ifu_req) begin
                // 请求握手: 接收地址, 读数据, 下一拍回复有效
                rom_ifu_rdata     <= pmem_read(ifu_rom_raddr);
                rom_ifu_respValid <= 1'b1;
            end else if (handshake_ifu_resp) begin
                // 响应握手: CPU 已取走数据, 清除 valid
                rom_ifu_respValid <= 1'b0;
            end
        end
    end

    // RAM
    always @(posedge clk, posedge rst) begin
        if (rst) begin
            ram_lsu_rdata     <= 32'b0;
            ram_lsu_respValid <= 1'b0;
        end else begin
            if (handshake_lsu_req) begin
                if (!lsu_ram_wen) begin
                    // read
                    ram_lsu_rdata     <= pmem_read(lsu_ram_addr);
                    ram_lsu_respValid <= 1'b1;
                end else begin
                    // write
                    pmem_write(lsu_ram_addr, lsu_ram_wdata, {28'b0, lsu_ram_wmask});
                    ram_lsu_respValid <= 1'b1;
                    ram_lsu_rdata     <= 32'b0;
                end
            end else if (handshake_lsu_resp) begin
                ram_lsu_respValid <= 1'b0;
            end
        end
    end

endmodule
