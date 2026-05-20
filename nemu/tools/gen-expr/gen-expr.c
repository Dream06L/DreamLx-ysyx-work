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

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>


// this should be enough
static char buf[65536] = {};
static char code_buf[65536 + 128] = {}; // a little larger than `buf`
static char ubuf[65536] = {};
static char *code_format =
"#include <stdio.h>\n"
"int main() { "
"  unsigned result = %s ; "
"  printf(\"%%u\", result); "
"  return 0; "
"}";

static int choose(int n){
  int num = rand()%n; // 0到n-1  
  return num;
}

static void gen_num(){
   if(strlen(ubuf)>=65500){
      return;
    }//实时检测长度
  unsigned number=rand()%64;
  char str[32];
  
  if(strlen(buf)>0 && buf[strlen(buf)-1]=='/' && number==0  ){number=rand()%64 +1;}
  sprintf(str,"%u",number);//数字转换为字符串
  strcat(buf,str); //str 所指向的字符串追加到 buf 所指向的字符串的结尾
  sprintf(str,"%uU",number);//数字转换为字符串,u结尾，为了无符号运算
  strcat(ubuf,str);
}

static void gen(char sign){
  if(strlen(ubuf)>=65500){
    return;
  }//实时检测长度
  char str_sign[2];
  str_sign[0]=sign;
  str_sign[1]='\0';
  strcat(buf,str_sign);

  strcat(ubuf,str_sign);
}

static void gen_rand_op(){
   if(strlen(ubuf)>=65500){
      return;
    }//实时检测长度
  switch(choose(4)){
    case 0: gen('+'); break;
    case 1: gen('-'); break;
    case 2: gen('*'); break;
    case 3: gen('/'); break;
  }
}
static void gen_rand_expr() {
  if(strlen(ubuf)>=65500){
      return;
    }//实时检测长度


  if(choose(3)==2)gen(' ');
  
   switch (choose(3)) {
    case 0: gen_num(); break;
    case 1: gen('('); gen_rand_expr(); gen(')'); break;
    default: gen_rand_expr(); gen_rand_op(); gen_rand_expr(); break;
  }



}


int main(int argc, char *argv[]) {
  int seed = time(0);
  srand(seed);//设随机数种子
  int loop = 1;
  if (argc > 1) {
    sscanf(argv[1], "%d", &loop);
  }
  int i;
 
  for (i = 0; i < loop; i ++) {
   
   
    buf[0] = '\0';
    ubuf[0]='\0';
    gen_rand_expr();//生成表达士
      if(strlen(ubuf)>=65450){
      i--;
      continue;
    }
    sprintf(code_buf, code_format, ubuf);

    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);
    fclose(fp);

    int ret = system("gcc -Werror=div-by-zero -O0 /tmp/.code.c -o /tmp/.expr 2>/dev/null");//执行这个编译命令
    if (ret != 0) 
    {
      i--;
    continue;
    }

    fp = popen("/tmp/.expr 2>/dev/null", "r");//“r”，读取子进程的输出
    assert(fp != NULL);

    unsigned result;
    ret = fscanf(fp, "%u", &result);
    int status=pclose(fp);//关闭由popen打开的文件指针，并等待子进程终止。
    if(status!=0){
      i--;
      continue;
    }
    printf("%u %s\n", result, buf);
  }
  return 0;
}
