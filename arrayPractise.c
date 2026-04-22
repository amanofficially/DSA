#include <stdio.h>

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

void sumOfArray(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    printf("\nSum of all elements :- %d", sum);
}

void maxElement(int arr[], int size)
{
    int max = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("\nMax element of array :- %d", max);
}

int main()
{
    int arr[] = {10, 20, 60, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, size);
    sumOfArray(arr, size);
    maxElement(arr, size);
    return 0;
}