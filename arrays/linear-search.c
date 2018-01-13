#include <stdio.h>

int linearSearch(int *arr, int size, int target) {
  for (int i = 0; i < size; i++) {
    if (arr[i] == target) {
      return i;
    }
  }
  return -1;
}

int main() {
  int array[] = {1, 2, 3};
  printf("Finding 1, result: %d\n", linearSearch(array, 3, 1));
  printf("Finding 2, result: %d\n", linearSearch(array, 3, 2));
  printf("Finding 4, result: %d\n", linearSearch(array, 3, 4));
  return 0;
}
