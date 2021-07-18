//function to find the minimum value in an array

#include <stdio.h>

int minimum (int value [], int numberOfElements){
    int minValue;
    minValue = value[0];

    for ( int i = 1; i < numberOfElements; i++ ){
        if ( value[i] < minValue ){
            minValue = value[i];
        }
    }
    return minValue;
}

int main (void){
    int array1[5] = { 157, -28, -37, 26, 10 };
    int array2[7] = { 12, 45, 1, 10, 5, 3, 22 };
    int minimum (int values[], int numberofElements);

    printf ("array1 minimum: %i\n", minimum (array1, 5));
    printf ("array2 minimum: %i\n", minimum (array2, 7));

    return 0;
}