#include <stdio.h>

int naturalNumbers(int n)
{
    if (n == 11)
        return 0;

    printf("%d\n", n);
    naturalNumbers(n + 1);
}

int main()
{
    naturalNumbers(1);
    return 0;
}