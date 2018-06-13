#include <stdio.h>

void getInt(const char *msg, int *p) {
  printf("%s\n", msg);
  scanf("%d", p);
}

void getFloat(const char *msg, float *p) {
  printf("%s\n", msg);
  scanf("%f", p);
}

void getString(const char *msg, char *s) {
  printf("%s\n", msg);
  setbuf(stdin, NULL);
  scanf("%[^\n]s", s);
}