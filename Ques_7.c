// Date 19 - March - 2024
// Write a program to Move Zeroes to End in Array
#include <stdio.h>
void moveZeroesToEnd(int arr[], int n)
{
    int count = 0;

    for (int i = 0; i < n; ++i)
    {
        if (arr[i] != 0)
        {
            arr[count++] = arr[i];
        }
    }
    while (count < n)
    {
        arr[count++] = 0;
    }
    return;
}
int main()
{
    int n;
    printf("Enter Size of Array :");
    scanf("%d", &n);
    int arr[100];
    printf("Enter %d Elements : \n", n);
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &arr[i]);
    }
    moveZeroesToEnd(arr, n);

    printf("Array after Modification : \n");
    for (int i = 0; i < n; ++i)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}