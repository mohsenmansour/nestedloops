#include <stdio.h>

int main(){
int numbers[5];

// Assigning values to the array using loop
int i;
for (i = 0; i <= 4; i++){
numbers[i] = (i + 1) * 10;}

// Accessing and printing the elements of the array
for (i = 0; i <= 4; i++){
printf("%d ", numbers[i]);}

return 0;
}
