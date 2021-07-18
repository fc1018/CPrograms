#include <stdio.h>

int main (void) 
{
    int i, j, factorial = 1;
   
    printf("      n      n!\n");
    printf("     ---    ---\n");

    for (j = 1; j <=10; j++)
    {   
        factorial = 1;
        
        for ( i = 1; i <= j; i++)
        {
            factorial *= i;
        }
        printf ("%7i      %i\n",j ,factorial);
        //printf("A\n");
    }
    
    return 0;
} 