#include <stdio.h>
int main()
{
for (int i = 1; i <=8; i++)
{
for(int j =8;j>=i; j--)
{
printf("%d ", j);
}
printf("\n");
}
}
