module RegisterFile (
    input             clk,

    input  reg [31:0] ifu_raddr,
    output reg [31:0] ifu_rdata,

    input  reg [31:0] lsu_addr,
    input             lsu_wen,
    input  reg [31:0] lsu_wdata,
    input  reg [ 3:0] lsu_wmask,
    output reg [31:0] lsu_rdata

);

    always @(posedge clk) begin
        //IFU
        ifu_rdata <= pmem_read(ifu_raddr);

        //LSU
        lsu_rdata <= (!lsu_wen) ? pmem_read(lsu_addr) : 32'b0;
        if (lsu_wen) begin
            pmem_write(lsu_addr, lsu_wdata, {28'b0, lsu_wmask});
        end
    end

endmodule
