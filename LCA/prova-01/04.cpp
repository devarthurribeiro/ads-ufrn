#include <stdio.h>

int main() {
  int n, cont = 1, p=0;
  scanf("%d", &n);

  while(cont <= n) {
    if(n % cont == 0)
      p++;
    cont++;    
  }

  p == 2 ? printf("É primo\n") : printf("Não primo\n");

  return 0;
}