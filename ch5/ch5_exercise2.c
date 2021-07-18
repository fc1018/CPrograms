#include <stdio.h>

int main (void)
{
    int val1, val2, remainder;

    printf ("Input first value:\n");
    scanf ("%i", &val1);
    printf ("Input second value:\n");
    scanf ("%i", &val2);

    remainder = val1 % val2;

    if (remainder == 0)
        printf ("%i is a factor of %i\n", val2, val1);
    else 
        printf ("%i is not a factor of %i\n", val2, val1);

    return 0;
}