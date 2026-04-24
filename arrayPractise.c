#include <stdio.h>

// 1
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

// 2
void sumOfArray(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    printf("\n\nSum of all elements :- %d", sum);
}

// 3
void maxElement(int arr[], int size)
{
    int max = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("\n\nMax element of array :- %d", max);
}

// 4
void minElement(int arr[], int size)
{
    int min = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("\n\nMin element of array :- %d", min);
}

// 5

void revArray(int arr[], int size)
{
    int temp, start = 0, end = size - 1;
    while (start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    printf("\n\nReversed Array : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

// 6
void countEvenOdd(int arr[], int size)
{
    int even, odd;
    even = 0;
    odd = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("\n\nOdd Even count in a given array");
    printf("\nEven number:- %d\nOdd numbers:- %d", even, odd);
}

// 7
void searchEle(int arr[], int size)
{
    int key, i;
    int flag = 0;

    printf("\n\nEnter the number you want to search: ");
    scanf("%d", &key);

    for (i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        printf("%d is present at index %d", key, i);
    }
    else
    {
        printf("Number is not present.");
    }
}

// 8
void deleteElement()
{
    int index, i;
    int size;

    printf("Enter the size/number of elements you want in array:- ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of array:-\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the index number, to delete element(0 to %d):- ", size - 1);
    scanf("%d", &index);

    if (index >= 0 && index <= size - 1)
    {
        for (i = index; i < size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        size--;
    }
    else
    {
        printf("Enter a valid index number");
        return;
    }

    printf("After deleting the element:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

// 9
void insertElement()
{
    int index, num, i;
    int arr[10] = {10, 20, 30, 40, 50};
    int size = 5;

    printf("Enter the index number at which you want to add element: ");
    scanf("%d", &index);

    if (index >= 0 && index <= size)
    {
        printf("Enter the element you want to insert: ");
        scanf("%d", &num);

        for (i = size; i > index; i--)
        {
            arr[i] = arr[i - 1];
        }

        arr[index] = num;
        size++;

        printf("Array after insertion:\n");
        for (i = 0; i < size; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    else
    {
        printf("Invalid index!\n");
    }
}

// 10

void secondHighElement(int arr[], int size)
{
    int max = arr[0];
    int secondMax = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            secondMax = max;
            max = arr[i];
        }
        else if (arr[i] > secondMax && arr[i] != max)
        {
            secondMax = arr[i];
        }
    }
    printf("Second Max Element in Array:- %d", secondMax);
}

// main function
int main()
{
    int arr[] = {10, 50, 60, 40, 25};
    int size = sizeof(arr) / sizeof(arr[0]);

    // printArray(arr, size);
    // sumOfArray(arr, size);
    // maxElement(arr, size);
    // minElement(arr, size);
    // revArray(arr, size);
    // countEvenOdd(arr, size);
    // searchEle(arr, size);
    // deleteElement();
    // insertElement();
    // secondHighElement(arr, size); 
    return 0;
}