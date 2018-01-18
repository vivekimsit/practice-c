#include <stdio.h>

int main() {
  int i = 0;
  /*
   * The compiler may store the pointer 'a' in activation record or in register.
   * The below statement is fine in any one the above two conditions
   */
  register int *a = &i;
  printf("%d\n", *a);
  return 0;
}
