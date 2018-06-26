#include <stdio.h>

void recebeNotasAtv(float XPatividades[], int qtdAtividades) {
  for(int i = 0;i < qtdAtividades; i++) {
    printf("Informe o XP da atividade %i no intervalo de 0 a 1:\n", i+1);
    scanf("%f", &XPatividades[i]);
  }
}

float calculaXP(float XPatividades[], int qtdAtividades, float XP_MAX) {
  float xpGeral = 0;
  for(int i = 0;i < qtdAtividades; i++) {
    xpGeral += XPatividades[i];
  }
  return (xpGeral * XP_MAX) / qtdAtividades;
}

float calculaNotaProvaXp(float XP, float notaProva, float PROVA_MAX) {
  return (notaProva * ((PROVA_MAX - XP )/PROVA_MAX) + XP);
}