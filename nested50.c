#include <stdio.h>

int main()
{
    int rows = 5;
for (int i = 1;i < rows; i++)
{
// inner loop 1 to print white spaces
        for (int j =i;j <=i+(i-1)*4; j++)
{
printf("%d", j);
}
printf("\n");
}
}
