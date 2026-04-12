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

/* 我们使用 POSIX 正则表达式函数来处理正则表达式
 * 输入 'man regex' 获取有关 POSIX 正则表达式函数的更多信息
 */
#include <regex.h>

enum {
  TK_NOTYPE = 256, TK_EQ,TK_NUM

  /* TODO: Add more token types */

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {
  /* TODO: Add more rules. 注意不同规则的优先级*/

  {" +", TK_NOTYPE},    // spaces
  {"\\(",'('},          //左括号
  {"\\)",')',},          //右括号
  {"\\d+",TK_NUM},      //number
  {"\\*",'*'},
  {"/",'/'},
  {"\\+", '+'},         // plus
  {"-",'-'},            //subtract
  {"==", TK_EQ},        // equal
  
};

#define NR_REGEX ARRLEN(rules)//rules数组长度

static regex_t re[NR_REGEX] = {};

/* 规则被多次使用
 * 因此我们在使用它们之前只编译一次
 *init_regex编译正则*/
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[32] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;  //指示已经被识别出的token数目.

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {

      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;
        
        /* 待办：现在根据 rules[i] 识别到了一个新标记  添加代码
         *将令牌记录在数组 `tokens` 中 对于某些类型的
         * token，应执行一些额外操作
         */

        switch (rules[i].token_type) {
          case TK_NOTYPE:
            break;
          case TK_NUM: 
            tokens[nr_token].type = rules[i].token_type;  //记录token的类型
            if(pmatch.rm_eo>=32) {pmatch.rm_eo=31;} //避免溢出

            strncpy(tokens[nr_token].str,substr_start,pmatch.rm_eo);//记录token的内容
            tokens[nr_token].str[31]='\0';
            nr_token++;
            break;
          default: 
            tokens[nr_token].type = rules[i].token_type;  //记录token的类型
            nr_token++;
        }

        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  return true;
}


word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }

  /* TODO: 插入代码以评估表达式 */
  TODO();

  return 0;
}
