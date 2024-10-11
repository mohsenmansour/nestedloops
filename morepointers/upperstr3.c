#include <stdio.h>
char string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}

	//return (s);
}
int main(void)
{
    char str[] = "get up!\n";
    char *ptr;
   // ptr =
    string_toupper(str);
   //printf("%s\n", ptr);
    printf("%s", str);
    return (0);
}
