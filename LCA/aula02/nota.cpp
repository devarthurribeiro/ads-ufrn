#include <stdio.h>

int main() {
  float n1, n2, n3, media;

  printf("Digite as 4 notas!\n");
  scanf("%f %f %f", &n1, &n2, &n3);
  
  media = (n1 + n2 +n3) / 3;
  printf("Nota: %.2f\n", media);
  
  if(media < 3) {
    printf("Reprovado!\n");
  } else if(media > 3 && media < 5) {
      printf("4 prova!\n");
  } else {
    printf("Aprovado por nota!\n");
  }

  return 0;
}