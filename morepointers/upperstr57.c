#include <stdio.h>
 char *myName() 
{
  return "Flavio";
}
int main()
{
    myName(); 
    printf("%s\n", myName());

    return 0;
}
