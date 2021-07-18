#include <stdio.h>

int main (void)
{
    int n, triangularNumber;

    printf("TABLE OF TRIANGULAR NUMBERS\n\n");
    printf(" n \tSum from 1 to n\n");
    printf("--- \t----------------\n");

    triangularNumber = 0;

    n = 1;

    while (n <= 10)
    {
        triangularNumber += n;
        printf(" %i\t\t%i\n",n ,triangularNumber);
        n++;
    }

    return 0;
}