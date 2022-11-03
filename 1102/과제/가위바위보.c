#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int num1, num2, num3;
  srand(time(NULL));
  num1 = rand() % 3;
  num2 = rand() % 3;
  if (num1 == num2) {
   if (num1 == 0) {
      printf("철수 : 가위, 영희 : 가위\n비김");
    }
    else if (num1 == 1) {
      printf("철수 : 바위, 영희 : 바위\n비김");
    }
    else {
      printf("철수 : 보, 영희 : 보\n비김");
    } 
  }
  else if ((num1 == 0 && num2 == 2) || (num1 == 1 && num2 == 0) || (num1 == 2 && num2 == 1)) {
   if (num1 == 0) {
      printf("철수 : 가위, 영희 : 보\n철수 승리");
    }
    else if (num1 == 1) {
      printf("철수 : 바위, 영희 : 가위\n철수 승리");
    }
    else {
      printf("철수 : 보, 영희 : 바위\n철수 승리");
    }
  }
  else {
   if (num1 == 0) {
      printf("철수 : 가위, 영희 : 바위\n영희 승리");
    }
    else if (num1 == 1) {
      printf("철수 : 바위, 영희 : 보\n영희 승리");
    }
    else {
      printf("철수 : 보, 영희 : 가위\n영희 승리");
    }
  }
}