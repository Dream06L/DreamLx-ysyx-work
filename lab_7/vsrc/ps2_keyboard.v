//负责接收键盘送来的数据
module ps2_keyboard(clk,clrn,ps2_clk,ps2_data,data,
                    ready,nextdata_n,overflow);
    input clk,clrn,ps2_clk,ps2_data;
    input nextdata_n;
    output [7:0] data;
    output reg ready;
    output reg overflow;     // fifo overflow
    // internal signal, for test
    reg [9:0] buffer;        // 储存发来的10位数据，起始位，8位真正数据，停止位
    reg [7:0] fifo[7:0];     // 先进先出，8x8
    reg [2:0] w_ptr,r_ptr;   // fifo write and read pointers
    reg [3:0] count;  // count ps2_data bits
    // detect falling edge of ps2_clk
    reg [2:0] ps2_clk_sync;

    always @(posedge clk) begin
        ps2_clk_sync <=  {ps2_clk_sync[1:0],ps2_clk};
    end

    wire sampling = ps2_clk_sync[2] & ~ps2_clk_sync[1];//检测键盘时钟下降沿 从1变成0

    always @(posedge clk) begin
        if (clrn == 0) begin // reset
            count <= 0; w_ptr <= 0; r_ptr <= 0; overflow <= 0; ready<= 0;
        end
        else begin
            if ( ready ) begin // read to output next data
                if(nextdata_n == 1'b0) //read next data
                begin
                    r_ptr <= r_ptr + 3'b1;
                    if(w_ptr==(r_ptr+1'b1)) //empty
                        ready <= 1'b0;
                end
            end
            if (sampling) begin//键盘下降沿时
              if (count == 4'd10) begin//如果有10个数据
                if ((buffer[0] == 0) &&  // start bit
                    (ps2_data)       &&  // stop bit
                    (^buffer[9:1])) begin      // odd  parity//这里的if就是判断校验是否通过
                    fifo[w_ptr] <= buffer[8:1];  //通过就把现在收到的扫描玛存入fifo的写指针所在的位置
                    w_ptr <= w_ptr+3'b1;//然后把写指针指向下一个空位
                    ready <= 1'b1;//表示现在成功接受好了一串数据
                    overflow <= overflow | (r_ptr == (w_ptr + 3'b1));//如果写入后满则置overflow
                end
                count <= 0;     // 这十个数据处理好后从新让count=0,可接受下面到来的10位数据
              end else begin
                buffer[count] <= ps2_data;  // store ps2_data  储存每一位发来的数据到buffer中
                count <= count + 3'b1;
              end
            end
        end
       
    end
    assign data = fifo[r_ptr]; //输出data始终连着fifo中读指针对应位置的8位数据
   
endmodule