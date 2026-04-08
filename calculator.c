#include <stdio.h>
int main()
{
    int option;
    int num1, num2;

    printf("Select the operation\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Modules\n");
    scanf("%d", &option);
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    switch (option)
    {
    case 1:
        printf("Addition :- %d", num1 + num2);
        break;
    case 2:
        printf("Subtraction :- %d", num1 - num2);
        break;
    case 3:
        printf("Multipliction :- %d", num1 * num2);
        break;
    case 4:
        printf("Division :- %d", num1 / num2);
        break;
    case 5:
        printf("Modules :- %d", num1 % num2);
        break;

    default:
        printf("Invalid option.");
        break;
    }
}