module top (
  input clk,
  input rstn,
  input ps2_clk,
  input ps2_data,
  output [6:0] seg0,
  output [6:0] seg1,
  output [6:0] seg2,
  output [6:0] seg3,
  output [6:0] seg4,
  output [6:0] seg5
);

//-----------调试用,可去---------------
always @(posedge clk) begin
    if (ready) $display("sdata=%x", sdata);
end
//----------调试用,可去-----------------

  reg is_break;
  reg is_break_in;
  wire [7:0] data;
  wire overflow,ready;
  reg [7:0] sdata;
  reg [7:0] sdata_in;
  reg [7:0] sdata_asc;
  reg [7:0] key_count;
  reg [7:0] key_count_in;
  wire en;

ps2_keyboard getkeydoard(clk, rstn, ps2_clk, ps2_data,data, ready, 0 , overflow);


assign is_break_in = (rstn==0) ? 1'b0 : 
                        (ready&(data==8'hF0)) ? 1'b1 :
                        (ready&(data!=8'hF0)&is_break) ? 1'b0 :is_break;//断马判断

assign key_count_in = (rstn==0) ? 8'd0 : 
                        (ready&(data==8'hF0)) ? key_count+8'd1 : key_count;//按键次数

assign sdata_in =   (rstn==0) ? 8'd0 :
                      (ready&is_break&(data!=8'hF0))? 8'd0 :
                      (ready&(is_break!=1)&(data!=8'hF0)) ? data : sdata;
assign en =  sdata==0 ? 1'b0 : 1'b1;                    

Reg #(1,1'b0) breakReg (clk,~rstn,is_break_in,is_break,1'b1);

Reg #(8,8'd0) countReg (clk,~rstn,key_count_in,key_count,1'b1);

Reg #(8,8'd0) sdataReg (clk,~rstn,sdata_in,sdata,1'b1);


  //转换ascii
  ascii change (sdata,sdata_asc);

  //最低2位显示键码
  bcd7seg seg_0 (sdata[3:0],seg0,en);
  bcd7seg seg_1 (sdata[7:4],seg1,en);

  bcd7seg seg_2 (sdata_asc[3:0],seg2,en);
  bcd7seg seg_3 (sdata_asc[7:4],seg3,en);

  bcd7seg seg_4 (key_count[3:0],seg4,1);
  bcd7seg seg_5 (key_count[7:4],seg5,1);
endmodule


module bcd7seg(
  input  [3:0] b,
  output  [6:0] h,
  input en
);
assign h[0]=~((b!=4'd1)&(b!=4'd4)&(b!=4'd11)&(b!=4'd13))|(~en);
assign h[1]=~((b!=4'd5)&(b!=4'd6)&(b!=4'd11)&(b!=4'd12)&(b!=4'd14)&(b!=4'd15))|(~en);
assign h[2]=~((b!=4'd2)&(b!=4'd12)&(b!=4'd14)&(b!=4'd15))|(~en);
assign h[3]=~((b!=4'd1)&(b!=4'd4)&(b!=4'd7)&(b!=4'd10)&(b!=4'd15))|(~en);
assign h[4]=~((b!=4'd1)&(b!=4'd3)&(b!=4'd4)&(b!=4'd5)&(b!=4'd7)&(b!=4'd9))|(~en);
assign h[5]=~((b!=4'd1)&(b!=4'd2)&(b!=4'd3)&(b!=4'd7)&(b!=4'd13))|(~en);
assign h[6]=~((b!=4'd1)&(b!=4'd7)&(b!=4'd12)&(b!=4'd0))|(~en);                 
//1灭0亮
endmodule

/*  always @(posedge clk) begin
    if(rst==0)begin
        is_break<=1'b0;
        key_count<=8'd0;
        sdata<=8'd0;
    end
    else begin
        if(ready==1 )begin//ready==1 有数据
              $display("receive %x", sdata);
              if(data==8'hF0)begin//现在的数据是段吗
                  is_break<=1'b1;
                  key_count<=key_count+8'd1;//按键的总次数
              end

              else if(is_break==1)begin//此时是通马且前面有段吗的标志,说明松开
                  sdata<=8'd0;
                  is_break<=1'b0;
              end

              else//此时的数据不是段吗，前面也不是断码，
                  sdata<=data;
        end

        else
              sdata<=sdata;
    end

  end
*/