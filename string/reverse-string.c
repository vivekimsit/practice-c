#include <stdio.h>
#include <string.h> // using strlen

/*
 * [H|E|L|L|O|\0]
 *  0 1 2 3 4 5
 */
void reverse(char s[]) {
  int i, j;
  char c;
  for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
    c = s[i];
    s[i] = s[j];
    s[j] = c;
    // i++, j--
  }
}

int main() {
  char s[] = "Hello World";
  reverse(s);
  printf("%s\n", s);
}
