#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

//int k=0;
int sum(void){
    static int k=0;
    k++;
    return k;
}

int main(){
    
    for(int i=1;i<=100;i++)
    {
       printf("%d\n",sum());
    }

    system("pause");
    return 0; 
}