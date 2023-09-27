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
    printf("%d\n", sizeof(arroy1));
    int *p = &i;
    printf("%p\n%p\n%d\n", p, i, *p);

    char ret = 0;
    char ch = 0;
    while (1)
    {
        ret = scanf(" %c", &ch);
        if (ret != EOF)
        {
            printf("%c\n", ch);
        }
        else
            break;
        //  getchar();
    }
    system("pause");
    return 0;
    // 12921, 4234
}
