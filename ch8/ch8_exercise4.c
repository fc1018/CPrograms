//Program to show what day a date falls on

#include <stdio.h>

struct date
{
    int day;
    int month;
    int year;
}   date;

    int nCal (struct date date);
    void dayOfTheWeek (int nVal);

int main (void) {
    printf ("Enter your date (YYYY MM DD): \n");
    scanf ("%d%d%d", &date.year, &date.month, &date.day);


    if ( date.year < 1900 ) {
        printf ("Error: Date earlier than 1900/01/01\n");
        return 0;
    }
    else {
        dayOfTheWeek (nCal (date));
        return 0;

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

//Function to calculate day of the week from N-Value
void dayOfTheWeek (int nVal) {
    int dayOfTheWeek;

    dayOfTheWeek = (nVal - 621049) % 7;

    switch (dayOfTheWeek)
    {
    case 0:
        printf ("%.2d/%.2d/%d is on a Sunday.\n", date.day, date.month, date.year);
        break;
    case 1:
        printf ("%.2d/%.2d/%d is on a Monday.\n", date.day, date.month, date.year);
        break;
    case 2:
        printf ("%.2d/%.2d/%d is on a Tuesday.\n", date.day, date.month, date.year);
        break;
    case 3:
        printf ("%.2d/%.2d/%d is on a Wednesday.\n", date.day, date.month, date.year);
        break;
    case 4:
        printf ("%.2d/%.2d/%d is on a Thursday.\n", date.day, date.month, date.year);
        break;
    case 5:
        printf ("%.2d/%.2d/%d is on a Friday.\n", date.day, date.month, date.year);
        break;
    case 6:
        printf ("%.2d/%.2d/%d is on a Saturday.\n", date.day, date.month, date.year);
        break;
    default:
        printf ("Error: Switch statement break.\n");
        break;
    }

}