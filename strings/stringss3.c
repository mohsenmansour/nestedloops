#include <stdio.h>

int main(void)
{
    char *str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    int i, j, len;
	i = 0;
	while (str[i] != '\0')
	{
		i++;
		putchar(str[i+1]);
	}
	putchar('\n');

	len = i;

	for (j = len -1; j >= 0; j--)
	{
		putchar(str[j]);
	}
	putchar('\n');

    return (0);
}
