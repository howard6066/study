#include <stdlib.h>
#include <stdio.h>

void show_binary(int num)
{
    int b[8]={0};
    for(int i=1;i<=8;i++)
    {
        b[8-i]=num%2;
        num=num/2;
    }
    for(int i=0;i<8;i++)
    
        printf("%d",b[i]);
        printf("\n");
}

int main()
{
    printf("89的二進制為: ");
    show_binary(89);

    int a = 0xfafc; //求第九個bit值是多少
    int c= (a >> 8) &1;
    printf("第九個bit值:%x\n",c);
    
    system("pause");
    return 0;
}