#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "input.h"

struct Livro {
  char titulo[40];
  char autor[40];
  float preco;
  int qtd;
};

void editar(struct Livro l[], int id) {
  getString("TITULO: ", l[id].titulo);
  getString("AUTOR: ", l[id].autor);
  getFloat("PREÇO: ", &l[id].preco);
  getInt("QUANTIDADE: ", &l[id].qtd);
}

void cadastrar(struct Livro l[], int *cont) {
  editar(l, *cont);
  (*cont)++;
}

void listar(struct Livro l[], int cont) {
  printf("TITULO \t AUTOR \t PREÇO \t QTD \t \n");
  for(int i = 0;i < cont; i++){
  printf("%s %s %.2f %d\n", l[i].titulo, l[i].autor, l[i].preco, l[i].qtd);   
  }
}

int buscar(struct Livro l[], int cont, char titulo[]) {
  for(int i = 0;i < cont; i++){
    if(strcmp(l[i].titulo, titulo) == 0) {
     return i;
    }
  }
  return -1;
}

void modificar(struct Livro l[], int cont, char titulo[]) {
  int index = buscar(l, cont, titulo);
  if(index != -1) {
    printf("Titulo encontrado!\n");
    editar(l, index);
    getchar();
  }
}

void venda(struct Livro l[], int cont, char titulo[]) {
  int index = -1, qtd;
  index = buscar(l, cont, titulo);
  if(index != -1) {
    getInt("Informe a quantidade", &qtd);

    if(l[index].qtd >= qtd) {
     l[index].qtd = l[index].qtd - qtd;
     printf("Total a pagar: %.2f\n", qtd * l[index].preco);
    }else{
      printf("Estoque é insuficiente\n");
    }
  }
}