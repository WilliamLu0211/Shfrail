#include <stdio.h>
#include <stdlib.h>
#include "oof.h"

char *my_strchr( char *s, char c ){
  while(*s){
    if(c == *s){
      return s;
    }
    s++;
  }
  return NULL;
}

int my_strcmp( char *s1, char *s2 ){
  

}

char * my_strstr( char *s1, char * s2 ){
  while(*(s1 + my_strlen(s2))){
    if(!(my_strcmp(s1,s2))){
      return s1;
    }
    s1++;
  }
  return NULL;
}
