#include <stdio.h>
void print_diagonal(int n)
{
        if (n <= 0)
        {
putchar('\n');
        } else
        {
                int i, j;

                for (i = 0; i < n; i++)
                {
                        for (j = 0; j < n; j++)
                        {
                                if (j == i)
putchar('\');
                                else if (j < i)
putchar(' ');
                        }
putchar('\n');
                }
        }
}
int main(void)
{
    print_diagonal(0);
    print_diagonal(2);
    print_diagonal(10);
    print_diagonal(-4);
    return (0);
}
