#include <stdio.h>
int main(void)
{
int i, j;
for (i =0; i<=5; i++)
{
printf("Outer: %d\n", i);
for (j = 0; j<=5; j++)
{
printf("* ");
printf("\n");
}
}
}