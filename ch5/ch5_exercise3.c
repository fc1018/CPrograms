#include <stdio.h>

int main (void)
{
    int val1, val2;
    float cal;

    printf ("Enter your first value:\n");
    scanf ("%i", &val1);
    printf ("Enter your second value:\n");
    scanf ("%i", &val2);

    if (val2 != 0)
    {
        cal = (float) val1 / val2;
        printf ("%i / %i = %.3f\n", val1, val2, cal);
    }
    else    
        printf ("Division by 0.\n");

    return 0;
}