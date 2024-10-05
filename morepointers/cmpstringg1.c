#include <stdio.h>  
int _strcmp(char *s1, char *s2)
{
    while (*s1 == *s2)
	{
		if (*s1 == '\0')
	{
			return (0);
	}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
int main(void)
{
    char s1[] = "Helld!";
    char s2[] = "Helld!";

    printf("%d\n", _strcmp(s1, s2));   
    printf("%d\n", _strcmp(s2, s1));  
    printf("%d\n", _strcmp(s1, s1));
    return (0);
}


