// C program to show how gets() 
// takes whitespace as a string.

#include <stdio.h>
int main()
{
	char str[20];
	printf("enter something\n");
	fgets(str);
	printf("you entered : %s\n", str);
	return 0;
}
