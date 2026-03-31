#include <stdio.h>

/*
===========================================================
🔹 TIME COMPLEXITY KYA HOTA HAI?
-----------------------------------------------------------
Time complexity ka matlab hota hai:
"Program kitna time lega jab input size (n) badhega"

👉 Hum exact time (seconds) nahi nikalte
👉 Hum ye dekhte hain ki code kitni baar run ho raha hai

n = input size (array size, number of elements, etc.)

IMPORTANT:
👉 Sirf loops, recursion aur major operations count karo
👉 Constant values ignore karte hain
===========================================================
*/


// 🔹 O(1) - CONSTANT TIME
void constantTime() {
    int a = 10;
    printf("O(1): %d\n", a);

    /*
    Explanation:
    👉 Ye code sirf 1 baar run hota hai
    👉 Chahe n = 10 ho ya 1000 ho, farak nahi padta

    Condition:
    ✔ Fixed operations
    ✔ No loop, no recursion

    👉 Time Complexity = O(1)
    */
}


// 🔹 O(n) - LINEAR TIME
void linearTime(int n) {
    printf("O(n): ");

    for(int i = 0; i < n; i++) {
        printf("%d ", i);
    }

    printf("\n");

    /*
    Explanation:
    👉 Loop n times chalega

    Example:
    n = 5 → loop 5 times
    n = 100 → loop 100 times

    👉 Time directly depend karta hai n pe

    Condition:
    ✔ Single loop

    👉 Time Complexity = O(n)
    */
}


// 🔹 O(n^2) - QUADRATIC TIME
void quadraticTime(int n) {
    printf("O(n^2):\n");

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("(%d,%d) ", i, j);
        }
        printf("\n");
    }

    /*
    Explanation:
    👉 Outer loop = n times
    👉 Inner loop = n times

    Total = n × n = n²

    Example:
    n = 3 → 3 × 3 = 9 times

    Condition:
    ✔ Nested loops

    👉 Time Complexity = O(n^2)
    */
}


// 🔹 O(log n) - LOGARITHMIC TIME
void logarithmicTime(int n) {
    printf("O(log n): ");

    while(n > 1) {
        printf("%d ", n);
        n = n / 2;
    }

    printf("\n");

    /*
    Explanation:
    👉 Har step me n half ho raha hai

    Example:
    n = 16
    16 → 8 → 4 → 2 → 1

    👉 Steps kam ho jaate hain fast

    Condition:
    ✔ n divide ho raha hai (n/2, n/3...)

    👉 Time Complexity = O(log n)
    */
}


// 🔹 O(n log n)
void nLogNTime(int n) {
    printf("O(n log n):\n");

    for(int i = 0; i < n; i++) {
        int temp = n;

        while(temp > 1) {
            printf("(%d,%d) ", i, temp);
            temp = temp / 2;
        }

        printf("\n");
    }

    /*
    Explanation:
    👉 Outer loop = n
    👉 Inner loop = log n

    Total = n × log n

    Condition:
    ✔ Loop + divide

    👉 Time Complexity = O(n log n)
    */
}


// 🔹 O(2^n) - EXPONENTIAL TIME
int exponentialTime(int n) {

    if(n <= 1)
        return 1;

    return exponentialTime(n-1) + exponentialTime(n-1);

    /*
    Explanation:
    👉 Har function call 2 new calls bana raha hai

    Example:
    n = 3
    → 2 calls
    → 4 calls
    → 8 calls

    👉 Calls double ho rahe hain

    Condition:
    ✔ Multiple recursive calls

    👉 Time Complexity = O(2^n)
    */
}


// 🔹 MAIN FUNCTION
int main() {

    int n = 5;

    constantTime();        // O(1)
    linearTime(n);         // O(n)
    quadraticTime(n);      // O(n^2)
    logarithmicTime(16);   // O(log n)
    nLogNTime(n);          // O(n log n)

    printf("O(2^n): %d\n", exponentialTime(5));

    return 0;
}


/*
===========================================================
🔥 FINAL SHORT NOTES (REVISION)
-----------------------------------------------------------
👉 Ek loop → O(n)
👉 Do loop → O(n^2)
👉 Divide by 2 → O(log n)
👉 Loop + divide → O(n log n)
👉 Recursion double → O(2^n)

👉 Golden Rule:
"Kitni baar code run ho raha hai = Time Complexity"
===========================================================
*/