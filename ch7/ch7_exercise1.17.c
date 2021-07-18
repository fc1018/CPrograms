#include <stdio.h>

int main (){
    unsigned long int factorial (unsigned int n);

    for ( unsigned int j = 0; j < 11; j++ ){
        printf("%2u! = %lu\n", j, factorial (j));
    }

    return 0;
}

//Recursive function to calculate the factorial of a positive integer

unsigned long int factorial (unsigned int n){
    unsigned long int result = 0;

    if ( n == 0 ){
        result = 1;
    }
    else {
        result = n * factorial (n - 1);
    }

    return result;
}