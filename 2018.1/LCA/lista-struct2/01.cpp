#include <stdio.h>

int fat(int n) {
 return (n <= 1) ? 1 : fat(n-1)*n;           
}

int main (){
  int n;
  printf("Digite o número para calcular: !n\n");
  scanf("%d", &n);
  printf("!%d = %d\n", n, fat(n));
  return 0;
}