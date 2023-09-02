#include<stdio.h>
#include<stdlib.h>
#include<string.h>
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
        printf("%4d;",g[i]);
    }

    char arr1[]="happy";
    char arr2[]={'h','a','p','p','y','\0'};

    int len1=strlen(arr1);
    int len2=strlen(arr2);

    printf("\n");
    printf("hello,world!你好，世界！\n");
    printf("%d+%d=%d\ne=%d\nlenth of \"%s\" =%d\nlenth of \"%s\" =%d\n",a,b,c,e,arr1,len1,arr2,len2);
    printf("%c\n",64);
    printf("%d\n",strlen("\618"));
    //printf("%c\n",'\177');MAX number of ASCII is 127(10)
    system("pause");
    return 0;
}