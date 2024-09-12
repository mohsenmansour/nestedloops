#include <stdio.h>
char fun(char *zozo,int size)
{
    for(int i=size; i>= 0 ;i--)
    printf("%c ",zozo[i]);
}

int main()
{
    char zozo[] = {"Hallo sadness"};
   fun( zozo,sizeof(zozo)/sizeof(zozo[0]));

    return 0;
}
