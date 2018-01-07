#include <stdio.h>

int main() {
  char op;
  double a, b;
  printf("Enter operator [+, -, *, /]: \n");
  scanf("%c", &op);
  printf("Enter operands: \n");
  scanf("%lf %lf", &a, &b);
  /*
   * since case expression should be an integer,
   * char is converted into its ASCII code.
   */
  switch (op) {
    case '+': printf("%lf", a + b); break;
    case '-': printf("%lf", a - b); break;
    case '*': printf("%lf", a * b); break;
    case '/': printf("%lf", a / b); break;
    default: printf("Enter valid operator %c", op);
  }
  return 0;
}
