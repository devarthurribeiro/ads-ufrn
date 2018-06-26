#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 4

int preencherMatriz(int matriz[][TAM]) {
  int soma = 0;
  for(int l = 0 ; l < TAM ; l++)
    for(int c = 0 ; c < TAM ; c++){
      matriz[l][c] = rand() % 20;
      if(l < c) matriz[l][c] = 0;
    }
  return soma;
}

void exibirMatriz(int matriz[][TAM]) {
  for(int l = 0 ; l < TAM ; l++) {
    for(int c = 0 ; c < TAM ; c++)
      printf("%3d ", matriz[l][c]);
      printf("\n");
    }
}

int main() {
  srand( time(NULL) );
  int matriz[TAM][TAM];

  int soma = preencherMatriz(matriz);
  printf("Soma dos numeros acima da principal %d :\n", soma);
  printf("\n");
  exibirMatriz(matriz);

  return 0;
} 