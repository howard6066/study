#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void test1() {
    //兩種陣列宣告方式
    int a1[4] = {1, 2, 3, 4};
    int a2[] = {1, 2, 3, 4};
    //字串
    char s1[] = "ABC";
    //記得尾端要放\0
    char s2[4] = {'A', 'B', 'C', '\0'};
}

void test2() {
    char s1[] = "ABC";
    //字串函式，需#include <string.h>
    
    //取得字串長度
    int l = strlen(s1); 
    
    //複製字串
    char s2[6]; //需預先算好長度
    strcpy(s2, "Hello"); 
    
    //字串相接
    char s3[6] = "ABC"; //需預留串接後長度
    char s4[] = "DE";
    strcat(s3, s4);

    //字串比較
    char s5[] = "ABC";
    char s6[] = "ABCD";
    int c = strcmp(s5, s6); 
    //s5==s6時c為0, s5<s6時c<0，s5>s6時c>0

    //數值轉字串
    char s7[40];
    sprintf(s7, "%f", 3.1416);

    //字串轉數值
    char s8[] = "32767";
    int n = atoi(s8);
}

void test3() {
    //指標的兩種宣告寫法
    char* p1;
    char *p2;
    char a = 'A';
    p1 = &a; //指派位址
    printf("%c", *p1); //指向變數內容時寫*p
    //明確表示不指向任何地方時，用NULL
    char *p3 = NULL;
    //檢查是否為空 if (p != NULL), if (!p)

}

void test4() {
    //指標與陣列
    int a[4] = {1, 2, 3, 4};
    int *i = a + 1;
    printf("*i=%d\n", *i); //得到2
    //加1並不是移動一個Byte，而是一個int的長度(sizeof(int))
    printf("*(i+1)=%d\n", *(i+1)); //得到3
    //i++亦可向後移一個元素
    i++;
    printf("*i=%d after i++\n", *i);
}

void test5() {
    //動態配置記憶體
    short *buf;
    //相當於宣告1000個short陣列
    buf = (short *)malloc(sizeof(short) * 1000);
    buf[20] = 40;
    printf("%d\n", buf[20]);
    //使用完要記得釋放(沒有GC幫忙，一切自己來)
    free(buf);

    //calloc初始化並設為0
    buf = (short *)calloc(100, sizeof(short));
    printf("%d\n", buf[5]);

    //realloc重新配置大小
    buf = (short *)realloc(buf, sizeof(short) * 10);
}

void test6() {
    char *b;
    char a[4] = {1, 2, 3, 4};
    b = (char *)malloc(sizeof(char) * 200);
    if (!b)
        return; //無法配置記憶體時不繼續，以後Crash
    memcpy(b, a, sizeof(char) * 4);
    printf("%d\n", b[2]); //得到3
    free(b);
    //另外有memset(buff, value, count)從buff位址填入count個value
}

int main() {
	test1();test2();test3();
    test4();test5();test6();
	system("pause");
    return 0;
}