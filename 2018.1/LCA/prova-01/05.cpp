#include <stdio.h>

int main() {
  int tam, maior, qtd = 1;

  scanf("%d", &tam);
  int vetor[tam];

  for(int i = 0;i < tam; i++) {
    scanf("%d", &vetor[i]);
  }
  maior = vetor[0];
  for(int i = 1;i < tam; i++) {
    if(maior < vetor[i])
      maior = vetor[i];
    
  }
  for(int i = 1;i < tam; i++) {
    if(maior == vetor[i]) 
      qtd++;
    
  }
  printf("Maior: %d, Vezes: %d\n", maior, qtd);
  return 0;
}