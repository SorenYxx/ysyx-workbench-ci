module bcd7seg(
  input  [3:0] b,
  output reg [6:0] t
);
  reg [6:0]h;
  always @(*) begin
    case (b)
        4'b0000: h = 7'b0111111;
        4'b0001: h = 7'b0000110;
        4'b0010: h = 7'b1011011;
        4'b0011: h = 7'b1001111;
        4'b0100: h = 7'b1100110;
        4'b0101: h = 7'b1101101;
        4'b0110: h = 7'b1111101;
        4'b0111: h = 7'b0000111;
        4'b1000: h = 7'b1111111;
        4'b1001: h = 7'b1101111;

	default: h = 7'b0000000;
    endcase 
  end
  
  assign t = ~h;

endmodule
