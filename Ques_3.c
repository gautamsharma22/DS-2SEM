// Date 12 - March - 2024
// Write a program to calculate Area of Circle.

#include <stdio.h>
int main()
{
    float pi = 3.14, r = 0, area = 0;
    printf("Enter Radius of Circle : \n");
    scanf("%f", &r);
    area = r * r * pi;
    printf("Area of circle is %f", area);
    return 0;
}
