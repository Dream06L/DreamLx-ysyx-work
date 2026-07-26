#include <am.h>
#include <nemu.h>
#include <stdint.h>
#include <string.h>

#define AUDIO_FREQ_ADDR      (AUDIO_ADDR + 0x00)
#define AUDIO_CHANNELS_ADDR  (AUDIO_ADDR + 0x04)
#define AUDIO_SAMPLES_ADDR   (AUDIO_ADDR + 0x08)
#define AUDIO_SBUF_SIZE_ADDR (AUDIO_ADDR + 0x0c)
#define AUDIO_INIT_ADDR      (AUDIO_ADDR + 0x10)
#define AUDIO_COUNT_ADDR     (AUDIO_ADDR + 0x14)

void __am_audio_init() {
}
//AM_AUDIO_CONFIG, AM声卡控制器信息, 可读出存在标志present以及流缓冲区的大小
void __am_audio_config(AM_AUDIO_CONFIG_T *cfg) {
  cfg->present = true;
  cfg->bufsize = inl(AUDIO_SBUF_SIZE_ADDR);
}
//AM声卡控制寄存器, 可根据写入的freq, channels和samples对声卡进行初始化.
void __am_audio_ctrl(AM_AUDIO_CTRL_T *ctrl) {
  outl(AUDIO_FREQ_ADDR,ctrl->freq);
  outl(AUDIO_CHANNELS_ADDR,ctrl->channels);
  outl(AUDIO_SAMPLES_ADDR,ctrl->samples);
  outl(AUDIO_INIT_ADDR,1);
}

//AM声卡状态寄存器, 可读出当前流缓冲区已经使用的大小count
void __am_audio_status(AM_AUDIO_STATUS_T *stat) {
  stat->count = inl(AUDIO_COUNT_ADDR);
}
//将[buf.start, buf.end)区间的内容作为音频数据写入流缓冲区
void __am_audio_play(AM_AUDIO_PLAY_T *ctl) {
  //计算数据长度
  unsigned int len =(uintptr_t)ctl->buf.end - (uintptr_t)ctl->buf.start;
  //写入音频数据到流缓冲区, 并写入count寄存器
  memcpy((void*)AUDIO_SBUF_ADDR, ctl->buf.start, len);
  outl(AUDIO_COUNT_ADDR,len);
}
