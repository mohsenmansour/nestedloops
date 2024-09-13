#include <stdio.h>
void puts2(char *str)
{
	int len, i;
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i= i+2)
	{
		putchar(str[i]);
	}

     putchar('\n');
}
int main(void)
{
    char *str;

    str = "0123456789";
    puts2(str);
    return (0);
}
