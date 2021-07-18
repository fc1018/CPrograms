//Program to transpose matrices

#include <stdio.h>



void fillMatrix (int nRows, int nCols, int matrix[nRows][nCols]);
void printMatrix (int nRows, int nCols, int matrix[nRows][nCols]);
void transpose (int nRows, int nCols, int transpose_array[nRows][nCols], int origin_array[nRows][nCols]);
void transpose2(int nRows, int nCols, int *transpose_array, int *origin_array);


int main (void) {

    int nRows = 4;
    int nCols = 5;

    int origin_array[4][5] = {0};
    int transpose_array[5][4] = {0};

    fillMatrix (nRows, nCols, origin_array);

    printf ("Matrix before transpose: \n\n");

    printMatrix (nRows, nCols, origin_array);

    //transpose (nCols, nRows, transpose_array, origin_array);
    transpose2(nCols, nRows, transpose_array[0], origin_array[0]);

    printf ("\nMatrix after transpose: \n\n");
    
    printMatrix (nCols, nRows, transpose_array);

    return 0;

}

void fillMatrix (int nRows, int nCols, int matrix[nRows][nCols]) {
    int counter = 1;

    for ( int row = 0; row < nRows; row++ ) {
        for ( int column = 0; column < nCols; column++ ){
            matrix[row][column] = counter;
            counter++;
        }
    }
}

void transpose (int nRows, int nCols, int transpose_array[nRows][nCols], int origin_array[nCols][nRows]) {
    for ( int row = 0; row < nRows; row++ ) {
        for ( int column = 0; column < nCols; column++ ){
            transpose_array[row][column] = origin_array[column][row];
        }
    }
}

void transpose2(int nRows, int nCols, int *transpose_array, int *origin_array) {
    for ( int row = 0; row < nRows; row++ ) {
        for ( int column = 0; column < nCols; column++ ){
            transpose_array[row * nCols + column] = origin_array[column * nRows + row];
        }
    }
}

void printMatrix (int nRows, int nCols, int matrix[nRows][nCols]) {
    for ( int row = 0; row < nRows; row++ ) {
        for ( int column = 0; column < nCols; column++ ){
            printf ("%2i ", matrix[row][column]);
        }

        printf ("\n");
    }
}