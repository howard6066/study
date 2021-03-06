#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> //引入字元測試與轉換函數標頭檔

struct data
{
    char name[10];
    int math;
} tmp;

//void swap(struct data *, struct data *); /*swap() 原型 */
void swap(struct data *p1, struct data *p2)
{
    struct data tmp;
    tmp=*p1;
    *p1=*p2;
    *p2=tmp;
};

int main(void)
{
    struct data s1={"jenny",74};
    struct data s2={"teresa",88};

    swap(&s1,&s2); //呼叫swap()函數
    
    printf("s1.name=%s, s1.math=%d\n",s1.name, s1.math);
    printf("s2.name=%s, s2.math=%d\n",s2.name, s2.math);
    
    system("pause");
    return 0;
};

