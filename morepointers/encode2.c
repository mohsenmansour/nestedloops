
#include<stdio.h>


int main(void)
{
    char s[] ="Expect the best. Prepare for the worst. Capitalize on what comes.\n";
    char *p;
    p=s;
    int i, j;

	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	
	{
		for (j = 0; j < 10; j++)
		{
		if (s[i] == a[j])
			{
				s[i] = b[j];
			}
		}
	}
printf("%s", p);
    printf("%s", s);
    return (0);
}
