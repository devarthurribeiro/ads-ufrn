#include <stdio.h>
#include <stdlib.h>

int main() {
  const char nomes[][7] = {"JOSÉ", "MARIA", "JOÃO", "BRANCO", "NULO"};
  int votos[] = {0, 0, 0, 0, 0};
  int op, vencedor = 0, maior = 0;

  do {
    scanf("%d", &op);
    if(op != 0)
      votos[op-1] += 1;
  }while(op != 0 );

  for(int i = 0; i < 5; i++){
    printf("%s %d\n", nomes[i], votos[i]);
  }

  printf("========================\n RESULTADO: \n ");

  if(votos[0] > votos[1] && votos[0] > votos[2]) {
    printf("%s: %d\n", nomes[0], votos[0]);
  }else if(votos[1] > votos[2] && votos[1] > votos[0]) {
    printf("%s: %d\n", nomes[1], votos[1]);
  }
  else if(votos[2] > votos[1] && votos[2] > votos[0]) {
    printf("%s: %d\n", nomes[2], votos[2]);
  }
  else
    printf("Segundo Turno\n");
    
  return 0;
}