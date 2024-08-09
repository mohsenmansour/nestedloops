#include <stdio.h>
int main()
{
int number, first_digit, last_digit;
// Input from the user
    printf("Enter a number: ");
    scanf("%d", &number);
// Finding the last digit
    last_digit = number % 10;

    // Finding the first digit
    while (number > 10)
{
number=number/10;
}
first_digit = number;

    // Displaying the first and last digits
    printf("First digit: %d\n", first_digit);
    printf("Last digit: %d\n",last_digit);
return 0;
}
