#include <stdio.h>

#define SIZE 5

// Function to demonstrate what gets passed when an array is passed to a function
void printArrayInfo(int *arr) {
    printf("Array received in function: %p\n", (void *)arr);
    printf("First element in function: %d\n", *arr);
}

int main() {
    int A[] = {10, 20, 30, 40, 50};
    int *ptr = A; // Pointer to the first element of the array

    printf("Variable A is: %p\n", (void *)A);
    printf("Variable ptr is: %p\n", (void *)ptr);

    printf("\nArray index operator is syntax sugar for pointer arithmetic:\n");
    printf("A[1] = %d\n", A[1]);
    printf("*(A + 1) = %d\n", *(A + 1)); // Equivalent to A[1]
    printf("So, A[i] is equivalent to *(A + i).\n");

    printf("\nWhat happens with out-of-bound indices?\n");
    printf("A[-1] might access memory before the array: %d\n", A[-1]); // Undefined behavior
    printf("A[SIZE] (beyond array) might access memory immediately after the array: %d\n", A[SIZE]); // Undefined behavior
    // A[400000000] is highly likely to cause a segmentation fault, so it's commented out to avoid crashing the program.
    printf("A[400000000]: %d\n", A[400000000]);

    printf("\nPassing arrays to functions -- what gets passed?\n");
    printArrayInfo(A); // The address of the first element is passed

    return 0;
}
