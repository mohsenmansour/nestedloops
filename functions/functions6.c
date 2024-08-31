#include <stdio.h>
void myFunction(int myNumbers[5]) {
  for (int i = 0; i < 5; i++) {
    printf("myNumbers[%d] = %d\n",i,myNumbers[i]);
  }
}

int main() {
  int myNumbers[]={10, 20, 30, 40, 50}; ;
  myFunction(myNumbers);
  return 0;
}
