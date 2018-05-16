#include <stdio.h>
#define TAM 8
// usar essa
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

  int matriz[TAM][TAM];
  printf("Informe uma matriz 8 x 8\n");
  preencherMatriz(matriz);
  for(int l = 0 ; l < TAM ; l++) {
    for(int c = 0 ; c < TAM ; c++){
      if(l < c) matriz[l][c] = 0;
    }
  }
  printf("\n");
  exibirMatriz(matriz);
  return 0;
}

// 0 0 0 0 0
// 1 1 1 1 1
// 2 2 2 2 2
// 3 3 3 3 3
// 4 4 4 4 4

// 0 0 2 0 4
// 1 1 1 1 1
// 2 2 2 2 2
// 3 3 3 3 3
// 4 4 4 4 4

