#include <stdio.h>
int main(void)
{
int i, j;
for (i = 1; i <= 3; i++)
{
printf("Outer: %d\n", i);
 for (j = 1; j <= 3; j++) {
printf("* ");
}
  }

  return 0;
}
