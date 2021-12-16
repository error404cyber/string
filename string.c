#include <stdio.h>
#include <string.h>
#include <malloc.h>   
#include "string.h"

/**
 * Функция считает кол-во символов в строке
 * пока символ не равняется 0 - общее кол-во символов ув. на 1
 *
 * @param s сама строка
 * @param i подсчет символов
 * @return возвращает кол-во символов в строке
 */

int my_strlen(char* s) {
  if (s == NULL){
    return 0;
  }
  int i = 0;
  while (s[i] != 0) {
    i=i+1;
  }
  return i;
}

/**
 * Функция сравнивает посимвольно строки
 *
 * @param s1 первая строка
 * @param s2 вторая строка
 * @return возвращает 0 - если строки равны, иначе - другое число
 */

int my_strcmp(char* s1, char* s2) {
  if (s1 == NULL){
    return 0;
  }
  if (s2 == NULL){
    return 0;
  }
  while (*s1) {
    if (*s1 != *s2) {
	return *s1 - *s2;
    }
    s1++;
    s2++;  
  }
  return *s1 - *s2;
}

/**
 * Функция копирует одну строку во вторую
 *
 * @param s1 строка, в ктр копируем
 * @param s2 данная строка, ктр копируем
 * @return возвращает строку, в ктр скопировали
 */

char* my_strcpy(char* s1, char* s2) {
  if (s1 == NULL){
    return 0;
  }
  if (s2 == NULL){
    return 0;
  }
  int i=0;
  while (s2[i] != 0) {
    s1[i] = s2[i];
    i=i+1;
  }
  return s1;
}


/**
 * Функция создает дубликат строки + символ конца строки
 *
 * @param src строка, ктр копируем
 * @param str требуемаея строка
 */
char* my_strdup (char *src){
  char *str, *p;
  int len = my_strlen(src);
  str = malloc(len + 1);
  p = str;
  while (*src)
    *p++ = *src++;
  *p = '\0';
  return str;
}


/**
 * Функция ищет первое вхождение подстроки string2 в строке string1. Возвращает указатель на первое вхождение строки string2 в строку string1, или пустой указатель, если строка string2 не является частью строки string1. 
 *
 * @param string1 строка, по которой выполняется поиск
 * @param string2 подстрока
 */
char * my_strstr(char * string1, char * string2 ){
  int i = 0
    , check = 0
    , temp
    , len1 = my_strlen(string1)
    , len2 = my_strlen(string2);

  for(i = 0; i < len1 - len2; i++){
    temp = i;
    if (string1[i] == string2[0]) {
      for(int j = 0; j < len2; j++){
        if(string1[temp] == string2[j]){
          if(j == len2 - 1) {
            return string1 + i;
          }
          temp++;
        }
        else {
          break;
        }
      }
    }
  }
  return NULL;
}

/**
 * Функция возвращает первое вхождение символа в строку
 *
 * @param val символ, ктр ищем
 * @param str строка, где ищем
 * @param size_t num размер строки (ладно, массива) в байтах
 */

char * my_memchr(char * str, char val, size_t num){
  int i;
  for(i = 0; i < num; i++){
    if(str[i] == val)
      return i + str;
    }
      return NULL;
}

/**
 * Возвращает строчку, в которой заменены первые num символов символом val
 *
 * @param str строка
 * @param val символ замены
 * @param size_t num количество заменяемых символов
 */

char * my_memset(char * str, char val, size_t num){
  if (str == NULL){
    return 0;
  }
  int i, len = my_strlen(str);
  char * s = my_strdup(str);
  if(num > len)
    num = len;
  for(i = 0; i < num; i++){
    s[i] = val;
  }
  return s;
}

/**
 * Копирует первые n символов строки с нулевым символом в конце
 *
 * @param src строка, где ищем
 * @param int n количество копируемых символов
 */
char *my_memcpy (char * src, int n){
  char * s, * str = my_strdup(src); 
  str = malloc(n + 1);
  s = str;
  for(int i = 0; i < n; i++){
    *s++ = *src++;
  }
  *s = '\0';
  return str;
}
/**
 *Возвращает указатель на первое вхождение символа c в строку string
 *
 * @param s строка, где ищем
 * @param int c - символ
 */
char *my_strchr(char *s, int c){
  if (s == NULL){
    return 0;
  }
  while(*s){
    if(*s++ == c)
      return --s;
  }
  return NULL;
}
