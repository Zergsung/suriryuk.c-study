#include <stdio.h>
#include <time.h>

int main() {
  int member, winning, input_num;
  srand(time(NULL));
  scanf("총 인원수는 몇명 인가요? : %d", &member);
  scanf("총 당첨자는 몇명 인가요? : %d", &winning);
  
  for(int i = 0; i <= member; i++) {
    scanf("당신의 숫자를 입력해서 당첨 여부를 확인하세요! \n 숫자입력 : %d", &input_num);
    
  }
}