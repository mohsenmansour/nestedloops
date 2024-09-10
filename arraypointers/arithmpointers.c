#include <stdio.h>

int main() {
int array[] = {10, 20, 30, 40, 50};

int* pointer1 = &array[2]; // Pointer to the third element of the array
int* pointer2 = &array[0]; // Pointer to the first element of the array

// Calculate the difference between the two pointers
int pointerDifference = pointer1 - pointer2;

// Print the result
printf("Pointer difference: %td\n", pointerDifference);
printf("%d\n",*pointer1 - *pointer2);
printf("%d\n",*pointer2 - *pointer1);

return 0;
}
