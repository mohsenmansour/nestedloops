#include <stdio.h>

int main()
{
    char a,b,c,d,e;
    a=100; // what equals 100 in char
    b=100-32; //this changes lower to upper
    e=70+32;  // from upper to lower
    c='8';    // no change
    d='g';   // no change
    
    printf("%c\n",a);
    printf("%c\n",b);
    printf("%c\n",e);
    printf("%c\n",c);
     printf("%c\n",d);
    return 0;
}
