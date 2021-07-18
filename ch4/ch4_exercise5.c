#include <stdio.h>

int main (void)
{
    int n, triangularNumber;
    n = 5;

    printf("   n     T\n");
    printf("  ---   ---\n");

    for ( ; n <= 50; n += 5)
    {
        triangularNumber = n* (n + 1) / 2;

        printf("%-2i     %i\n" ,n ,triangularNumber);
    }
    
    return 0;
}