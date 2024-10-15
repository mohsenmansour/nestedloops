/* Online C Compiler and Editor */
#include <stdio.h>
int lolo (int *nb)
{
   *nb=70;
    //return nb;
}
int main()
{
    int nb = 50;
    
    lolo (&nb);
     
    printf("%d\n", nb);

    return 0;
}
