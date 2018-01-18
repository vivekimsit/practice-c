#include <stdio.h>

int main() {
  /* The compiler may or may not store the variable in register */
  register int i = 0;
  /* If the variable is stored in register then the statement throws error  */
  int *a = &i;
  printf("%d\n", *a);
  return 0;
}
