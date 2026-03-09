#include<iostream>
using namespace std;

int sum(int n){
    int sum = 0;
    for(int i=0; i<=n; i++){
        sum += i;
    }
    return sum;
} 

int factorial(int num){
    int fact = 1;
    for(int i=1; i<=num; i++){
        fact *= i;
    }
    return fact;
} 

int sumOfDigits(int num){
    int digitSum = 0;

    while(num > 0){
        int lastDigit = num % 10;
        digitSum += lastDigit;
        num = num / 10;
    }

    return digitSum;
}

int main (){
    cout<<"Sum :- "<<sum(5)<<endl;
    cout<<"Factorial :- "<<factorial(5)<<endl;
    cout<<"Sum of digits :- "<<sumOfDigits(1234);

    return 0;
}