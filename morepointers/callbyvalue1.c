#include <stdio.h>
void set(int a) 
{
     a =5;
   
    printf("Inside the Function:%d\n", a);
}


int main()
{
    int a = 10;
    printf("before calling: a = %d \n", a);
    
    set(a); 

    printf("after the Calling:  %d\n",  a);

    return 0;
}



