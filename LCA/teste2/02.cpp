#include <stdio.h>

int main() {
  int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, 
  B[] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20},
  C[20];


  int countA = 0, countB = 0;

  for(int i = 0; i < 20; i++) {
    if(countA < countB || countA == countB){
      C[i] = A[countA];
      countA++;
    }else{
      C[i] = B[countB];
      countB++;      
    }
  }


  for(int i = 0; i < 20; i++) {
    printf("%d\n", C[i]);
  }
  return 0;
}