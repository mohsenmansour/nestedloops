#include <stdio.h>
char string_toupper(char *s)
{
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}

	return (s);
}
int main(void)
{
    char str[] = "Look up!\n";
    char *ptr;

    string_toupper(str);
   // printf("%s", ptr);
    printf("%s", str);
    return (0);
}
