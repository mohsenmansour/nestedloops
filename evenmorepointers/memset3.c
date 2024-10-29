#include <stdio.h>

int main()
{
    char buffer[10];
    
    for(int i = 0 ; i<10;i++)
    buffer[i]='a';
    for(int i = 0 ; i<10;i++)
    printf("%c",buffer[i]);
    printf("\n");
}
