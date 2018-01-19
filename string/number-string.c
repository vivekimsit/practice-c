#include <stdio.h>
#include <string.h> // using strlen

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

void itoa(int n, char s[]) {
  int i, sign;
  if ((sign = n) < 0) {
    n = -n;
  }
  i = 0;
  do {
    s[i++] = n % 10 + '0';
  } while ((n /= 10) > 0);
  if (sign < 0) {
    s[i++] = '-';
  }
  s[i] = '\0';
  reverse(s);
}

int main() {
  int num = 123;
  char result1[16];
  itoa(num, result1);
  printf("%s\n", result1);

  num = -123;
  char result2[16];
  itoa(num, result2);
  printf("%s\n", result2);
}
