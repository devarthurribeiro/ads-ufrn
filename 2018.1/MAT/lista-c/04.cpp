#include <stdio.h>
#define TAM 4

void preencherMatriz(int matriz[][TAM]) {
  int maior = 0, lm, cm;
  printf("INFORME UMA MATRIZ: %d\n", TAM);
  for(int l = 0 ; l < TAM ; l++)
    for(int c = 0 ; c < TAM ; c++){
      scanf("%d", &matriz[l][c]);
      if(matriz[l][c] > maior) {
        maior = matriz[l][c];
        lm = l;
        cm = c;
      }
    }
  printf("Maior na posição %d x %d\n", lm, cm);
  
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

  preencherMatriz(matriz);
  printf("\n");
  exibirMatriz(matriz);

  return 0;
}