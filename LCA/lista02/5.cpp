#include <stdio.h>

int main() {
  float altura, pesoIdeal;
  char sexo;
  scanf("%c %f", &sexo, &altura);
  switch(sexo) {
    case'm': 
      pesoIdeal = (72.7 * altura) - 58; 
    break;
    case 'f':
      pesoIdeal = (62.1 * altura) - 44.7; 
    break;
  }
  printf("%.2f kg\n", pesoIdeal);
  return 0;
}