#include <add.h>
#include <stdio.h>
#include <stdlib.h>
#include <my_math.h>
extern int g_global;
int main()
{
    int i = 0;
    i = add(10, 20);
    printf("%d\n\n%d\n", i, g_global);
    printf("%d\n", least_common_divisor(12921, 4234));
    system("pause");
    return 0;
}