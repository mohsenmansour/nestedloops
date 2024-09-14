#include <stdio.h>
void puts_half(char *str)
{
	int len, n, i;
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
		{
		putchar(str[i]);
		}
			} 
			else if (len % 2)
	{
		for (n = (len - 1) / 2; n < len - 1; n++)
		{
		putchar(str[n + 1]);
		}
	}
	
	putchar('\n');
}
int main(void)
{
    char *str;

    str = "0123456789";
    puts_half(str);
    return (0);
}

