#include <stdio.h>
#include <string.h>
int main()
{
  char a[100];

  printf("Enter a string to calculate its length\n");

 scanf("%s",a);



  printf("Length of the string = %ld\n", strlen(a));

  return 0;
}
