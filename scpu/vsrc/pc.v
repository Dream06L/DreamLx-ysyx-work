module PC (
    input clk,
    input rst,
    input we,
    input [3:0] new_pc,
    input isbern,
    output [3:0] out
);
reg [3:0] d,q;
assign d = isbern ? new_pc : (q+4'd1);//跳转或正常+1
assign out = q;
Reg #(4 ,0) pc_reg(clk,rst,d,q,we);


    
endmodule