#include <stdio.h>
#define TAM 5
//usar
void preencherMatriz(int matriz[][TAM]) {
    for(int l = 0 ; l < TAM ; l++)
      for(int c = 0 ; c < TAM ; c++)
        scanf("%d", &matriz[l][c]);
}

void exibirMatriz(int matriz[][TAM]){
  for(int l = 0 ; l < TAM ; l++) {
    for(int c = 0 ; c < TAM ; c++)
      printf("%3d ", matriz[l][c]);
      printf("\n");
    }
}

void trocarLinha(int matriz[][TAM], int linhaA, int linhaN){
  int aux;
  for(int i = 0 ; i < TAM ; i++) {
    aux = matriz[linhaA][i];
    matriz[linhaA][i] = matriz[linhaN][i];
    matriz[linhaN][i] = aux;
  }
}

void trocarColuna(int matriz[][TAM], int colunaA, int colunaN){
  int aux;
  for(int i = 0 ; i < TAM ; i++) {
    aux = matriz[i][colunaA];
    matriz[i][colunaA] = matriz[i][colunaN];
    matriz[i][colunaN] = aux;
  }
}

void trocarLinhaPorColuna(int matriz[][TAM], int linha, int coluna){
  int aux;
  for(int i = 0 ; i < TAM ; i++) {
    aux = matriz[linha][i];
    matriz[linha][i] = matriz[i][coluna];
    matriz[i][coluna] = aux;
  }
}

int main() {
  int matriz[TAM][TAM];

  preencherMatriz(matriz);

  trocarLinha(matriz, 0, 2);
  trocarColuna(matriz, 2, 4);
  
  trocarLinhaPorColuna(matriz, 4, 3);
  printf("\n");
  exibirMatriz(matriz);

  return 0;
}