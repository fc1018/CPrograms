#include <stdio.h>

int main ()
{
    int number, digit;
    int total = 0;

    printf("Enter your number: ");
    scanf("%i", &number);

    while (number != 0)
    {
       digit = number % 10;
       total += digit; 
       number /= 10;
    }

    printf("Total of digits is: %i\n",total);

    return 0;
}