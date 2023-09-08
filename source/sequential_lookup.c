#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[256];
    int size, step, i = 0;
    for (i = 1; i <= 256; i++)
    {
        arr[i - 1] = i;
    }
    // initialize arroy;
    size = sizeof(arr) / sizeof(arr[0]); // length of arr[n];

    int left = 0, right = size;
    int mid = 0;
    int k = 0;

    scanf("%d", &k); // The number to be looked up;

    while (left <= right)
    {
        mid = (right - left) / 2 + left;
        // To avoid (left + right) overflow;
        // left/2 + right/2 is not accepted;PS:5/2+7/2=5,!=6;
        step++;
        // To record;
        printf("step%d;left is %d;right is%d\n", step, left, right);
        if (k < arr[mid])
        {
            right = mid - 1;
        }
        else if (k > arr[mid])
        {
            left = mid + 1;
        }
        else
        {
            printf("下标是%d\n", mid);
            break;
        }
    }

    if (left > right)
        printf("Cant find k\n");

    system("pause");
    return 0;
}