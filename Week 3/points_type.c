#include <stdio.h>

int main(){
    int x = 2;    // x is 4 bytes
    int *p = &x;  // p is 8 bytes
    void *p1 = p; // p1 is 8 bytes
    double *p2 = p1;

    printf("%d\n",*p);
    // printf("%d\n", *p1);
    printf("%lf\n", *p2);

    return 0;
}