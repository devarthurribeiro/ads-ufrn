#include <stdio.h>
#include <string.h>

int main() {
  int tam;
  char aux[20];

  scanf("%d", &tam);
  char palavras[tam][20];

  for(int i = 0; i < tam; i++)
    scanf("%s", palavras[i]);
  
  for(int i = 0; i < tam; i++) {
    for(int x = 0; x < tam-1; x++) {
      if(strcasecmp(palavras[x], palavras[x+1]) > 0) {
        strcpy(aux, palavras[x]);
        strcpy(palavras[x], palavras[x+1]);
        strcpy(palavras[x+1], aux);
      }
    }
  }

  printf("\n");
  for(int i = 0; i < tam; i++)
    printf("%s\n", palavras[i]);
    
  return 0;
}