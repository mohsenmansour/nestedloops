#include <stdio.h>

int main() {
int numbers[] = {10, 20, 30, 40, 50};

 // Point to the first element of the array
printf("Elements of the array: \n");

for (int i = 0; i < 5; i++) {
printf("numbers[%d] = %d \n",i, numbers[i]); // Print the value at the current pointer location
 // Increment the pointer to the next element
}

return 0;
}
