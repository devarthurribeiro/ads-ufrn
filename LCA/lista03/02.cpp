#include <stdio.h>

void cardapio() {
  printf("-------------------CARDÁPIO------------------ \n"
         "Código Produto Preço \n"
         "1 Refrigerante 1,50 \n"
         "2 Cachorro quente 1,00 \n"
         "3 Bauru 1,30\n"
         "4 Hamburguer 1,40\n"
         "5 Cheeseburguer 1,20\n"
         "----------------------------------------------\n"
         "\tPara encerrar digite 0\n"
         "----------------------------------------------\n");
}

int main() {
  int op, qtd;
  float total = 0, produtos[] = {0, 1.50, 1, 1.20, 1.40, 1.20};
  do {
    cardapio();
    printf("Digite o Código do Produto: \n");      
    scanf("%d", &op);
    if(op == 0) break;
    printf("A quatidade: \n");   
    scanf("%d", &qtd);
    total += produtos[op] * qtd;
  }while(op != 0 );
  printf("TOTAL: R$ %.2f \n", total);
  return 0;
}
