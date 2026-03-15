#include <stdio.h>

// Bubble Sort
void bubbleSort(int arr[], int n)
{
    int i, j, temp;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Selection Sort
void selectionSort(int arr[], int n)
{
    int i, j, minIndex, temp;

    for (i = 0; i < n - 1; i++)
    {
        minIndex = i;

        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

// Insertion Sort
void insertionSort(int arr[], int n)
{
    int i, j, key;

    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

// Print Array
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Main Function
int main()
{
    int arr1[] = {5, 3, 8, 1, 2};
    int arr2[] = {5, 3, 8, 1, 2};
    int arr3[] = {5, 3, 8, 1, 2};

    int n = 5;

    bubbleSort(arr1, n);
    printf("Bubble Sort: ");
    printArray(arr1, n);

    selectionSort(arr2, n);
    printf("Selection Sort: ");
    printArray(arr2, n);

    insertionSort(arr3, n);
    printf("Insertion Sort: ");
    printArray(arr3, n);

    return 0;
}