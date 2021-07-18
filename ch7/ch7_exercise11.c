//Function that takes an integer array and the number of elements in the array and returns sum

#include <stdio.h>

int arraySum (int arr[], int n) {
    int sum = 0;
    
    for ( int i = 0; i < n; i++ ) {
        sum += arr[i]; 
    }

    return sum;
}

int main (void) {
    int arr[] = {2, 4, 6, 8};
    
    printf ("%i\n", arraySum (arr, 4));

    return 0;
}

