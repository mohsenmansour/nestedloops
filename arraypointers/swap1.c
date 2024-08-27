#include <stdio.h>

int main() {
    int a = 5, b = 10, temp;

    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Store the value of a in temp
    temp = a;
  
    // Assign the value of b to a
    a = b;

    // Assign the value stored in temp to b
    b = temp;

    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}
