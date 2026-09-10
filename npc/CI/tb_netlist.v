`timescale 1ns / 1ns

module tb_iverilog_net;
    localparam integer MAX_CYCLES = 30000000;

    reg clock;
    reg reset;
    integer max_cycles;
    integer cycle_count;

    top dut (
        .clock (clock),
        .reset (reset)
    );

    initial begin
        clock = 1'b0;
        forever #5 clock = ~clock;
    end

    initial begin
        reset = 1'b1;
        max_cycles = MAX_CYCLES;

        if (!$value$plusargs("MAX_CYCLES=%d", max_cycles)) begin
            max_cycles = MAX_CYCLES;
        end

        repeat (10) @(posedge clock);
        reset = 1'b0;
    end

    // wave
    // initial begin
    //   $dumpfile("wave.vcd");
    //   $dumpvars(0, tb_iverilog_net);
    // end

    always @(posedge clock) begin
        if (reset) begin
            cycle_count = 0;
        end else begin
            cycle_count = cycle_count + 1;
            // $display("cycle=%0d, pc=0x%08x, inst=0x%08x", cycle_count, dut.Core_cpu.ifu_idu_pc, dut.Core_cpu.ifu_idu_inst);

            if (dut.Core_cpu.ifu_idu_inst == 32'h0010_0073) begin
                $finish;
            end
            if ((max_cycles > 0) && (cycle_count >= max_cycles)) begin
                $display("TIMEOUT at cycle %0d", cycle_count);
                $finish;
            end
        end
    end

endmodule
