#include <stdio.h>

void multiplyBy2 (float array [], int n){
    
    for ( int i = 0; i < n; i++ ){
        array[i] *= 2;
    }
}

int main (void){
    
    float floatvals[4] = { 1.2f, -3.7f, 6.2f, 8.55f };
    void multiplyBy2 (float array [], int n);

    multiplyBy2 (floatvals, 4);

    for ( int i = 0; i < 4; i++ ){
        printf ("%.2f   ", floatvals[i]);
    }

    printf ("\n");

    return 0;
}