#include <stdio.h>
#include <stdlib.h>

int my_strlen(char *str){
  int ctr = 0;
  while ( *(str + ctr) )
    ctr ++;
  return ctr;
}

char * my_strcpy( char *dest, char *source ){
  for (int i = 0; *(source + i); i++)
    *(dest + i) = *(source + i);
  return dest;
}

char * my_strncat( char *dest, char *source, int n){
  char *curr = dest;
  while (*curr)
    curr ++;
  for ( ; n > 0; n --){
    *curr = *source;
    curr ++;
    source ++;
  }
  *curr = 0;
  return dest;
}
