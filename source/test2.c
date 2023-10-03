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
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (i = 0; i <= 12; i++)
    {
        arr[i] = 0;
        printf("0\n");
    }
    char ch = *((char *)(&i));
    printf("%d\n", ch);
    scanf("%d", &num);
    i = 0;
    printf("%d\n%d\n", num, self_exponentiation(num, digits(num)));

    pause();
    return 0;
}