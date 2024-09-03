#include <stdio.h>

int main(void) {
  char greeting[] = "Hello world!";
  char *ptr;
  ptr= &greeting;

  printf("%s\n", ptr);
}
