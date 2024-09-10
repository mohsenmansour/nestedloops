#include <stdio.h>

int main() {
int numbers[5] = {10, 20, 30, 40, 50};

// Loop through the array and perform an operation on each element
for (int i = 0; i < 5; i++){
numbers[i] = *(numbers)+ 1; // Adding 5 to each element
printf("%d ", numbers[i]);
    
}
}
