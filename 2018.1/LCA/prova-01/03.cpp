#include <stdio.h>

int main() {
  double hn = 1;
  int n, cont = 1;
  scanf("%d", &n);

  while(cont <= n) {
    hn += (1/cont);
    cont++;    
  }
  printf("%f\n",hn);

  return 0;
}