#include <stdio.h>

void bubbleSort(int arr[], int size){
for (int i = 0; i < size - 1; i++){
for (int j = 0; j < size - i - 1; j++){
if (arr[j] > arr[j + 1]){
// Swap the elements
int temp = arr[j];
arr[j] = arr[j + 1];
arr[j + 1] = temp;}}}
}

int main(){
int numbers[] = {5, 2, 8, 12, 1};
int size = sizeof(numbers) / sizeof(numbers[0]);

// Print the array before sorting
printf("Array before sorting: ");
for (int i = 0; i < size; i++){
printf("%d ", numbers[i]);}

// Sort the array
bubbleSort(numbers, size);

// Print the array after sorting
printf("\nArray after sorting: ");
for (int i = 0; i < size; i++){
printf("%d ", numbers[i]);}

return 0;
}
