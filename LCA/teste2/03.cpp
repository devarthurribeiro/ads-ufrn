#include <stdio.h>
#define TAM 3
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

int main() {
  int matriz[TAM][TAM], menor = 0;

  preencherMatriz(matriz);



  for(int linha = 0 ; linha < TAM ; linha++) {

    int menor = matriz[linha][0], posicao = 0;
    for(int i = 1 ; i < TAM ; i++) {
      if(matriz[linha][i] < menor) {
        posicao = i;
        menor = matriz[linha][i];
      }
    }
    printf("Aluno %d tirou a nota mais baixa na prova %d \n", linha, index+1);
    index = 0;

  }





  
  printf("\n");
  exibirMatriz(matriz);

  return 0;
}