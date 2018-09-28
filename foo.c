#include <stdio.h>
#include <stdlib.h>

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
  
}
