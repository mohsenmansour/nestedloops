#include <stdio.h>
const char* myName()
  {
char *name = "Flavio";
  return name;
}
  
int main(void) 
{
  printf("%s", myName());
}
