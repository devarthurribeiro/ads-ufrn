#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int vetor[9], aux, count = 0;
  srand(time(NULL));
  for(int i = 1; i < 10; i++ ) {
    vetor[i] = rand() % 11;
  }
  for(int i = 1; i < 10; i++ ) {
    for(int j = 1; j < 10; j++ ) {
      if(vetor[j] == vetor[i])
        count++;
    }
    printf("valor: %d , repeticoes: %d\n", vetor[i], count);
    count = 0;
  }
  return 0;
}
