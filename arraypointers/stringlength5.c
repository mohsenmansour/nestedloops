#include <stdio.h>
int main() {
    char s[] = "Programming is fun";
    int i;

    for (i = 0; s[i] != '\0'; ++i)
    {
     printf("[%d]= %c\n", i ,s[i]);   
    }
    
    return 0;
}
