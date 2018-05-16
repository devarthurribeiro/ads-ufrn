#include <stdio.h>

int main() {
  int y, idade;
  scanf("%d", &y);
  idade = 2018 - y;
  printf("%d\n", idade);
  if(idade <= 18) {
    printf("Jovem\n");
  }else if(idade  >= 19 && idade <= 59){
      printf("Adulto\n");
  }else {
      printf("Idosa\n");
  }
  return 0;
}