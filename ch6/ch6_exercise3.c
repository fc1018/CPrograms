// Demonstrating an array of counters

#include <stdio.h>

int main (void)
{
    int ratingCounters[11] = {0};
    int response;

    printf ("Enter your responses:\n");

    for ( int i = 1; ; i++ )
    {
        scanf ("%i", &response);

        if ( response == 999){
            break;
        }
        else if ( response < 1 || response > 10){
            printf ("Bad response: %i\n", response);
        }
        else{
            ratingCounters[response]++;
        }
    }

    printf ("\n\nRating\tNumber of Responses\n");
    printf ("------ -------------------\n");
    
    for ( int i = 1; i <= 10; i++ )
        printf ("%4i%14i\n", i, ratingCounters[i]);

    return 0;

}