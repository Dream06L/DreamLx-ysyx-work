#include <am.h>
#include <nemu.h>
#include <stdint.h>

#define SYNC_ADDR (VGACTL_ADDR + 4)

void __am_gpu_init() {
 
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  uint32_t len=inl(VGACTL_ADDR);//从vga寄存器地址读取长度信息
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = len>>16, .height = len&0xffff,//获得屏幕的宽和高
    .vmemsz = 0
  };
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  uint32_t len=inl(VGACTL_ADDR);
  
  int wide = len>>16 ;  
  int high = len&0xffff; 

  int x = ctl->x, y = ctl->y;
  int w = ctl->w, h = ctl->h;
  uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;

  if(ctl->pixels){
    // 将像素数据从ctl->pixels复制到帧缓冲区的相应位置
    for(int yy=0;yy<h;yy++){
      for(int xx=0;xx<w;xx++){
        if(y<=high &&x<=wide)
        fb[y*wide+x+yy*wide+xx]=((uint32_t*)ctl->pixels)[yy*w+xx];
      }
    }
  }
  if (ctl->sync) {
    outl(SYNC_ADDR, 1);
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
