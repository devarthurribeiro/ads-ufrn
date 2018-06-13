#include <stdio.h>

int main() {
  int x = 10;
  float y = 1.20;
  char z = 'C';

  int   *px  = &x;
  float *py  = &y;
  char  *pz  = &z;

  printf("%d\n", x);
  printf("%f\n", y);
  printf("%c\n", z);
  printf("\n");
  *px = 20;
  *py = 2.20;
  *pz = 'A';

  printf("%d\n", x);
  printf("%f\n", y);
  printf("%c\n", z);

  return 0;
}