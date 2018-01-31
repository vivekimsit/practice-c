#include <stdio.h>

int countFunctionCall() {
  /* The count is declared in the data section */
  /* By default its initialized to 0 */
  static int count;
  return ++count;
}

int main() {
  countFunctionCall();
  countFunctionCall();
  countFunctionCall();
  printf("%d times called", countFunctionCall()); // should be 4
  return 0;
}
