#include <stdio.h>

int Fibonacci_number(int n) {
    if (n <= 1) return n;
    return Fibonacci_number(n - 1) + Fibonacci_number(n - 2);
}

int main() {
    int n = 10;
    printf("Fibonacci number at position %d is %d\n", n, Fibonacci_number(n));
    return 0;
}


