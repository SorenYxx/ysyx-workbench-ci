module ysyx_26010027_GPR #(
    parameter ADDR_WIDTH = 4,
    parameter DATA_WIDTH = 32
) (
    input               clock,
    input               reset,
    input       [ 4:0]  waddr,
    input       [31:0]  wdata,
    input               wen,
    input       [ 4:0]  raddr1,
    input       [ 4:0]  raddr2,
    output      [31:0]  rdata1,
    output      [31:0]  rdata2
);

    reg [DATA_WIDTH-1:0] rf [15:0];

    integer i;
    always @(posedge clock, posedge reset) begin
        if (reset) begin
            for (i = 0; i < 16; i = i + 1) begin
                rf[i] <= 0;
            end
        end else if (wen && (waddr != 0)) begin
            rf[waddr[ADDR_WIDTH-1:0]] <= wdata;
`ifndef SYNTHESIS
            get_reg({27'b0, waddr}, wdata);
`endif
        end
    end

    assign rdata1 = (raddr1 == 0) ? 0 : rf[raddr1[ADDR_WIDTH-1:0]];
    assign rdata2 = (raddr2 == 0) ? 0 : rf[raddr2[ADDR_WIDTH-1:0]];

endmodule
