#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int sum=0;
    for(int i=1;i<=100;i++)
    {
        sum=sum+i;
    }

    printf("%d\n",sum);
    system("pause");
    return 0; 
}