#include <add.h>
#include <stdio.h>
#include <stdlib.h>
extern int g_global;
int main()
{
    int i = 0;
    i = add(10, 20);
    printf("%d\n\n%d\n", i, g_global);
    system("pause");
    return 0;
}