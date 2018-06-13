#include <stdio.h>

int main() {
  int A[4], maior, sMaior, pMaior;
  for(int i = 0; i < 5; i++ ) {
    scanf("%d", &A[i]);
  }
  maior = A[0];
  sMaior = A[0];
  for(int i = 1; i < 5; i++ ) {
    if(maior < A[i]){
      maior = A[i]; 
    }
  }

  for(int i = 1; i < 5; i++ ) {
    if(sMaior < A[i] && A[i] != maior || sMaior == maior){
      sMaior = A[i]; 
    }
  }
  printf("%d \n %d\n", maior, sMaior);

  return 0;
}