#include <stdio.h>
#include <string.h>

int main() {
  char word[50]={}, rev_word[50];
  int cmp = 1, len_word;
  scanf("%s", word);
  len_word = strlen(word);

  for(int i = 0; i < len_word / 2; i++) {
    
    if (word[i] != word[len_word - 1 - i]) {
      cmp = 0;
    }
  }
  
  if (cmp == 0) {
    printf("회문이 아닙니다.");
  }
  else {
    printf("회문");
  }
  
}