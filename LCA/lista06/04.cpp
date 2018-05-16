#include <stdio.h>
#define TAM 5
// falta mostrar se não tem
void preencherMatriz(int matriz[][TAM]) {
    for(int l = 0 ; l < TAM ; l++)
      for(int c = 0 ; c < TAM ; c++)
        scanf("%d", &matriz[l][c]);
}

void buscaMatriz(int matriz[][TAM], int n) {
    for(int l = 0 ; l < TAM ; l++) {
    for(int c = 0 ; c < TAM ; c++)
      if(n == matriz[l][c])
      printf("Numero encontrado na posição: %d X %d \n", l, c);
    }
}

int main() {

  int matriz[TAM][TAM], n;
  printf("Informe uma matriz 5 x 5\n");
  preencherMatriz(matriz);
  printf("Informe uma N para ser buscado na matriz\n");
  scanf("%d", &n);
  printf("\n");
  buscaMatriz(matriz, n);
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

