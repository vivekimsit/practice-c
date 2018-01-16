#include <stdio.h>

void strcat1(char source[], char target[]) {
  int i = 0, j = 0;
  while ((source[i++]) != '\0'); //  find end of the source string
  --i;
  while ((source[i++] = target[j++]) != '\0');
}

int main() {
  char source[] = "Hello";
  char target[] = " World!";
  strcat1(source, target);
  printf("%s\n", source);
}
