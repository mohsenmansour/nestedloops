#include <stdio.h>
int main()
{
int number, first_digit, last_digit;
printf("Enter a number: ");
    scanf("%d", &number);
if(number >= 10)
{
number=number% 10;
}
printf("Last digit: %d\n",number);
return 0;
}
