#include <stdio.h>
int i;

void func1() {
  i = 20; // refers to the global declared variable
  printf("%d\n", i); // 20
}

void func2() {
  int i = 30;
  printf("%d\n", i); // 30
}

int main() {
  func1();
  func2();
  return 0;
}
