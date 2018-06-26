#include <stdio.h>
#define TAM 3

int preencherMatriz(int matriz[][TAM]) {
  int soma = 0;
  printf("INFORME UMA MATRIZ: %d\n", TAM);
  for(int l = 0 ; l < TAM ; l++)
    for(int c = 0 ; c < TAM ; c++){
      scanf("%d", &matriz[l][c]);
      if(l == c) soma += matriz[l][c];
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
  int matriz[TAM][TAM];

  int soma = preencherMatriz(matriz);
  printf("Soma dos numeros na diagonal principal %d :\n", soma);
  printf("\n");
  exibirMatriz(matriz);

  return 0;
}