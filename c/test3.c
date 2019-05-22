#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void test1() {
    //��ذ}�C�ŧi�覡
    int a1[4] = {1, 2, 3, 4};
    int a2[] = {1, 2, 3, 4};
    //�r��
    char s1[] = "ABC";
    //�O�o���ݭn��\0
    char s2[4] = {'A', 'B', 'C', '\0'};
}

void test2() {
    char s1[] = "ABC";
    //�r��禡�A��#include <string.h>
    
    //���o�r�����
    int l = strlen(s1); 
    
    //�ƻs�r��
    char s2[6]; //�ݹw����n����
    strcpy(s2, "Hello"); 
    
    //�r��۱�
    char s3[6] = "ABC"; //�ݹw�d�걵�����
    char s4[] = "DE";
    strcat(s3, s4);

    //�r����
    char s5[] = "ABC";
    char s6[] = "ABCD";
    int c = strcmp(s5, s6); 
    //s5==s6��c��0, s5<s6��c<0�As5>s6��c>0

    //�ƭ���r��
    char s7[40];
    sprintf(s7, "%f", 3.1416);

    //�r����ƭ�
    char s8[] = "32767";
    int n = atoi(s8);
}

void test3() {
    //���Ъ���ثŧi�g�k
    char* p1;
    char *p2;
    char a = 'A';
    p1 = &a; //������}
    printf("%c", *p1); //���V�ܼƤ��e�ɼg*p
    //���T��ܤ����V����a��ɡA��NULL
    char *p3 = NULL;
    //�ˬd�O�_���� if (p != NULL), if (!p)

}

void test4() {
    //���лP�}�C
    int a[4] = {1, 2, 3, 4};
    int *i = a + 1;
    printf("*i=%d\n", *i); //�o��2
    //�[1�ä��O���ʤ@��Byte�A�ӬO�@��int������(sizeof(int))
    printf("*(i+1)=%d\n", *(i+1)); //�o��3
    //i++��i�V�Ჾ�@�Ӥ���
    i++;
    printf("*i=%d after i++\n", *i);
}

void test5() {
    //�ʺA�t�m�O����
    short *buf;
    //�۷��ŧi1000��short�}�C
    buf = (short *)malloc(sizeof(short) * 1000);
    buf[20] = 40;
    printf("%d\n", buf[20]);
    //�ϥΧ��n�O�o����(�S��GC�����A�@���ۤv��)
    free(buf);

    //calloc��l�ƨó]��0
    buf = (short *)calloc(100, sizeof(short));
    printf("%d\n", buf[5]);

    //realloc���s�t�m�j�p
    buf = (short *)realloc(buf, sizeof(short) * 10);
}

void test6() {
    char *b;
    char a[4] = {1, 2, 3, 4};
    b = (char *)malloc(sizeof(char) * 200);
    if (!b)
        return; //�L�k�t�m�O����ɤ��~��A�H��Crash
    memcpy(b, a, sizeof(char) * 4);
    printf("%d\n", b[2]); //�o��3
    free(b);
    //�t�~��memset(buff, value, count)�qbuff��}��Jcount��value
}

int main() {
	test1();test2();test3();
    test4();test5();test6();
	system("pause");
    return 0;
}