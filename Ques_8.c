// Date 19 - March - 2024
// Write a to check whether a matrix is sparse or not.
#include <stdio.h>
void checkMatrix(int arr[100][100], int rows, int cols)
{
    int zeroElem = 0;
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            if (arr[i][j] == 0)
            {
                zeroElem++;
            }
        }
    }
    int nonZeroElem = (rows * cols) - zeroElem;
    if (zeroElem > nonZeroElem)
    {
        printf("Matrix is Sparse Matrix !");
    }
    else
    {
        printf("Matrix is Not a Sparse Matrix !");
    }
    return;
}
int main()
{
    int rows, cols;

    printf("Enter Rows of Array :");
    scanf("%d", &rows);

    printf("Enter Cols of Array :");
    scanf("%d", &cols);

    int arr[100][100] = {0};

    printf("Enter Array Elements : ");
    for (int i = 0; i < rows; ++i)
    {
        printf("\n");
        for (int j = 0; j < cols; ++j)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    checkMatrix(arr, rows, cols);
    return 0;
}