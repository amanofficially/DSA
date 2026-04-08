#include <stdio.h>

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

    printf("Inside function:\n x = %d, y = %d\n", *x, *y);
}

int main()
{
    int a = 3, b = 4;

    swap(&a, &b);

    printf("Outside function:\n a = %d, b = %d", a, b);
}