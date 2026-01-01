module ep(clk, rst, ps2_clk, ps2_data, code, h0, h1, h2, h3, h4, h5);
    input wire clk, rst, ps2_clk, ps2_data;
    output reg [7:0] code;

    output reg [6:0] h0, h1, h2, h3, h4, h5;

    reg [7:0] a0, n_code, c, d4, d5;
    reg [3:0] b0, b1, b2, b3, b4, b5;
    reg [7:0] ascii_rom [0:255];
    reg valid, in;

    initial begin
	for (int i = 0;i < 256; i++) begin
	    ascii_rom[i] = 8'h00;
	end

	ascii_rom[8'h1C] = 8'h61;
        ascii_rom[8'h32] = 8'h62;
        ascii_rom[8'h21] = 8'h63;
        ascii_rom[8'h23] = 8'h64;
        ascii_rom[8'h24] = 8'h65;
        ascii_rom[8'h2B] = 8'h66; 
        ascii_rom[8'h34] = 8'h67;
        ascii_rom[8'h33] = 8'h68;
        ascii_rom[8'h43] = 8'h69;
        ascii_rom[8'h3B] = 8'h6A;
        ascii_rom[8'h42] = 8'h6B;
        ascii_rom[8'h4B] = 8'h6C;
        ascii_rom[8'h3A] = 8'h6D;
        ascii_rom[8'h31] = 8'h6E;
        ascii_rom[8'h44] = 8'h6F;
        ascii_rom[8'h4D] = 8'h70;
        ascii_rom[8'h15] = 8'h71;
        ascii_rom[8'h2D] = 8'h72; 
        ascii_rom[8'h1B] = 8'h73;
        ascii_rom[8'h2C] = 8'h74;
        ascii_rom[8'h3C] = 8'h75;
        ascii_rom[8'h2A] = 8'h76;
        ascii_rom[8'h1D] = 8'h77;
        ascii_rom[8'h22] = 8'h78;
        ascii_rom[8'h35] = 8'h79;
        ascii_rom[8'h1A] = 8'h7A;
        
        ascii_rom[8'h16] = 8'h31; 
        ascii_rom[8'h1E] = 8'h32;
        ascii_rom[8'h26] = 8'h33;
        ascii_rom[8'h25] = 8'h34;
        ascii_rom[8'h2E] = 8'h35;
        ascii_rom[8'h36] = 8'h36;
        ascii_rom[8'h3D] = 8'h37;
        ascii_rom[8'h3E] = 8'h38;
        ascii_rom[8'h46] = 8'h39;
        ascii_rom[8'h45] = 8'h30; 
        
        ascii_rom[8'h4E] = 8'h2D;
        ascii_rom[8'h55] = 8'h3D;
        ascii_rom[8'h54] = 8'h5B;
        ascii_rom[8'h5B] = 8'h5D;
        ascii_rom[8'h5D] = 8'h5C;
        ascii_rom[8'h4C] = 8'h3B;
        ascii_rom[8'h52] = 8'h27;
        ascii_rom[8'h41] = 8'h2C;
        ascii_rom[8'h49] = 8'h2E;
        ascii_rom[8'h4A] = 8'h2F;
        ascii_rom[8'h0E] = 8'h60;
        
        ascii_rom[8'h29] = 8'h20;
        ascii_rom[8'h5A] = 8'h0D;
        ascii_rom[8'h66] = 8'h08;
        ascii_rom[8'h0D] = 8'h09;
        ascii_rom[8'h76] = 8'h1B;
    end

    ps2_keyboard ps2(clk, ~rst, ps2_clk, ps2_data, n_code, valid, c);
    
    always @(posedge clk) begin
	if (rst) code <= 8'b00;
	else begin
	    code <= n_code;
	end
    end

    always @(*) begin
        b0 = code[3:0];
	b1 = code[7:4];
	a0 = ascii_rom[code];
	b2 = a0[3:0];
	b3 = a0[7:4];
    end

    assign in = ~valid;
    assign d4 = c % 10;
    assign d5 = c / 10;
    assign b4 = d4[3:0];
    assign b5 = d5[3:0]; 
    
    bcd7seg seg0(b0, in, h0);
    bcd7seg seg1(b1, in, h1);
    bcd7seg seg2(b2, in, h2);
    bcd7seg seg3(b3, in, h3);
    bcd7seg seg4(b4, 0, h4);
    bcd7seg seg5(b5, 0, h5);
    
endmodule
	














 
