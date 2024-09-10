#include <stdio.h>

int main() {
int numbers[] = {10, 20, 30, 40, 50};

int* ptr = &numbers[4]; // Point to the last element of the array
printf("Elements of the array in reverse order: ");

for (int i = 4; i >= 0; i--) {
printf("%d ", *ptr); // Print the value at the current pointer location
ptr--; // Decrement the pointer to the previous element
}

return 0;
}
