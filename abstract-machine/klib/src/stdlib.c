#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stddef.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)
static unsigned long int next = 1;

int rand(void) {
  // RAND_MAX assumed to be 32767
  next = next * 1103515245 + 12345;
  return (unsigned int)(next/65536) % 32768;
}

void srand(unsigned int seed) {
  next = seed;
}

int abs(int x) {
  return (x < 0 ? -x : x);
}

int atoi(const char* nptr) {
  int x = 0;
  while (*nptr == ' ') { nptr ++; }
  while (*nptr >= '0' && *nptr <= '9') {
    x = x * 10 + *nptr - '0';
    nptr ++;
  }
  return x;
}

void *malloc(size_t size) {

  // 在本地，malloc() 会在 C 运行时初始化期间被调用
  // 因此不要在这里调用 panic()，否则它会导致无限递归：
  //   panic() -> putchar() -> (glibc) -> malloc() -> panic()
#if !(defined(__ISA_NATIVE__) && defined(__NATIVE_USE_KLIB__))
    if(size==0)return NULL;
  size_t align_size=(size+7)/8*8;
  static int init=1;
  static void *newaddr=NULL;
   if(init){
    newaddr=heap.start;
    init=0;
   }

  if(newaddr+align_size>heap.end )
    return NULL;

  void *addr=newaddr;
  newaddr+=align_size;

#endif

  return addr;
}

void free(void *ptr) {
}

#endif
