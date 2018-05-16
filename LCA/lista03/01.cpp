#include <stdio.h>

int main() {
  int mes;
  scanf("%d", &mes);
  if(mes == 1) {
    printf("Férias\n");
  }else if(mes < 7) {
    printf("1 Semestre letivo\n");
  }else if(mes == 7) {
    printf("Recesso\n");
  }else if(mes < 12) {
    printf("2 Semestre letivo\n");
  }else {
    printf("Férias\n");
  }
  return 0;
}