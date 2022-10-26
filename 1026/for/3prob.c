#include <stdio.h>

int main() {
  int a, b;
  scanf("%d %d", &a, &b);
  for (int i = 0; i <= 100; i++) {
    if (i%3==0) {
      printf("%d\n", i);
    }
  }
}