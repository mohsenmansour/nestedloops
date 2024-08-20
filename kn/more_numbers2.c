#include <stdio.h>
int main(void)
{
        int n;
for(n=1;n<=14;n++)
{
int j;
for(j=0;j<=14;j++)
{
if(j>=10)
{
putchar(j/10+'0');
putchar(j%10 +'0');
}
}
putchar('\n');
}
}
