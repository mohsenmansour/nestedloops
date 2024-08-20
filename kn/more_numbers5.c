#include <stdio.h>
int main(void)
{
int n,j;
for(n=1;n<=14;n++)
{
for (j = 0; j < 15; j++)
{
                        if (j >= 10)
putchar(j / 10 + '0');
putchar(j % 10 + '0');
}
putchar('\n');
}
}
