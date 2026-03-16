#include <stdio.h>
void main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int temp = arr[0];
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;
    printf("Rotated Array \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
