#include <stdio.h>

int main() {
  int i=15;
  // for (i = 15; i < 500; i += 15) {
  //   printf("%d\n", i);
  // }
  for (i; i < 500; i++) {
    if (i%3==0 && i%5==0) {
      printf("%d\n", i);
    }
  }
}