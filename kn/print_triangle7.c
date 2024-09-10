#include <stdio.h>
int main()
{
int i,j,k;
for (i=1;i<=10;i++)
{
for(j=i;j<=10;j++)
{
printf("x ");
}
for(k=1;k<=i;k++)
{
printf("* ");
}
printf("\n");
}
}
