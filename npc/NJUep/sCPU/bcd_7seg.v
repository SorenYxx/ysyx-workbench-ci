module bcd7seg(
  input [7:0] b,  
  output [6:0] h 
);

  reg [6:0] h_temp;   
  wire [6:0] h0;  
  
  always @(*) begin
    case (b)
        8'd0: h_temp = 7'b0111111; 
        8'd1: h_temp = 7'b0000110;
        8'd2: h_temp = 7'b1011011;
        8'd3: h_temp = 7'b1001111;
        8'd4: h_temp = 7'b1100110;
        8'd5: h_temp = 7'b1101101;
        8'd6: h_temp = 7'b1111101;
        8'd7: h_temp = 7'b0000111;
        8'd8: h_temp = 7'b1111111;
        8'd9: h_temp = 7'b1101111;
        default: h_temp = 7'b0000000;
    endcase
  end
  
  assign h0 = ~h_temp;
  assign h = h0;

endmodule
