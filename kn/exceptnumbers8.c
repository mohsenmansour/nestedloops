#include <stdio.h>
int main()
{
int a;
for(a =0; a<=9;a++)
{
if(a!=2 || a!=4)
{
putchar(a+'0');
}
putchar('\n');
}
}
