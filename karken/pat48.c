#include <stdio.h>
int main()
{
int n, r, c;
printf("Enter the number of rows= ");
scanf("%d", &n);
for(r=1;r<=n; r++)
{
for(c=n; c>=1;c--)
{
printf(" ");
}
for(c=1; c<=2*r-1; c++)
{
printf("*");
}
printf("\n");
}
}
