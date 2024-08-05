#include <stdio.h>
int main()
{
for (int i=1;i<=5;i++)
{
for (int j=1; j<=5; j++)
{
if(j==i || i+j==5+1)
printf(" x ");
else
printf("  ");
}
printf("\n");
}
}
