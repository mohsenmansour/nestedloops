#include <stdio.h>
int main()
{
for(char c='z'; c>='a'; c--)
{
if(c % 2==1)
printf("%c ", c);
}
printf("\n");
}
