module top (
  input clk,
  input rst,
  output VGA_CLK,//下面这些都需要连上硬件的接口,通过vga_ctrl模块得到，然后连上fpga的接口？
  output VGA_HSYNC,
  output VGA_VSYNC,
  output VGA_BLANK_N,
  output [7:0] VGA_R,
  output [7:0] VGA_G,
  output [7:0] VGA_B
);
wire [9:0] h_addr;//行地址
wire [9:0] v_addr;//列地质
wire [23:0] vga_data;

assign VGA_CLK = clk;

vga_ctrl my_vagctrl(
  .pclk(clk),
  .reset(rst),
  .vga_data(vga_data),
  .h_addr(h_addr),
  .v_addr(v_addr),
  .hsync(VGA_HSYNC),
  .vsync(VGA_VSYNC),
  .valid(VGA_BLANK_N),
   .vga_r(VGA_R),
  .vga_g(VGA_G),
  .vga_b(VGA_B)
);

vmem my_vmem(
  .h_addr(h_addr),
  .v_addr(v_addr[8:0]),
  .vga_data(vga_data)
);


endmodule

module vmem(
    input [9:0] h_addr,
    input [8:0] v_addr,
    output [23:0] vga_data
);

reg [23:0] vga_mem [524287:0];

initial begin
    $readmemh("./resource/picture.hex", vga_mem);
end

assign vga_data = vga_mem[{h_addr, v_addr}];//用h_addr的全部10位和v_addr的低9位合成19位地址来索引显存

endmodule
