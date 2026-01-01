module bcd7seg(
  input  [3:0] b,
  output reg [6:0] hb
);
  reg [6:0] h;
  always @(*) begin
    case (b)
        4'b0000: h = 7'b1111110; // 0 - 显示数字0
        4'b0001: h = 7'b0110000; // 1 - 显示数字1
        4'b0010: h = 7'b1101101; // 2 - 显示数字2
        4'b0011: h = 7'b1111001; // 3 - 显示数字3
        4'b0100: h = 7'b0110011; // 4 - 显示数字4
        4'b0101: h = 7'b1011011; // 5 - 显示数字5
        4'b0110: h = 7'b1011111; // 6 - 显示数字6
        4'b0111: h = 7'b1110000; // 7 - 显示数字7
        4'b1000: h = 7'b1111111; // 8 - 显示数字8
        4'b1001: h = 7'b1111011; // 9 - 显示数字9

        default: h = 7'b0000000;
    endcase
  end

  assign hb = ~h;

endmodule

module ep(x,en,y,HEX0);
  input  [7:0] x;
  input  en;
  output reg [2:0] y;
  output [6:0]HEX0;//七段数码管译码器结果

  //编码器部分
  always @(x or en) begin
    if (en) begin
      casez (x)
          8'b00000001 : y = 3'b000;
          8'b0000001? : y = 3'b001;
          8'b000001?? : y = 3'b010;
          8'b00001??? : y = 3'b011;
	  8'b0001???? : y = 3'b100;
	  8'b001????? : y = 3'b101;
	  8'b01?????? : y = 3'b110;
	  8'b1??????? : y = 3'b111;
          default: y = 3'b000;
      endcase
    end
    else  y = 3'b000;
  end

  //七段数码管部分(模块实例化)
  wire [3:0] cpudbgdata = {1'b0, y};//译码前

  bcd7seg seg0(cpudbgdata[3:0],HEX0);
//    assign HEX0 = 7'b1101111;
endmodule


