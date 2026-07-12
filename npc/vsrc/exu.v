module exu(
    input [7:0] is_what,
    input  [31:0]rdata1,
    input  [31:0]rdata2,
    input [31:0]imm,
    input [31:0] pc,
    output [31:0]result,
    output [31:0] target,
    output [3:0]wmask,
    output [31:0]waddrM,
    output [31:0]raddrM,
    output [1:0]min2
);
    wire [31:0] sum_addi,jalrpc4,lui_result,sum_add,lw_result,lbu_result,sw_result,sb_result;
    assign sum_addi=rdata1+imm;
    assign target=(rdata1+imm)&32'hfffffffe;
    assign jalrpc4=pc+4;
    assign lui_result=imm;
    assign sum_add=rdata1+rdata2;
    assign lw_result = (rdata1+imm)&32'hfffffffc;
    assign lbu_result = (rdata1+imm)&32'hfffffffc;
    assign sw_result = (rdata1+imm);
    assign sb_result = (rdata1+imm);

    wire [31:0]t;
    assign t=rdata1+imm;
    assign min2=t[1:0];

    MuxKey #(4,2,4) maskmux(wmask,min2,{
        2'd0,4'b0001,
        2'd1,4'b0010,
        2'd2,4'b0100,
        2'd3,4'b1000    
    });
    MuxKeyWithDefault #(4,8,32) resultMux(result,is_what,0,{
    8'd2,sum_addi ,//addi
    8'b10000000,lui_result,//LUI
    8'b01000000,jalrpc4,//jarl
    8'd1,sum_add// 这些是xrd的值
    });
    MuxKeyWithDefault #(2,8,32) raddrMMux(raddrM,is_what,0,{
    8'b00100000,lw_result,//lw
    8'b00010000,lbu_result//lbu

    });
     MuxKeyWithDefault #(2,8,32) waddrMMux(waddrM,is_what,0,{

    8'b00001000,sb_result,//sb
    8'b00000100,sw_result//sw
    });
endmodule //EXU
