// C program to demonstrate the pass by pointer in Function
#include <stdio.h>
// Function to modify the value passed as pointer to an int
void modifyVal(int* myptr)
{
    // Access and modifying the value pointed by myptr
    *myptr = *myptr + 5;
}

int main()
{
    int x = 5;
    int* k = &x;
     //Passing the pointer ptr to the function
    modifyVal(k);//send to the address of x and change the value of x
                  //from the function
    // printitng the modified value of x
    printf("Modified value of x is: %d\n", x);
    return 0;
}