#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "mylib.h"

int main(){
  char s1[10] = "wowza";
  char s2[20] = "yurr";
  char *s3 = "shfrail";

  printf("s1: [%s]\n", s1);
  printf("s2: [%s]\n", s2);
  printf("s3: [%s]\n\n", s3);

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
  printf("    [mine]: %s\n\n", s2);

  char s4[] = "chipotle", s5[] = "sauce", *s6 = "applesauce", *s7 = "applesauce", c1 = 'c', c2 = 'a';
  printf("s4: [%s]\n",s4);
  printf("s5: [%s]\n",s5);
  printf("s6: [%s]\n",s6);
  printf("s7: [%s]\n",s7);
  printf("c1: [c]\n");
  printf("c2: [a]\n\n");

  printf("Testing strchr(s4, c1)\n");
  printf("[standard]: %p\n", strchr(s4, c1));
  printf("    [mine]: %p\n\n", my_strchr(s4, c1));
  printf("Testing strchr(s4, c2)\n");
  printf("[standard]: %p\n", strchr(s4, c2));
  printf("    [mine]: %p\n\n", my_strchr(s4, c2));

  printf("Testing strcmp(s5, s6)\n");
  printf("[standard]: %d\n", strcmp(s5, s6));
  printf("    [mine]: %d\n\n", my_strcmp(s5, s6));
  printf("Testing strcmp(s6, s7)\n");
  printf("[standard]: %d\n", strcmp(s6, s7));
  printf("    [mine]: %d\n\n", my_strcmp(s6, s7));
  printf("Testing strcmp(s4, s6)\n");
  printf("[standard]: %d\n", strcmp(s4, s6));
  printf("    [mine]: %d\n\n", my_strcmp(s4, s6));

  printf("Testing strstr(s6, s5)\n");
  printf("[standard]: %p\n", strstr(s6, s5));
  printf("    [mine]: %p\n\n", my_strstr(s6, s5));
  printf("Testing strstr(s5, s4)\n");
  printf("[standard]: %p\n", strstr(s5, s4));
  printf("    [mine]: %p\n\n", my_strstr(s5, s4));

  return 0;

}
