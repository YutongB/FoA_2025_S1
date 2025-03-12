#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n = 29;
    if (is_prime(n))
        printf("%d is prime.\n", n);
    else
        printf("%d is not prime.\n", n);
    return 0;
}
