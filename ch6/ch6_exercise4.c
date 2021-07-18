//Average of array of 10 floating point numbers

#include <stdio.h>

int main ()
{
    float values[10] = {0};
    float value, average, total = 0;

    printf ("Enter 10 floating-point values: \n");

        for ( int i = 0; i < 10; i++ ){
            
            scanf ("%f", &values[i]);

            total += values[i];
        }
    average = total / 10;

    printf ("The average of the floating-point array is: %.3f\n", average);

    return 0;
}