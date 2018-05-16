#include <stdio.h>

int main() {
  int vetor[9];
  bool temMaior = false;
  for(int i = 0; i < 10; i++ ) {
    scanf("%d", &vetor[i]);
  }
  for(int i = 0; i < 10; i++ ) {
    if(vetor[i] > 50) {
      printf("%d Maior que 50 posição %d\n", vetor[i], i);
      temMaior = true;
    }
  }
  if(!temMaior) {
    printf("Nenhum maior que 50!\n");
  }
  return 0;
}