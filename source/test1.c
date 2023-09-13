#include <add.h>
#include <stdio.h>
#include <stdlib.h>
#include <my_math.h>
extern int g_global;
int main()
{
    int i = 0;
    int sz = 0;
    int arroy[256] = {0};
    int arroy1[1] = {0};
    int num = 0;
    i = add(10, 20);
    int multiple = greatest_least_common_divisor1_multiple0(3969000, 831600, 0);
    printf("%d\n\n%d\n", i, g_global);
    printf("%d\n", multiple);
    putchar(65);
    putchar('\n');
    printf("%d", sizeof(arroy1));
    do
    {
        scanf("%d", &num);
        arroy[sz] = num;
        sz++;
    } while (getchar() != '\n');
    for (i = 0; i < sz; i++)
    {
        printf("%4d", arroy[i]);
    }
    system("pause");
    return 0;
    // 12921, 4234
}