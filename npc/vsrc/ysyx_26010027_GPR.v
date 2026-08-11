module ysyx_26010027_GPR #(
    parameter ADDR_WIDTH = 5,
    parameter DATA_WIDTH = 32
) (
    input                        clock,
    input                        reset,
    input      [ADDR_WIDTH-1:0]  waddr,
    input      [DATA_WIDTH-1:0]  wdata,
    input                        wen,
    input      [ADDR_WIDTH-1:0]  raddr1,
    input      [ADDR_WIDTH-1:0]  raddr2,
    output     [DATA_WIDTH-1:0]  rdata1,
    output     [DATA_WIDTH-1:0]  rdata2
);

    reg [DATA_WIDTH-1:0] rf [15:0];

    integer i;
    always @(posedge clock, posedge reset) begin
        if (reset) begin
            for (i = 0; i < 16; i = i + 1) begin
                rf[i] <= 0;
            end
        end else if (wen && (waddr != 0)) begin
            rf[waddr[3:0]] <= wdata;
            get_reg({27'b0, waddr}, wdata);
        end
    end

    assign rdata1 = (raddr1 == 0) ? 0 : rf[raddr1[3:0]];
    assign rdata2 = (raddr2 == 0) ? 0 : rf[raddr2[3:0]];

endmodule
