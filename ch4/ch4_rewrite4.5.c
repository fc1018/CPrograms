#include <stdio.h>

int main ()
{
    int n, counter = 1;
    long long unsigned triangularNumber, number;

    while (counter <=5)
    {
        printf("What triangular number do you want? ");
        scanf("%llu",&number);
        counter++;

        triangularNumber = 0;

        n = 1;

        while (n <= number)
        {
            triangularNumber += n;
            n++;   
        }

        printf("Triangular number %llu is %llu\n\n",number, triangularNumber);
    }

    return 0;
}