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
		       assert(OK == test_strstr());
                     }

Error test_strlen(){
  char* s1 = "asd";
  if (my_strlen(s1) != 3){
    printf("Not right\n");
    return NOT_OK;}
  return OK;
}

Error test_strcmp(){
  char s3[1000] = "qwer";
  char s4[1000] = "qwer";
  if (my_strcmp(s3, s4) != 0){
    printf("Not right\n");
    return NOT_OK;}
  return OK;
}

Error test_strcpy(){
  char s5[1000] = "qwer";
  char s6[1000] = "sd";
  my_strcpy(s6, s5);
  if (my_strcmp(s6, s5) != 0){
    printf("Not right\n");
    return NOT_OK;}
  return OK;
}

Error test_strchr(){
  char s5[1000] = "jasdkfj";
  char z = 's';
  if (my_strcmp(strchr(s5, z), "sdkfj") != 0){
    printf("Not right\n");
    return NOT_OK;}
  return OK;
}

Error test_strstr(){
  char *str1 = "541 541 123 545", *str2 = "123";
  if (my_strcmp(my_strstr(str1, str2), "123 545") != 0){
    printf("Not right\n");
    return NOT_OK;}
  return OK;
}

Error test_strdup(){
  char s5[1000] = "123123";
  char* s6 =my_strdup((char*)s5);
	
  if (s6 == NULL){
    printf("Not right\n");
    return NOT_OK;}
	
  if (my_strcmp(my_strdup(s5), "123123") != 0){
    printf("Not right\n");
    return NOT_OK;}
  free(s6);
  return OK;
}

Error test_memchr(){
  char *str1 = "541 541 123 545";
  char z = '4';
  if (my_strcmp(my_memchr(str1, z, my_strlen(str1)), "41 541 123 545") != 0){
    printf("Not right\n");
    return NOT_OK;}
  return OK;
}

Error test_memcpy(){
  char s5[1000] = "jasdkfj";
  char* s6 =my_memcpy((char*)s5, 3);
	
  if (s6 == NULL){
    printf("Not right\n");
    return NOT_OK;}
	
  if (my_strcmp(s6, "jas") != 0){
    printf("Not right\n");
    return NOT_OK;}
  free(s6);
  return OK;
}

