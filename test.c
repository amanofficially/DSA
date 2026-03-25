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

// void sortedOrNot(int arr[], int len)
// {
//     for (int i = 0; i < len - 1; i++)
//     {
//         if (arr[i] > arr[i + 1])
//         {
//             printf("Not Sorted");
//             return;
//         }
//     }
//     printf("Sorted");
// }

// void secondLargest(int arr[], int len)
// {
//     int count = 0;
//     for (int i = 0; i < len; i++)
//     {
//         int count = 0;

//         for (int j = 0; j < len; j++)
//         {
//             if (arr[j] > arr[i])
//             {
//                 count++;
//             }
//         }

//         if (count == 1)
//         {
//             printf("Second Largest: %d\n", arr[i]);
//         }
//         else if (count == 0)
//         {
//             printf("Largest: %d", arr[i]);
//         }
//     }
// }

// int uniqueArray(int arr[], int len)
// {
//     int unique[5];
//     for (int i = 0; i < len; i++)
//     {
//         for (int j = 0; j < len; j++)
//         {
//             if (arr[i] == arr[j])
//             {

//             }
//         }
//     }
// }

#include <stdio.h>

int main()
{
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int result[3][3];

    // rotation logic
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            result[i][j] = arr[j][3 - 1 - i];
        }
    }

    // print result
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}