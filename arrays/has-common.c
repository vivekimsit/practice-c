#include <stdio.h>

int hasCommon(int a[], int b[], int n, int m) {
  int i, j;
  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      if (a[i] == b[j])
        return 1;
    }
  }
  return 0;
}

int main() {
  int a[] = {1, 2, 3};
  int b[] = {4, 5, 6};
  int c[] = {3, 5, 6};
  printf("%d\n", hasCommon(a, b, 3, 3));
  printf("%d\n", hasCommon(a, c, 3, 3));
  return 0;
}
