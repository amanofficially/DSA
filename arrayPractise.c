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
    printf("\n\nSum of all elements :- %d", sum);
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
    printf("\n\nMax element of array :- %d", max);
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
    printf("\n\nMin element of array :- %d", min);
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

    printf("\n\nReversed Array : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

void countEvenOdd(int arr[], int size)
{
    int even, odd;
    even = 0;
    odd = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("\n\nOdd Even count in a given array");
    printf("\nEven number:- %d\nOdd numbers:- %d", even, odd);
}

void searchEle(int arr[], int size)
{
    int key, i;
    int flag = 0;

    printf("\n\nEnter the number you want to search: ");
    scanf("%d", &key);

    for (i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        printf("%d is present at index %d", key, i);
    }
    else
    {
        printf("Number is not present.");
    }
}

// main function
int main()
{
    int arr[] = {10, 20, 60, 40, 25};
    int size = sizeof(arr) / sizeof(arr[0]);

    // printArray(arr, size);
    // sumOfArray(arr, size);
    // maxElement(arr, size);
    // minElement(arr, size);
    // revArray(arr, size);
    // countEvenOdd(arr, size);
    searchEle(arr, size);
    return 0;
}