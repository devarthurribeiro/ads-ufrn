#include <stdio.h>
#include <math.h>

int main() {
  float imc, peso, altura;
  printf("Digite seu peso e sua altura!\n");
  scanf("%f %f", &peso, &altura);
  imc = peso / pow(altura, 2);
  if(imc < 25) {
    printf("Vc não esta acima do peso, Seu imc é: %.2f\n", imc);    
  } else {
    printf("Vc esta acima do peso, seu imc é: %.2f\n", imc);    
  }
  return 0;
}