#include <stdio.h>

int main ()
{
    int l, b, ar, pr;

    printf("Enter the length of the rectangle");
    
    scanf("%d", &l);

    printf("Enter the base of the rectangle");

    scanf("%d", &b);

    ar = l * b;

    pr = 2 * (l + b);

    printf("\n Area of the rectangle is: %d", ar);

    printf("\n Perimeter of the rectangle is: %d", pr);

    return 0;
}