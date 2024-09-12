#include <stdio.h>

void printArray(int *arr, size_t size){
for (size_t i = 0; i < size; i++){
printf("%d ", arr[i]);}
}

int main(){
int numbers[] = {1, 2, 3, 4, 5};
printf("Array elements: ");
printArray(numbers, sizeof(numbers) / sizeof(numbers[0]));

return 0;
}
