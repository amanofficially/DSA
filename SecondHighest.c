#include <stdio.h>

int main()
{
    int arr[5] = {70, 20, 90, 40, 50};
    int highest, secondHighest;

    if (arr[0] > arr[1])
    {
        highest = arr[0];
        secondHighest = arr[1];
    }
    else
    {
        highest = arr[1];
        secondHighest = arr[0];
    }

    for (int i = 2; i < 5; i++)
    {
        if (arr[i] > highest)
        {
            secondHighest = highest;
            highest = arr[i];
        }
        else if (arr[i] > secondHighest && arr[i] != highest)
        {
            secondHighest = arr[i];
        }
    }

    printf("Highest :- %d\n", highest);
    printf("Second Highest :- %d", secondHighest);

    return 0;
}