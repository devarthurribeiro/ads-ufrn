#include <stdio.h>
#define TAM 4

int preencherMatriz(int matriz[][TAM]) {
  int cont = 0;
  printf("INFORME UMA MATRIZ: %d\n", TAM);
  for(int l = 0 ; l < TAM ; l++)
    for(int c = 0 ; c < TAM ; c++){
      scanf("%d", &matriz[l][c]);
      if(matriz[l][c] > 10) cont++;
    }
  return cont;
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

  int qtdMairos10 = preencherMatriz(matriz);
  printf("%d Maiores que 10\n", qtdMairos10);
  printf("\n");
  exibirMatriz(matriz);

  return 0;
}