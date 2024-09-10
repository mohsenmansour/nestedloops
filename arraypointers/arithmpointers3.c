#include <stdio.h>

int main() {
float arr[] = {1.1, 2.2, 3.3, 4.4, 5.5};

float *ptr = arr; // Assigning the address of the first element
printf("Value at initial pointer position: %.1f\n", *ptr);

ptr = ptr + 2; // Move the pointer two elements forward
printf("Value after moving pointer forward: %.1f\n", *ptr);

ptr = ptr - 1; // Move the pointer one element backward
printf("Value after moving pointer backward: %.1f\n", *ptr);

return 0;
}
