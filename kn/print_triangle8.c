#include <stdio.h>
void print_triangle(int size)
{
        if (size <= 0)
        {
putchar('\n');
        } else
        {
                int i, j;

                for (i = 1; i <= size; i++)
                {
                        for (j = i; j < size; j++)
                        {
putchar('x');
 }

                        for (j = 1; j <= i; j++)
{
putchar('#');
                        }
putchar('\n');
                }
        }
}
int main(void)
{
    print_triangle(2);
    print_triangle(10);
    print_triangle(1);
    print_triangle(0);
    return (0);
}
