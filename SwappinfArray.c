#include <stdio.h>

int main()
{
    int i, size1, size2, temp;

    printf("Enter the size of first Array :- ");
    scanf("%d", &size1);

    printf("Enter the size of second Array :- ");
    scanf("%d", &size2);

    // check before taking elements
    if (size1 != size2)
    {
        printf("Sizes are different, cannot swap arrays.");
        return 0;
    }

    int arr1[size1], arr2[size2];

    // input first array
    printf("Enter the elements of first array\n");
    for (i = 0; i < size1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    // input second array
    printf("Enter the elements of second array\n");
    for (i = 0; i < size2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    printf("\nBefore Swapping\n");

    printf("First Array :- ");
    for (i = 0; i < size1; i++)
        printf("%d ", arr1[i]);

    printf("\nSecond Array :- ");
    for (i = 0; i < size2; i++)
        printf("%d ", arr2[i]);

    // swapping
    for (i = 0; i < size1; i++)
    {
        temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }

    printf("\n\nAfter Swapping\n");

    printf("First Array :- ");
    for (i = 0; i < size1; i++)
        printf("%d ", arr1[i]);

    printf("\nSecond Array :- ");
    for (i = 0; i < size2; i++)
        printf("%d ", arr2[i]);

    return 0;
}