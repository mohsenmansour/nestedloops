#include <stdio.h>
#include <stdlib.h>

// function to reverse an array
void reverseArray(int arr[], int n) {
    
    // Temporary array to store elements in reversed order
    int temp[n];
  
    // Copy elements from original array to temp in reverse order
    for(int i = 0; i < n; i++)
        temp[i] = arr[n - i - 1];
  
    // Copy elements back to original array
    for(int i = 0; i < n; i++)
        arr[i] = temp[i];
}
void print_array(int arr[], int n)
{
    int i;

    i = 0;
    while (i < n)
    {
        if (i != 0)
        {
            printf(", ");
        }
        printf("%d", arr[i]);
        i++;
    }
    printf("\n");
}


int main() {
    int arr[] = { 1, 4, 3, 2, 6, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    
     print_array(arr, n);
    reverseArray(arr, n);
    print_array(arr, n);
    
    return 0;
}
