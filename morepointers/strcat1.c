#include <stdio.h>
#include <string.h>


int main() {
    char str1[50] = "Hello, ";
    char str2[] = "how are you";
    char str3[] = "?";
    
    strcat(str1, str2); // Concatenate str2 to str1
    strcat(str1, str3); // Concatenate str3 to str1
    
    printf("%s", str1); // Output: "Hello, world!"
    
    return 0;
}
