// Date 12 - March - 2024
// Write a program to Rotate an array.
#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int arr[100] = {0};
    int n, ind;
    printf("Enter size of array : \n");
    scanf("%d", &n);
    printf("Enter array Elements : \n");
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter rotation index : \n");
    scanf("%d", &ind);
    int left = 0, right = ind;
    while (right < n)
    {
        for (int i = right; i > left; --i)
        {
            if (i > 0)
                swap(&arr[i], &arr[i - 1]);
        }
        left++;
        right++;
    }
    printf("Array after Rotation : \n");
    for (int i = 0; i < n; ++i)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}