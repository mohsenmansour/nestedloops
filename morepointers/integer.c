#include <stdio.h>
void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		n1 = -n;
		putchar('-');
	} else
	{
		n1 = n;
	}

	if (n1 / 10)
		print_number(n1 / 10);

	putchar((n1 % 10) + '0');
}
int main(void)
{
    print_number(98);
    putchar('\n');
    print_number(402);
    putchar('\n');
    print_number(1024);
    putchar('\n');
    print_number(0);
    putchar('\n');
    print_number(-98);
    putchar('\n');
    return (0);
}
