#include <stdio.h>

int main() {
  int n, a, b, c;

  scanf("%d", &n);

  for (c = n-3; c > 0; c--) {
    for (b = n-c-1; b > 0; b--) {
      a = n-c-b;
      if (a*a + b*b == c*c) {
        printf("(%d, %d, %d)\n", a, b, c);
        return 0;
      }
    }
  }

  printf("No triple found.\n");
  return 0;
}