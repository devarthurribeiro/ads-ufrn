#include <stdio.h>
#include <math.h>

int main() {
  float altura, peso, imc;
  scanf("%f %f", &peso, &altura);
  imc = peso / (pow(altura, 2));

  if(imc < 18.5) {
    printf("Abaixo do peso\n");
  }else if (imc >= 18.5 && imc <= 25) {
    printf("Peso normal\n");
  }
  else if (imc > 25 && imc <= 30) {
    printf("Acima do peso\n");
  }else if(imc > 30) {
    printf("Obeso\n");
  }

  return 0;
}