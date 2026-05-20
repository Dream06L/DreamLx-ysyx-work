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

#include "common.h"
#include "sdb.h"
#include <stdio.h>
#include <utils.h>
#include <isa.h>
#define NR_WP 32

typedef struct watchpoint {
  int NO;//监视点的序号
  struct watchpoint *next; 
  /* TODO: Add more members if necessary */
  char what[65500];//储存要检测的表达式
  word_t value;
} WP;

static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;
        //使用中的监视点结构,空闲的监视点结构
void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = NULL;
  free_ = wp_pool;
}

/* TODO:实现观察点的功能 */
WP* new_wp(char *what,word_t num){
  WP *p=NULL;

  Assert(free_!=NULL,"没有空闲监视点结构");
  p = free_;
  free_ = free_->next;

  p->next=head;
  head=p;
  strcpy(head->what,what);
  head->value=num;
  return head;
}

void creatwp(char *wwhat){
  bool suc;
  word_t num;
  num=expr(wwhat,&suc);//先计算一边，防止存入错误表达式

  new_wp(wwhat,num);
}
void free_wp(WP *wp){
  
  WP *temp=wp;
  temp->next=free_;
  free_=temp;
}

void deletewp(int n){
  WP *dp=head;
  if(dp==NULL){
    printf("没有设置监视点\n");
    return;
  }
  if(dp->NO==n){
    head=head->next;
    free_wp(dp);
    return;
  }
  while(dp!=NULL){//寻找前驱节点
    if(dp->next!=NULL && dp->next->NO==n){
      WP *dewp=dp->next;
      dp->next=dp->next->next;
      free_wp(dewp);
      return;
    }
    dp=dp->next;
  }
  printf("没有找到你要删除的监视点\n");
}
void Scan_watchpoints(){
  bool success;
  WP *pp=head;
  while(pp!=NULL){
    word_t new_value;
    new_value = expr(pp->what,&success);
    if(new_value != pp->value){
      
      if(nemu_state.state!=NEMU_END){nemu_state.state=NEMU_STOP;}
      printf("触发%d号监视点 : %s\n  \
        old value= 0x%08x \
        new value= 0x%08x\n",pp->NO,pp->what,pp->value,new_value);
       pp->value=new_value ;
       
       
    }
    pp=pp->next;
  }
}

void printwp(){
  WP *pwp=head;
  if(pwp==NULL){
    printf("没有设置监视点\n");
    return;
  }

  printf("num\t value\t what\n");
  while(pwp!=NULL){
    printf("%d\t 0x%08x\t %s\n",pwp->NO,pwp->value,pwp->what);
    pwp=pwp->next;
  }
}


