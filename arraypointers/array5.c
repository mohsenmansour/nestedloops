#include <stdio.h>

int main()
{
    int a=7  , b=9;
    int *p;
    p=&a;
    *p=b;
b=*p;
printf("%d\n" ,a);
     printf("%d\n" ,b);

    return 0;
}
