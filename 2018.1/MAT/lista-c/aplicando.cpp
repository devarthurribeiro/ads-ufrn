#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 4

void preencherMatriz(int matriz[][TAM]) {
  for(int l = 0 ; l < TAM ; l++)
    for(int c = 0 ; c < TAM ; c++){
      matriz[l][c] = rand() % 100;
    }
}

void exibirMatriz(int matriz[][TAM]) {
  for(int l = 0 ; l < TAM ; l++) {
    for(int c = 0 ; c < TAM ; c++)
      printf("%3d ", matriz[l][c]);
      printf("\n");
    }
}

void somarMatrizes(int matriz1[][TAM], int matriz2[][TAM], int resultado[][TAM]) {
  for(int l = 0 ; l < TAM ; l++) {
    for(int c = 0 ; c < TAM ; c++)
      resultado[l][c] = matriz1[l][c] + matriz2[l][c];
    }
}

void subtairMatrizes(int matriz1[][TAM], int matriz2[][TAM], int resultado[][TAM]) {
  for(int l = 0 ; l < TAM ; l++) {
    for(int c = 0 ; c < TAM ; c++)
      resultado[l][c] = matriz1[l][c] - matriz2[l][c];
    }
}

void multiplicacaoEscalar(int matriz1[][TAM],  int multi) {
  for(int l = 0 ; l < TAM ; l++) {
    for(int c = 0 ; c < TAM ; c++)
      matriz1[l][c] = (matriz1[l][c] * multi);
    }
}

void multiplicaMatrizes(int matriz1[][TAM], int matriz2[][TAM], int resultado[][TAM]) {
  for(int l = 0 ; l < TAM ; l++) {
    for(int c = 0 ; c < TAM ; c++)
      resultado[l][c] = matriz1[l][c] * matriz2[l][c];
    }
}

void transposta(int matriz[][TAM]) {
  int aux;
  for(int i = 0 ; i < TAM ; i++)
    for(int j = i+1; j < TAM ; j++) {
    if (j != i) {
      aux = matriz[i][j];
      matriz[i][j] = matriz[j][i];
      matriz[j][i] = aux;
    }

    }
}

int main() {
  srand( time(NULL) );
  int matriz1[TAM][TAM];
  int matriz2[TAM][TAM];
  int resultado[TAM][TAM];

  preencherMatriz(matriz1);
  preencherMatriz(matriz2);



  printf("\n");
  exibirMatriz(matriz1);
  printf("\n");
  exibirMatriz(matriz2);
  printf("\n");
  printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
  printf("SOMA DE MATRIZ A + B\n");
  somarMatrizes(matriz1, matriz2, resultado);
  printf("\n");
  exibirMatriz(resultado);

  printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
  printf("SUBTRAÇÃO DE MATRIZ A - B\n");
  subtairMatrizes(matriz1, matriz2, resultado);
  printf("\n");
  exibirMatriz(resultado);

  printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
  printf("MULTIPLICAÇÃO ESCALAR A * B\n");
  printf("Informe um número para multiplicação escalar:\n");
  int multi = 0;
  scanf("%d", &multi);
  printf("\n");
  preencherMatriz(resultado);
  exibirMatriz(resultado);
  multiplicacaoEscalar(resultado, multi);
  printf("\n");
  exibirMatriz(resultado);

  printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
  printf("MULTIPLICAÇÃO DE MATRIZ A * B\n");
  multiplicaMatrizes(matriz1, matriz2, resultado);
  printf("\n");
  exibirMatriz(resultado);

  printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
  printf("MULTIPLICAÇÃO DE MATRIZ A * B\n");
  multiplicaMatrizes(matriz1, matriz2, resultado);
  printf("\n");
  exibirMatriz(resultado);

  printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
  printf("TRANSPOSTA DA MATRIZ\n");
  printf("\n");
  preencherMatriz(resultado);
  exibirMatriz(resultado);
  transposta(resultado);
  printf("\n");
  exibirMatriz(resultado);

  return 0;
} 