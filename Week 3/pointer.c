#include <stdio.h>

int main() {
    int val = 20;      // Declare an integer variable
    int *ptr = &val;   // Declare a pointer to an integer and initialize it with the address of 'val'

    printf("Value of val: %d\n", val);          // Print the value of 'val'
    printf("Address of val: %p\n", &val);  // Print the address of 'val'
    printf("Value of ptr (Address it holds): %p\n", ptr); // Print the address stored in 'ptr'
    printf("Value pointed to by ptr: %d\n", *ptr);  // Dereference 'ptr' to get the value at the address it holds

    *ptr = 30;  // Change the value of 'val' through the pointer 'ptr'
    printf("Value of val after change: %d\n", val); // Print the new value of 'val'
    printf("Address of val: %p\n", &val);  // Print the address of 'val'
    return 0;
}
