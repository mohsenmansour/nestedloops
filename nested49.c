// C program to print the full pyramid pattern of stars
#include <stdio.h>

int main()
{
    int rows = 5;

    // first loop to print all rows
    for (int i = 0; i < rows; i++)
{
// inner loop 1 to print white spaces
        for (int j = 0;j <0+(i-1)*4; j++)
{
printf("%d ", j);
}
printf("\n");
}
}
