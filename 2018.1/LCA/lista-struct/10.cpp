#include <stdio.h>
#include "input.h"
#define TAM 4

struct atleta {
  char nome[50];
  char esporte[20];
  int idade;
  float altura;
};

int main() {
  struct atleta atletas[TAM], aux;

  for(int i = 0;i < TAM;i++) {
    printf(":============ ATLETA %d ===========:\n", i);
    getString("Digite o nome:", atletas[i].nome);
    getString("Digite o esporte:", atletas[i].esporte);
    getInt("Digite a idade:", &atletas[i].idade);
    getFloat("Digite a altura:", &atletas[i].altura);

    if (atletas[i].idade > atletas[i-1].idade) {
      aux = atletas[i-1];
      atletas[i-1] = atletas[i];
      atletas[i] = aux;
    }

  }

  for(int i = 0;i < TAM;i++)
    printf("Atleta: %s, idade: %d \n", atletas[i].nome,  atletas[i].idade);

  return 0;
}