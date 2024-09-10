#include <stdio.h>

int main(){
int numbers[5] = {110, 210, 310, 410, 510};
// Print the original array
printf("Original Array: ");
int i;
for (i = 0; i <= 4; i++){
printf("%d ", numbers[i]);}
printf("\n");

// Change the value of an element
numbers[2] = 90;

// Print the modified array

printf("Modified Array: ");
for (i = 0; i <= 4 ; i++){
printf("%d ", numbers[i]);}
printf("\n");

return 0;
}
