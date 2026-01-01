module ep(a, en, o, b);
    input [7:0] a;
    input en,o;
    output reg [7:0] b;

    wire c;

    assign c = b[4] ^ b[3] ^ b[2] ^ b[0];

    always @(posedge o) begin
	if (en) begin
	    b <= {c,b[7:1]};
	end
	
	if ({c,b[7:1]} == 8'b0) b <= 8'b00000001;
    end
endmodule
