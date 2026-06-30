#include <Vtop.h>
#include <nvboard.h>

Vtop* top = new Vtop;//指针

void nvboard_bind_all_pins(Vtop* top);//必备

void single_cycle(){
    top->clk=0;top->eval();
    top->clk = 1; top->eval();
}

void reset(int n) {
  top->rstn = 0;//低电平有效
  while (n -- > 0) single_cycle();
  top->rstn = 1;
}

int main(){

  nvboard_bind_all_pins(top);
  nvboard_init(); 

 
 reset(10) ;
  while (1)
  {
    nvboard_update();  
    single_cycle();
   
  }
   
}