#include <stdio.h>
#include "input.h"
#define TAM 6

struct data {
  int d, m, a;
};

struct pessoa {
  char nome[50];
  struct data nascimento;
};

int main() {
  struct pessoa pessoas[TAM];
  int idM = 0;

  for(int i = 0;i < TAM;i++) {
    printf(":============ PESSOA %d ===========:\n", i);
    getString("Digite o nome:", pessoas[i].nome);
    printf("Digite a data nascimento DD/MM/AAAA \n");
    scanf("%d/%d/%d", 
    &pessoas[i].nascimento.d, 
    &pessoas[i].nascimento.m, 
    &pessoas[i].nascimento.a);
  }

  for(int i = 1;i < TAM;i++){
    if(pessoas[idM].nascimento.d > pessoas[i].nascimento.d) {
      idM = i;
    }else if(pessoas[idM].nascimento.m > pessoas[i].nascimento.m) {
      idM = i;
    }else if(pessoas[idM].nascimento.a > pessoas[i].nascimento.a) {
      idM = i;
    }
  }

 printf("Mais velho: %s \n", pessoas[idM].nome);

  return 0;
}