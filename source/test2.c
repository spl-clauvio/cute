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
    int i = 0, j = 0, k = 0, sz3 = 0;
    int ch = 0;
    int sz1 = 0, sz2 = 0;

    int arr1[100] = {0};
    int arr2[100] = {0};
    int arr3[100] = {0};

    scanf("%d %d", &sz1, &sz2);
    sz3 = sz1 + sz2;

    for (i = 0; i < sz1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    for (i = 0; i < sz2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    i = 0;
    j = 0;

    while ((k < sz3) && (i < sz1) && (j < sz2))
    {
        if (arr1[i] <= arr2[j])
        {
            arr3[k] = arr1[i];
            i++;
        }
        else
        {
            arr3[k] = arr2[j];
            j++;
        }
        k++;
    }
    while (i < sz1)
    {
        arr3[k] = arr1[i];
        i++;
        k++;
    }
    while (j < sz2)
    {
        arr3[k] = arr2[j];
        j++;
        k++;
    }

    for (i = 0; i < sz3; i++)
    {
        printf("%3d", arr3[i]);
    }

    pause();
    return 0;
}