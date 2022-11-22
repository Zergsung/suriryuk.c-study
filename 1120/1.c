#include <stdio.h>

int main() {
  int hall[5], jjak[5], num, hc = 0, jc = 0;

  for(int i=0; i < 10; i++) {
    scanf("%d", &num);

    if(num%2 == 0) {
      jjak[jc] = num;
      jc ++;
    }
    else {
      hall[hc] = num;
      hc ++;
    }
  }

  for(int i = 0; i < 5; i++) {
    if(i==0) {
      printf("홀수 출력: ");
    }
    if(i < 4) {
      printf("%d, ", hall[i]);
    }
    else {
      printf("%d\n", hall[i]);
    }
  }
  for(int i = 0; i < 5; i++) {
    if(i==0) {
      printf("짝수 출력: ");
    }
    if(i < 4) {
      printf("%d, ", jjak[i]);
    }
    else {
      printf("%d", jjak[i]);
    }
  }
}