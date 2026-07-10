module gpr# (LEN=31)(
    input clk,
    input rst,
    input [LEN:0]wdata,
    input [4:0]waddr,
    input [7:0]is_what,
    input [4:0]raddr1,
    input [4:0]raddr2,
    output [LEN:0]rdata1,
    output [LEN:0]rdata2,
    output [LEN:0]a0
);
assign a0=out[10];
wire [15:0] sign;
wire wen;
assign wen=is_what[1]|is_what[0]|is_what[4]|is_what[5]|is_what[6]|is_what[7];
MuxKey #(16,4,16)decd(sign,waddr[3:0],{
    4'd0,16'd0,
    4'd1,16'd3,
    4'd2,16'b0000000000000100,
    4'd3,16'b0000000000001000,
    4'd4,16'b0000000000010000,
    4'd5,16'b0000000000100000,
    4'd6,16'b0000000001000000,
    4'd7,16'b0000000010000000,
    4'd8,16'b0000000100000000,
    4'd9,16'b0000001000000000,
    4'd10,16'b0000010000000000,
    4'd11,16'b0000100000000000,
    4'd12,16'b0001000000000000,
    4'd13,16'b0010000000000000,
    4'd14,16'b0100000000000000,
    4'd15,16'b1000000000000000
});
wire [LEN:0]out[15:0];

Reg #(32,0) reg0(clk,rst,0,out[0],sign[1]&wen);
Reg #(32,0) reg1(clk,rst,wdata,out[1],sign[1]&wen);
Reg #(32,0) reg2(clk,rst,wdata,out[2],sign[2]&wen);
Reg #(32,0) reg3(clk,rst,wdata,out[3],sign[3]&wen);
Reg #(32,0) reg4(clk,rst,wdata,out[4],sign[4]&wen);
Reg #(32,0) reg5(clk,rst,wdata,out[5],sign[5]&wen);
Reg #(32,0) reg6(clk,rst,wdata,out[6],sign[6]&wen);
Reg #(32,0) reg7(clk,rst,wdata,out[7],sign[7]&wen);
Reg #(32,0) reg8(clk,rst,wdata,out[8],sign[8]&wen);
Reg #(32,0) reg9(clk,rst,wdata,out[9],sign[9]&wen);
Reg #(32,0) reg10(clk,rst,wdata,out[10],sign[10]&wen);
Reg #(32,0) reg11(clk,rst,wdata,out[11],sign[11]&wen);
Reg #(32,0) reg12(clk,rst,wdata,out[12],sign[12]&wen);
Reg #(32,0) reg13(clk,rst,wdata,out[13],sign[13]&wen);
Reg #(32,0) reg14(clk,rst,wdata,out[14],sign[14]&wen);
Reg #(32,0) reg15(clk,rst,wdata,out[15],sign[15]&wen);

MuxKey #(16,4,32) mux1(rdata1,raddr1[3:0],{
    4'd0,out[0],
    4'd1,out[1],
    4'd2,out[2],
    4'd3,out[3],
    4'd4,out[4],
    4'd5,out[5],
    4'd6,out[6],
    4'd7,out[7],
    4'd8,out[8],
    4'd9,out[9],
    4'd10,out[10],
    4'd11,out[11],
    4'd12,out[12],
    4'd13,out[13],
    4'd14,out[14],
    4'd15,out[15]
});

MuxKey #(16,4,32) mux2(rdata2,raddr2[3:0],{
    4'd0,out[0],
    4'd1,out[1],
    4'd2,out[2],
    4'd3,out[3],
    4'd4,out[4],
    4'd5,out[5],
    4'd6,out[6],
    4'd7,out[7],
    4'd8,out[8],
    4'd9,out[9],
    4'd10,out[10],
    4'd11,out[11],
    4'd12,out[12],
    4'd13,out[13],
    4'd14,out[14],
    4'd15,out[15]
});
endmodule //GPR

