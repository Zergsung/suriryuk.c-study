#include <stdio.h>

int main() {
  int arr[4][5], chong = 0, fin_chong = 0;
  int i, j, k;
  printf("점수 입력 ( 국어, 영어, 수학, 국사 순 )\n");
  for (i = 0; i < 4; i++) {
    if (i == 0) {
      printf("철희 : ");
    }
    else if (i == 1) {
      printf("철수 : ");
    }
    else if (i == 1) {
      printf("영희 : ");
    }
    else {
      printf("영수 : ");
    }
    for (j = 0; j < 4; j++) {
      scanf("%d", &arr[i][j]);
    }
  }

  printf("\n  국어	영어	수학	국사	총점\n");
  for (i = 0; i < 4; i++) {
    if (i == 0) {
      printf("철희 : ");
    }
    else if (i == 1) {
      printf("철수 : ");
    }
    else if (i == 1) {
      printf("영희 : ");
    }
    else {
      printf("영수 : ");
    }
    for (j = 0; j < 4; j++) {
      printf("%d ", arr[i][j]);
      chong += arr[i][j];
    }
    printf("%d\n", chong);
    chong = 0;
  }
  
  printf("\n과목별총점 ");
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      chong += arr[j][i];
    }
    printf("%d ", chong);
    fin_chong += chong;
    chong = 0;
  }
  printf("%d", fin_chong);
}