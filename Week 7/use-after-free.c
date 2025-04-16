#include <stdlib.h>
#include <stdio.h>

int main() {
    int *numbers = malloc(3 * sizeof(int));

    numbers[0] = 1;

    free(numbers);

    // Use after free
    printf("First number was: %d\n", numbers[0]);
    return 0;
}
