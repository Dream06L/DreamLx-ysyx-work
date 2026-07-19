module idu(
    input [31:0] inst,
    output [7:0] is_what,
    output [4:0] rs1,
    output [4:0] rs2,
    output [4:0] rd,
    output [31:0]imm,
    input [31:0] a0

);
    assign is_what[1]= (inst[6:0]==7'b0010011) & (inst[14:12]==3'b000); //is_addi 
    assign is_what[6]= (inst[6:0]==7'b1100111) & (inst[14:12]==3'b000);//is_jarl
    assign is_what[0]= (inst[31:25]==0) & (inst[6:0]==7'b0110011) & (inst[14:12]==3'b000);//is_add
    assign is_what[7]= (inst[6:0]==7'b0110111);//is_LUI
    assign is_what[5]= (inst[6:0]==7'b0000011) & (inst[14:12]==3'b010);//lw
    assign is_what[4]= (inst[6:0]==7'b0000011) & (inst[14:12]==3'b100);//lbu
    assign is_what[3]= (inst[6:0]==7'b0100011) & (inst[14:12]==3'b000);//sb
    assign is_what[2]= (inst[6:0]==7'b0100011) & (inst[14:12]==3'b010);//sw
    
    wire is_ebreak;
    assign is_ebreak= inst==32'h00100073;
    

    import "DPI-C" function void halt(input int code);
    always@(*)begin
        if(is_ebreak)
        halt(a0);
    end

    wire [11:0]imm12,imm7_5;
    wire [19:0]imm20;
    assign rs1 = inst[19:15];
    assign rs2 = inst[24:20];
    assign rd  = inst[11:7];
    assign imm12=inst[31:20];
    assign imm20=inst[31:12];
    assign imm7_5={inst[31:25],inst[11:7]};

//根据指令筛选立即书
MuxKey #(7,8,32) immMux(imm,is_what,{
    8'd2,{{20{inst[31]}},imm12}, //addi
    8'b10000000,{imm20,{12{1'b0}}},//LUI
    8'b01000000,{{20{inst[31]}},imm12},//jarl
    8'b00100000,{{20{inst[31]}},imm12},//lw
    8'b00010000,{{20{inst[31]}},imm12},//lbu
    8'b00001000,{{20{inst[31]}},imm7_5},//sb
    8'b00000100,{{20{inst[31]}},imm7_5}//sw

});


endmodule

