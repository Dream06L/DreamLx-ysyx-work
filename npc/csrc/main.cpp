#include "Vtop.h"//verilator转译top.v得到的模型接口
#include "verilated.h"  //提供 Verilator 仿真必需的通用功能和定义
//#include "verilated_fst_c.h"
#include "svdpi.h"      // DPI-C 必须的头文件
#include <cstdint>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <cstdlib>
#include <time.h>

#define COLOR_BLUE   "\033[1;34m"   //蓝色
#define COLOR_RED    "\033[1;31m"   // 亮红色
#define COLOR_RESET  "\033[0m"
#define portAddr 0x10000000
Vtop *top=nullptr;
static uint64_t boot_time = 0;

uint8_t M[1024*1024*24];//存储器

bool trap=false;
extern "C" void halt(int code){
 if(code==0){
  printf(COLOR_BLUE "HIT GOOD TRAP!\n" COLOR_RESET);
 }
 else{
  printf(COLOR_RED "HIT BAD TRAP!\n" COLOR_RESET);
 }
  trap=true;
}

uint64_t get_time() {
  if (boot_time == 0) boot_time = time(NULL);
  uint64_t now = time(NULL);
  return now - boot_time;
}

extern "C" uint32_t pmem_read(uint32_t raddr) {
  /*if(raddr==0x10000048 || raddr==0x10000048+4){
    uint64_t us = get_time();
    if(raddr==0x10000048)
      return us;
    else
      return us>>32;
  }*/

  uint32_t offset;
  if(raddr>0x80000000)
    offset = raddr - 0x80000000;
  
  //printf("ppc=%x,offset=%x,raddr=%x\n",top->ppc,offset,raddr);
  return *(uint32_t *)&M[offset & ~0x3u];
}

extern "C" void pmem_write(int waddrn, int wdata, char wmask) {
    // 总是往地址为`waddr & ~0x3u`的4字节按写掩码`wmask`写入`wdata`
    // // // `wmask`中每比特表示`wdata`中1个字节的掩码,
  // 如`wmask = 0x3`代表只写入最低2个字节, 内存中的其它字节保持不变
  //printf("pmemwrite():waddr=%x,wdata=%x,wmas=%x\n",waddrn,wdata,wmask);
  //先判断是不是设备
  if(waddrn==portAddr){
    //printf("i get port\n");
    putchar(wdata&0xFF);
    //fflush(stdout);
    return;
  }

  uint32_t waddr;
  if(waddrn>0x80000000)
    waddr=waddrn-0x80000000;
  if((waddr & ~0x3u)>1024*1024*24)printf("写地址超过最大%x,pc=%x\n",waddr,top->ppc);
  uint8_t byte0=wdata & 0xFF;
  uint8_t byte1=(wdata>>8 )& 0xFF;
  uint8_t byte2=(wdata>>16 )& 0xFF;
  uint8_t byte3=(wdata>>24 )& 0xFF;

  char mask0=wmask&0x1;
  char mask1=(wmask>>1)&0x1;
  char mask2=(wmask>>2)&0x1;
  char mask3=(wmask>>3)&0x1;


    if(mask0==1)M[waddr & ~0x3u]=byte0;
    if(mask1==1)M[(waddr & ~0x3u)+1]=byte1;
    if(mask2==1)M[(waddr & ~0x3u)+2]=byte2;
    if(mask3==1)M[(waddr & ~0x3u)+3]=byte3;
    
  
}


void single_cycle(){
    
    top->clk=0;top->eval();//Verilated::timeInc(1);  // ← 时间前进 1 个单位
    top->clk = 1; top->eval();// Verilated::timeInc(1);   // ← 时间再前进 1 个单位

}

void reset(int n) {//同步复位
  top->rst = 1;
  printf("rst=%d\n",top->rst);
  while (n -- > 0) single_cycle();
  //printf("init ppc=%x\n",top->ppc);
  top->rst = 0;
}



int main(int argc, char **argv){
  printf("main():Entering main\n");
 // Verilated::traceEverOn(true);
  top=new Vtop;

    FILE* fp=fopen(argv[1],"rb");
    printf("fopen():after fopen\n");
    if(fp==NULL) {
      printf("错误: 无法打开文件 %s\n", argv[1]);
      return 1;
    }
   
  size_t readcount = fread(M,1,1024*1024*24,fp);
  printf("fread():读完bin,%zu 个\n",readcount);

    fclose(fp);
    
  
  // 1. 创建上下文和模块实例
  Verilated::commandArgs(argc, argv);
  
   
  // 添加 FST 波形追踪
  //VerilatedFstC* tfp = new VerilatedFstC;
 // top->trace(tfp, 99);  // 追踪深度 99
  //tfp->open("wave.fst");
  int i=0;
  reset(10) ;//复位10周期

  while (1)
  {
    
    if(trap){break;}
  
    //printf("i=%d,pc=0x%x,isjump=%d,inst=%x\n",i,top->ppc,top->isjump,pmem_read(top->ppc));
    //if(i==10)break;
    single_cycle();
    //tfp->dump(Verilated::time());  // 写入波形
    i++;
  }
   // tfp->close();
    //delete tfp;
    delete top;
  

    return 0;
}