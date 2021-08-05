#include <stdio.h>

int main() {
  int a = 7;
  int b = 62;
  int c = 0;

  while (b > a) {
    b -= a;
    c++;
  }

  printf("b = %i \n", b);
  printf("c = %i \n", c);

  return 0;
}