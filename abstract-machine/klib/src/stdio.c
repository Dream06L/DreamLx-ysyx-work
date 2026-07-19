#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)
//char backup[100];
char out[100];
int printf(const char *fmt, ...) {
  va_list args;
  va_start(args, fmt);
   
  int num=vsprintf(out,fmt,args);

  va_end(args);

  putstr(out);

return num;
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  int i=0,pos=0,full=1,wide=0;

  for(i=0;i<100&&fmt[i]!='\0';i++){

    if(fmt[i]=='%'){
      if(fmt[i+1]=='0'){//%+02d
        full=0;//填充0
        i++;//跳到0
      }
      if(fmt[i+1]>'0'&&fmt[i+1]<='9'){//%2d
        wide=fmt[i+1]-'0';
        i++;//跳到2
      }
      switch (fmt[i+1]) {
      case 'd':{
        int sign = va_arg(ap, int),j=0;//获取数字
        int num=sign;
        if(sign<0)num=-sign;//拿到数字的绝对值
        
        char str[32]="0";
        if(num==0){
          str[j++]='0';
        }
        while(num>0){
        str[j++]=num%10+'0';
        num/=10;
        }
        if(sign<0)str[j++]='-';
        str[j]='\0';
        int end=j-1;
        if(j<wide){
          int c=wide-j;
          if(full==0){
            while(c-->0)
            out[pos++]='0';
          }else{
            while(c-->0)
            out[pos++]=' ';
          }
        }
        while(end>=0)
        {
          
          out[pos++]=str[end--];
        }
        i++;//跳过d
        full=1;
        wide=0;
       break;
      }
      case 's':{
        char *string=va_arg(ap, char*);
        int j=0;
        while(string[j]!=0){
          out[pos++]=string[j++];
        }
        i++;//跳过s
        break;
      }
      case 'x':{
        unsigned int numx=va_arg(ap, unsigned int),k=0,rem;
        char str[32]="0";
        if(numx==0){
          out[pos++]=str[0];
          i++;
          break;
        }
        while(numx>0){
          rem=numx%16;
          if(rem<10){ str[k++]=rem+'0';}
          else      {str[k++]=rem-10+'a';}
          numx/=16;
        }
        
        str[k]='\0';
        int end=k-1;
        while(end>=0)
        {
          out[pos++]=str[end--];
        }
        i++;//跳过x
        break;
      } 
      //case 'f':{}
      default:out[pos++]=fmt[i];break;
      }

    }
    else {out[pos++]=fmt[i];}    
  }

  out[pos]='\0';

  //putch(pos);
//缓兵之计
/*
volatile int delay=0;
for(int b=0;b<100;b++)
    delay++;
*/

  //putstr(out);

  return pos;
}

int sprintf(char *out, const char *fmt, ...) {
  va_list args;
  va_start(args, fmt);
  int strnum= vsprintf(out,fmt,args);
  va_end(args);
  
  return strnum;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
