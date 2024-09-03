/**
*If you try to print a non-null-terminated string using puts(),
*you will end up getting undefined behavior, such as garbage characters at the end of the string:
*/
#include <stdio.h>

int main(void) {
  char greeting[] = {'H', 'e', 'l', 'l', 'o'};

  puts(greeting);
}

// Ouput when I run the code the first time:
// Helloq

// Ouput when I run the code a second time:
// Hellop

// Ouput when I run the code a thrid time:
// Hellow
