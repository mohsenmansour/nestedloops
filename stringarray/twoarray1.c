#include <stdio.h>

int main()
{
    int matrix[2][3] = {{2, 4, 2}, {3, 6, 8}};
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

}
