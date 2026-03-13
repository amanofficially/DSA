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
// #include<stdio.h>
// void main(){
//     int num,count=0;
//     printf("Enter the number :- ");
//     scanf("%d",&num);


//     for(int i=1;i<=num;i++){
//     if(num%i==0){
//         count++;
//     }
// }
// if (count==2)
//     {
//         printf("Prime number.");
//     }
//     else{
//         printf("Not a prime number.");

//     }
// }

// Patterns

// #include<stdio.h>
// void main (){
//     int i,j;
//     for(i=1; i<=5; i++){
//         for(j=1; j<=i; j++){
//             printf("%d ",i);
//         }
//         printf("\n");
//     }
// }

// #include<stdio.h>
// void main (){
//     int i,j;
//     for(i=1; i<=5; i++){
//         for(j=1; j<=i; j++){
//             printf("%d ",i);
//         }
//         printf("\n");
//     }
// }


// #include<stdio.h>
// void main (){
//     int i,j;
//     for(i=5; i>=1; i--){
//         for(j=1; j<=i; j++){
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
// }


// #include<stdio.h>
// void main (){
//     int i,j;
//     for(i=1; i<=5; i++){
//         for(j=i; j<=5; j++){
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
// }

/*
1
12
123
1234
12345
1234
123
12
1
*/
// #include<stdio.h>
// int main (){
//     int i,j;

//     for(i = 1; i <= 9; i++){
//     int limit;

//     if(i <= 5)
//         limit = i;
//     else
//         limit = 9 - i + 1;

//     for(j = 1; j <= limit; j++){
//             printf("%d ", j);
//     }
//     printf("\n");
//     }
//     return 0;
// }


// #include<stdio.h>
// int main (){
//     int i,j;

//     // Increasing part
//     for(i=1; i<=5; i++){
//         for(j=1; j<=i; j++){
//             printf("%d ",j);
//         }
//         printf("\n");
//     }

//     // Decreasing part

// for(int i=4; i>=1; i--){
//     for(int j=1; j<=i; j++){
//         printf("%d ",j);
//     }
//     printf("\n");
// }
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int i,j,limit;
//     for(i=1; i<=9; i++){
//         if(i<=5){
//             limit = 6-i;
//         }
//         else{
//             limit= i- 4;
//         }
//         for(j=1; j<=limit; j++){
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }


// #include<stdio.h>
// int main(){
//   int i , j;
//   char ch = 'A';

// for(i=1; i<=5; i++){
//     for(j=0; j<i; j++){
//         printf("%c ",ch+j);
//     }
//     printf("\n");
// }
// return 0;
// }



/*

*
* *
* * *
* * * *
* * * * *

*/
// #include<stdio.h>
// int main(){
// int i ,j;

// for(i=1; i<=5; i++){
//     for(j=1; j<=i; j++){
//         printf("* ");
//     }
//     printf("\n");
// }
// return 0;
// }



// #include<stdio.h>
// int main(){
// int i ,j;

// for(i=5; i>=1; i--){
//     for(j=1; j<=i; j++){
//         printf("* ");
//     }
//     printf("\n");
// }
// return 0;
// }

// #include<stdio.h>
// int main(){
// int i ,j,k;

// for(i = 1; i <= 5; i++) {
//     for(j = 1; j < i; j++) {
//         printf(" ");
//     }
//         for(k = 1; k <= 6 - i; k++) {
//             printf("* ");
//         }
//         printf("\n");
// }
// return 0;
// }




// #include<stdio.h>
// int main(){
//     int i,j;
//     for(i=1; i<=5; i++){
//         for(j=1; j<=i; j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }


// #include<stdio.h>
// int main(){
//     int i,j;
//     for(i=1;i<=4;i++){
        
//         // spaces print
//         for(j=1;j<=4-i;j++){
//             printf(" ");
//         }

//         // stars print
//         for(j=1;j<=i;j++){
//             printf("* ");
//         }

//         printf("\n");
//     }

//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int i,j,k;

//     for(i=1;i<=5;i++){

//         for(j=1;j<=5-i;j++){
//             printf(" ");
//         }

//         for(k=1; k<=i; k++){
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int i,j;
//     for(i=1; i<=7; i++){
//         int limit;
//         if(i<=4){
//             limit=i;
//         }
//         else{
//             limit=8-i;
//         }
//         for(j=1;j<=limit; j++){

//             printf("* ");
//         }
//         printf("\n");
//     }

//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int i,j;
//     int num = 1;
//     for(i=1;i<=5;i++){
//         for(j=1;j<=i;j++){
//             printf("%d ",num);
//             num++;
//         }
//         printf("\n");
//     }
// return 0;
// }



// #include<stdio.h>
// int main(){
//     int i,j;
//     char ch = 'A';
//     for(i=1; i<=5; i++){
//         for(j=1;j<=i;j++){
//             printf("%c ",ch);
//         }
//         ch++;
//         printf("\n");
//     }
// return 0;
// }
// #include<stdio.h>
// int main(){
//     int i,j,k;
//     int star, space;
//     for(i=1; i<=9; i++){
//         if(i<=5){
//             star=2*i-1;
//             space = 5-i;
//         }
//         else{
//             star=2*(9-i)+1;
//             space = i-5;
//         }
//         for(j=1; j<=space; j++){
//             printf(" ");
//         }
//         //stars
//         for(k=1; k<=star; k++){
//             printf("*");
//         }
//         printf("\n");

//     }
// return 0;
// }



// #include<stdio.h>
// int main(){
//     int i,j;

// return 0;
// }



// #include<stdio.h>
// #include<string.h>
// int main (){
//     char str[100];
//     int len,i;
//     printf("Enter the string :- ");
//     scanf("%s",str);
//     len = strlen(str);
//     for(i=len-1; i>=0; i--){
//         printf("%c",str[i]);
//     }
// return 0;
// }


// #include<stdio.h>
// #include<string.h>
// int main (){
//     int i,j;
//     for(i=1; i<=4; i++){
//         for(j=1; j<=4; j++){
//             if(i==1||i==4 || i+j==5){
//                 printf("* ");
//             }
//             else{
//                 printf("  ");
//             }
//         }
//         printf("\n");

//     }
// return 0;
// }


// #include<stdio.h>

// int main(){
//     int arr[5] = {10,20,30,40,50};
//     int start = 0;
//     int end = 4;
//     int mid, key;

//     printf("Enter element to search: ");
//     scanf("%d",&key);

//     while(start <= end){
//         mid = (start + end) / 2;

//         if(arr[mid] == key){
//             printf("Element found at index %d", mid);
//             return 0;
//         }
//         else if(key > arr[mid]){
//             start = mid + 1;
//         }
//         else{
//             end = mid - 1;
//         }
//     }

//     printf("Element not found");
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int n, a = 0, b = 1, c;

//     printf("Enter number of terms: ");
//     scanf("%d",&n);

//     for(int i=1; i<=n; i++){
//         printf("%d ", a);
//         c = a + b;
//         a = b;
//         b = c;
//     }

//     return 0;
// }


#include <stdio.h>

int main() {
    int arr[5] = {5, 2, 9, 1, 3};
    int i, j, temp;

    for(i = 0; i < 5 - 1; i++) {
        for(j = 0; j < 5 - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted array: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}