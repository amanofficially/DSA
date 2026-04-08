#include <stdio.h>

void swap(int, int);

void swap(int x, int y)
{
    printf("Before Swaping:\n a = %d\n b = %d\n", x, y);

    int temp;
    temp = x;
    x = y;
    y = temp;

    printf("After Swaping:\n a = %d\n b = %d\n", x, y);
}

int main()
{

    swap(3, 4);
}