#include <stdio.h>

int main()
{
int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};

int i;
int length = sizeof(ages) / sizeof(ages[0]);
printf("%d\n",sizeof(ages));
printf("%d\n",sizeof(ages[0]));
printf("%d\n",length);
int lowestAge = ages[0];
for (i = 0; i < length; i++)
{
  if (lowestAge > ages[i])
  {
printf("[%d]\n%d\n",i,ages[i]);
lowestAge = ages[i];
printf("%d\n",lowestAge);
}
}
}
