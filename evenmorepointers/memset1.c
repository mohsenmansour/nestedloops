// C program to demonstrate working of memset()
#include <stdio.h>
#include <string.h>

void printArray(int arr[], int n)
{
   for (int i=0; i<n; i++)
      printf("%d ", arr[i]);
}

int main()
{
    int n = 10;
    int arr[10]= {8,7,6,5,4,3};

    // Fill whole array with 0.
    memset(arr, 0, n*sizeof(arr[0]));
    printf("Array after memset()\n");
    printArray(arr, n);

    return 0;
}