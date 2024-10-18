#include <stdio.h>
int main(void)
{
    int i;
char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 'a' )
                                {
                                        str[i ] -= 32;
                                }
}
printf("%s", str);
}
