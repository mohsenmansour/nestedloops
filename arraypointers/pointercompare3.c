#include <stdio.h>

int main() {
int arr[] = {5, 2, 8, 3};

int* ptr1 = &arr[1]; // Points to the second element (2)
int* ptr2 = &arr[3]; // Points to the fourth element (3)

if (ptr1 < ptr2)
{
printf("The second element comes before the fourth element in the array.\n");
} 
else 
{
printf("The second element does not come before the fourth element in the array.\n");
    
}

return 0;
}
