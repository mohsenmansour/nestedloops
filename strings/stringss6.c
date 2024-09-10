#include <stdio.h>

int main()
{
    char s[50]={"I love you,zoom"};
	int i, j, len;
	i = 0;
	while (s[i] != '\0')
	{
		i++;
		putchar(s[i-1]);
	}
	
}
