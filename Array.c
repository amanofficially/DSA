#include <stdio.h>
int main()
{
    int s1, s2, s3, i, index = 0;
    printf("Enter the size of first array : ");
    scanf("%d", &s1);
    printf("Enter the size of second array : ");
    scanf("%d", &s2);

    s3 = s1 + s2;
    int a[s1], b[s2], c[s3];
    printf("Enter the elements of first array :\n");
    for (i = 0; i < s1; i++)
    {

        scanf("%d", &a[i]);
    }
    printf("Enter the elements of second array :\n");
    for (i = 0; i < s2; i++)
    {

        scanf("%d", &b[i]);
    }

    // merging array in thied array

    for (i = 0; i < s1; i++)
    {
        c[index] = a[i];
        index++;
    }
    for (i = 0; i < s2; i++)
    {
        c[index] = b[i];
        index++;
    }

    // printing the third array

    printf("Elements of third Array: \n");
    for (i = 0; i < s3; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}
