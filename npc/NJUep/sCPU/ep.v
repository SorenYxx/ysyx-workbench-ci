module gyx_sCPU(ru, clk, rst, h0, h1, op);
    input wire clk, rst;
    output reg [6:0] h0, h1; 
    output reg [7:0] ru;

    //指令序列和PC
    output reg [7:0] op;
    reg [3:0] P, Pi;

    //寄存器堆
    reg [7:0] R [0:3];
    reg [7:0] Ri [0:3];
    reg [1:0] rs1, rs2, rd;

    //数码管部分
    reg [7:0] a0, a1;

    //PC部分
    sCPU_ROM rom(P, op);

    always @(posedge clk or posedge rst) begin
	//复位功能
	if (rst) begin
	    P <= 4'd0;
	    R[0] <= 8'd0;
	    R[1] <= 8'd0;
	    R[2] <= 8'd0;
	    a0 = 8'd0;
	    a1 = 8'd0;

	//更新寄存器
	end else begin
	    P <= Pi;
	    ru <= R[rd];
	    if (op[7:6] != 2'b11) R[rd] <= Ri[rd];
	end
    end

    always @(*) begin
	//数据初始化
	Pi = P + 1;
        rs1 = 2'd0;
        rs2 = 2'd0;
        rd = 2'd0;

        Ri[0] = R[0];
	Ri[1] = R[1];
	Ri[2] = R[2];
	Ri[3] = R[3];

	//指令译码取指与执行
	case (op[7:6])
	    0: begin
		rd = (op[5:4]);
		rs1 = (op[3:2]);
		rs2 = (op[1:0]);	
		Ri[rd] = R[rs1] + R[rs2];

                //数码管数据准备
		if (rd == 2) begin
                    a0 = (Ri[rd] % 10);
                    a1 = (Ri[rd] / 10);
		  end
	    end
	
	    2: begin
		rd = (op[5:4]);
		Ri[rd] = {4'b0, op[3:0]};
	    end

  	    3: begin
		rd = (op[1:0]);
		if (R[rd] != R[0]) Pi = (op[5:2]);
	    end
	endcase
    end

    bcd7seg seg0(a0, h0);
    bcd7seg seg1(a1, h1);

endmodule
