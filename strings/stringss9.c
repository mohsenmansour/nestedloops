#include <stdio.h>

int main(void)
{
    char s[]="I love you";
    int i, j, len;
    printf("%c\n",*(s));
	i = 0;
	while (s[i] != '\0')
	{
	    putchar(s[i]);
		i++;
	}

    return (0);
}
