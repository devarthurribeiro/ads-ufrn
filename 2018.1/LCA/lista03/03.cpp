#include <stdio.h>

int main() {
  int count = 0;
  float chico = 1.50, ze = 1.10;
  do {
    chico += 0.2;
    ze += 0.3;
    count++;
  }while(ze < chico);
  printf("%d ANOS\n", count);
  return 0;
}
