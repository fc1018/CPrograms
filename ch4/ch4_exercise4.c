#include <stdio.h>
#include <math.h>

int main(void)
{
    int n, n2;

    printf("  n       n^2\n");
    printf(" ---     ---\n");

    for (n = 1 ; n <= 10; n++)
        {
            n2 = pow(n,2);
            printf("%3i       %i\n", n, n2);
        }

    return 0;    
}