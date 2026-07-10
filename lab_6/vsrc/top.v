module top (
  input clk,//以按钮为时钟信号
  input rst,
  output [7:0] x,
  output [6:0] seg0,
  output [6:0] seg1

);
  wire x8;
  wire zero;
  assign x8=(x[0]^x[2]^x[3]^x[4])|zero;
  assign zero=~(|x);//全0为1
  Reg #(1,0) reg7 (clk,rst,x8,x[7],1'b1);
  Reg #(1,0) reg6 (clk,rst,x[7],x[6],1'b1);
  Reg #(1,0) reg5 (clk,rst,x[6],x[5],1'b1);
  Reg #(1,0) reg4 (clk,rst,x[5],x[4],1'b1);
  Reg #(1,0) reg3 (clk,rst,x[4],x[3],1'b1);
  Reg #(1,0) reg2 (clk,rst,x[3],x[2],1'b1);
  Reg #(1,0) reg1 (clk,rst,x[2],x[1],1'b1);
  Reg #(1,0) reg0 (clk,rst,x[1],x[0],1'b1);

  bcd7seg seg_0 (x[3:0],seg0);
  bcd7seg seg_1 (x[7:4],seg1);

endmodule


//触发器模板
module Reg #(WIDTH = 1, RESET_VAL = 0) (
input clk,
input rst,
input [WIDTH-1:0] din,
output reg [WIDTH-1:0] dout,
input wen
);
always @(posedge clk or rst) begin
if (rst) dout <= RESET_VAL;
else if (wen) dout <= din;
end
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