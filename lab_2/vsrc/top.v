/*输入可以使用拨动开关SW7-SW0。
使能端可以用SW8。
输出为LED2-0，输出指示是LED4，数码管输出为HEX0。
本实验是8-3优先编码器*/
module pe42 (
  input [3:0] x,
  output [1:0] y
);
  assign y[1]=x[2]|x[3];
  assign y[0]=( x[1]&(~x[2]) ) | x[3];
endmodule

module top (
  input [7:0] sw,
  input en,
  output [3:0] led,
  output [6:0] segh
);
  wire [1:0] yype_1,yype_2;
  wire [6:0] seg_h;
  wire usey2;
  assign usey2=(|sw[7:4])&en;//y2
  assign led[2]=usey2;
  pe42 pe42_1(sw[3:0],yype_1);
  pe42 pe42_2(sw[7:4],yype_2);
  assign led[1:0] =( {2{~usey2}}&yype_1 | yype_2  )&{2{en}};//y1,y0
  assign led[3] = (|sw)&en;//指示灯
  bcd7seg seg1({1'b0,led[2:0]},seg_h);
  assign segh=seg_h|{7{~en}};

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
