//A variable created inside a function belongs to the local scope of that function, and can only be used inside that function:
#include <stdio.h>

void myFunction() {
  // Local variable that belongs to myFunction
  int x = 5;

  // Print the variable x
  printf("%d", x);
}

int main() {
  myFunction();
  return 0;
}
