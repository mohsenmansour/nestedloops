#include <stdio.h>

void printArray(int *arr) {
int i;
for (i = 0; i <5; i++)
{
printf("%d ", arr[i]);
    
}
printf("\n");}

int main(){
int arr[] = {100, 200, 300, 400, 500};
printArray(arr);

return 0;
}
