//Importing the header files of the program
# include <stdio.h>
# include <stdlib.h>
int main(){
    //Finding the last digit of a number
    int number, last_digit;
    printf("Enter a number: ");
    scanf("%d", &number);
    //Finding the remainder of the given number by dividing 10
    last_digit = number % 10;
    printf("The last digit of %d is %d", number, last_digit);

    return 0;
}
