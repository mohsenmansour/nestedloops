//danger
#include <stdio.h>
// Global variable
int x = 5;

void myFunction() {
  printf("%d\n", ++x); // Increment the value of x by 1 and print it
}

int main() {
  myFunction();

  printf("%d\n", x); // Print the global variable x
  return 0;
}
