#include<stdio.h>

//function declaration
void linearSearch(int arr[], int n, int target);

//main function
int main(){
    int n;
    int target;

    printf("Enter the size of array:\n");
    scanf("%d",&n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter the element you want to search:\n");
    scanf("%d",&target);

    linearSearch(arr,n,target);

    return 0;
}


//function definition
void linearSearch(int arr[],int n,int target){

    int found = 0;

    for(int i=0;i<n;i++){
        if(arr[i] == target){
            printf("Target found at index %d\n",i);
            found = 1;
            break;
        }
    }

    if(found == 0){
        printf("Element not present in the array\n");
    }
}