#include <stdio.h>

int main() {
  float n1, n2, result;
  char op;
  scanf("%f %c %f", &n1, &op, &n2);
  switch(op) {
    case '*':
      result = n1*n2;
    break;
    case '/':
       result = n1/n2;
    break;
    case '+':
       result = n1+n2;
    break;
    case '-':
       result = n1-n2;
    break;
  }
  printf("%.2f\n", result);
  return 0;
}
