#include <stdio.h>

int main() {
  int tam, aux = 0;
  scanf("%d", &tam);
  int vetor[tam];

  for(int i = 0; i < tam; i++ ) {
    scanf("%d", &vetor[i]);
  }

  for (int i = 1; i < tam; i++) {
    for (int j = 0; j < tam - 1; j++) {
      if (vetor[j] > vetor[j + 1]) {
        aux = vetor[j];
        vetor[j] = vetor[j + 1];
        vetor[j + 1] = aux;
      }
    }
  }
  printf("\n");
  for(int i = 0; i < tam; i++ ) {
   printf("%d\n", vetor[i]);
  }
  return 0;
}