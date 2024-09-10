#include <stdio.h>

int main() {


int array[] = {10, 20, 30, 40, 50};
int* pointer ;
pointer = &array[4]; // Pointer to the last element of the array

// Subtract an integer value from the pointer
int j= 2;
int* p = pointer - j;


// Print the result
printf("Value at index %ld  %ld",(pointer - array),*p);

return 0;
}
