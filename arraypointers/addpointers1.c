
#include <stdio.h>

int main()
{
    float num1, num2;    // Normal variables
    float *ptr1, *ptr2;  // Pointer variables

    float sum, diff, mult, div;

    ptr1 = &num1; // ptr1 stores the address of num1
    ptr2 = &num2; // ptr2 stores the address of num2

    /* User input through pointer */
    printf("Enter any two real numbers: \n");
    scanf("%f\n%f\n", ptr1, ptr2);

    /* Perform arithmetic operation */
    sum  = (*ptr1) + (*ptr2);
    diff = (*ptr1) - (*ptr2);
    mult = (*ptr1) * (*ptr2);
    div  = (*ptr1) / (*ptr2);

    /* Print the results */
    printf("Sum = %.2f\n", sum);
    printf("Difference = %.2f\n", diff);
    printf("Product = %.2f\n", mult);
    printf("Quotient = %.2f\n", div);

    return 0;
}
