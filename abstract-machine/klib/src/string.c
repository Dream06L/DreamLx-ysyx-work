#include <klib.h>
#include <klib-macros.h>
#include <stddef.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  panic("Not implemented");
}

char *strcpy(char *dst, const char *src) {
  int i=0;
  while((dst[i]=src[i])!='\0') i++;
  return dst;
}

char *strncpy(char *dst, const char *src, size_t n) {
  panic("Not implemented");
}

char *strcat(char *dst, const char *src) {
  int i=0,j=0;
  while(dst[i]!='\0')i++;
  while((dst[i+j]=src[j])!='\0')j++;
  return dst;
}

int strcmp(const char *s1, const char *s2) {
  int i=0;
  while(s1[i]!='\0' || s2[i]!='\0'){
    if(s1[i]>s2[i])return 1;
    else if(s1[i]<s2[i])return -1;
    i++;
  }
  return 0;
}

int strncmp(const char *s1, const char *s2, size_t n) {
  panic("Not implemented");
}

void *memset(void *s, int c, size_t n) {
  char *ss = (char *)s;
  while(n--)
  *ss++=c;
return s;
}

void *memmove(void *dst, const void *src, size_t n) {

  char *p1=(char*)dst;
  const char* p2=(const char*)src;
  size_t i=0;
  if(p2<p1){
    for(i=n;i>0;i--)
    p1[i-1]=p2[i-1];
  
  }
  else{
    for(i=0;i<n;i++)
    p1[i]=p2[i];

  }

  /*
  char t[2048];
  int i=0;
  for(i=0;i<n;i++){
    t[i]=*p2++;
  }
   for(i=0;i<n;i++){
    *p1++ = t[i];
  }d老师说我的代码顶多教学演示*/
  return dst;
}
void *memcpy(void *out, const void *in, size_t n) {
    char *p1 = (  char*) out;
    const char *p2 = (const  char*) in; 
    while(n--)
    {*p1++ = *p2++;}

  return out;  
}

int memcmp(const void *s1, const void *s2, size_t n) {
  const unsigned char *p1 = (const unsigned char*) s1;
  const unsigned char *p2 = (const unsigned char*) s2;
  size_t i=0;
  while (i<n) {
  if(p1[i]>p2[i])return 1;
  else if(p1[i]<p2[i])return -1;
  i++;
  }
  return 0;
}

#endif
