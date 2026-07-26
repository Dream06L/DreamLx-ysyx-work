/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <common.h>
#include <device/map.h>
#include <SDL2/SDL.h>

enum {
  reg_freq,
  reg_channels,
  reg_samples,//可写入相应的初始化参数
  reg_sbuf_size,
  reg_init,
  reg_count,
  nr_reg
};

static uint8_t *sbuf = NULL;
static uint32_t *audio_base = NULL;
//回调函数
static void audio_io_handler(uint32_t offset, int len, bool is_write) {
  switch(offset){
    case 0x10: //AUDIO_INIT_ADDR
    if(is_write){
    SDL_CloseAudio();
    SDL_AudioSpec sp={};
    sp.format = AUDIO_S16SYS;
    sp.userdata = NULL; 
    sp.freq=audio_base[reg_freq];
    sp.channels =audio_base[reg_channels];
    sp.samples = audio_base[reg_samples];
    sp.silence=0;
    SDL_OpenAudio(&sp, NULL);
    SDL_PauseAudio(0);
    }
    
    break;
    case 0x14: //AUDIO_COUNT_ADDR
    if(!is_write)
    audio_base[reg_count]=SDL_GetQueuedAudioSize(1);//读出当前队列里积压了多少还没播放的声音数据。
    else
     SDL_QueueAudio(1, sbuf, audio_base[reg_count]);//把音频数据放入播放队列
    break;

  }
}

//NEMU 启动时在 init_device() 中被调用系统极默认初始化
void init_audio() {
  uint32_t space_size = sizeof(uint32_t) * nr_reg;
  audio_base = (uint32_t *)new_space(space_size);//注册0x200处长度为24个字节的端口
#ifdef CONFIG_HAS_PORT_IO
  add_pio_map ("audio", CONFIG_AUDIO_CTL_PORT, audio_base, space_size, audio_io_handler);
#else
  add_mmio_map("audio", CONFIG_AUDIO_CTL_MMIO, audio_base, space_size, audio_io_handler);
#endif

  sbuf = (uint8_t *)new_space(CONFIG_SB_SIZE);//流缓冲区
  add_mmio_map("audio-sbuf", CONFIG_SB_ADDR, sbuf, CONFIG_SB_SIZE, NULL);//注册了从0xa1200000开始, 长度为64KB的MMIO空间作为流缓冲区
/*配置音频参数*/
SDL_AudioSpec s = {}; //初始化音频规格结构体包含了关于音频各种参数
s.format = AUDIO_S16SYS;  // 假设系统中音频数据的格式总是使用16位有符号数来表示
s.userdata = NULL;        // 不使用
s.freq =8000;           //音频数据的采样率。常用的有48000,44100等
s.channels=1;
s.samples=1024;         //单次回调要填充多少帧音频数据
s.silence=0;


SDL_InitSubSystem(SDL_INIT_AUDIO);//只单独启动音频
SDL_OpenAudio(&s, NULL);//打开音频设备
SDL_PauseAudio(0);//开始出声


}
