#include <stdio.h>
#define TAM 5

struct hora {
  int h, m, s;
};

int main() {
  struct hora horas[TAM];
  int idM = 0;

  for(int i = 0;i < TAM;i++) {
    printf(":============ HORA %d ===========:\n", i);
    printf("Digite a hora h:mm:ss \n");
    scanf("%d:%d:%d", &horas[i].h, &horas[i].m, &horas[i].s);
  }

  for(int i = 1;i < TAM;i++){
    if(horas[idM].h < horas[i].h) {
      idM = i;
    }else if(horas[idM].m < horas[i].m) {
      idM = i;
    }else if(horas[idM].s < horas[i].s) {
      idM = i;
    }
  }
  
  printf("Maior hora: %d:%d:%d \n", horas[idM].h, horas[idM].m, horas[idM].s);
  return 0;
}