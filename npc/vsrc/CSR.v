module CSR(clk, rst, j_type, csr_addr, csr_wdata, csr_rdata, pc, csr_we);
  input clk;
  input rst;
  input [1:0] j_type;
  input [11:0] csr_addr;
  input [31:0] csr_wdata;
  input [31:0] pc;
  input csr_we;

  output reg [31:0] csr_rdata;

  wire [31:0] mvendorid = 32'h79737978; // "ysyx"
  wire [31:0] marchid = 32'h26010027; // "NO."
  reg [31:0] mcycle;
  reg [31:0] mcycleh;
  reg [31:0] mstatus;
  reg [31:0] mtvec;
  reg [31:0] mepc;
  reg [31:0] mcause;

 // write
  always @(posedge clk, posedge rst) begin
    if (rst) begin
      mcycle  <= 0;
      mcycleh <= 0;
      mstatus <= 0;
      mtvec   <= 0;
      mepc    <= 0;
      mcause  <= 0;
    end

    else begin
      mcycle <= mcycle + 1;
      if (mcycle == 0) begin
        mcycleh <= mcycleh + 1;
      end

      if (csr_we) begin
        case(csr_addr)
          12'h300: mstatus <= csr_wdata;
          12'h305: mtvec   <= csr_wdata;
          12'h341: mepc    <= csr_wdata;
          12'h342: mcause  <= csr_wdata;
          default: ;
        endcase
      end

      if (j_type == 2'b10) begin // ecall
        mepc <= pc;
        mcause <= 32'd11; // M-mode
      end

    end
  end

  // read
  always @(*) begin
    if (j_type == 2'b10) begin // ecall
      csr_rdata = mtvec;
      $display("--------ecall: mtvec = 0x%h", mtvec);
    end else if (j_type == 2'b11) begin // mret
      csr_rdata = mepc;
      $display("--------mret: mepc = 0x%h", mepc);
    end else begin
      case(csr_addr)
        12'hf11: csr_rdata = mvendorid;
        12'hf12: csr_rdata = marchid;
        12'hB00: csr_rdata = mcycle;
        12'hB80: csr_rdata = mcycleh;
        12'h300: csr_rdata = mstatus;
        12'h305: csr_rdata = mtvec;
        12'h341: csr_rdata = mepc;
        12'h342: csr_rdata = mcause;
        default: csr_rdata = 0;
      endcase
    end

  end
endmodule
