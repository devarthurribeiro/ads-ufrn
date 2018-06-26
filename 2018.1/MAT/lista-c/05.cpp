#include <stdio.h>
#define TAM 5

void preencherMatriz(int matriz[][TAM], int n) {
  int lm = -1, cm = -1;
  printf("INFORME UMA MATRIZ: %d\n", TAM);
  for(int l = 0 ; l < TAM ; l++)
    for(int c = 0 ; c < TAM ; c++){
      scanf("%d", &matriz[l][c]);
      if(matriz[l][c] == n) {
        n = matriz[l][c];
        lm = l;
        cm = c;
      }
    }
  
  if (lm >= 0){
      printf("\n Encontrado na posição %d x %d\n", lm, cm);
  }else {
    printf("\n Não encontrado!\n");
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
  int matriz[TAM][TAM];
  int n;
  printf("Informe o numero a ser buscado\n");
  scanf("%d", &n);
  preencherMatriz(matriz, n);
  printf("\n");
  exibirMatriz(matriz);

  return 0;
}