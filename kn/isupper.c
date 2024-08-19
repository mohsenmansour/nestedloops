#include <stdio.h>
int isupper(int c)
{
        return (c >= 'A' && c <= 'Z');
}
int main ( )
{
char c;

    c = 'A';
    printf("%c: %d\n", c,isupper(c));
c = 'a';
    printf("%c: %d\n", c,isupper(c));
    return (0);
}
