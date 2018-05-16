#include <stdio.h>
#define TAM 3
// pode usar
void preencherMatriz(int matriz[][TAM]) {
  for(int l = 0 ; l < TAM ; l++)
    for(int c = 0 ; c < TAM ; c++)
      scanf("%d", &matriz[l][c]);
}

void exibirMatriz(int matriz[][TAM]){
  for(int l = 0 ; l < TAM ; l++) {
    for(int c = 0 ; c < TAM ; c++)
      printf("%d ", matriz[l][c]);
      printf("\n");
    }
}

int main() {

  int matriz[TAM][TAM], vetor[] = {0, 0, 0};
  printf("Informe uma matriz 3 x 3\n");
  preencherMatriz(matriz);
  for(int l = 0 ; l < TAM ; l++) {
    for(int c = 0 ; c < TAM ; c++){
      vetor[c] += matriz[l][c];
    }
  }
  printf("\n%d %d %d \n", vetor[0], vetor[1], vetor[2]);
  return 0;
}

// 1 1 1
// 2 2 2
// 3 3 3

