#include <stdio.h>
#include <math.h>

int main () 

{
    //double x = 2.55;
    //double answer = 3*pow(x,3) - 5*pow(x,2)+ 6;
    double x, answer;
    x = 2.55; 
    answer = 3 * pow(x,3) - 5 * pow(x,2) + (double)6;

    printf("%f\n",answer);

    return 0;
}