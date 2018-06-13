#include <stdio.h>
#include <string.h>

struct crianca {
  char nome[60];
  int dia;
  int mes;
  int ano;
  char pai[60];
  char mae[60];
  char sexo;
  char rua[60];
  int numero;
  char bairro[60];
  char cidade[60];
  int ddd;
  int fone;
};

void getInt(char msg[20], int *p) {
  printf("%s\n", msg);
  scanf("%d", p);
}

void getString(char msg[20], char *s) {
  printf("%s\n", msg);
  scanf("%[^\n]s", s);
}


int main() {
  crianca c;

  getString("Nome:", c.nome);

  // getInt("Dia nascimento:", &c.dia);
  // getInt("Mes nascimento:", &c.mes);
  // getInt("Ano nascimento:", &c.ano);

  // getString("Nome pai:", c.pai);
  // getString("Nome mae:", c.mae);
  // getString("Sexo:", &c.sexo);
  // getString("Rua:", c.rua);
  // getInt("Numero:", &c.numero);
  // getString("Bairro:", c.bairro);
  // getString("Cidade:", c.cidade);

  // getInt("DDD:", &c.ddd);
  // getInt("Fone:", &c.fone);

  printf("\n");
  printf("%s\n", c.nome);
  return 0;
}