#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>

int main()
{
    int n = 0;
    char arr1[256]; //= {"welcome"};
    char arr2[256]; // = {"a"};
    for (n = 0; n < 256; n++)
    {
        arr2[n] = '#';
    }

    scanf("%s", arr1);
    int i, sz = 0;
    sz = strlen(arr1);
    arr2[sz] = '\0';
    // Reinitialize arr2;

    printf("%d\n", sz);
    printf("%s\n", arr2);
    // Check;

    for (i = 0; i < (sz + 1) / 2; i++)
    {
        arr2[i] = arr1[i];
        arr2[sz - 1 - i] = arr1[sz - 1 - i];

        Sleep(500);    //延迟，包含<windows.h>头文件
        system("cls"); // system执行系统命令，这里cls清空屏幕；

        printf("%s\n", arr2);
    }
    system("pause");
    return 0;
}