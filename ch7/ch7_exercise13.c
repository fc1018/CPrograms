//Sorting function- copied from exercise 7.1.12

#include <stdio.h>

void sort (int a[], int n, int order) {
    if ( order == 1 ) {
        for ( int i = 0; i < n - 1; i++ ) {
            for ( int j = i + 1; j < n; j++ ) {
                if ( a[i] > a[j] ) {
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
    }
    else if ( order == 0 ) {
        for ( int i = 0; i < n - 1; i++ ) {
            for ( int j = i + 1; j < n; j++ ) {
                if ( a[i] < a[j] ) {
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }       
    }
    else {
        printf ("\n\nError: Unknown order value.\n");
        return;
    }
}

int main (void) {
    int array[16] = { 34, -5, 6, 0, 12, 100, 56, 22,
                      44, -3, -9, 12, 17, 22, 6, 11 };
    void sort (int a[], int n, int order);

    printf ("The array before the sort: \n");

    for ( int i = 0; i < 16; i++ ){
        printf ("%i ", array[i]);
    }
    //Sort function- 0 = Decreasing, 1 = Increasing
    sort (array, 16, 0);

    printf ("\n\nThe array after the sort: \n");

    for ( int i = 0; i < 16; i++ ){
        printf ("%i ", array[i]);
    }

    printf ("\n");

    return 0;

}
     
