// C program to see how scanf()
// stops reading input after whitespaces

#include <stdio.h>
int main()
{
	char str[20];
	printf("enter something\n");
	scanf("%s", str);
	printf("you entered: %s\n", str);

	return 0;
}
