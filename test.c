#include<stdio.h>
#include<stdlib.h>
#include<string.h>
extern int e;
#define f 15
typedef unsigned int uint;//给类型关键词添加小名

int add(int x,int y)
{
    int z=0;
    z=x+y;
    return z;
}

int main()
{
    int g[f],i;
    int a=0,b=0,c=0,d=0;

    scanf("%d %d",&a,&b);
    c=add(a,b);
    for(i=0;i<15;i++)
    {
        g[i]=i;
        printf("%4d;",g[i]);
    }

    char arr1[]="happycat";
    char arr2[]={'h','a','p','p','y','\0'};
    char arr3[]={'h','a','p',0,'p','y','\0'};

    int len1=strlen(arr1);
    int len2=strlen(arr2);
    int num[]={10,1,2,3};

    printf("\n");
    printf("hello,world!你好，世界！\n");
    printf("%d+%d=%d\ne=%d\nlenth of \"%s\" =%d\nlenth of \"%s\" =%d\n",a,b,c,e,arr1,len1,arr2,len2);
    printf("%c\n",64);
    printf("%d\n",strlen("\618"));
    //printf("%c\n",'\177');MAX number of ASCII is 127(10)

    printf("NAME    AGE    GENDER\n");
    for(i=0;i<21;i++)
    printf("-");
    printf("\n");
    printf("Jack    18     Male\n%d\n",sizeof(arr2)-1);//字符串的sizeof会计算上\0的位置
    printf("%d\n%d\n",sizeof(num)/4,sizeof(char));//整形的sizeof每个位置占4个
    printf("%d\n",strlen(arr3));
    printf("%d\n",20||0);

    unsigned int unum1=0;
    uint unum2=0;

    system("pause");
    return 0;
}