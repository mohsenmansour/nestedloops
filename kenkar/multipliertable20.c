#include <stdio.h>
int main() {
    int j, i, n;
printf("Input upto the table number starting from 1 : ");
scanf("%d", &n);
printf("Multiplication table from 1 to %d \n", n);
for (i = 1; i <= 10; i++)
{
for (j = 1; j <= n; j++)
{
int k=i*j;
if(i<=9)
{
printf("%dX%d =%d | ",j, i,k);
}
if(i>=10)
{
printf("%dX%d=%d| ",j, i,k);
}
}
printf("\n");
}
return 0;
}
