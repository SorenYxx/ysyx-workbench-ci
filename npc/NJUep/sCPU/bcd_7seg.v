module bcd7seg(
  input reg [7:0] b,
  output reg [6:0] h
);

  reg [6:0] h0;
  always @(*) begin
    case (b)
        8'd0: h = 7'b0111111; 
        8'd1: h = 7'b0000110;
        8'd2: h = 7'b1011011;
        8'd3: h = 7'b1001111;
        8'd4: h = 7'b1100110;
        8'd5: h = 7'b1101101;
        8'd6: h = 7'b1111101;
        8'd7: h = 7'b0000111;
        8'd8: h = 7'b1111111;
        8'd9: h = 7'b1101111;

	default: h = 7'b0000000;
    endcase
  assign h0 = ~h;
  assign h = h0;
  end

endmodule
