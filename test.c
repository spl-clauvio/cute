#include<stdio.h>
#include<stdlib.h>
extern int d;
int main()
{
    int a=0,b=0,c=0;
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("hello,world\n你好，世界！\n");
    printf("%d\n%d\n",c,d);
    system("pause");
    return 0;
}