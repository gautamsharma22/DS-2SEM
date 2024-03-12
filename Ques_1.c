// Date : 05-03-2024
// Problem Statement 1 : Write a program to insert at element at i-th position in an Array;
#include <stdio.h>
int main()
{
    int arr[100] = {0};
    int i, n;
    printf("Enter Number of Elements: \n");
    scanf("%d", &n);
    for (i = 0; i < n; ++i)
    {
        scanf("%d", &arr[i]);
    }
    printf("Array before Modification : \n");
    for (i = 0; i < n; ++i)
    {
        printf("%d ", arr[i]);
    }
    int ind = 0, val = 0;
    printf("\n Enter Index to Insert Element:\n");
    scanf("%d", &ind);
    printf("\nEnter value: \n");
    scanf("%d", &val);
    int temp = val, prev = -1;
    for (i = ind; i < n; ++i)
    {
        prev = arr[i];
        arr[i] = temp;
        temp = prev;
    }
    printf("Array after Modification : \n");
    for (i = 0; i < n; ++i)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
