// module ysyx_26010027_UART (
//     input             clock,
//     input             reset,

//     // ----------- AXI-Lite -----------
//     input      [31:0] io_slave_araddr,
//     input             io_slave_arvalid,
//     output            io_slave_arready,

//     input             io_slave_rready,
//     output reg [31:0] io_slave_rdata,
//     output reg        io_slave_rvalid,
//     output reg [ 1:0] io_slave_rresp,

//     input      [31:0] io_slave_awaddr,
//     input             io_slave_awvalid,
//     output            io_slave_awready,

//     input      [31:0] io_slave_wdata,
//     input      [ 3:0] io_slave_wstrb,
//     input             io_slave_wvalid,
//     output            io_slave_wready,

//     output     [ 1:0] io_slave_bresp,
//     output reg        io_slave_bvalid,
//     input             io_slave_bready

//     // --------------------------------
// );
//     // 读置0
//     assign io_slave_arready = 1'b0;
//     assign io_slave_rdata  = 32'b0;
//     assign io_slave_rvalid = 1'b0;
//     assign io_slave_rresp  = 2'b0;

//     // 写握手
//     wire handshake_aw = io_slave_awvalid && io_slave_awready;
//     wire handshake_w  = io_slave_wvalid && io_slave_wready;
//     wire handshake_b  = io_slave_bvalid && io_slave_bready;

//     // 写状态机
//     reg [1:0] state;
//     reg [31:0] awaddr_latch;

//     localparam IDLE = 2'b00;
//     localparam W_BUSY = 2'b01;
//     localparam B_BUSY = 2'b10;

//     assign io_slave_awready = (state == IDLE);
//     assign io_slave_wready  = (state == W_BUSY);

//     always @(posedge clock, posedge reset) begin
//         if (reset) begin
//             state           <= IDLE;
//             io_slave_bvalid <= 0;
//             io_slave_bresp  <= 2'b0;
//         end
//         else begin
//             case(state)
//                 IDLE:
//                     if (handshake_aw) begin
//                         state        <= W_BUSY;
//                         awaddr_latch <= io_slave_awaddr;
//                     end
//                     else state <= IDLE;
//                 W_BUSY:
//                     if (handshake_w) begin
//                         state           <= W_BUSY;
//                         io_slave_bresp  <= 2'b0;
//                         io_slave_bvalid <= 1'b0;
//                         pmem_write(awaddr_latch, iio_slave_wdata, {28'b0, io_slave_wstrb})
//                         $write("%c", io_slave_wdata[7:0]);
//                     end
//                     else state <= W_BUSY;
//                 B_BUSY:
//                     if (handshake_b) begin
//                         state           <= IDLE;
//                         io_slave_bvalid <= 0;
//                     end
//                     else state <= B_BUSY;
//                 default: state <= IDLE;
//             endcase
//         end
//     end

// endmodule
