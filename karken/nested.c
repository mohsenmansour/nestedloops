#include <stdio.h>
int main(void)
{
int i, j;
for (i = 1; i <= 2; ++i) {
    printf("Outer: %d\n", i);
 for (j = 1; j <= 3; ++j) {
      printf(" Inner: %d\n", j);
}
  }
  
  return 0;
}