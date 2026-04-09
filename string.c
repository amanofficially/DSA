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

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char str[] = "Welcome to TCS";
//     int i = 0;
//     int j = strlen(str) - 1;
//     char temp;

//     while (i < j)
//     {
//         temp = str[i];
//         str[i] = str[j];
//         str[j] = temp;

//         i++;
//         j--;
//     }

//     printf("Reversed string: %s", str);

//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char str[100];
//     int i, len, flag = 1;

//     // Input
//     printf("Enter a string: ");
//     scanf("%s", str);

//     // Convert uppercase to lowercase manually
//     for (i = 0; str[i] != '\0'; i++)
//     {
//         if (str[i] >= 'A' && str[i] <= 'Z')
//         {
//             str[i] = str[i] + 32;
//         }
//     }

//     // Length using string.h
//     len = strlen(str);

//     // Palindrome check
//     for (i = 0; i < len / 2; i++)
//     {
//         if (str[i] != str[len - i - 1])
//         {
//             flag = 0;
//             break;
//         }
//     }

//     // Output
//     if (flag)
//         printf("Palindrome");
//     else
//         printf("Not Palindrome");

//     return 0;
// }