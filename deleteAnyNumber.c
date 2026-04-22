#include <stdio.h>

int main()
{
    int arr[100], n, index, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter index to delete (0 to %d): ", n - 1);
    scanf("%d", &index);

    if (index < 0 || index >= n)
    {
        printf("Invalid index!\n");
    }
    else
    {

        for (i = index; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }

        n--;

        // Print updated array
        printf("Array after deletion:\n");
        for (i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}