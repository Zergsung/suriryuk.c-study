#include <stdio.h>

int main() {
  int a=0, b=0, c=0;
  do{
    scanf("%d", &a);
    b=a+b;
  }while (a != 0);
  printf("%d", b);
}