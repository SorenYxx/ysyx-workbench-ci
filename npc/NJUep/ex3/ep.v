module ep(op, a, b, s, o, hex0);
    input [2:0] op;
    input [3:0] a, b;
    output [3:0] s;
    output o;
    output [6:0] hex0;

    reg [3:0]s0;
    reg o0;

    always @(*) begin
	case (op)
	    0: begin
		s0 = a + b;
		o0 = (a[3] == b[3]) && (s0[3] != a[3]);
		s0 = o0 ? 0 : s0;
	      end
	    1: begin
		s0 = a - b;
		o0 = (a[3] != b[3]) && (s0[3] != a[3]);
		s0 = o0 ? 0 : s0;
	      end
	    2: s0 = ~a;
	    3: s0 = a & b;
	    4: s0 = a | b;
	    5: s0 = a ^ b;
    	    6: begin
		if (a[3] == b[3]) begin
		    if (a[3]) o0 = (a[2:0] > b[2:0]) ? 1 : 0;
		    else o0 = (a[2:0] > b[2:0]) ? 0 : 1 ;
		end

		else o0 = a[3] ? 1 : 0;
	    end
	    7: o0 = (a == b) ? 1 : 0;
	    default:begin
			s0 = 0;
		        o0 = 0;
		    end
	endcase
    end

    assign s = s0;
    assign o = o0;
    bcd7seg seg0(s, hex0);
endmodule
