#include <stdio.h>
#include "input.h"
#define TAM 5

struct aluno {
  int matricula;
  float n1, n2, n3;
  char nome[50];
};

float sumNota(struct aluno a) {
  return a.n1 + a.n2 + a.n3;
}

int main() {
  struct aluno alunos[TAM];
  int indexMaior = 0;

  for(int i = 0;i < TAM;i++) {
    printf(":============ ALUNO %d ===========:\n", i);
    getInt("Digite a matricula:", &alunos[i].matricula);
    
    getString("Digite o nome do aluno:",  alunos[i].nome);
    
    getFloat("Digite a nota 1:", &alunos[i].n1);

    getFloat("Digite a nota 2:", &alunos[i].n2);

    getFloat("Digite a nota 3:", &alunos[i].n3);
  }

  for(int i = 1;i < TAM;i++)
    if(sumNota(alunos[indexMaior]) < sumNota(alunos[i])) indexMaior = i;
  
  
  printf("Maior média geral %s, n1 %.2f, n2 %.2f, n3 %.2f \n",  
  alunos[indexMaior].nome,
  alunos[indexMaior].n1,
  alunos[indexMaior].n2,
  alunos[indexMaior].n3
  );

  return 0;
}