module PC (
    input clk,
    input rst,
    input we,
    input [31:0] target,
    input isjalr,
    output [31:0] out
);
reg [31:0] d,q;
assign d = isjalr ? target : (q+32'd4);//跳转或正常+4
assign out = q;
Reg #(32 ,32'h80000000) pc_reg(clk,rst,d,q,we);

 
endmodule

