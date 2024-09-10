#include <stdio.h>

int main()
{
    for (int i = 0; i < 5; i++) 
    {
      printf("%d\n",i);  
        for(int j = 0; j < 5-i ; i++)
        {
            printf("%d\n",j);
        }
         
    }
    
   

    return 0;
}
