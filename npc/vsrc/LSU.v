module LSU (
    input             clk,
    input      [ 1:0] mem_w,
    input      [ 2:0] mem_r,
    input      [31:0] addr,
    input      [31:0] wdata,

    output reg [31:0] out_data
);

    wire [31:0] awdata  = (mem_w != 2'b00) ? (wdata << (addr[1:0] * 8)) : wdata;
    wire [31:0] full_addr = addr;
    wire [31:0] rdata  = pmem_read(full_addr);
    wire [31:0] data_s = rdata >> (addr[1:0] * 8);

    always @(*) begin
        case (mem_r)
            3'd0: out_data = data_s;                              // lw
            3'd1: out_data = {{24{data_s[7]}},  data_s[7:0]};    // lb
            3'd2: out_data = {{16{data_s[15]}}, data_s[15:0]};   // lh
            3'd3: out_data = {24'b0,            data_s[7:0]};    // lbu
            3'd4: out_data = {16'b0,            data_s[15:0]};   // lhu
            default: out_data = 0;
        endcase
    end

    always @(posedge clk) begin
        if (mem_w != 2'b11) begin
            case (mem_w)
                2'b00: pmem_write(full_addr, awdata, 8'h0F);                       // sw
                2'b01: pmem_write(full_addr, awdata, (8'h01 << addr[1:0]));        // sb
                2'b10: pmem_write(full_addr, awdata, (8'h03 << addr[1:0]));        // sh
                default: ;
            endcase
        end
    end

endmodule
