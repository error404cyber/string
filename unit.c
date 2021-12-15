#include "unit.h"
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void run_all_tests() { assert(OK == test_strlen()); 
                       assert(OK == test_strcpy()); 
                       assert(OK == test_strcmp());
                       assert(OK == test_strdup());
                       assert(OK == test_strchr());
                       assert(OK == test_memchr());
                       assert(OK == test_memcpy());
                       assert(OK == test_memset());
                     }

Error test_strlen(){
    char* s1 = "asd";
    if (my_strlen(s1) != 3){
    printf("Not right\n");
    return NOT_OK;
  }
  return OK;
}

Error test_strcmp(){
    char s3[1000] = "qwer";
	  char s4[1000] = "qwer";
    if (my_strcmp(s3, s4) != 0){
    printf("Not right\n");
    return NOT_OK;
  }
  return OK;
}

Error test_strcpy(){
  char s5[1000] = "qwer";
	char s6[1000] = "sd";
  my_strcpy(s6, s5);
  if (my_strcmp(s6, s5) != 0){
    printf("Not right\n");
    return NOT_OK;
  }
  return OK;
}
