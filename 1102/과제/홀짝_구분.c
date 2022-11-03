#include <stdio.h>

int main() {
  int i, num, jjak=0, hoal=0, a[10];
  for (i=0; i<10; i++) {
    scanf("%d", &num);
    if ((num % 2) == 0) {
      jjak+=1;
    }
    else {
      hoal+=1;
    }
  }
  printf("짝수 = %d, 홀수 = %d", jjak, hoal);
}