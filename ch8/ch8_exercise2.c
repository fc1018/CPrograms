//Program to calculate the number of days between 2 dates 

#include <stdio.h>

struct date
{
    int day;
    int month;
    int year;
}   date1, date2;


int main (void) {
    int nCal (struct date date);
    int numberOfDaysBetween (struct date date1, struct date date2);

    int daysBetween;

    printf ("Enter your first date (YYYY/MM/DD): \n");
    scanf ("%i/%i/%i", &date1.year, &date1.month, &date1.day);
    printf ("Enter your second date (YYYY/MM/DD): \n");
    scanf ("%i/%i/%i", &date2.year, &date2.month, &date2.day);

    if ( date1.year < 1900 || date2.year < 1900 ) {
        printf ("Error: One or both dates earlier than 1900/01/01\n");
        printf ("%i, %i\n", date1.year, date2.month);
        return 0;
    }
    else {
        daysBetween = numberOfDaysBetween (date1, date2);

        printf ("There are %i days between %i/%i/%i and %i/%i/%i\n",
            daysBetween, date1.year, date1.month, date1.day,
            date2.year, date2.month, date2.day);

        return 0;

    }
}

//Function to work out the difference between 2 dates' N-values
int numberOfDaysBetween (struct date date1, struct date date2) {
    int nCal (struct date date);
    int nDifference;

    nDifference = nCal (date1) - nCal (date2);

    if ( nDifference < 0 ) {
        nDifference = -nDifference;
        return nDifference;
    }
    else {
        return nDifference;
    }
}

//Function to calculate the N-Value of a date
int nCal (struct date date) {
    int nVal;

    if ( date.month <= 2 ) {
        date.year -= 1;
        date.month += 13;
    }
    else {
        date.month += 1;
    }

    nVal = ( 1461 * date.year / 4 ) + ( 153 * date.month / 5) + date.day;

    return nVal;
}