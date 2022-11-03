#include <stdio.h>

int main() {
  int age;
  printf("철수의 나이 : ");
  scanf("%d", &age);
  
  if (age <= 6 || age >= 60) {
    printf("무료");
  }
  else {
    printf("1,000");
  }
}