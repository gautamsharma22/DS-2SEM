// Date 12 - March - 2024
// Write a program to print Greatest among three numbers.
#include <stdio.h>
int main()
{
    int a = 0, b = 0, c = 0;
    printf("Enter three numbers : \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if (a >= b && a >= c)
    {
        printf("A is Greater");
    }
    else if (b >= a && b >= c)
    {
        printf("B is Greater");
    }
    else
    {
        printf("C is Greater");
    }

    return 0;
}
