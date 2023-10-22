#include <stdio.h>

int main(){
  int number = 0;
  char iAmChar = 12;
  short iAmShort = -4;
  long IamLong = 1000000000;

  for(int i = 0; i < 1000; i++){
    printf("%d\n", iAmChar);
    iAmChar++;
  }
  return 0;
}