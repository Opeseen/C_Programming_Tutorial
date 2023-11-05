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

  int n1 = 50;
  int n2 = 7;
  int n3 = n1 % n2;

  float iAmFloat = 0.27f;
  float divFloat = n1/n2;
  float castFloat = (float) (n1) / (float) (n2);
  float n1f = 10;
  float n2f = 3;
  printf("%f\n", iAmFloat);
  printf("%f\n", divFloat);
  printf("%f\n", castFloat);
  printf("%f\n", (n1f/n2f));
  printf("Double Section\n");
  double iAmDouble = 10000;
  long double iAmLongDouble = 12;
  printf("%lu bytes\n", sizeof(long double ));
  return 0;
}