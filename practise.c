#include <stdio.h>

// ...Max Element
void maxElement(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("Max Element :- %d\n", max);
}

// ...Reverse Array
void revArray(int arr[], int n)
{
    int temp;
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        for (int i = 0; i <= end; i++)
        {
            temp = arr[i];
            arr[i] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }
    printf("Reversed Array :-");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// ...secondLArgest
void secondLargest(int arr[], int n)
{
    int largest = arr[0];
    int secondLargest = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    printf("Largest :- %d\n", largest);

    for (int j = 0; j < n; j++)
    {
        if (arr[j] != largest && arr[j] > secondLargest)
        {
            secondLargest = arr[j];
        }
    }
    printf("Second Largest :- %d\n", secondLargest);
}

// .....Sorted or not
void isSorted(int arr[], int n)
{
    int isSorted = 1;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            isSorted = 0;
            break;
        }
    }

    if (isSorted)
    {
        printf("Sorted");
    }
    else
    {
        printf("Not Sorted");
    }
}

// ...main
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int arr1[] = {10, 20, 30, 40, 50};
    int size = 5;

    maxElement(arr, size);
    revArray(arr, size);
    secondLargest(arr, size);
    isSorted(arr1, size);

    return 0;
}