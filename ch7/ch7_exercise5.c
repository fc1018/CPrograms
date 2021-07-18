// Modification of exercise 1.8
// Function to calculate the absolute function of a number 


#include <stdio.h>

float absoluteValue (float x)
{
    if ( x < 0 ){
        x = -x;
    }
    return (x);
}

//Function to compute the square root of a number

float squareRoot (float x)
{
    const float epsilon = 0.00001;
    float       guess   = 1.0;

    if ( x < 0 ){
        printf ("Negative arguement to squarRoot.\n");
        return -1.0;
    }

    while ( absoluteValue (((guess * guess) / x)-1) >= epsilon ){
        guess = ( x / guess + guess ) / 2.0;
    }

    return guess;
}

int main (void)
{
    printf ("squareRoot (2.0) = %f\n", squareRoot (2.0));
    printf ("squareRoot (144.0) = %f\n", squareRoot (144.0));
    printf ("squareRoot (17.5) = %f\n", squareRoot (17.5));

    return 0;
}