#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "oof.h"

int main(){
  char s1[] = "wowza";
  char s2[] = "yurr";
  char *s3 = "shfrail";

  printf("Testing strlen(s1):\n");
  printf("[standard]:%zu\n", strlen(s1));
  printf("    [mine]:%zu\n", my_strlen(s1));
  return 0;
}
