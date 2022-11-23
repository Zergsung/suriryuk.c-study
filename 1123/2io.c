#include <stdio.h>

int main() {
  FILE * src = fopen("src.txt", "rt");
  FILE * dst = fopen("dst.txt", "wt");
  char ch;

  if (src == NULL || dst == NULL) {
    printf("파일오픈실패");
    return -1;
  }

  while ((ch = fgetc(src)) != EOF)  {
    fputc(ch, dst);
  }

  if(feof(src) != 0) {
    printf("파일 복사 완료");
  }

  else {
    printf("파일 복사 실패");
  }
  
}