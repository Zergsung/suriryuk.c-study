#include <stdio.h>

int main() {
  int num1=0, num2=1, nextnum, i, output, input;

  scanf("%d", &input);
  
  for(i = 0; i <= input; i++) {
    printf("%d ", num1);
    nextnum = num1 + num2;
    num2 = num1;  
    num1 = nextnum;
  }
}