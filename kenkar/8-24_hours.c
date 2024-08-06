#include <stdio.h>
#include<stdlib.h>
int main()
{
int i,j;
i=0;
while(i < 24)
{
j=0;
while (j < 60)
                {
putchar((i / 10) + '0');
putchar((i % 10) + '0');
putchar(':');
putchar((j / 10) + '0');
putchar((j % 10) + '0');
putchar('\n');
j++;
 }
                i++;
        }
}
