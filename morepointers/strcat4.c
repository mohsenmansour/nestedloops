// C Program to concatenate two strings manually using loops
#include <stdio.h>

void concatStr(char *dest, const char *src) {
    int length, j;

    // Find the length of the dest string
    for (length = 0; dest[length] != '\0'; length++);

    // Append the src string to the dest string
    for (j = 0; src[j] != '\0'; j++, length++) {
        dest[length] = src[j];
    }

    // Null-terminate the concatenated dest string
    dest[length] = '\0';
}

int main() {
    char dest[100] = "Geeksfor";
    char src[100] = "Geeks";

    // Call the concatStr function
    concatStr(dest, src);

    printf("Concatenated String: %s\n", dest);
    return 0;
}
