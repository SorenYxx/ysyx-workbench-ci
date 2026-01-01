module sCPU_ROM(pc, data);
    input [3:0] pc;
    output reg [7:0] data;

    always @(*) begin
	case (pc)
	    0: data = 8'b10001010;
	    1: data = 8'b10010000;
	    2: data = 8'b10100000;
	    3: data = 8'b10110001;
	    4: data = 8'b00010111;
	    5: data = 8'b00101001;
	    6: data = 8'b11010001;
	    7: data = 8'b11011111;
	endcase
    end
endmodule	    

