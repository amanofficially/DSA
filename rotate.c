// #include <stdio.h>
// void main()
// {
//     int arr[5] = {1, 2, 3, 4, 5};
//     int temp = arr[0];
//     int n = 5;
//     for (int i = 0; i < n; i++)
//     {
//         arr[i] = arr[i + 1];
//     }
//     arr[n - 1] = temp;
//     printf("Rotated Array \n");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
// }
#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int k = 2;

    for (int i = 0; i < k; i++)
    {
        int last = arr[n - 1]; // store last element

        // shift all elements right
        for (int j = n - 1; j > 0; j--)
        {
            arr[j] = arr[j - 1];
        }

        arr[0] = last; // put last at first
    }

    // print array
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}