/*Global Scope
A variable created outside of a function, is called a global variable and belongs to the global scope.

Global variables are available from within any scope, global and local:
A variable created outside of a function is global and can therefore be used by anyone:
*/
#include <stdio.h>

// Global variable x
int x = 5;

void myFunction() {
  // We can use x here
  printf("%d\n", x);
}

int main() {
  myFunction();

  // We can also use x here
  printf("%d\n", x);
  return 0;
}
