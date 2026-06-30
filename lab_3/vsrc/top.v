module top (
  input [3:0]a,
  input [3:0]b,
  input [2:0]p,//功能选择
  output [3:0]r,//计算结果
  output CF,//进位位
  output OF,//溢出位
  output compare,
  output zero
);

  wire Cin;//判断加减
  wire [3:0] Not_a;//取反
  wire [3:0] a_and_b;
  wire [3:0] a_or_b;
  wire [3:0] a_xor_b;
  wire [3:0] s;
  wire [3:0] t_no_Cin;
  assign Cin=(~p[2]&~p[1]&p[0] ) | ( p[2]&p[1]&~p[0]) | (&p);

  //好妙的方法
  assign t_no_Cin = {4{ Cin }}^b;//cin=1减法(对b取反) 0加法（还是b本身）
  assign {CF,s} = a + t_no_Cin + {3'b0,Cin};
  assign OF = (a[3] == t_no_Cin[3]) && (s [3] != a[3]);
  assign Not_a=~a;
  assign a_and_b=a&b;
  assign a_or_b=a|b;
  assign a_xor_b=a^b;
  assign compare=s[3] &(p[2]&p[1]&~p[0]);//a>b
  assign zero = ~(|s) & (&p);   //相等为1

MuxKeyInternal #(6,3,4,0) mux1 (
  r,p,4'h0,
  {
    3'h0,s,
    3'h1,s,
    3'h2,Not_a,
    3'h3,a_and_b,
    3'h4,a_or_b,
    3'h5,a_xor_b
  }
);
endmodule

//选择其模板
module MuxKeyInternal #(NR_KEY = 2, KEY_LEN = 1, DATA_LEN = 1, HAS_DEFAULT = 0) (
output reg [DATA_LEN-1:0] out,
input [KEY_LEN-1:0] key,
input [DATA_LEN-1:0] default_out,
input [NR_KEY*(KEY_LEN + DATA_LEN)-1:0] lut
);
localparam PAIR_LEN = KEY_LEN + DATA_LEN;
wire [PAIR_LEN-1:0] pair_list [NR_KEY-1:0];
wire [KEY_LEN-1:0] key_list [NR_KEY-1:0];
wire [DATA_LEN-1:0] data_list [NR_KEY-1:0];
genvar n;
generate
for (n = 0; n < NR_KEY; n = n + 1) begin
assign pair_list[n] = lut[PAIR_LEN*(n+1)-1 : PAIR_LEN*n];
assign data_list[n] = pair_list[n][DATA_LEN-1:0];
assign key_list[n]  = pair_list[n][PAIR_LEN-1:DATA_LEN];
end
endgenerate
reg [DATA_LEN-1 : 0] lut_out;
reg hit;
integer i;
always @(*) begin
lut_out = 0;
hit = 0;
for (i = 0; i < NR_KEY; i = i + 1) begin
lut_out = lut_out | ({DATA_LEN{key == key_list[i]}} & data_list[i]);
hit = hit | (key == key_list[i]);
end
if (!HAS_DEFAULT) out = lut_out;
else out = (hit ? lut_out : default_out);
end
endmodule