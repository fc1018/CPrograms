//Calculating the nth Triangular number

#include <stdio.h>

int calculateTriangleNumber (int n)
{
    int triangularNumber = 0;

    for ( int i = 1; i <= n; i++ ){
        triangularNumber += i;
    }

    printf("Triangular number %i is %i\n", n, triangularNumber);

    return triangularNumber;
}

int main (void){
    int calculateTriangleNumber (int n);

    calculateTriangleNumber (10);
    calculateTriangleNumber (20);
    calculateTriangleNumber (50);

    return 0;
}