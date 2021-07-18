//Program to raise an integer to a positive integer power

#include <stdio.h>

long int x_to_the_n (int x, int n){
    long int val1 = x;

    for ( int i = 1; i < n; i++ ){
        val1 *= x;
    }

    return val1;
}

int main (void){
    printf ("2^3 = %li\n", x_to_the_n(2,3));
    printf ("23^4 = %li\n", x_to_the_n(23,4));

    return 0;
}