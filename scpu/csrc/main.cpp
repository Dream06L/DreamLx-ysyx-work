#include <Vtop.h>
#include <nvboard.h>

Vtop* top = new Vtop;//指针

void nvboard_bind_all_pins(Vtop* top);//必备



void reset(int n) {
  top->rst = 1;
  while (n -- > 0) top->eval();
  top->rst = 0;
}

int main(){

  nvboard_bind_all_pins(top);
  nvboard_init(); 
   
  reset(10) ;//复位10周期
  while (1)
  {
    nvboard_update();
    top->eval();
  }
   
}