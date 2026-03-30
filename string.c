// #include <stdio.h>
// #include <string.h>
// void main()
// {
//     char str[] = "Aman";
//     int i = 0;
//     for (i; str[i] != '\0'; i++)
//     {
//         printf("%c\n", str[i]);
//     }
// }

#include <stdio.h>

void reverse(char str[])
{
    int i, length = 0;
    char temp;

    while (str[length] != '\0')
    {
        length++;
    }

    for (i = 0; i < length / 2; i++)
    {
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }

    printf("Reversed string: %s", str);
}

int main()
{
    char str[] = "Programming";
    reverse(str);
    return 0;
}