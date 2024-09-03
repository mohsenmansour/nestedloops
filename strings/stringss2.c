
#include <stdio.h>
void print_rev(char *s)
{
	int i, j, len;
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	len = i;

	for (j = len - 1; j >= 0; j--)
	{
		putchar(s[j]);
	}

putchar('\n');
}
int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    print_rev(str);
    return (0);
}
