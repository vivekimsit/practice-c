#include <stdio.h>
#define MAX 10


int pairSum(int *arr, int size, int sum) {
  int seen[MAX] = {0};
  int index = 0;
  int other = 0;
  for (index = 0; index < size; index++) {
    int current = arr[index];
    other = sum - current; /* current + other = sum */
    if (other >= 0 && seen[other] == 1) {
      printf("Pair with the given sum is: %d, %d\n", current, other);
    }
    seen[current] = 1;
  }
  return -1;
}

int main() {
  int array[] = {1, 20, 5, 6, 9, 2, 10};
  pairSum(array, 7, 11);
  return 0;
}
