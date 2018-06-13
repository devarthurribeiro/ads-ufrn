#include <stdio.h>

int main() {
  float n1, n2, n3, m;
  scanf("%f %f %f", &n1, &n2, &n3);
  m = (n1 + n2 + n3) / 3;
  if(m >= 7 && n1 >= 3 && n2 >= 3 && n3 >= 3) {
    printf("Aprovado!\n");
  }else if(m >= 3 && m <= 7) {
    printf("4a Prova!\n");
  }else {
    printf("Reprovado\n");
  }
  return 0;
}