#include <stdio.h>

int main() {
  int i, j, first_num, second_num, fin_num;
  for(i=2; i<10; i++) {
    for (j=1; j<10; j++) {
      printf("%d x %d = %d\n", i, j, i*j);
    }
    printf("\n");
  }
}