#include <stdio.h>

int main() {
  int num1 = 10, num2 = 20, bucket;
  int * ptr1 = &num1, * ptr2 = &num2;

  *ptr1 += 10;
  *ptr2 -= 10;

  bucket = *ptr1;
  *ptr1 = *ptr2;
  *ptr2 = bucket;

  printf("%d %d", *ptr1, *ptr2);
}