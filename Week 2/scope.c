#include <stdio.h>

// Global variable declaration
int a = 10;
int b = 100;
int c = 1000; 

void demoFunction() {
    // Static variable declaration
    static int b = 5;
    // Local variable declaration
    int c = 20;

    a++;
    b++;
    c++;

    printf("Inside demoFunction: a = %d, b = %d, c = %d\n", a, b, c);
}

int main() {
    int i;
    int a = 10;
    int b = 100;
    int c = 1000; 
    for (i = 0; i < 3; i++) {
        demoFunction();
    }

    // Accessing global variable in main
    printf("In main: a = %d, b = %d, c = %d\n", a, b, c);


    return 0;
}
