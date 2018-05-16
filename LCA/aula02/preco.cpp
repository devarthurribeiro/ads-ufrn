#include <stdio.h>

int main() {
  float p, m, np = 0;
  scanf("%f %f", &p, &m);

  if(m < 500 && p < 30) {
    np = p * 0.10;
  } else if(m >= 500 && m < 1200 ) {
    np = p * 0.15;
  } else {
    np = p * 0.10;
  }

  return 0;
}