module IFU (
    input      [31:0] pc,
    output reg [31:0] inst
);

    always @(*) inst = pmem_read(pc);

endmodule
