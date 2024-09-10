#include <stdio.h>
#include <string.h>

int main()
{
    char *str ;
    printf("string: \n");
    scanf("%s",str);

    // reversing string
    printf("Reversed String: %s", strrev(str));

    return 0;
}
