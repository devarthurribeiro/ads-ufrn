#include <stdio.h>
#define TAM 3

void preencherMatriz(int matriz[][TAM], int vetor[TAM]) {
  printf("INFORME UMA MATRIZ: %d\n", TAM);
  for(int l = 0 ; l < TAM ; l++){
    vetor[l] = 0;
    for(int c = 0 ; c < TAM ; c++){
      scanf("%d", &matriz[l][c]);
    }
  }

  for(int l = 0 ; l < TAM ; l++){
    for(int c = 0 ; c < TAM ; c++){
      vetor[l] += matriz[c][l];
    }
  }

}

void exibirMatriz(int matriz[][TAM]){
  for(int l = 0 ; l < TAM ; l++) {
    for(int c = 0 ; c < TAM ; c++)
      printf("%3d ", matriz[l][c]);
      printf("\n");
    }
}

int main() {
  int matriz[TAM][TAM], vetor[TAM];

  preencherMatriz(matriz, vetor);
  printf("\n");
  exibirMatriz(matriz);
  printf("\n");
  for(int i = 0 ; i < TAM ; i++)
    printf("%d \n", vetor[i]);
  return 0;
}