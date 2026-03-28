#include <stdio.h>
// 1
void printRowWise(int arr[3][3])
{
    printf("1. Row-wise:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
}

// 2
void printColumnWise(int arr[3][3])
{
    printf("2. Column-wise:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d ", arr[j][i]);
        printf("\n");
    }
}

// 3
void rowSum(int arr[3][3])
{
    printf("3. Row Sum:\n");
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
            sum += arr[i][j];

        printf("Row %d = %d\n", i + 1, sum);
    }
}

// 4
void columnSum(int arr[3][3])
{
    printf("4. Column Sum:\n");
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
            sum += arr[j][i];

        printf("Column %d = %d\n", i + 1, sum);
    }
}

// 5
void maxElement(int arr[3][3])
{
    int max = arr[0][0];

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (arr[i][j] > max)
                max = arr[i][j];

    printf("5. Max Element = %d\n", max);
}

// 6
void minElement(int arr[3][3])
{
    int min = arr[0][0];

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (arr[i][j] < min)
                min = arr[i][j];

    printf("6. Min Element = %d\n", min);
}

// 7
void countEven(int arr[3][3])
{
    int count = 0;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (arr[i][j] % 2 == 0)
                count++;

    printf("7. Even Count = %d\n", count);
}

// 8
void countOdd(int arr[3][3])
{
    int count = 0;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (arr[i][j] % 2 != 0)
                count++;

    printf("8. Odd Count = %d\n", count);
}

// 9
void printDiagonal(int arr[3][3])
{
    printf("9. Diagonal Elements:\n");
    for (int i = 0; i < 3; i++)
        printf("%d ", arr[i][i]);

    printf("\n");
}

// 10
void totalSum(int arr[3][3])
{
    int sum = 0;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            sum += arr[i][j];

    printf("10. Total Sum = %d\n", sum);
}

// 1
void sumPrimaryDiagonal(int arr[3][3])
{
    int sum = 0;
    for (int i = 0; i < 3; i++)
        sum += arr[i][i];

    printf("1. Primary Diagonal Sum = %d\n", sum);
}

// 2
void sumSecondaryDiagonal(int arr[3][3])
{
    int sum = 0;
    for (int i = 0; i < 3; i++)
        sum += arr[i][2 - i];

    printf("2. Secondary Diagonal Sum = %d\n", sum);
}

// 3
void transposeMatrix(int arr[3][3])
{
    printf("3. Transpose Matrix:\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d ", arr[j][i]);
        printf("\n");
    }
}

// 4
void reverseRows(int arr[3][3])
{
    printf("4. Reverse Rows:\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 2; j >= 0; j--)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
}

// 5
void reverseColumns(int arr[3][3])
{
    printf("5. Reverse Columns:\n");

    for (int i = 2; i >= 0; i--)
    {
        for (int j = 0; j < 3; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
}

// 6
void searchElement(int arr[3][3])
{
    int key = 8;

    printf("6. Search Element:\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == key)
            {
                printf("Found %d at (%d, %d)\n", key, i + 1, j + 1);
                return;
            }
        }
    }

    printf("Not Found\n");
}

int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    printRowWise(arr);
    printf("\n");
    printColumnWise(arr);
    printf("\n");
    rowSum(arr);
    printf("\n");
    columnSum(arr);
    printf("\n");
    maxElement(arr);
    printf("\n");
    minElement(arr);
    printf("\n");
    countEven(arr);
    printf("\n");
    countOdd(arr);
    printf("\n");
    printDiagonal(arr);
    printf("\n");
    totalSum(arr);

    sumPrimaryDiagonal(arr);
    printf("\n");
    sumSecondaryDiagonal(arr);
    printf("\n");
    transposeMatrix(arr);
    printf("\n");
    reverseRows(arr);
    printf("\n");
    reverseColumns(arr);
    printf("\n");
    searchElement(arr);
    printf("\n");

    return 0;
}