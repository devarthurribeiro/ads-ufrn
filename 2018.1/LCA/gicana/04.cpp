#include <stdio.h>

int main() {
  int vetor[15], aux, count = 0, maior = 0;
  for(int i = 0;i < 15;i++){
    scanf("%d", &vetor[i]); 
  }
  aux = vetor[0];  
  for(int i = 1;i < 15;i++){
    if(aux == vetor[i]) {
      count++;
    }else{
      count = 0;
    }
    aux = vetor[i];
    if(count >= maior) {
      maior = count+1;
    }
  }
  printf("T = %d\n", maior);
  return 0;
}