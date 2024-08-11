#include <stdio.h>
int is_prime(int n);
int main()
{
int num;
printf("Enter a positive integer: ");
scanf("%d", &num);
if (is_prime(num))
printf("%d is a prime number.\n", num);
else
printf("%d is not a prime number.\n", num);
return 0;
}
int is_prime(int n)
{
int i;
if (n <= 1)
return 0;
for (i = 2; i < n; i++)
if (n % i == 0)
return 0;
return 1;
}
