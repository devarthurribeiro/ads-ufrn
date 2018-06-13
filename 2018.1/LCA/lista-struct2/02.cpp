#include <stdio.h>

void imprimirTriangulo(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = i; j > 0; j--)
      printf("*");
    printf("\n");
  }
  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++)
      printf("*");
    printf("\n");
  }
}

int main(){
    int valor;

    printf("Informe o número:");
    scanf("%i", &valor);

    imprimirTriangulo(valor);

    return 0;
}