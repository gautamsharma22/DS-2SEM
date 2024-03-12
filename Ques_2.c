// Date : 05-03-2024
// Problem Statement 2 : Write a program to delete at element at i-th position in an Array;
#include <stdio.h>
int main()
{
    int arr[100] = {0};
    for (int i = 0; i < 10; ++i)
    {
        arr[i] = i + 1;
    }

    for (int i = 0; i < 10; ++i)
    {
        printf("%d ", arr[i]);
    }

    int ind = 0, val = 0;
    printf("\nEnter Index to delete Element:");
    scanf("%d", &ind);

    for (int i = ind; i < 10; ++i)
    {
        arr[i] = arr[i + 1];
    }

    printf("\n");
    for (int i = 0; i < 10; ++i)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
