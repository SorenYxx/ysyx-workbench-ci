module ep(a, en, o, b, h0, h1, h2, h3, h4);
    input [7:0] a;
    input en,o;
    output reg [7:0] b;
    output reg [6:0] h0, h1, h2, h3, h4;

    wire c;
    reg [7:0] n0, n1, n2;

    assign c = b[4] ^ b[3] ^ b[2] ^ b[0];

    always @(posedge o) begin
	if (en) begin
	    b <= (a != 8'd0) ? a: {c,b[7:1]};
	end
	
	if ({c,b[7:1]} == 8'b0 && en) b <= 8'b00000001;
    end
    
    assign n0 = b % 10;
    assign n1 = (b / 10) - (b / 100 * 10);
    assign n2 = b / 100;
    
    bcd7seg seg0(n0[3:0], h0);
    bcd7seg seg1(n1[3:0], h1);
    bcd7seg seg2(n2[3:0], h2);
    bcd7seg seg3(b[3:0], h3);
    bcd7seg seg4(b[7:4], h4);
    
endmodule
