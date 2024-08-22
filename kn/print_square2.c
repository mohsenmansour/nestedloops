#include <stdio.h>
int main(void)
{
int n,i,k;
printf("Enter any value : ");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
for(k=2;k<=n;k++)
{
if(i<k)
{
printf("##\n");
}
else if(k==i)
{
printf("#");
}
}
printf("\n");
}
}
