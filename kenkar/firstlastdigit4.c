#include <stdio.h>
int main()
{
int number, first_digit, last_digit;
printf("Enter a number: ");
    scanf("%d", &number);
while (number >= 10)
{
number=number/10;
first_digit=number;
last_digit = number % 10;
printf("First digit: %d\n", first_digit);
    printf("Last digit: %d\n", last_digit);
}
return 0;
}
