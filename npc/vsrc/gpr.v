
module gpr #(ADDR_WIDTH = 5, DATA_WIDTH = 32) (
input clk,
input [DATA_WIDTH-1:0] wdata,
input [ADDR_WIDTH-1:0] waddr,
input wen,
input [ADDR_WIDTH-1:0]  raddr1,
input [ADDR_WIDTH-1:0]  raddr2,
output [DATA_WIDTH-1:0]rdata1,
output [DATA_WIDTH-1:0]rdata2,
output [DATA_WIDTH-1:0]a0
);
assign a0=rf[10];


reg [DATA_WIDTH-1:0] rf [2**ADDR_WIDTH-1:0];//32个寄存器

//写入
always @(posedge clk) begin
if (wen) rf[waddr] <= wdata;
end

//读出
assign  rdata1=(|raddr1)?rf[raddr1]:0;
assign  rdata2=(|raddr2)?rf[raddr2]:0;

endmodule

