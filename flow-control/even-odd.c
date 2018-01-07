#include <stdio.h>

/**
 * Number -> String
 * Program to check if given number is even or odd
 * gcc even-odd.c
 * ./a.out
 */
int main() {
  int num; /* address reserved for num [] */
  printf("Enter a number: ");
  scanf("%d", &num); /* Read the number as decimal into address of num */
  if (num % 2 == 0) {
    printf("Number is even");
  }
  else {
    printf("Number is odd");
  }
  return 0; /* Tell calling program the status of code execution */
}