#include <stdio.h>

int compare(char *s, char *t) {
  for (; *s == *t; s++, t++)
    if (*s == '\0')
      return 0;
  return *s - *t;
}

int main() {
  char s[] = "ABCD";
  char t[] = "ABC";
  printf("%d", compare(s, t));
}
