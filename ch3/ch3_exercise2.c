#include <stdio.h>

int main ()
{
    int next_multiple, i, j;
    i = 12258;
    j = 23;
    next_multiple = i + j - i % j;

    printf("The next largest multiple of %i for %i is %i\n",j ,i, next_multiple);

    return 0;

}
