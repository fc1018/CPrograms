// Calculating triangle numbers using functions- copied from exercise 1.5

#include <stdio.h>

int gTriangularNumber;

int main (void){
    printf("   n     T\n");
    printf("  ---   ---\n");

    int calculateTriangleNumber (int n);

    for ( int n = 5; n <= 50; n += 5){
        printf("  %-2i     %i\n", n, calculateTriangleNumber(n));
    }
    
    return 0;
}

int calculateTriangleNumber (int n){
    int gTriangularNumber = 0;

    for ( int i = 1; i <= n; i++ ){
        gTriangularNumber += i;
    }

    return gTriangularNumber;
}