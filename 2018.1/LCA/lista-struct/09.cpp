#include <stdio.h>
#include "input.h"
#define TAM 5

struct atleta {
  char nome[50];
  char esporte[20];
  int idade;
  float altura;
};

int main() {
  struct atleta atletas[TAM];
  int idMV = 0;
  int idMA = 0;

  for(int i = 0;i < TAM;i++) {
    printf(":============ ATLETA %d ===========:\n", i);
    getString("Digite o nome:", atletas[i].nome);
    getString("Digite o esporte:", atletas[i].esporte);
    getInt("Digite a idade:", &atletas[i].idade);
    getFloat("Digite a altura:", &atletas[i].altura);

  }

  for(int i = 1;i < TAM;i++){
    if(atletas[idMV].idade < atletas[i].idade)
      idMV = i;
    else if(atletas[idMV].idade < atletas[i].idade)
      idMV = i;
    else if(atletas[idMV].idade < atletas[i].idade)
      idMV = i;

    if(atletas[idMA].altura < atletas[i].altura)
      idMA = i;
    else if(atletas[idMA].altura < atletas[i].altura)
      idMA = i;
    else if(atletas[idMA].altura < atletas[i].altura)
      idMA = i;
    
  }

  printf("Mais velho: %s \n", atletas[idMV].nome);
  printf("Mais alto: %s \n", atletas[idMA].nome);
  return 0;
}