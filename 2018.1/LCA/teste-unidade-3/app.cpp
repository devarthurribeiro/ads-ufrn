#include <stdio.h>
#include "teste3.h"

#define XP_MAX 3
#define PROVA_MAX 8
#define TESTE_MAX 2

int main() {
  int qtdAtv = 0;
  float notaTeste = 0, notaProva = 0;

  printf("Informe a quantidade de atividades valendo XP: \n");
  scanf("%d", &qtdAtv);
  float XPatividades[qtdAtv];

  recebeNotasAtv(XPatividades, qtdAtv);
  printf("Informe a nota do teste no intervalo 0 a %d\n", TESTE_MAX);
  scanf("%f", &notaTeste);

  printf("Informe a nota da prova 0 a %d\n", PROVA_MAX);
  scanf("%f", &notaProva);

  float XPfinal = calculaXP(XPatividades, qtdAtv, XP_MAX);
  float notaProvaXp = calculaNotaProvaXp(XPfinal, notaProva, PROVA_MAX);

  printf("Nota Final: %.2f\n", notaProvaXp+notaTeste);
  return 0;
}