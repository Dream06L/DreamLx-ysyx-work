module top #(parameter LEN=31)(
  input clk,
  input rst,
  output [31:0] ppc,
  output isjump
);
wire [LEN:0]target,imm;
wire [4:0] rs1, rs2, rd; // 寄存器地址信号
wire [7:0] is_what;//不同指令的控制信号
reg [31:0]inst,pc;
wire [31:0]rdata1,rdata2;//从gpr读的数据
assign isjump=is_what[6];
pc  instfu(clk,rst,target,is_what[6],pc);//pc寄存器
assign ppc=pc;
//从存储器读指令
import "DPI-C" function int unsigned pmem_read(input int unsigned raddr);

always@(*)begin

  inst=pmem_read(pc);
end

/*always @(posedge clk) begin
    if (~rst) begin
        $display("[%t] PC=%h INST=%h is_what=%b", $time, pc, inst, is_what);
        if (is_what[1]|is_what[0]|is_what[4]|is_what[5]|is_what[6]|is_what[7]) $display("  WB: rd=%d wdata=%h", rd, wb_data);
    end
end*/
wire [1:0]min2;
wire [31:0]rdataM,raddrM,waddrM;
wire [3:0]wmask;
wire [31:0] result;
wire [31:0] wb_data;
//always @(posedge clk) begin
// $display("pc=%h,inst=%h",pc,inst);
//end
wire [31:0]a0;//用于状态判断
idu inst_du(inst,is_what,rs1,rs2,rd,imm,a0);//译码


gpr #(5,32) u_gpr (
  .clk    	(clk     ),
  .wdata  	(wb_data   ),
  .waddr  	(rd   ),
  .wen    	(is_what[1]|is_what[0]|is_what[4]|is_what[5]|is_what[6]|is_what[7]    ),
  .raddr1 	(rs1  ),
  .raddr2 	(rs2  ),
  .rdata1 	(rdata1  ),
  .rdata2 	(rdata2  ),
  .a0     	(a0      )
);

exu inst_exu(is_what,rdata1,rdata2,imm,pc,result,target,wmask,waddrM,raddrM,min2);//ALU
lsu inst_store(clk,raddrM,waddrM,rdata2,wmask,is_what[2]|is_what[3],is_what[4]|is_what[5],is_what,rdataM,min2);

assign wb_data = (is_what[5] | is_what[4]) ? rdataM : result;






endmodule
