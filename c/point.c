#include <stdlib.h>
#include <stdio.h>

char s[]= "0113256";
char *p=s;

int main()
{
  printf("%c", *p++);
  printf("%c", *(p++));
  printf("%c", (*p)++);
  printf("%c", *++p);
  printf("%c", *(++p));
  printf("%c", ++*p);
  printf("%c", ++(*p));
  printf("\n");
  
  printf(s);
  printf("\n");
  system("pause");
  return 0;
}