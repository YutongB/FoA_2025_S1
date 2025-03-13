#include <stdio.h>

int main(){
    for ( int i =0; i < 8; i++){ // i = 0
        for (int j = i+1; j < 8; j+=3) { // i = 0; j = 4
            if (i +j == 7){// i +j = 4 no
                break;
            }
        printf("i = %d, j = %d\n", i, j);
        }
    }
}