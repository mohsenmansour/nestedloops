#include <stdio.h>
#include <ctype.h>

int main()
{
   char ch = 'H'; // declaring character variable 
   
   // checking whether ch is an uppercase alphabet or not 
   if(isupper(ch))
   {
       printf("%c is Uppercase Letter",ch);
   }
   else
   {
       printf("%c is not Uppercase Letter",ch);
   }
   return 0;
}
