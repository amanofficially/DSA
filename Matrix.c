#include <stdio.h>
int main()
{
    int i;
    int mat1[2][2] = {{22, 23}, {34, 65}};
    int mat2[2][2] = {{52, 33}, {24, 22}};
    int sumMatrix[2][2];

    for (i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            sumMatrix[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    // print sumMatrix
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", sumMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}