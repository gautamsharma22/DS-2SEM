// Date 12 - March - 2024
// Write a program to print Fibnacci Series.
#include <stdio.h>
int main()
{
    int a = 0, b = 1, c = 0, n = 0;
    printf("Enter the steps : \n");
    scanf("%d", &n);
    printf("%d ", a);
    printf("%d ", b);
    for (int i = 2; i < n; ++i)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    return 0;
}
