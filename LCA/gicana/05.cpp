#include <stdio.h>
#include <string.h>

int main() {
  char item[50];
  int count = 0, tam;
  scanf("%d", &tam);
  char lista[tam][50];

  while(tam > count){
        scanf("%s", item);
  
    for(int i = 0;i < tam; i++){
      if(!strcasecmp(lista[i], item)){
        printf("Item já existe\n");
        break;
      }else{
        strcpy(lista[count], item);
        count++;
        break;
      }
    }
  }
  printf("\n");
  printf("lista:\n");
  for(int i = 0;i < tam; i++){
    printf("%s\n", lista[i]);    
  }
  return 0; 
}