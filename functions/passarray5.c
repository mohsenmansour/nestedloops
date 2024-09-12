#include <stdio.h>

void me(char *str,int size)
{
	int i;
    
	for (i = 0; i < size; i++)
	{
		putchar(str[i]);
	}
putchar('\n');
}
int main(void)
{
   
    char str[]= "I do not fear computers. I fear the lack of them - Isaac Asimov";
     
    me(str  , sizeof(str)/ sizeof(str[0]));
    return (0);
}
