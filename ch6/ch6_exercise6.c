// Program to generate the first 15 Fibonacci numbers

#include <stdio.h>

int main (void)
{
    int fibonacci0 = 0;
    int fibonacci1 = 1;
    int fibonacci2;

    for ( int i = 2; i < 15; i++){
        fibonacci2 = fibonacci0 + fibonacci1;
        printf("%i \n", fibonacci2);
        fibonacci0 = fibonacci1;
        fibonacci1 = fibonacci2;
    }

    return 0;
}