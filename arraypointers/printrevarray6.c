#include <stdio.h>

int main(){
int numbers[5];

// Assign values to the array at runtime
int i;
for (i = 0; i <= 4; i++)
{
printf("Type the value for the element %d: ", i);
scanf("%d", &numbers[i]);
}

// Access and print the elements2
for (i = 4; i >=0; i--)
{
printf("%d ", numbers[i]);
    
}

return 0;
}
