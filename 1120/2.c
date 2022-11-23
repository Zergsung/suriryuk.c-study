#include <stdio.h>
#include <stdlib.h>

void bin(int n) {
    if(n > 1) bin(n/2);
    printf("%d", n%2);
}

int main() {
  int num;
  char arr[10];
  printf("10진수 정수입력 : ");
  scanf("%d", &num);
  bin(num);
}