#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "oof.h"

int main(){
  char s1[10] = "wowza";
  char s2[20] = "yurr";
  char *s3 = "shfrail";

  printf("s1: %s\n", s1);
  printf("s2: %s\n", s2);
  printf("s3: %s\n\n", s3);

  printf("Testing strlen(s1):\n");
  printf("[standard]: %zu\n", strlen(s1));
  printf("    [mine]: %d\n\n", my_strlen(s1));

  printf("Testing strcpy(s1, s3):\n");
  strcpy(s1, s3);
  printf("[standard]: %s\n", s1);
  strcpy(s1, "wowza");
  my_strcpy(s1, s3);
  printf("    [mine]: %s\n\n", s1);

  printf("Testing strncat(s2, s3):\n");
  strncat(s2, s3, 4);
  printf("[standard]: %s\n", s2);
  strcpy(s2, "yurr");
  my_strncat(s2, s3, 4);
  printf("    [mine]: %s\n", s2);
  return 0;
}
