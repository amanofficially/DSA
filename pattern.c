// #include<stdio.h>
// void main(){
//     int num;
//     printf("Enter any number : ");
//     scanf("%d",&num);

//     if(num%2==0){
//         printf("Even");
//     }
//     else{
//         printf("Odd");

//     }
// }

// #include<stdio.h>
// void main (){
//     int num1,num2,num3;
//     printf("Enter first number : ");
//     scanf("%d",&num1);
//     printf("Enter second number : ");
//     scanf("%d",&num2);
//     printf("Enter third number : ");
//     scanf("%d",&num3);

//     if(num1>num2 && num1>num3){
//         printf("%d is largest",num1);
//     }
//     else if (num2>num1 && num2>num3)
//     {
//         printf("%d is largest",num2);

//     }
//     else{
//         printf("%d is largest",num3);

//     }
// }

// #include<stdio.h>
// void main(){
//     char c;
//     printf("Enter any charcter : ");
//     scanf("%c",&c);
//     if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
//         printf("Vowel");
//     }
//     else{
//         printf("consonant");
//     }

// }

// #include <stdio.h>

// int main() {
//     int marks;

//     printf("Enter your marks: ");
//     scanf("%d", &marks);

//     if(marks >= 90 && marks <= 100) {
//         printf("Grade A\n");
//     }
//     else if(marks >= 75) {
//         printf("Grade B\n");
//     }
//     else if(marks >= 60) {
//         printf("Grade C\n");
//     }
//     else if(marks >= 40) {
//         printf("Grade D\n");
//     }
//     else if(marks >= 0) {
//         printf("Fail\n");
//     }
//     else {
//         printf("Invalid Marks\n");
//     }

//     return 0;
// }



// Factorial of numbers 
// #include <stdio.h>
// int main(){
//     int fact = 1,num;
//     printf("Enter the number :- ");
//     scanf("%d",&num);
//     for(int i =1;i<=num;i++){
//         fact*=i;
//     }
//     printf("Factorial of %d is :- %d ",num,fact);
// }



// Count the digits in a number 

// #include <stdio.h>

// int main(){
//     int number, count = 0;

//     printf("Enter the number :- ");
//     scanf("%d", &number);

//     for(; number != 0; number = number / 10){
//         count++;
//     }

//     printf("Digits in a number :- %d", count);

//     return 0;
// }

// Prime Number 
#include<stdio.h>
void main(){
    int num,count=0;
    printf("Enter the number :- ");
    scanf("%d",&num);


    for(int i=1;i<=num;i++){
    if(num%i==0){
        count++;
    }
}
if (count==2)
    {
        printf("Prime number.");
    }
    else{
        printf("Not a prime number.");

    }
}


