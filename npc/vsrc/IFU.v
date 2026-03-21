module IFU(pc, inst);
  input [31:0] pc;
  output reg [31:0] inst;
  
  always @(*) inst = pmem_read(pc);
    //$display("pc: 0x%h  inst: 0x%h\n", pc, inst);
  
endmodule
