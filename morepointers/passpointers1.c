#include <stdio.h>
int lolo (int *f)
{
   *f=70;
    //return nb;
}
int main()
{
    int nb = 50;
    
    lolo (&nb);
     
    printf("%d\n", nb);

    return 0;
}
