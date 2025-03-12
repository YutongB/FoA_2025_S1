#include <stdio.h>

// for loop 
int main() {
    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}



// while loop 
int main() {
    int i = 1;
    while (i <= 5) {
        printf("%d ", i);
        i++;
    }
    printf("\n");
    return 0;
}


// recursion

int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int main() {
    int n = 5;
    printf("Factorial of %d is %d\n", n, factorial(n));
    return 0;
}
