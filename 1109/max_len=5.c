#include <stdio.h>
#include <stdlib.h>

int main() {
  
  char str[5];
  
  while(1) {

    scanf("%s", str);
    
    for(int i = 0; i < 6; i++) {
    
      if (str[i] == 'q') {
    
        if (str[i+1] == 'u') {

          if (str[i+2] == 'i') {

            if (str[i+3] == 't') {

              exit(0);
            }
          }
        }
      }
    }
  }
}