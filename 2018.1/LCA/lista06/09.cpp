#include <stdio.h>
#define TAM 5
// pode usar
void preencherMatriz(int matriz[][TAM]) {
    for(int l = 0 ; l < TAM ; l++)
      for(int c = 0 ; c < TAM ; c++)
        scanf("%d", &matriz[l][c]);
}

int main() {

  int matriz[TAM][TAM], sl4 = 0, sc2 = 0, soma = 0;
  printf("Informe uma matriz 5 x 5\n");
  preencherMatriz(matriz);
  for(int l = 0 ; l < TAM ; l++) {
    for(int c = 0 ; c < TAM ; c++){
     if(l == 4) sl4 += matriz[l][c];
     if(c == 2) sc2 += matriz[l][c];
     soma += matriz[l][c];
    }
  }
  printf("Soma linha 4: %d\n", sl4);
  printf("Soma coluna 2: %d\n", sc2);
  printf("Soma todos: %d\n", soma);
  return 0;
}

// 1 1 1 1 1
// 2 2 2 2 2
// 3 3 3 3 3
// 4 4 4 4 4
// 5 5 5 5 5

  
