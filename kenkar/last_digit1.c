/**
 * C program to find last digit of a number
 */

#include <stdio.h>

int main()
{
    int n;
/* Input number from user */
    printf("Enter any number: ");
    scanf("%d", &n);

    /* Get the last digit */
int lastDigit = n % 10;

    printf("Last digit = %d", lastDigit);

    return 0;
}
