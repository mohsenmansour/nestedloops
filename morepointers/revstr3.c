#include <stdio.h>
#include <stdlib.h>
void reverseArray(int arr[], int n)
{
    int temp[n];
    int i = 0;
    for(int i = 0; i < n; i++)
        temp[i] = arr[n - i - 1];
    // Copy elements back to original array
    for(int i = 0 ; i < n ; i++)
    {
        arr[i] = temp[i];
    }
        while(i<n)
        if(i!=0)
        {
        printf(",");
        }
        i++;
}
int main() {
    int arr[] = { 1, 4, 3, 2, 6, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);

    reverseArray(arr, n);
  
    for(int i = 0; i < n; i++) 
        printf("%d ", arr[i]);
    return 0;
}
