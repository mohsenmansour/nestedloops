#include <stdio.h>
int main(void)
{
           int i, j;
char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
char *ptr;
ptr=str;

for (i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 'a' )
                                {
                                        str[i] = str[i]-32;
                                }
}
printf("%s", str);
printf("%s", ptr);
}
