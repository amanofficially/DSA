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

int main (){
    cout<<"Sum :- "<<sum(5)<<endl;
    cout<<"Factorial :- "<<factorial(5);
    return 0;
}