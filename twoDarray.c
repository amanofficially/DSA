// #include <stdio.h>
// void main()
// {
//     int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
// }

// ---------------------------- 1 ---------------------------------

// #include <stdio.h>
// void main()
// {
//     int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d ", arr[j][i]);
//         }
//         printf("\n");
//     }
// }

// ---------------------------- 2 --------------------------------

// #include <stdio.h>
// void main()
// {
//     int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

//     for (int i = 0; i < 3; i++)
//     {
//         int sum = 0;
//         for (int j = 0; j < 3; j++)
//         {
//             sum += arr[i][j];
//         }
//         printf("Sum of %d row is:- %d", i+1, sum);
//         printf("\n");
//     }
// }

// ---------------------------- 3 ---------------------------------

// #include <stdio.h>
// void main()
// {
//     int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

//     for (int i = 0; i < 3; i++)
//     {
//         int sum = 0;
//         for (int j = 0; j < 3; j++)
//         {
//             sum += arr[j][i];
//         }
//         printf("Sum of %d column is:- %d", i + 1, sum);
//         printf("\n");
//     }
// }

// ------------------------------ 4 -------------------------------

// #include <stdio.h>
// void main()
// {
//     int arr[3][3] = {{44, 55, 67}, {74, 85, 86}, {87, 38, 93}};
//     int max = arr[0][0];

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             if (arr[i][j] > max)
//             {
//                 max = arr[i][j];
//             }
//         }
//     }
//     printf("Max Element in 2D Array is :- %d", max);
// }

// ----------------------------- 5 --------------------------------

// #include <stdio.h>
// void main()
// {
//     int arr[3][3] = {{44, 55, 67}, {74, 85, 86}, {87, 38, 93}};
//     int min = arr[0][0];

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             if (arr[i][j] < min)
//             {
//                 min = arr[i][j];
//             }
//         }
//     }
//     printf("Min Element in 2D Array is :- %d", min);
// }

// ----------------------------- 6 --------------------------------

// #include <stdio.h>
// void main()
// {
//     int arr[3][3] = {{44, 55, 67}, {74, 85, 86}, {87, 38, 93}};
//     int even = 0;
//     int odd = 0;

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             if (arr[i][j] % 2 == 0)
//             {
//                 even++;
//             }
//             else
//             {
//                 odd++;
//             }
//         }
//     }
//     printf("Total Even Numbers :- %d\n", even);
//     printf("Total Odd Numbers :- %d", odd);
// }

// ----------------------------- 7,8 --------------------------------

// #include <stdio.h>
// void main()
// {
//     int arr[3][3] = {{44, 55, 67}, {74, 85, 86}, {87, 38, 93}};

//     printf("Diagonal Elements Are -\n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             if (i == j)
//             {
//                 printf("%d\n", arr[i][j]);
//             }
//         }
//     }
// }
// ----------------------------- 9 --------------------------------

// #include <stdio.h>
// void main()
// {
//     int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     int sum = 0;

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             sum += arr[i][j];
//         }
//     }
//     printf("Sum of all Elements :- %d", sum);
// }

// ----------------------------- 9 --------------------------------

//-------------------------------------------------Medium Level------------------------------------------------------

// #include <stdio.h>
// void main()
// {
//     int arr[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
//     int sum = 0;

//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             if (i == j)
//             {
//                 sum += arr[i][j];
//             }
//         }
//     }
//     printf("Sum of Primary Diagonal :- %d", sum);
// }

// ----------------------------- 1 --------------------------------

// #include <stdio.h>
// void main()
// {
//     int arr[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
//     int sum = 0;

//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             if (i + j == 3)
//             {
//                 sum += arr[i][j];
//             }
//         }
//     }
//     printf("Sum of Secondary Diagonal :- %d", sum);
// }

// ----------------------------- 2 --------------------------------

// #include <stdio.h>
// void main()
// {
//     int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     printf("Transpose of Matrix -\n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d ", arr[j][i]);
//         }
//         printf("\n");
//     }
// }

// ----------------------------- 3 --------------------------------

// #include <stdio.h>
// void main()
// {
//     int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     int sum = 0;
//     printf("Reverse of each row of an Matrix -\n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 2; j >= 0; j--)
//         {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
// }

// ----------------------------- 4 --------------------------------

// #include <stdio.h>
// void main()
// {
//     int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     printf("Reverse of each column of an Matrix -\n");
//     for (int i = 2; i >= 0; i--)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
// }

// ----------------------------- 5 --------------------------------

#include <stdio.h>
void main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int key = 8;
    int ans = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == key)
            {
                printf("%d Founded at position\nrow :- %d\ncolumn:- %d", key, i + 1, j + 1);
                ans = 1;
            }
        }
    }
    if (ans == 0)
    {
        printf("Not found.");
    }
}