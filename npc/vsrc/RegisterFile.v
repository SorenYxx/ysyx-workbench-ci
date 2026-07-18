module RegisterFile (
    input             clk,

    input  reg [31:0] ifu_raddr,
    output reg [31:0] ifu_rdata,
    input             ifu_reqValid,
    output            ifu_respValid,

    input  reg [31:0] lsu_addr,
    input             lsu_wen,
    input  reg [31:0] lsu_wdata,
    input  reg [ 3:0] lsu_wmask,
    output reg [31:0] lsu_rdata,
    input             lsu_reqValid,
    output            lsu_respValid

);

    always @(posedge clk) begin
        //IFU
        ifu_rdata     <= pmem_read(ifu_raddr);
        ifu_respValid <= ifu_reqValid;

        //LSU
        lsu_rdata <= (!lsu_wen && lsu_reqValid) ? pmem_read(lsu_addr) : 32'b0;
        if (lsu_wen && lsu_reqValid) begin
            pmem_write(lsu_addr, lsu_wdata, {28'b0, lsu_wmask});
        end
        lsu_respValid <= lsu_reqValid;
    end

endmodule
