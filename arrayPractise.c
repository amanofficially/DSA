#include <stdio.h>

// 1
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

// 2
void sumOfArray(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    printf("\nSum of all elements :- %d", sum);
}

// 3
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

// 4
void minElement(int arr[], int size)
{
    int min = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("\nMin element of array :- %d", min);
}

// 5

void revArray(int arr[], int size)
{
    int temp, start = 0, end = size - 1;
    while (start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    printf("\nReversed Array : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

// main function
int main()
{
    int arr[] = {10, 20, 60, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, size);
    sumOfArray(arr, size);
    maxElement(arr, size);
    minElement(arr, size);
    revArray(arr, size);
    return 0;
}