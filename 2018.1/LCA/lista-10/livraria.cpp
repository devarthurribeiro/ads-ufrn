#include <stdio.h>
#include "livraria.h"
#define clear() printf("\033[H\033[J")

void showMenu() {
  //clear();
  printf("---------------LIVRARIA---------------\n");
  printf("1 - CADASTRAR NOVO LIVRO.\n");
  printf("2 - LISTAR LIRVROS\n");
  printf("3 - MODIFICAR INFORMAÇÕES DE LIVRO\n");
  printf("4 - REALIZAR VENDA DE LIVRO\n");
  printf("5 - SAIR\n");
  printf("--------------------------------------\n");
}

int main() {
  int op = 0, cont = 0, index;
  struct Livro livros[100];
  char filtro[30];

  do{
  showMenu();
    scanf("%d", &op);

    switch(op){
      case 1:
        cadastrar(livros, &cont);
      break;
      case 2:
        listar(livros, cont);
      break;
      case 3:
        getString("Digite o titulo para busca", filtro);
        modificar(livros, cont, filtro);
      break;
      case 4:
        getString("Digite o titulo para modificar", filtro);
        venda(livros, cont, filtro);
      break;
      case 5:
        op = 5;
      break;
    }
  } while(op != 5);

  return 0;
}