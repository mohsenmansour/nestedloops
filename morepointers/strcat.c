#include <stdio.h>
#include <string.h>


int main() {
    char str1[50] = "Hello, ";
    const char str2[] = "learners!";
    
    strcat(str1, str2); // Concatenate str2 to str1
    
    printf("%s", str1); // Output: "Hello, world!"
    
    return 0;
}
