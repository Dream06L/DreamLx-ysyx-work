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
#include <memory/vaddr.h> //读写内存

enum {
  TK_NOTYPE = 256, TK_EQ,TK_NUM,TK_NOEQ,TK_HEX,TK_AND,REG,DEREF,NEGATIVE

  /* TODO: Add more token types */

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {
  /* TODO: Add more rules. 注意不同规则的优先级*/

  {" +", TK_NOTYPE},    // spaces
  {"0x[0-9A-Fa-f]+",TK_HEX},
  {"[0-9]+",TK_NUM}, //number
  {"\\(",'('},          //左括号
  {"\\)",')'},          //右括号    
  {"\\*",'*'},
  {"/",'/'},
  {"\\+", '+'},         // plus
  {"-",'-'},            //subtract
  {"==", TK_EQ},        // equal
  {"!=",TK_NOEQ},       //不相等
  {"&&",TK_AND},
  {"\\$\\$0|\\$[a-zA-Z][a-zA-Z0-9]+",REG},//对于$0寄存器，打印它的值时也要加$,写成$$0
  
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

static Token tokens[65536] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0; //指示已经被识别出的token数目.丢弃空格

//输入的表达式进行词法分析
static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0; 

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {

      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;//匹配子串的结束偏移量

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
          case REG:
          case TK_HEX:
          case TK_NUM: 
            tokens[nr_token].type = rules[i].token_type;  //记录token的类型
            if(pmatch.rm_eo>=31) {return false;} //避免str溢出

            strncpy(tokens[nr_token].str,substr_start,substr_len);//记录token的内容
            tokens[nr_token].str[substr_len]='\0';
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

static bool check_parentheses(int p, int q){
  int i=p,match=0,flag=0;

  while(i<=q){
    if(tokens[i].type=='(') {match++;}
    else if(tokens[i].type==')') {match--;}
    else {i++;continue;}

    if(match==0 ){
      if(i==q && flag==0 && tokens[p].type=='(' && tokens[q].type==')'){return true;}
      else flag=1;//表示在中间的时候match归0了，一定没有外面的大括号n
    }
    Assert(match>=0,"右边多括号不匹配\n");//只要出现右括号多，就不匹配
    i++;
    
  }
  Assert(match==0,"match=%d,括号不匹配\n",match);
  
  return false;
}

int main_operator(int p,int q){
  int i=0;
  int god_pos=0;//主的位置
  int blance=0;//用于检测括号
  for(i=p;i<=q;i++){
    //跳过括号部分
    if(tokens[i].type=='('){
      blance++;
      i++;
      while(blance!=0 && i<=q){
        if(tokens[i].type=='(')blance++;
        if(tokens[i].type==')')blance--;
        i++;
      }
    }
    
    //记录第一个运算符的位置
    if(tokens[i].type=='+' || tokens[i].type=='-' || tokens[i].type=='*' || tokens[i].type=='/' || tokens[i].type==TK_EQ || tokens[i].type==TK_NOEQ || tokens[i].type==TK_AND || tokens[i].type==DEREF ||tokens[i].type==NEGATIVE )
    {god_pos=i; break;}

  }
  
  for(i=god_pos;i<q;i++){//从第一个运算符的位置开始
    //跳过括号部分
      if(tokens[i].type=='('){
        blance++;
        i++;
        while(blance!=0){
          if(tokens[i].type=='(')blance++;
          if(tokens[i].type==')')blance--;
          i++;
        }
      }
      if(i>=q){break;}//防止（）+（）这种越届

/*低*/ if(tokens[i].type==TK_AND)
      {god_pos=i;}
        else if(tokens[i].type==TK_EQ || tokens[i].type==TK_NOEQ)
      { if(tokens[god_pos].type!=TK_AND)//如果现在的运算符比god_pos处的运算符优先级低，就把主运算符变成更低一级的
          god_pos=i;
      }
        else if(tokens[i].type=='+' || tokens[i].type=='-')
      { if(tokens[god_pos].type!=TK_AND && tokens[god_pos].type!=TK_EQ && tokens[god_pos].type!=TK_NOEQ)
          god_pos=i;
      }
        else if(tokens[i].type=='*' || tokens[i].type=='/')
      { if(tokens[god_pos].type=='*' || tokens[god_pos].type=='/' || tokens[god_pos].type==DEREF ||tokens[god_pos].type==NEGATIVE)
          god_pos=i;
      }
        else if(tokens[i].type==DEREF&&tokens[god_pos].type==NEGATIVE){
        god_pos=i;
      } /*高*/

  }

return god_pos;  
}

word_t eval(int p,int q) {
  if (p > q) {
    /* Bad expression *///p和q,第p位置到q位置的token
    Assert(0,"Bad expression\n");
  }
  else if (p == q) {
    word_t a_num=0;//参与运算的数字
    if(tokens[p].type==REG){
      char tem_str[32];//用来放reg名字
      bool succ;
      sprintf(tem_str,"%s",tokens[p].str+1);
      a_num = isa_reg_str2val(tem_str, &succ);
      Assert(succ==true,"找不到该寄存器");
    }else if(tokens[p].type==TK_HEX || tokens[p].type==TK_NUM){
    sscanf(tokens[p].str,"%i",&a_num);
    }else {
      Assert(0,"Bad expression\n");
    }
    return a_num;
  }
  else if (check_parentheses(p, q) == true) {
    return eval(p + 1, q - 1);
  }
  else {
    int op =main_operator(p,q);
    word_t val1=0 ;
    if(tokens[op].type!=DEREF&&tokens[op].type!=NEGATIVE)//这两种运算符为主运算符时左边没数字，不算val1
    {val1 = eval(p, op - 1);}

    word_t val2 = eval(op + 1, q);

    switch (tokens[op].type) {
      case '+': return val1 + val2;
      case '-': return val1 - val2;
      case '*': return val1 * val2;
      case '/':   Assert(val2!=0,"val2==0,op=%d",op);   return val1 / val2;
      case TK_EQ: return val1==val2;
      case TK_NOEQ: return val1!=val2;
      case TK_AND: return val1&&val2;
      case DEREF: return vaddr_read(val2,4);
      case NEGATIVE: return 0-val2;
      default: assert(0);
    }
  }
}
//计算传入的表达式
word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }

  /* TODO: 插入代码以评估表达式 */
  int i=0;
  /*---------------判断解引用----------------*/
  for (i = 0; i < nr_token; i ++) {

    if (tokens[i].type == '*' && (i == 0 || tokens[i - 1].type ==TK_AND || tokens[i - 1].type ==TK_NOEQ || tokens[i - 1].type ==TK_EQ || tokens[i - 1].type =='/'|| tokens[i - 1].type =='*' || tokens[i - 1].type =='-' || tokens[i - 1].type =='+' || tokens[i - 1].type =='(' || tokens[i - 1].type ==NEGATIVE || tokens[i - 1].type ==DEREF ))
    {tokens[i].type = DEREF;}
    
  }  
  /*---------------判断负号----------------*/
    for (i = 0; i < nr_token; i ++) {

    if (tokens[i].type == '-' && (i == 0 || tokens[i - 1].type ==TK_AND || tokens[i - 1].type ==TK_NOEQ || tokens[i - 1].type ==TK_EQ || tokens[i - 1].type =='/'|| tokens[i - 1].type =='*' || tokens[i - 1].type =='-' || tokens[i - 1].type =='+' || tokens[i - 1].type =='(' || tokens[i - 1].type ==NEGATIVE || tokens[i - 1].type ==DEREF))
    {tokens[i].type = NEGATIVE;}
    
  } 


  return eval(0,nr_token-1);
}

