#include <stdio.h>

int main() {
  int l, c, count = 0;
  scanf("%d %d", &l, &c);
  int matriz[l][c];
  printf("\n");
  for( int i = 0; i < l; i++ ) {
    for( int j = 0; j < c; j++ ) {
      scanf("%d", &matriz[i][j]);
    }
  }
  printf("\n");
  for( int i = 0; i < l; i++ ) {
    for( int j = 0; j < c; j++ ) {
      printf("%d ", matriz[i][j]);
      if (matriz[i][j] != 0) count++;
    }
    printf("\n");
  }
  printf("\n");
  printf("%d\n", count);
  return 0;
}