//Write a function that prints a string, followed by a new line, to stdout
#include <stdio.h>

int main(void)
{

   char *str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        printf("str[%d] =%c\n",i,str[i]);
    }
    puts(str);
    return (0);
}
