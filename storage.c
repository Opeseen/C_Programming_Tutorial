#include <stdio.h>

void myMethod(){
  int n = 0;
  static int x = 0;
  printf("%d\n", x);
  x++;
  
}

int main(){
  const unsigned char num2 = 0b11111111;

  printf("%d\n",num2);
  register int loopCount = 0;
  while (loopCount < 100){
    loopCount++;
  }

  printf("Static storage\n");
  myMethod();
  for(int i = 1; i < 10; i++){
    myMethod();
  }
  return 0;
}