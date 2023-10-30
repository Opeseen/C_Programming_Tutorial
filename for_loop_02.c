#include <stdio.h>

int main(){
  int number = 0;
  char iAmChar = 0;
  short iAmShort = -4;
  long IamLong = 1000000000;
  unsigned char iAmUnsignedChar = 1; // Doesn't contains negative value and max value is 255
  unsigned short iAmUnsignedShort = 0;
  unsigned int iAmUnsignedInt = 0;
  unsigned long long iAmUnsignedLongLong = 0;

  int num_one = 101;
  int num_two = 102;
  int sum = num_one + num_two;
  int diff = num_one - num_two;
  

  printf("%d\n",sum);
  printf("%d\n",diff);



  iAmChar = 'a';
  printf("%d\n", iAmChar);

  for(int i = 0; i < 3; i++){
    printf("%d\n", iAmUnsignedChar);
    iAmUnsignedChar++;
  }
  for(int i = 0; i < 2; i++){
    printf("%c\n", iAmChar);
    iAmChar++;
  }
  return 0;
}