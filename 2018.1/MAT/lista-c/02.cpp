#include <stdio.h>
#define TAM 5

void preencherMatriz(int matriz[][TAM]) {
  printf("INFORME UMA MATRIZ: %d\n", TAM);
  for(int l = 0 ; l < TAM ; l++)
    for(int c = 0 ; c < TAM ; c++){
      l == c ? matriz[l][c] = 1 : matriz[l][c] = 0;
    }
}

void exibirMatriz(int matriz[][TAM]) {
  for(int l = 0 ; l < TAM ; l++) {
    for(int c = 0 ; c < TAM ; c++)
      printf("%3d ", matriz[l][c]);
      printf("\n");
    }
}

int main() {
  int matriz[TAM][TAM];

  preencherMatriz(matriz);
  printf("\n");
  exibirMatriz(matriz);

  return 0;
}