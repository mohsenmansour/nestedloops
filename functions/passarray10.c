#include <stdio.h>
void print_array(int *a, int m)
{
        int i;

        for (i = 0; i < m; i++)
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
    int m;
    int array[]={98,402,-198,298,-1024};
m=sizeof(array)/sizeof(array[0]);
    
    print_array(array, m);
    return (0);
}