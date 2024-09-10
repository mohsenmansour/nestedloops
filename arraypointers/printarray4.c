#include <stdio.h>

int main() {
int array[] = {10, 20, 30, 40, 50};

int *ptr = array; // Pointer to the first element of the array

// Add an integer value to the pointer
int a = 2;
int *m = ptr + a;

// Access the element at the adjusted position

// Print the result
printf("Value at index %d: %d\n", a, *m);

return 0;
}
