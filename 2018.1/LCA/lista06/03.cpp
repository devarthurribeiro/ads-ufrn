#include <stdio.h>
#define LIN 2
#define COL 5 
// incompleta
void preencherMatriz(int matriz[LIN][COL]) {
  for(int l = 0 ; l < LIN ; l++)
    for(int c = 0 ; c < COL ; c++)
      scanf("%d", &matriz[l][c]);
}

void exibirMatriz(int matriz[LIN][COL]){
  for(int l = 0 ; l < LIN ; l++) {
    for(int c = 0 ; c < COL ; c++)
      printf("%d ", matriz[l][c]);
      printf("\n");
    }
}

int main() {
  int matriz[LIN][COL];
  preencherMatriz(matriz);
  
  return 0;
}