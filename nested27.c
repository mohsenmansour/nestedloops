#include <stdio.h>
int main()
{
for(int i=0; i<=11; i++)
{
for(int k=0; k<=i; k++)
{
printf("%d ",k);
}
for(int k=i;k<=11;k++)
{
printf("%d", k);
}
printf("\n");
}
}
