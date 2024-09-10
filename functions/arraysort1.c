#include <stdio.h>
void Sort(int arr[])
{
for (int i = 0; i < 5 - 1; i++)
{
for (int j = 0; j < 5 - i - 1; j++)
{
if (arr[j] > arr[j + 1])
{
int temp = arr[j];
arr[j] = arr[j + 1];
arr[j + 1] = temp;}}}
}
int main(){
int numbers[5] = {5, 2, 8, 12, 1};

printf("Array before sorting: ");
for (int i = 0; i < 5; i++){
printf("%d ", numbers[i]);}

Sort(numbers);
printf("\nArray after sorting: ");
for (int i = 0; i < 5; i++){
printf("%d ", numbers[i]);}
return 0;
}
