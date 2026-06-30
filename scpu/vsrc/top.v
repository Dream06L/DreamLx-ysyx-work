module top(
  input clk,
  input rst,
  input we,
  output [6:0]out_h0,
  output [6:0]out_h1,
  output [6:0]out_h2,
  output [6:0]out_h3,
  output [6:0]out_h4,
  output [6:0]out_h5,
  output [6:0]out_h6,
  output [6:0]out_h7
);
wire [7:0]isa;
wire [3:0] a_pc;
PC pc(clk,rst,we,new_pc,isbern,a_pc);
ROM rom(a_pc,isa);
//取指部分/|\

wire outrs,addli,bner0;
assign addli = (~isa[7]&~isa[6])|(isa[7]&~isa[6]);
assign outrs = ~isa[7]&isa[6];
assign bner0 = isa[7]&isa[6];

wire [3:0] new_pc;
wire [7:0] num;
assign new_pc = isa[5:2];
assign num = {4'd0,isa[3:0]};
//分析指令

//GPR
wire [7:0]data;
wire [7:0] out_0,out_1,out_2,out_3;
MuxKey #(2,2,8) select(data,isa[7:6],{
  2'd0,sum,
  2'd2,num
});
Reg #(8,0) r0(clk,rst,data,out_0,(isa[5:4]==0)&addli);
Reg #(8,0) r1(clk,rst,data,out_1,(isa[5:4]==1)&addli);
Reg #(8,0) r2(clk,rst,data,out_2,(isa[5:4]==2)&addli);
Reg #(8,0) r3(clk,rst,data,out_3,(isa[5:4]==3)&addli);

//读出gpr
wire [7:0] dtfm_01,dtfm_23,dtfm_45;
MuxKey #(4,2,8) readgpr1(dtfm_01,isa[1:0],{
  2'd0,out_0,
  2'd1,out_1,
  2'd2,out_2,
  2'd3,out_3
});
MuxKey #(4,2,8) readgpr2(dtfm_23,isa[3:2],{
  2'd0,out_0,
  2'd1,out_1,
  2'd2,out_2,
  2'd3,out_3
});
MuxKey #(4,2,8) readgpr3(dtfm_45,isa[5:4],{
  2'd0,out_0,
  2'd1,out_1,
  2'd2,out_2,
  2'd3,out_3
});

wire [7:0] sum;
wire isbern;
assign sum = dtfm_01 + dtfm_23;
assign isbern = (dtfm_01<out_0)&bner0;


bcd7seg seg0(out_0[7:4],out_h7);
bcd7seg seg00(out_0[3:0],out_h6);

bcd7seg seg1(out_1[7:4],out_h5);
bcd7seg seg11(out_1[3:0],out_h4);

bcd7seg seg2(out_2[7:4],out_h3);
bcd7seg seg22(out_2[3:0],out_h2);

bcd7seg seg3(out_3[7:4],out_h1);
bcd7seg seg33(out_3[3:0],out_h0);
endmodule


module bcd7seg(
  input  [3:0] b,
  output  [6:0] h
);
assign h[0]=~((b!=4'd1)&(b!=4'd4)&(b!=4'd11)&(b!=4'd13));
assign h[1]=~((b!=4'd5)&(b!=4'd6)&(b!=4'd11)&(b!=4'd12)&(b!=4'd14)&(b!=4'd15));
assign h[2]=~((b!=4'd2)&(b!=4'd12)&(b!=4'd14)&(b!=4'd15));
assign h[3]=~((b!=4'd1)&(b!=4'd4)&(b!=4'd7)&(b!=4'd10)&(b!=4'd15));
assign h[4]=~((b!=4'd1)&(b!=4'd3)&(b!=4'd4)&(b!=4'd5)&(b!=4'd7)&(b!=4'd9));
assign h[5]=~((b!=4'd1)&(b!=4'd2)&(b!=4'd3)&(b!=4'd7)&(b!=4'd13));
assign h[6]=~((b!=4'd1)&(b!=4'd7)&(b!=4'd12)&(b!=4'd0));                 
//1灭0亮
endmodule
