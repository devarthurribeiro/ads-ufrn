#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#define clear() printf("\033[H\033[J")


int getRand() {
  return rand() % 100;
}

void printStatus(int p1, int p2) {
  clear();
  sleep(1);

  printf("🚀🚀 FAST FURIOS ANIMAL EAJ-UFRN 🚀🚀\n");
  printf("--------------------------------------------------------------------------------------------------------------------------\n");
  
  for(int i = 0; i < 70/2; i++)
    p1/2 < i ? printf(" 🔵 ") : printf(" 🐰 ");
  
  
  printf("🏁");
  printf("\n");
  
  for(int i = 0; i < 70/2; i++)
     p2/2 < i ? printf(" 🔵 ") : printf(" 🐢 ");
  

  printf("\a🏁");
  printf("\n--------------------------------------------------------------------------------------------------------------------------\n");

}

int calcularProb() {
  int sortR = getRand();
  if(sortR <= 50) {
    return 50;
  } else if(sortR < 60 && sortR){
    return 10;
  }else {
    return 40;
  }
}

void moverLebre(int *p) {
  int prob = calcularProb();
  
  if(prob == 50) {
    *p += 3;
  } else if(prob == 10) {
    *p += -6;
  }else {
    *p += 1;
  }*p += 0;

  if(*p < 1)
    *p = 1;
}


void moverTartaruga(int *p) {
  int prob = calcularProb();
  
  if(prob == 50) {
    *p += 5;
  } else if(prob == 10) {
    *p += 0;
  }

  if(*p < 1)
    *p = 1;
}

int main(){
    int lebrePosi = 1, tartarugaPosi = 1;

    srand( time(NULL) );
    while(true){
      moverLebre(&lebrePosi);
      moverTartaruga(&tartarugaPosi);
      printStatus(lebrePosi, tartarugaPosi);
      if(lebrePosi >= 70 || tartarugaPosi >= 70)
        break;
    }
    if(lebrePosi == 70 && tartarugaPosi == 70){
      printf("UM EMPATE EMOCIONANTE!!\n");
    }else{
      lebrePosi >= 70 
        ? printf("LEBRE VENCE FACILMENTE!! 🐰 \n") 
        : printf("TARTARUGA VENCE!! INCRÍVEL!! 🐢\n");
    }
    
    return 0;
}