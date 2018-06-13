#include <stdio.h>

int main() {
  int l, c, count = 0;
  scanf("%d %d", &l, &c);
  int matriz[l][c];
  matriz[l][c] = {0};
  printf("\n");
  for( int i = 0; i < l; i++ ) {
    for( int j = 0; j < c; j++ ) {
      if(i == 0 || j == 0 || i == l-1 || j == c-1){
        printf("%c", '*');
      }else{
        printf(" ");
      }
    }
    printf("\n");
  }
  printf("\n");
  return 0;
}