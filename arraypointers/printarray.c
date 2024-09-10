#include <stdio.h>


int main() {
int numbers[] = {10, 20, 30, 40, 50};

int* ptr = numbers; // Point to the first element of the array
printf("Elements of the array: ");

for (int i = 0; i < 5; i++) {
printf("%d ", *ptr); // Print the value at the current pointer location
ptr++; // Increment the pointer to the next element
}

return 0;
}
