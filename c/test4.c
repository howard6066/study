#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> //�ޤJ�r�����ջP�ഫ��Ƽ��Y��
#include <string.h>

void reverse(char str[]){
	int i=0,j=0;
	while(str[i]!='\0'){  //�u�n�ܼƤ��O\0
		i++;
	}
	printf("�ഫ�᪺�r��: ");
	for(j=i-1;j>=0;j--){
		printf("%c",str[j]);
	}
	printf("\n");
}

int main(void)
{

  char str[50];
  
  printf("�п�J�@�Ӧr��: "); 
  gets(str);
  reverse(str);

  system("pause");
  return 0;   
};

