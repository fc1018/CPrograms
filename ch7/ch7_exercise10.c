#include <stdio.h>

//Function that determines whether input is prime
int isPrime (int n) {
    for ( int i = 2; i <= n / 2; i++ ) {
        if ( n % i == 0 ) {
            return 1;
        }
        else {
            return 0;
        }
    }
}

int main (void) {
    printf ("%i\n", isPrime (28));

    return 0;
}