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

#include <isa.h>
#include "local-include/reg.h"

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

void isa_reg_display() {
  int i=0;
  while (i<32)
  {
    printf("%-5s  0x%08x\n",regs[i],gpr(i));
    i++;
  }
  
  
  
}

//根据寄存器名称字符串获取对应的值
word_t isa_reg_str2val(const char *s, bool *success) {
  int i=0;
  while (i<32)
  {
    if(strcmp(regs[i],s)==0){
      *success=true;
      return gpr(i);//获取第 i 个通用寄存器的值并返回
    }
    i++;
  }
  if(strcmp(s,"pc")==0){
    *success=true;
    return cpu.pc;
  }
  *success=false;
  return 0;
}
