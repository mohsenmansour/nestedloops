#include <stdio.h>
#define SIZE 5

int main(){
int numbers[SIZE];

// Input values into the array
printf("Enter %d integers:\n", SIZE);
for (int i = 0; i < SIZE; i++){
scanf("%d", &numbers[i]);
}

// Output the array elements
printf("The array elements are:\n");
for (int i = 0; i < SIZE; i++){
printf("%d ", numbers[i]);}

return 0;
}
