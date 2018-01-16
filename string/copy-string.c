#include <stdio.h>

void strcpy1(char *source, char *target) {
  int i = 0;
  while ((target[i] = source[i]) != '\0') {
    i++;
  }
  printf("%s\n", target);
}

void strcpy2(char *source, char *target) {
  // we shouldn't move target point because
  // we may need it later so, using a temp
  // variable
  char *temp = target;
  while ((*temp = *source) != '\0') {
    temp++;
    source++;
  }
  printf("%s\n", target);
}

void strcpy3(char *source, char *target) {
  char *temp = target;
  while ((*temp++ = *source++) != '\0');
  printf("%s\n", target);
}

int main() {
  char source[] = "Hello";
  char target[6];
  strcpy1(source, target);
  strcpy2(source, target);
  strcpy3(source, target);
}
