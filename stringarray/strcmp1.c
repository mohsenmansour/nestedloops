#include <stdio.h>
#include <string.h>

int main() {

  char word1[] = "apples";
  char word2[] = "apple";

  int result = strcmp(word1, word2);

  printf("Result: %i\n", result); // Result: 0

}
