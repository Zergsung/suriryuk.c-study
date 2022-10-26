#include <stdio.h>

int main() {
  int i, a, b, c;
  scanf("%d %d", &a, &b);
  for (i = a; i <= b;i++) {
    if (i!=a) {
      a += i;
    }
  }
  printf("%d", a);
}