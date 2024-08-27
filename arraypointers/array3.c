 #include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
int age[5];
printf("enter 5 numbers: ");
for (  i = 0; i<5;i++)
{
 scanf("%d",&age[i]);
}
for (  i = 0; i<5;i++)
{
  printf("%d \n",age[i]);
}


return 0;
}
