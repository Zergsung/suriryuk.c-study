#include <stdio.h>

int main() {
  int a, b;
  printf("2개의 수를 입력해주세요 두 수가 같다면 반복이 끝납니다!\n");
  do
  {
    scanf("%d %d", &a, &b);
    printf("2개의 수를 입력해주세요 두 수가 같다면 반복이 끝납니다!\n");
  } while (a != b);
  printf("반복종료!");
}