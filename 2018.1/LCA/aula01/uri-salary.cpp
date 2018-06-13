#include <stdio.h>

int main()
{ 
  int horas, funcionarios;
  float valor;
  scanf("%d %d %f", &funcionarios, &horas, &valor);
  printf("NUMBER %d\n", funcionarios);
  printf("SALARY $= %.2f\n", funcionarios*horas*valor/funcionarios);
  return 0;
}
