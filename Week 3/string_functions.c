#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Hello, World!";
    char str2[20];

    // // Demonstrate strlen
    printf("Length of str1: %d\n", strlen(str1));

    // Demonstrate strcpy
    strcpy(str2, str1);

    // // Change str2 slightly for comparison
    str2[12] = '?';
    printf("str2 after strcpy: %s\n", str2);

    // Demonstrate strcmp
    char cstr[11] = "Test";
    char cstr2[6];

    // Copy str to str2, including the null terminator
    strcpy(cstr2, cstr);
    // Change the first character of str2 to 't' to make it "test"
    cstr2[0] = 't';

    // Compare "test" with str2 and print the result
    printf("strcmp(\"test\", cstr2) = %d\n", strcmp("test", cstr2)); 

    // Compare "test" with str and print the result
    printf("strcmp(\"test\", cstr) = %d\n", strcmp("test", cstr)); 


    return 0;
}
