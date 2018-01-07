#include <stdio.h>

int main() {
  int weekday;
  printf("Enter weekday");
  scanf("%d", &weekday);
  /*
   * 1. Case expression can only be integers
   * 2. The values should be unique
   * 3. Cannot use any variable inside case expression
   */
  switch (weekday) {
    case 0: printf("Monday"); break;
    case 1: printf("Tuesday"); break;
    case 2: printf("Wednesday"); break;
    case 3: printf("Thursday"); break;
    case 4: printf("Friday"); break;
    case 5: printf("Saturday"); break;
    case 6: printf("Sunday"); break;
    default: printf("Invalid input %d", weekday);
  }
  return 0;
}
