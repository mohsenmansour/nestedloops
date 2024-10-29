#include <stdio.h>
#include <string.h>

int main () 
{
   char str[50];

   strcpy(str, "Welcome to Tutorialspoint");
   printf("%s\n",str);
   puts(str);

   memset(str, '#', 7);
   printf("%s\n",str);
   puts(str);
   
   return(0);
}
