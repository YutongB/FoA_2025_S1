#include <stdio.h>
#include <limits.h>
int main() {
    int i = 10;
    float f = 5.25;
    char c = 'A';

    printf("Integer: %d\n", i);
    printf("Float: %.2f\n", f);
    printf("Character: %c\n", c);
    printf("Max int: %d\n", INT_MAX);
    printf("Min int: %d\n", INT_MIN);
    return 0;
}

