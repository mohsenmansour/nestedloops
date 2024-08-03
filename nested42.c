#include <stdio.h>
int main()
{
int rows=5;
for (int i =1; i <=rows; i++)
{
for (int x = 0; x <rows-1;x++)
{
printf("  ");
}
for (int x = 0; x < i*2 - 1; x++)
{
printf("*");
}
{
printf("\n");
}
}
}
