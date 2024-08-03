// C program to print the full pyramid pattern of stars
#include <stdio.h>

int main()
{
    int rows = 5;

    // first loop to print all rows
    for (int i = 0; i < rows; i++) {
for (int k = 0; k < 3 * i + 1; k++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
