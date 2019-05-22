#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> //引入字元測試與轉換函數標頭檔
#include <string.h>

void rev(char str[]){
	int i=0,j=0;
	while(str[i]!='\0'){  //只要變數不是\0
		i++;
	}
	printf("轉換後的字串: ");
	for(j=i-1;j>=0;j--){
		printf("%c",str[j]);
		//continue;
	}
	printf("\n");
}

int main(void)
{
  char str[50];
  fprintf(stdout,"Hello World!!\n");  
  printf("請輸入一個字串: "); 
  gets(str);
  rev(str);
  system("pause");
  return 0;   
};

