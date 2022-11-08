#include <stdio.h>

int fibonacci(int a) {
  int  num1 = 0, num2 = 1, nextnum, i, input;
  for(i = 0; i <= a; i++) {
    printf("%d ", num1);
    nextnum = num1 + num2;
    num2 = num1;  
    num1 = nextnum;
  }
}

int main() {
  int input;

  scanf("%d", &input);
  fibonacci(input);
}