#include <stdio.h>
 char* myName() 
{
  return "Flavio";
}
int main()
{
    char *ptr;
   ptr = myName(); 
    printf("%s\n",myName());

    return 0;
}
