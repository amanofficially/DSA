#include <stdio.h>

// ---------------------------- 1 ---------------------------------

void printMatrix(int arr[3][3])
{
    printf("Printing All Elements of Matrix -\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

// ---------------------------- 2 ---------------------------------

void transposeMatrix(int arr[3][3])
{
    printf("Transpose of Matrix-\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
}

// ---------------------------- 3 ---------------------------------

void rowSum(int arr[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
        printf("Sum of %d row is:- %d\n", i + 1, sum);
    }
}

// ---------------------------- 4 ---------------------------------

void columnSum(int arr[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[j][i];
        }
        printf("Sum of %d column is:- %d\n", i + 1, sum);
    }
}

// ---------------------------- 5 ---------------------------------

void maxElement(int arr[3][3])
{
    int max = arr[0][0];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }
    printf("Max Element in 2D Array is :- %d\n", max);
}

// ---------------------------- 6 ---------------------------------

void minElement(int arr[3][3])
{
    int min = arr[0][0];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
        }
    }
    printf("Min Element in 2D Array is :- %d\n", min);
}

// ---------------------------- 7 ---------------------------------

void countEvenOdd(int arr[3][3])
{
    int even = 0;
    int odd = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
    }

    printf("Total Even Numbers :- %d\n", even);
    printf("Total Odd Numbers :- %d\n", odd);
}

// ---------------------------- 8 ---------------------------------

void printDiagonal(int arr[3][3])
{
    printf("Diagonal Elements Are -\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                printf("%d\n", arr[i][j]);
            }
        }
    }
}

// ---------------------------- 9 ---------------------------------

void totalSum(int arr[3][3])
{
    int sum = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
    }
    printf("Sum of all Elements :- %d\n", sum);
}

// ---------------------------- 10 ---------------------------------

void reverseRows(int arr[3][3])
{
    printf("Reverse of each row of an Matrix -\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 2; j >= 0; j--)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

// ---------------------------- 11 ---------------------------------

void reverseColumns(int arr[3][3])
{
    printf("Reverse of each column of an Matrix -\n");
    for (int i = 2; i >= 0; i--)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

// ---------------------------- 12 ---------------------------------

void searchElement(int arr[3][3])
{
    int key = 8;
    int ans = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == key)
            {
                printf("%d Founded at position\nrow :- %d\ncolumn:- %d\n", key, i + 1, j + 1);
                ans = 1;
            }
        }
    }

    if (ans == 0)
    {
        printf("Not found.\n");
    }
}

// ---------------------------- 13 ---------------------------------

void spiralMtrix(int arr[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
    }
}

// ---------------------------- MAIN ---------------------------------

void main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    printMatrix(arr);
    printf("\n");

    transposeMatrix(arr);
    printf("\n");

    rowSum(arr);
    printf("\n");

    columnSum(arr);
    printf("\n");

    maxElement(arr);
    printf("\n");

    minElement(arr);
    printf("\n");

    countEvenOdd(arr);
    printf("\n");

    printDiagonal(arr);
    printf("\n");

    totalSum(arr);
    printf("\n");

    reverseRows(arr);
    printf("\n");

    reverseColumns(arr);
    printf("\n");

    searchElement(arr);
    printf("\n");

    spiralMtrix(arr);
}