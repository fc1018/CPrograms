#include <stdio.h>
int main (void)
{
    int n, number, triangularNumber;

    triangularNumber = 0;
    n = 1;

    printf("What triangle number do you want? ");
    scanf("%i", &number);

    
    for ( ; n <= number; n++) 
        triangularNumber += n;

        printf("Triangular number %i is %i\n", number,triangularNumber);

    return 0;
}