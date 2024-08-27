#include <stdio.h>

int main()
{
    int ch=12;
    int *k;
    k=&ch;
     *k=28;
    printf("%d\n",*k);
     printf("%p\n",k);
     printf("%p\n",&ch);
     printf("%p",&k);
     printf("%d\n",ch);
    return 0;
}
