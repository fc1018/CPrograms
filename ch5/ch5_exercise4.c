#include <stdio.h>

int main (void)
{
    float number, accumulator = 0;
    char operator = 'A';

    while ( operator != 'E')
        {
            printf ("Enter calculation:\n");
            scanf ("%f %c", &number, &operator);
        
            switch (operator)
            {
                case '+':
                    accumulator += number;
                    printf ("%f\n", accumulator);
                    break;
                case '-':
                    accumulator -= number;
                    printf ("%f\n", accumulator);
                    break;
                case '*':
                    accumulator *= number;
                    printf ("%f\n", accumulator);
                    break;
                case '/':
                    if ( number == 0)
                        printf ("Error: Division by 0\n");
                    else
                        accumulator /= number;
                        printf ("%f\n", accumulator);
                        break;
                case 'S':
                    accumulator = number;
                    printf ("Accumulator set to %f\n", accumulator);
                    break;
                case 'E':
                    printf ("Final value: %f\n", accumulator);
                    break;
                default:
                    printf ("Unknown operator.\n");
                    break;                
            }
        }
    return 0;
}