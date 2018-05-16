#include <stdio.h>

int main() {
  int A[14], B[4];
  int count = 0, aux = 0;

  for(int i = 0; i < 15; i++ ) {
    scanf("%d", &A[i]);
    if(count < 2) {
      count++;
    }else {
      count = 0;
      B[aux] = (A[i] + A[i-1] + A[i-2]) / 3;
      aux++;
    }
  }
   printf("\n");
  for(int i = 0; i < 5; i++ ) {
    printf("\n %d", B[i]);
  }
  return 0;
}