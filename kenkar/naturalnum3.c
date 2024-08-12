#include <stdio.h>
void print_to_98(int n);
int main()
{
int n;
print_to_98(n);
}
void print_to_98(int n)
{
if (n <= 98)
{
for (n=0;n<=98;n++)
{
printf("%d, ",n);
}
printf("\n");
}
}
