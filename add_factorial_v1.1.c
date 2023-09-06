#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, n, num, ret, sum = 0;
    scanf("%d", &num);
    ret = 1;
    for (i = 0; i < num; i++)
    {
        ret *= (i + 1);
        sum += ret;
        printf("%d!=%d\n", i + 1, ret);
    }

    for (i = 0; i < num - 1; i++)
    {
        printf("%d!+", i + 1);
    }
    printf("%d!=", num);
    printf("%d\n", sum);

    system("pause");
    return 0;
}