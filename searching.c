/*----------------------------- Linear Search --------------------------*/

// #include<stdio.h>

// //function declaration
// void linearSearch(int arr[], int n, int target);

// //main function
// int main(){
//     int n;
//     int target;

//     printf("Enter the size of array:\n");
//     scanf("%d",&n);

//     int arr[n];

//     printf("Enter %d elements:\n", n);
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }

//     printf("Enter the element you want to search:\n");
//     scanf("%d",&target);

//     linearSearch(arr,n,target);

//     return 0;
// }

// //function definition
// void linearSearch(int arr[],int n,int target){

//     int found = 0;

//     for(int i=0;i<n;i++){
//         if(arr[i] == target){
//             printf("Target found at index %d\n",i);
//             found = 1;
//             break;
//         }
//     }

//     if(found == 0){
//         printf("Element not present in the array\n");
//     }
// }

#include <stdio.h>

// function declaration
void binarySearch(int arr[], int size, int target);

// main function
int main()
{
    int size;
    int target;

    printf("Enter the size of array:\n");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d sorted elements:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element you want to search:\n");
    scanf("%d", &target);

    binarySearch(arr, size, target);

    return 0;
}

// function definition
void binarySearch(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == target)
        {
            printf("Target found at index %d\n", mid);
            return;
        }

        else if (target > arr[mid])
        {
            start = mid + 1;
        }

        else
        {
            end = mid - 1;
        }
    }

    printf("Element not found\n");
}