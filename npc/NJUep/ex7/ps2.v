module ps2_keyboard(clk,resetn,ps2_clk,ps2_data,code,valid,c);
    input clk,resetn,ps2_clk,ps2_data;
    output reg [7:0] code, c;
    output reg valid;

    reg [9:0] buffer;        // ps2_data bits
    reg [3:0] count;  // count ps2_data bits
    reg [2:0] ps2_clk_sync;

    always @(posedge clk) begin
        ps2_clk_sync <=  {ps2_clk_sync[1:0],ps2_clk};
    end

    wire sampling = ps2_clk_sync[2] & ~ps2_clk_sync[1];

    always @(posedge clk) begin
        if (resetn == 0) begin // reset
            count <= 0;
            code <= 8'h00;
            valid <= 1'b0;
            c <= 8'h00;
        end
        else begin
            if (sampling) begin
              if (count == 4'd10) begin
                if ((buffer[0] == 0) &&  // start bit
                    (ps2_data)       &&  // stop bit
                    (^buffer[9:1])) begin      // odd  parity
                    if (buffer[8:1] == 8'hF0) begin
                            valid <= 1'b0;
                            c++;
                        end else if (~valid) begin
                            valid <= 1'b1;
                            code <= 8'h00;
                            $display("receive %x  count:%d", buffer[8:1], c);
                        end else code <= buffer[8:1];
                end
                count <= 0;     // for next
              end else begin
                buffer[count] <= ps2_data;  // store ps2_data
                count <= count + 3'b1;
              end
            end
        end
    end

endmodule
