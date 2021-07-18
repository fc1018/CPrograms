//program that calculates lowest common multiple of two integers

#include <stdio.h>

//greatest common denominator function from exercise 1.6
int gcd (int u, int v) {
    int temp;

    while ( v != 0 ) {
        temp = u % v;
        u = v;
        v = temp; 
    }

    return u;
}

//lowest common multiple function
int lcm (int u, int v) {
    int lcm = (u * v) / gcd (u, v);

    return lcm;
}

int main (void) {
    int u, v;

    printf ("Give two integers you would like the lowest common multiple of: \n");
    scanf ("%i", &u);
    scanf ("%i", &v);

    if ( (u < 0) || (v < 0) ){
        printf ("Error one or both values less than zero.\n");
        
        return 1;
    }
    else {
        printf ("The LCM of %i and %i is: %i\n", u, v, lcm (u, v));

        return 0;
    }
}



