//Program to update the time by one second

#include <stdio.h>

struct time
{
    int hour;
    int minutes;
    int seconds;
};

int main (void) {
    struct time timeUpdate (struct time now);
    struct time currenttime, nextTime;

    printf ("Enter the current time (hh:mm:ss): ");
    scanf ("%i:%i:%i", &currentTime.hour, &currenttime.minutes, &currenttime.seconds);

    nextTime = timeUpdate (currenttime);

    print ("Updated time is %.2i:%.2i:%.2i\n", nextTime.hour, nextTime.minutes, nextTime.seconds );

    return 0;
}