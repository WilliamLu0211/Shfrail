#include <stdio.h>
#include <stdlib.h>

size_t my_strlen(char *str){
  int ctr = 0;
  while ( *(str + ctr) )
    ctr ++;
  return ctr;
}

char *my_strcpy(char *dst, const char *src){
  for (int i = 0; *(src + i); i++)
    *(dst + i) = *(src + i);
  return dst;
}

char *my_strncat(char *dst, const char *src, size_t n){
  char *cur = dst;
  while (*cur)
    cur ++;
  for ( ; n > 0; n --){
    *cur = *src;
    cur ++;
    src ++;
  }
  *cur = 0;
  return dst;
}
