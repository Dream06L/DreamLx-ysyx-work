module lsu(
    input clk,
    input [31:0] raddr,
    input [31:0] waddr,
    input [31:0] wdatain,//32
    input [3:0] wmaskin,
    input wen,
    input readen,
    input [7:0]is_what,
    output [31:0] rdataM,
    input [1:0] min2

);

import "DPI-C" function int unsigned pmem_read(input int unsigned raddr);
import "DPI-C" function void pmem_write(
  input int  waddr, input int wdata, input byte wmask);

reg [31:0] rdata,rdatabyte,wdatabt;
wire [31:0]wdata;
wire [3:0] wmask;
MuxKey #(4,2,32) databyte(rdatabyte,min2,{
  2'd0,{{24{1'b0}},rdata[7:0]},
  2'd1,{{24{1'b0}},rdata[15:8]},
  2'd2,{{24{1'b0}},rdata[23:16]},
  2'd3,{{24{1'b0}},rdata[31:24]}
});
assign wmask = is_what[2]?4'b1111:wmaskin;
assign wdata= is_what[3]?wdatabt:wdatain;

MuxKey #(4,2,32) wdatabyte(wdatabt,min2,{
  2'd0,{{24{1'b0}},wdatain[7:0]},
  2'd1,{{16{1'b0}},wdatain[7:0],{8{1'b0}}},
  2'd2,{{8{1'b0}},wdatain[7:0],{16{1'b0}}},
  2'd3,{wdatain[7:0],{24{1'b0}}}
});

reg [31:0] r_raddr,r_waddr,r_wdata;
reg [3:0] r_wmask;
reg r_wen,r_readen;

always@(negedge clk)begin
 
  r_waddr<=waddr;
  r_wdata<=wdata;
  r_wmask<=wmask;
  r_wen<=wen;
  
end
always@(*)begin
  rdata=0;
 if (readen) begin // 有读请求时
    rdata = pmem_read(raddr);
    end 
end
always @(posedge clk) begin
  
  if (r_wen) begin // 有写请求时
      pmem_write(r_waddr, r_wdata, {4'b0000,r_wmask});
    end
  
end
assign rdataM= is_what[5] ? rdata :(is_what[4]? rdatabyte :0);

endmodule
