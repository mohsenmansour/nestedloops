/*
A local variable cannot be used outside the function it belongs to.

If you try to access it outside the function, an error occurs:
*/
#include <stdio.h>
void myFunction() {
  // Local variable that belongs to myFunction
  int x = 5;
}

int main() {
  myFunction();

  // Print the variable x in the main function
  printf("%d", x);
  return 0;
}
