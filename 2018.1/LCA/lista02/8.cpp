#include <stdio.h>

int main() {
  float salario, acrecimo = 0;  
  scanf("%f", &salario);

  if(salario <= 500) {
    acrecimo += salario * 0.05;
  }else if(salario > 500 && salario <= 1200){
    acrecimo += salario * 0.12;
  }

  if(salario <= 600) {
    acrecimo += 150;      
  }else if(salario > 600) {
    acrecimo += 100;
  }

  printf("%.2f\n", acrecimo+salario);

  return 0;
}