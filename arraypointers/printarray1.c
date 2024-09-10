#include <stdio.h>

int main() {
int m[] = {10, 20, 30, 40, 50};

int* ptr = m; // Point to the first element of the array
printf("Elements of the array: \n");

for (int i = 0; i < 5; i++) {
printf("numbers[%d] = %d \n",i, *ptr); // Print the value at the current pointer location
ptr++; // Increment the pointer to the next element
}

return 0;
}
