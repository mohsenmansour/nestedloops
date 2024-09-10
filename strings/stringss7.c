#include <stdio.h>
void print_rev(char s[])
{
	int i, j, len;
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		putchar(s[j]);
	}
	putchar('\n');
}
int main(void)
{
    char m[] = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    print_rev(m);
    return (0);
}
