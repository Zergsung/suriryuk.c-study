#include <stdio.h>

int main() {

  FILE *fp = fopen("test.txt", "wt");

  fputc('A', fp);
  fputc('B', fp);
  fputs("My hame is Hong\n", fp);
  fputs("Your name is Yoo\n", fp);
  fclose(fp);

  char str[30];
  char ch;
  FILE *fp1 = fopen("test.txt", "rt");

  if(fp1 == NULL) {
    printf("파일오픈실패");
    return 01;
  }

  ch = fgetc(fp1);
  printf("%c \n", ch);
  ch = fgetc(fp1);
  printf("%c \n", ch);

  fgets(str, sizeof(str), fp1);
  printf("%s \n", str);
  fgets(str, sizeof(str), fp1);
  printf("%s \n", str);
  
}