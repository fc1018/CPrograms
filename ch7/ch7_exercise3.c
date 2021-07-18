// Modification of program 7.8
// Function to calculate the absolute function of a number 

#include <stdio.h>


int main (void){
    float squareRoot (float x, float epsilon);

    printf ("squareRoot (2.0) Four 0s = %f\n", squareRoot (2.0, 0.00001));
    printf ("squareRoot (2.0) Zero 0s = %f\n", squareRoot (2.0, 1));
    printf ("squareRoot (2.0) Two 0s = %f\n", squareRoot (2.0, 0.01));

    return 0;
}

float absoluteValue (float x)
{
    if ( x < 0 ){
        x = -x;
    }
    return (x);
}

//Function to compute the square root of a number

float squareRoot (float x, float epsilon)
{
    float guess = 1.0;

    if ( x < 0 ){
        printf ("Negative arguement to squarRoot.\n");
        return -1.0;
    }

    while ( absoluteValue (guess * guess - x) >= epsilon ){
        guess = ( x / guess + guess ) / 2.0;
    }

    return guess;
}
