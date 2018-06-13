#include <stdio.h>

int main() {
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  if(a < b - c && a < a < b + c) {
    printf("Não é um triângulo\n");
  }else if (a == b && b == c && c == a) {
		printf("triângulo Equilatero\n");
	}
	else if (a == b || b == c || c == a) {
		printf("triângulo Isósceles\n");
	}
	else if (a != b && b != c && c != a){
		printf("triângulo Escaleno\n");
	}
	
  return 0;
}

