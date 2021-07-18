//Program to transpose a 4x5 matrix to a 5x4 matrix

#include <stdio.h>

int arr1[4][3], arr2[3][4] = {0};

int main (void) {
    int counter = 1;

    void transposeMatrix (int arr1[4][3], int arr2[3][4]);

    //Initialising example array
    for ( int i = 0; i < 5; i++ ) {
        for ( int j = 0; j < 4; j++ ) {
            arr1[i][j] = counter;
            counter++;
        }
    }

    // transposeMatrix (arr1, arr2);

    //print function to check array
    for ( int i = 0; i < 5; i++ ) {
        printf ("\n");

        for ( int j = 0; j < 4; j++ ) {
            printf ("%2i ", arr1[i][j]);
        }
    }
    printf ("\n");

    return 0;
    
}

void transposeMatrix (int arr1[4][3], int arr2[3][4]) {
    for ( int i = 0; i < 5; i++ ) {
        for ( int j = 0; j < 4; j++ ) {
            arr2[i][j] = arr1[j][i];
        }
    }
    return;
}