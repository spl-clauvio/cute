#include<stdio.h>
#include<stdlib.h>
extern int e;
#define f 15
int main()
{
    int g[f],i;
    int a=0,b=0,c=0,d=0;
    scanf("%d %d",&a,&b);
    c=a+b;
    for(i=0;i<15;i++)
    {
        g[i]=i;
        printf("%d\n",g[i]);
    }
    printf("hello,world\n你好，世界！\n");
    printf("%d\n%d\n",c,e);
    system("pause");
    return 0;
}