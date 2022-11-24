#include <stdio.h>

int main() {
  int temp, arr[5];
  printf("배열 입력 : ");
  for(int i = 0; i < 5; i++) {
    scanf("%d", &arr[i]);
  }

  for(int i = 0; i < 5; i++) {
    for (int j = 0; j < 4; j++) {
      if(arr[i] < arr[j]) {
      temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
      }
    }
  }
  printf("오름차순 : ");
  for(int i = 0; i < 5; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
  printf("내림차순 : ");
  for(int i = 0; i < 5; i++) {
    for (int j = 0; j < 4; j++) {
      if(arr[i] > arr[j]) {
      temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
      }
    }
  }
  for(int i = 0; i < 5; i++) {
    printf("%d ", arr[i]);
  }
}