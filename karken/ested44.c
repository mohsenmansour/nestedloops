#include <stdio.h>

int main()
{
    int rows = 5;

    // first loop to print all rows
    for (int i = 0; i < rows; i++) {

        // inner loop 1 to print white spaces
        for (int j = 0; j <3* i + 1; k++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
