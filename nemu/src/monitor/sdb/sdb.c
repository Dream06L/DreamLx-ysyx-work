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
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"
#include <utils.h>
#include <memory/vaddr.h> //读写内存
static int is_batch_mode = false;

void init_regex();
void init_wp_pool();

/* 我们使用 `readline` 库来提供从标准输入读取的更多灵活性*/
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}
/*----------------------------------------下面是cmd函数-------------------------------------------*/

static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}

static int cmd_q(char *args) {
  nemu_state.state=NEMU_QUIT;
  return -1;
}

static int cmd_help(char *args);

static int cmd_si(char *args){
  int n;
  if(args==NULL) n=1;
  else{
    sscanf(args,"%d",&n);
  }
  cpu_exec(n);
  return 0;
}

static int cmd_info(char *args){
  if(args==NULL) return 0;

  char subcmd;
  sscanf(args,"%c",&subcmd);
  
  if(subcmd=='r') isa_reg_display();
  else if(subcmd=='w')
  {}

  return 0;
}
static int cmd_x(char *args){
  if(args==NULL) return 0;

  int n=0,i=0;
  word_t expr;
  sscanf(args,"%d %x",&n,&expr);
  for(i=0;i<n;i++){
    word_t data=vaddr_read(expr+i*4,4);
    printf("0x%08x:   0x%08x\n",expr+i*4,data);
  }
  return 0;
}
/*----------------------------------上面是cmd函数----------------------------------------------*/

static struct {
  const char *name;//命令名字
  const char *description;//命令描述
  int (*handler) (char *);//命令对应的函数指针
} cmd_table [] = {
  { "help", "Display information about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
  {"si","single stepping",cmd_si},
  {"info","print program status",cmd_info},
  {"x","scan memory",cmd_x},
  /* TODO:添加更多命令 */

};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
  /* 提取第一个参数 */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* 没有提供参数 */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* 提取第一个标记作为命令 */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* 将剩余的字符串视为参数,
     * 可能需要进一步解析
     */
    char *args = cmd + strlen(cmd) + 1;//参数
    if (args >= str_end) {
      args = NULL;
    }

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

void init_sdb() {
  /* 编译正则表达式. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
