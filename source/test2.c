#include <stdio.h>
#include <my_math.h>
#include <Windows.h>
void pause()
{
    system("pause");
}

int main()
{
    int num = 0;
    int i = 1;
    scanf("%d", &num);
    i = 0;
    printf("%d\n%d\n", num, self_exponentiation(num, digits(num)));

    pause();
    return 0;
}