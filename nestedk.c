#include <stdio.h>
int main()
{
for (int i = 1,p=1; i <= 5;i++,p++){
for(int j =i; j<=5;j++)
{
printf("  ");
}
for(int j = 1; j<=i; j++)
{
printf(p+"");
}
for (int j =2; j <=i; j++)
{
printf(p+"");
}
printf("\n");
}
for (int i = 1,p=1; i <= 5;i++,p++)
{
for(int j =i; j<=5;j++)
{
printf("  ");
}
for(int j = 1; j<=i; j++)
{
printf(p+"");
}
for (int j =2; j <=i; j++)
{
printf(p+"");
}
printf("\n");
}
}
