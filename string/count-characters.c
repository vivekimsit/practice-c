#include <stdio.h>

int count(char *s) {
  int i = 0;
  while (s[i++] != '\0');
  return --i;
}

int main() {
  char s[] = "Hello World";
  char t[] = "";
  printf("%d\n", count(s));
  printf("%d\n", count(t));
}
