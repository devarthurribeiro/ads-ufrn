#include <stdio.h>
#include "input.h"

struct aluno{
    int matricula;
    char nome[100];
    float n1, n2, n3, media = 0;
};

float maiorNota(struct aluno alunos[], int tam){
  int idM = 0;
  for ( int i = 1; i < tam; i++){
    if (alunos[i].media > alunos[idM].media){
      idM = i;
    }
  }
  return idM;
}

int main (){
  int tam = 0; 

  getInt("Quantidade de alunos: ", &tam);
  struct aluno alunos[tam];

  for (int i = 0; i < tam; i++){
    getInt("Numero da matricula: ", &alunos[i].matricula);
    getString("Nome do aluno: ", alunos[i].nome);

    getFloat("Nota 1: ", &alunos[i].n1); 
    getFloat("Nota 2: ", &alunos[i].n2); 
    getFloat("Nota 3: ", &alunos[i].n3); 
    
    alunos[i].media = (alunos[i].n1+alunos[i].n3+alunos[i].n3) / 3;
  }

  int index = maiorNota(alunos, tam);
  printf("Aluno com maior média: %s\n",alunos[index].nome);

  printf("Notas: %.2f %.2f %.2f \n",
    alunos[index].n1, 
    alunos[index].n2, 
    alunos[index].n3
  );

  return 0;
}