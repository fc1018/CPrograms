//Program to illutstrate arrays of structures 

#include <stdio.h>

struct time
{
    int hour;
    int minutes;
    int seconds;
};

int main (void) {
    struct time timeUpdate (struct time now);
    struct time testTimes[5] =
        { { 11, 59, 59 }, { 12, 0, 0 }, { 1, 29, 59 },
          { 23, 59, 59 }, { 19, 12, 27 }};
    
    
}