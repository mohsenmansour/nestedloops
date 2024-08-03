#include <stdio.h>
int main(void)
{
int i, j;
for (i =0; i<=5; i++)
{
printf("Outer: %d\n", i);
for (j = 0; j<=6-i;j++)
{
printf("* ");
}
printf("\n");
}
}
