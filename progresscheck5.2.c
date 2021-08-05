#include <stdio.h>

int myArray[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int myArray2[10];

int main() {
  for (int i = 1; i <= 10; i++) {
    myArray2[i] = myArray[i] * myArray[i];
  }

  printf("%i\n", myArray2[9]);

  return 0;
}