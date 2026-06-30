module ROM (
    input [3:0] pc,
    output [7:0] out
);
    MuxKey #(9,4,8) a_rom(out,pc,{
        4'd0,8'h8a,
        4'd1,8'h90,
        4'd2,8'ha0,
        4'd3,8'hb1,
        4'd4,8'h17,
        4'd5,8'h29,
        4'd6,8'hd1,
        4'd7,8'h5b,//outrs
        4'd8,8'he3
    })  ;  
endmodule