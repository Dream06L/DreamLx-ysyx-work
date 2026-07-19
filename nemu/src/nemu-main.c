/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU 依据 Mulan PSL v2 许可协议授权
* 您可以根据 Mulan PSL v2 的条款和条件使用此软件
* 您可以在以下网址获取 Mulan PSL v2 的副本：
*          http://license.coscl.org.cn/MulanPSL2
*
* 本软件按“原样”提供，不提供任何形式的担保，
* 明示或暗示，包括但不限于不侵权，
* 适销性或特定用途适用性
*
* 有关更多详情，请参见 Mulan PSL v2
***************************************************************************************/

#include <common.h>
word_t expr(char *e, bool *success);
void init_monitor(int, char *[]);//初始化监视器
void am_init_monitor();
void engine_start(); //引擎启动
int is_exit_status_bad();//退出状态是否bad

int main(int argc, char *argv[]) {
  /* Initialize the monitor. */

#ifdef CONFIG_TARGET_AM
  am_init_monitor();
#else
  init_monitor(argc, argv);
#endif
  
  /* Start engine. */
  engine_start();
/*
  FILE *fp = fopen("tools/gen-expr/input", "r");
  assert(fp != NULL);
  int result,res;
  int i=0;
  char buffer[65536+128];
  char buff[65536];
  bool success;
  int some=0;
  for(i=0;i<5000;i++){
  if(fgets(buffer,sizeof(buffer),fp)==NULL )break;
     // 查找并移除换行符
        size_t len = strlen(buffer);
        if (len > 0 && buffer[len - 1] == '\n') {
            buffer[len - 1] = '\0';  // 将换行符替换为字符串结束符
        } 
  sscanf(buffer,"%u %[^\n]",&result,buff);
  
  res =(int)expr(buff,&success);
   if(res==result){ some++;  
  printf("结果%u=%u i=%d\n",result,res,i);
   }

  }
  printf("some=%d\n",some);
  fclose(fp);
*/
  return is_exit_status_bad();
}
