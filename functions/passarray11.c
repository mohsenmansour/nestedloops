#include <stdio.h>
void print_array(int *a, int n)
{
        int i;

        for (i = 0; i < n; i++)
        {
                if (i == 0)
                        printf("%d", a[i]);
                else
                        printf(", %d", a[i]);
        }
                printf("\n");
}
int main(void)
{
    int array[5];

    array[0] = 98;
    array[1] = 402;
    array[2] = -198;
    array[3] = 298;
    array[4] = -1024;
    print_array(array, 5);
    return (0);
}
