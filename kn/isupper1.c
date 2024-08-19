#include <stdio.h>
#include <ctype.h>
int main()
{
char ch = 'd';
if (isupper(ch))
{
printf("%c is an Uppercase Letter", ch);
}
 else
{
    printf("%c is not an Uppercase Letter", ch);
}
 return 0;
}
