#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> //まじ代刚籔锣传ㄧ计夹繷郎

struct data
{
    char name[10];
    int math;
} tmp;

//void swap(struct data *, struct data *); /*swap()  */
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

    swap(&s1,&s2); //㊣swap()ㄧ计
    
    printf("s1.name=%s, s1.math=%d\n",s1.name, s1.math);
    printf("s2.name=%s, s2.math=%d\n",s2.name, s2.math);
    
    system("pause");
    return 0;
};

