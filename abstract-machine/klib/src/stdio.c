#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {
  panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}

int sprintf(char *out, const char *fmt, ...) {
  va_list args;
  va_start(args, fmt);
  int i=0,pos=0;
  for(i=0;fmt[i]!='\0';i++){
    if(fmt[i]=='%'){
      switch (fmt[i+1]) {
      case 'd':{
        int sign = va_arg(args, int),j=0;//获取数字
        int num=sign;
        if(sign<0)num=-sign;//拿到数字的绝对值
        
        char str[32]="0";
        if(num==0){
          out[pos++]=str[0];
          i++;
          break;
        }
        while(num>0){
        str[j++]=num%10+'0';
        num/=10;
        }
        if(sign<0)str[j++]='-';
        str[j]='\0';
        int end=j-1;
        while(end>=0)
        {
          out[pos++]=str[end--];
        }
        i++;//跳过d
       break;
      }
      case 's':{
        char *string=va_arg(args, char*);
        int j=0;
        while(string[j]!=0){
          out[pos++]=string[j++];
        }
        i++;//跳过s
        break;
      } 
      default:out[pos++]=fmt[i];break;
      }

    }
    else {out[pos++]=fmt[i];}    
  }
  va_end(args);
  out[pos]='\0';
  return pos;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
