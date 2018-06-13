#include <stdio.h>
#define TAM 6
// não usar
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


void exibirMatriz(int matriz[][TAM]){
  for(int l = 0 ; l < TAM ; l++) {
    for(int c = 0 ; c < TAM ; c++)
      printf("%d ", matriz[l][c]);
      printf("\n");
    }
}

int main() {
  int matriz[TAM][TAM], menor;
  
  printf("Informe uma matriz 6 x 6\n");
  preencherMatriz(matriz);
  menor = matriz[0][0];
  for(int l = 0 ; l < TAM ; l++) {
    for(int c = 0 ; c < TAM ; c++){
      if(l < c){
        if(matriz[l][c] < menor) menor = matriz[l][c];
      }
    }
  }
  printf("Menor: %d\n", menor);
  return 0;
}

// 1 1 1 1 1 1
// 2 2 2 2 2 2
// 3 3 3 3 3 3
// 4 4 4 4 4 4
// 5 5 5 5 5 5


