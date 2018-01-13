#include <stdio.h>


/**
 *  Pre-condition:  The elements in the array is sorted
 *  Post-condition: The index if found is between the bounds, else return -1
 */
int binarySearch(int *arr, int size, int target) {
  int l_index = 0;
  int r_index = size - 1;
  while (l_index <= r_index) {
    int m_index = l_index + (r_index - l_index) / 2;
    if (arr[m_index] < target) {
      l_index = m_index + 1;
    }
    else if (arr[m_index] > target) {
      r_index = m_index - 1;
    }
    else {
      return m_index;
    }
  }
  /* Invariant broken: l_index > r_index */
  return -1;
}

int main() {
  int array[] = {1, 2, 3};
  printf("Finding 1, result: %d\n", binarySearch(array, 3, 1));
  printf("Finding 2, result: %d\n", binarySearch(array, 3, 2));
  printf("Finding 4, result: %d\n", binarySearch(array, 3, 4));
  return 0;
}
