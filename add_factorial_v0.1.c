#include <stdio.h>
#include <stdlib.h> //system("pause")的库
int main()
{
    int i = 0, j = 0, num = 0, ret_1 = 1, ret_2 = 0;
    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
        ret_1 = 1;
        for (j = 1; j <= i + 1; j++)
        {
            ret_1 = ret_1 * j;
        }
        ret_2 += ret_1;
    }
    printf("%d\n", ret_2);

    system("pause");
    return 0;
}