#include <stdio.h>

int main (void)
{
    float val1, val2;
    char op;

    printf ("Type in your expression:\n");
    scanf ("%f %c %f", &val1, &op, &val2);

    switch ( op )
    {
        case '+':
            printf ("%.2f\n", val1 + val2);
            break;
        case '-':
            printf ("%.2f\n", val1 - val2);
            break;
        case '*':
        case 'x':
            printf ("%.2f\n", val1 * val2);
            break;
        case '/':
            if ( val2 == 0 )
                printf ("Divison by 0.\n");
            else 
                printf ("%.2f\n", val1 / val2);
            break;
        default:
            printf ("Unknown operator.\n");
    }

    return 0;
}