#include <stdio.h>
char *cap_string(char *s)
{
        int i, j;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i ] >= 'a' )
                                {
                                        s[i ] -= 32;
                                }
}
return (s);
}
int main(void)
{
char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
    char *ptr;

    ptr = cap_string(str);
    printf("%s", ptr);
    //printf("%s", str);
    return (0);
}
