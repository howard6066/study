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
    printf("89���G�i�: ");
    show_binary(89);

    int a = 0xfafc; //�D�ĤE��bit�ȬO�h��
    int c= (a >> 8) &1;
    printf("�ĤE��bit��:%x\n",c);
    
    system("pause");
    return 0;
}