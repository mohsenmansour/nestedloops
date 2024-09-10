#include <stdio.h>

int main(void)
{
    char s[]="I love you";
    int i, j, len;
	i = 0;
	while (s[i] != '\0')
	{
	    putchar(s[i]);
		i++;
	}

    return (0);
}
