#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  if( n > 100 && n < 200) {
    printf("Dentro do intevalo!\n");
  }else {
    printf("Fora do intervalo!\n");
  }
  
  return 0;
}