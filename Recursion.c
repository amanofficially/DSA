#include <stdio.h>

int printRevNumbers(int n)
{
    if (n == 1)
        return 1;

    printf("%d ", n);
    return printRevNumbers(n - 1);
}

int main()
{
    int n = 100;
    int result = printRevNumbers(n);
    printf("%d", result);
}