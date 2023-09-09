#include <add.h>
#include <stdio.h>
#include <stdlib.h>
#include <my_math.h>
extern int g_global;
int main()
{
    int i = 0;
    i = add(10, 20);
    int multiple = greatest_least_common_divisor1_multiple0(3969000, 831600, 0);
    printf("%d\n\n%d\n", i, g_global);
    printf("%d\n", multiple);
    system("pause");
    return 0;
    // 12921, 4234
}