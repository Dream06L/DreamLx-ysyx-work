#include <am.h>
#include <nemu.h>
#include <stdint.h>
#include <stdio.h>

#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  uint32_t data = inl(KBD_ADDR );
  kbd->keydown = (KEYDOWN_MASK & data) ? 1 : 0;//第15位用来标识键盘的状态
  kbd->keycode =kbd->keydown? (data & ~KEYDOWN_MASK) : AM_KEY_NONE;

}
