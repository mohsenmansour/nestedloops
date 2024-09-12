#include <stdio.h>

int* generateArray(size_t size){
static int arr[5] = {1000, 2000, 3000, 4000, 5000};
return arr;}

int main(){
int* result = generateArray(5);

printf("Array elements: ");
for (int i = 0; i <= 4; i++){
printf("%d ", result[i]);}

return 0;
}
