//Program to generate prime numbers using the sieve of Eratosthenes Algorithm

#include <stdio.h>

int main (void)
{
    int primes[151] = {0};

    for ( int i = 2; i <= 150; i++ ){
        if ( primes[i] == 0 ){
            printf("%i ", i);
            for ( int j = 2; i*j <= 150; j++ ){
                primes[i*j] = 1;
            }
        }
    }
    
    printf("\n");

    return 0;
}