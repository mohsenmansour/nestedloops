#include <stdio.h>
int main(void)
{
           int i, j;
char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.";

char fig[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};
	


for (i = 0; str[i] != '\0'; i++)
{

if (str[i] >= 'a' && str[i] <= 'z')
                                {
                                        str[i] = str[i]-32;
                                }
  /* for (j = 0; j < 13; j++)
		{
			if (str[i] == fig[j])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] -= 32;
}
}
}*/
}
printf("%s", str);

}

