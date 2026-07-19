module pc (
    input clk,
    input rst,
    
    input [31:0] target,
    input isjalr,
    output reg [31:0] out
);



always @(posedge clk or posedge rst) begin
    if(rst)
    out<=32'h80000000;
    else if(isjalr)
        out <= target;        // 跳转
    else
        out <= out + 4;       // 顺序执行
end
 
endmodule

