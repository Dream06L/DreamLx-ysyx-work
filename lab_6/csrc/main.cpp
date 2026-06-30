#include <Vtop.h>
#include <nvboard.h>

Vtop* top = new Vtop;//指针

void nvboard_bind_all_pins(Vtop* top);//必备


int main(){

  nvboard_bind_all_pins(top);
  nvboard_init(); 

  top->x=0b00000001; 
 
  while (1)
  {
    nvboard_update();
 
     top->eval();
  }
   
}