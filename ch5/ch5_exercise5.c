#include <stdio.h>
#include <stdbool.h>

int main ()
{
    int number, right_digit;
    bool wasNegative;

    printf ("Enter your number: \n");
    scanf ("%i", &number);

    if ( number < 0 )
        {
            number = -number;
            wasNegative = true;
            // Keeping negative conversion in bool 
        }
    do 
    {
        right_digit = number % 10;
        printf ("%i", right_digit);
        number /= 10;
    }
    while ( number != 0);

    if ( wasNegative == true )
        printf ("-");

    printf ("\n");

    return 0;
}