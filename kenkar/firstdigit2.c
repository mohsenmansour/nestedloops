#include <stdio.h>

int main()
{
    int n, first;
printf("Enter any number: ");
    scanf("%d", &n);

    first = n;
if(first >= 10)
{
first = first / 10;
printf("First digit = %d\n", first);
}
return 0;
}
