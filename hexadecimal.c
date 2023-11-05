#include <stdio.h>

int main(){
  int number = 0xABCDEF;
  unsigned char num = 0b11111111;
  const unsigned char num2 = 0b11111111;

  printf("%d \n",number);
  printf("%d\n",num);
  num -=1;
  num--;
  printf("%d\n",num);

  return 0;
}