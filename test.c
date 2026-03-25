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

int removeDuplicates(int arr[], int n)
{
    if (n == 0)
        return 0;

    int j = 0;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[j])
        {
            j++;
            arr[j] = arr[i];
        }
    }

    return j + 1;
}

int main()
{
    int arr[] = {1, 1, 2, 2, 3};
    int n = 5;

    int newSize = removeDuplicates(arr, n);

    for (int i = 0; i < newSize; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}