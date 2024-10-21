#include <stdio.h>
int main(void)
{
           int i, j;
char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
char fig[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};
		printf("%c\n",fig[0]);
char *ptr;
ptr=str;

for (i = 0; str[i] != '\0'; i++)
{
/* ( str[i] >= 'a' )
if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
                                {
                                        str[i] = str[i]-32;
                                }*/
   for (j = 0; j < 13; j++)
		{
			if (str[i] == fig[j])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] -= 32;
}
}
}
}
printf("%s", str);
printf("%s", ptr);
}
