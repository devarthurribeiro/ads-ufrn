#include <stdio.h>

void menu() {
  printf("---------------------Empresa Funcionário Feliz----------------\n"
         "DIGITE A OPÇÃO DESEJADA:\n"
         "1 - Cálculo de imposto\n"
         "2 - Cálculo de aumento salarial\n"
         "3 - Verifica situação do funcionário\n"
         "4 - Sair\n"
         "--------------------------------------------------------------\n");
}

float calcularImposto(float salario) {
  if(salario < 500) {
    salario += salario * 0.05;
  }else if(salario <= 850){
    salario += salario * 0.10;
  }else{
    salario += salario * 0.15;
  }
  return salario;
}

float calcularAumento(float salario) {
  if(salario < 450) {
    salario += 100;
  }else if(salario < 750){
    salario += 75;
  }else if(salario <= 1500){
    salario += 50;
  }else{
    salario += 20;
  }
  return salario;
}

int main() {
  int op;
  float salario;

  do{
    menu();
    scanf("%d", &op);
    if(op == 4) break;
    scanf("%f", &salario);
    switch(op) {
      case 1:
        printf("Imposto %.2f\n", calcularImposto(salario));
      break;
      case 2:
        printf("Aumento %.2f\n", calcularAumento(salario));
      break;
      case 3:
        salario <= 700 ? printf("Mal remunerado\n") : printf("Bem remunerado\n");;        
      break;
      default:
        printf("Opçãos inválida!\n");
      break;
      
    }
  }while(op != 4);

  return 0;
}