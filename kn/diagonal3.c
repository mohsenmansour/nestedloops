#include <stdio.h>
void print_diagonal(int n)
{
        if (n <= 0)
putchar('\n');
else
        {
                int i, j;

                for (i = 0; i < n; i++)
                {
                        for (j = 0; j < n; j++)
                        {
putchar('\\');
putchar(' ');
}
putchar('\n');
}
}
}
int main(void)
{
print_diagonal(0);
print_diagonal(5);
print_diagonal(5);
}
