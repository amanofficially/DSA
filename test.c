#include <stdio.h>

// void maxValue(int arr[], int size)
// {
//     int max = arr[0];
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] > max)
//         {
//             max = arr[i];
//         }
//     }
//     printf("Max :- %d", max);
// }

// void minValue(int arr[], int s)
// {
//     int min = arr[0];
//     for (int i = 0; i < s; i++)
//     {
//         if (arr[i] < min)
//         {
//             min = arr[i];
//         }
//     }
//     printf("Min :- %d", min);
// }

// void revArr(int arr[], int len)
// {
//     int start = 0, end = len - 1, temp;

//     while (start < end)
//     {
//         temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;

//         start++;
//         end--;
//     }
// }

// int sumOfArr(int arr[], int length)
// {
//     int sum = 0;
//     for (int i = 0; i < length; i++)
//     {
//         sum += arr[i];
//     }
//     return sum;
// }

// void oddEvenCount(int arr[], int len)
// {
//     int even = 0;
//     int odd = 0;
//     for (int i = 0; i < len; i++)
//     {
//         if (arr[i] % 2 == 0)
//         {
//             even++;
//         }
//         else
//         {
//             odd++;
//         }
//     }
//     printf("Even count :- %d\nOdd count :- %d", even, odd);
// }

void sortedOrNot(int arr[], int len)
{
    int flag;
    for (int i = 0; i < len - 1; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            flag = 1;
        }
        else
        {
            flag = 0;
        }
    }
    if (flag == 1)
    {
        printf("Sorted");
    }
    else
    {
        printf("Not Sorted");
    }
}

int main()
{
    int arr[] = {1, 2, 6, 3, 4, 5};
    int lenght = 6;
    sortedOrNot(arr, lenght);

    return 0;
}