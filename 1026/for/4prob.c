#include <stdio.h>

int main() {
  int a, b, c=99;
  while (c == 99) {
    scanf("%d %d", &a, &b);
    c = a + b;
  }
  printf("종료!");
}