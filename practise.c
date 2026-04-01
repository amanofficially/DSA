#include <stdio.h>

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
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;

    maxElement(arr, size);
    revArray(arr, size);

    return 0;
}