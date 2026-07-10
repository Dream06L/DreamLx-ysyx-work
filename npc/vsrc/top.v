module top #(parameter LEN=31)(
  input clk,
  input rst,
  input wen,
  output [31:0] ppc,
  output isjump
);
wire [LEN:0]target,imm;
wire [4:0] rs1, rs2, rd; // 寄存器地址信号
wire [7:0] is_what;//不同指令的控制信号
reg [31:0]inst,pc;
wire [31:0]rdata1,rdata2;//从gpr读的数据
assign isjump=is_what[6];
PC  instfu(clk,rst,1,target,is_what[6],pc);//pc寄存器
assign ppc=pc;
//从存储器读指令
import "DPI-C" function int pmem_read(input int raddr);

always@(*)begin
  if(pc!=0)
  inst=pmem_read(pc);
end
wire [1:0]min2;
wire [31:0]rdataM,raddrM,waddrM;
wire [3:0]wmask;
wire [31:0] result;
wire [31:0] wb_data;
//always @(posedge clk) begin
  //$display("clk pc=%h,inst=%h",pc,inst);
  
//end
wire [31:0]a0;//用于状态判断
idu inst_du(inst,is_what,rs1,rs2,rd,imm,a0);//译码
exu inst_exu(is_what,rdata1,rdata2,imm,pc,result,target,wmask,waddrM,raddrM,min2);//ALU
gpr inst_gpr(clk, rst,wb_data, rd,is_what,rs1,rs2,rdata1,rdata2,a0);
lsu inst_store(clk,raddrM,waddrM,rdata2,wmask,is_what[2]|is_what[3],is_what[4]|is_what[5],is_what,rdataM,min2);

assign wb_data = (is_what[5] | is_what[4]) ? rdataM : result;






endmodule
