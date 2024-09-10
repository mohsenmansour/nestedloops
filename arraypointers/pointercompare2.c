#include <stdio.h>

int main()
{
int num1 = 10;
int num2 = 20;

int* ptr1 =&num1;
int* ptr2 =&num2;
int* ptr3 = &num1;


// Equality comparison
if (ptr1 == ptr3) 
{
printf("ptr1 and ptr3 are equal.\n");
} 
else 
{
printf("ptr1 and ptr3 are not equal.\n");
    
}

// Inequality comparison
if (ptr1 != ptr2) {
printf("ptr1 and ptr2 are not equal.\n");
} 
else 
{
printf("ptr1 and ptr2 are equal.\n");}

// Relative ordering comparison using relational operator
if (ptr1 < ptr2) {
printf("ptr1 is less than ptr2.\n");
} else {
printf("ptr1 is not less than ptr2.\n");}

return 0;
}
